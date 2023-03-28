## Setup environment

If you have a problem with header imports in your IDE, you can try to one-time build with `make`.

### Windows

```bash
choco install -y make cmake ninja llvm mingw
```

### macOS

```bash
brew install make cmake ninja llvm pre-commit clang-format
```

### Linux

```bash
sudo apt-get -y install make cmake ninja-build llvm
```

## Build

```bash
make release
```

or

```bash
make debug
```

## Test

```bash
make test
```
