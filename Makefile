.PHONY: all debug build release develop test format

BUILD_DIR := build

# brew install pre-commit
setup:
	@pre-commit install

all: _prepare
	@echo "Building release..."
	@cd $(BUILD_DIR) && cmake .. && make

debug: _prepare
	@echo "Building debug..."
	@cd $(BUILD_DIR) && cmake -DCMAKE_BUILD_TYPE=Debug .. && make

build: all
release: all
develop: debug

test: debug
	@echo "Running tests..."
	@(cd $(BUILD_DIR) && ctest --verbose)

format:
	@clang-format -i -style=file lib/**/*.c bin/main.c test/**/*.c

_prepare:
	@mkdir $(BUILD_DIR) || true