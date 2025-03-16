# Running This Challenge

**NOTE**: You shouldn't need to rebuild the binaries, unless you want to introduce some changes.

## Docker

Build
```
docker build -t athack-ctf/chall2025-cwe-120:latest .
```

Run
```
docker run -d --name cwe-120 \
  -p 52025:2025 \
  athack-ctf/chall2025-cwe-120:latest
```

Test connection (if running remotely, replace 127.0.0.1 with the container's ip)
```
nc 127.0.0.1 52025
```

## Building binaries

Below instructions will build 2 binaries: `login` (for the binary running on the server, and containing the real flag) and `login-using-dummy-password` (to be distributed
as an offline artifact).

```
mkdir build
cd build
cmake ..
make
```
