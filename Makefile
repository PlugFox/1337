.PHONY: all debug build release develop test format

BUILD_DIR := build

# brew install pre-commit
setup:
	@pre-commit install

all: _prepare
	@echo "Building release..."
	@cd $(BUILD_DIR) && cmake -G "Ninja" .. && ninja

debug: _prepare
	@echo "Building debug..."
	@cd $(BUILD_DIR) && cmake -G "Ninja" -DCMAKE_BUILD_TYPE=Debug .. && ninja

build: all
release: all
develop: debug

test: debug
	@echo "Running tests..."
	@(cd $(BUILD_DIR) && ctest --verbose)

format:
	@clang-format -i -style=file bin/*.c
	@clang-format -i -style=file lib/src/*.c
	@clang-format -i -style=file lib/include/*.h
	@clang-format -i -style=file test/*.c


_prepare:
	@mkdir $(BUILD_DIR) || true