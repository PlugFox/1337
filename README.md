## Setup environment

If you have a problem with header imports in your IDE, you can try to one-time build with `make`.

### Windows

```bash
choco install -y make cmake ninja llvm mingw
```

### macOS

```bash
brew install -y make cmake ninja llvm
```

### Linux

```bash
sudo apt-get -y install make cmake ninja-build llvm
```

## Build

```bash
make
```

## Test

```bash
make test
```
