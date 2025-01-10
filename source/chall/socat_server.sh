#!/bin/bash

PORT=2025
BIN_PATH="./login"

while true; do
    socat TCP-LISTEN:$PORT,reuseaddr EXEC:$BIN_PATH,pty
    sleep 1
done


