# KVP_STORAGE
📌 # Introduction

This is a simple key-value storage application implemented in C++. It allows users to persistently store, retrieve, and delete key-value pairs via a command-line interface. The application is designed to run on Desktop Linux (Ubuntu) and can be packaged for Embedded Linux using Buildroot.

🚀 Features

Persistent Storage: Saves key-value pairs to a file (storage.txt).

Command-line Interface: Accepts SET, GET, and DELETE commands.

C++ Implementation: Uses std::unordered_map for fast lookups.

Portable Code: Runs on both Desktop Linux and Embedded Linux (ARM).

Buildroot Integration: Can be packaged as an embedded Linux application.


🛠️ # Setup Instructions

1️⃣ Prerequisites

Ensure you have the following installed on Ubuntu:

build-essential → Installs gcc, g++, make, and other essential tools.

cmake → Required for building the project.

git → Used for version control.

2️⃣ Clone the Repository

3️⃣ Build the Application

4️⃣ Run the Application

🎯 # Usage

Basic Commands

| Command             | Description                    |
| :----------------   | :-----------------------------:|
| SET <key> <value>   |   Stores a key-value pair      | 
| GET <key>           |   Retrieves the value of a key |
| DELETE <key>        |  Removes a key from storage    |


🔬 # Running Tests

A unit test file (test/test_kvp_storage.cpp) is included. To compile and run tests:


📦 # Embedded Linux (Buildroot Integration)

1️⃣ Prepare Buildroot

Download and extract Buildroot:

2️⃣ Add KVPStorage Package

Create a package directory:

Create a Config.in file:

Create a kvp_storage.mk file:

3️⃣ Build & Run in QEMU





