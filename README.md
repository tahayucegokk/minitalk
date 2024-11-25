# Minitalk

This project demonstrates how to send a message from a client to a server using Unix signals (`SIGUSR1` and `SIGUSR2`). The client encodes the message into bits and sends each bit as a signal to the server, which then reconstructs and prints the original message.

## Overview

- **Client**: The client encodes each character of the message into a sequence of bits. It then sends each bit as a signal (`SIGUSR1` for `1` and `SIGUSR2` for `0`) to the server.
- **Server**: The server listens for these signals, decodes the bits back into characters, and prints the reconstructed message to the terminal.

This approach uses inter-process communication (IPC) based on Unix signals, demonstrating how signals can be employed for data transfer between processes. The server continuously waits for incoming signals, while the client sends data encoded in binary form.

## Usage

### Client

The client program sends a message to the server by invoking the following command:

    ./client <pid> <message> 

### Server

The server program listens for incoming signals and reconstructs the message from the received bits. You need to start the server first so that the client can send data to it.

To run the server:

    ./server
