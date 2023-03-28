## Setup environment

If you have a problem with header imports in your IDE, you can try to one-time build with `make`.

### Windows

```powershell
choco install make cmake ninja llvm mingw
```

### macOS

```zsh
brew install make cmake ninja llvm
```

### Linux

```bash
sudo apt-get install make cmake ninja-build llvm
```

## Build

```bash
make
```

## Test

```bash
make test
```
