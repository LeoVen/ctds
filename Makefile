CC=gcc
T_NAME=test
T_DIR=tests
T_MAIN=main.c
T_INCLUDE=.
OUT=build

.PHONY: setup

setup:
	mkdir -p build

dev: setup

run: setup

test: test_build
	$(OUT)/$(T_NAME)

bench: setup

test_build: setup
	$(CC) $(T_DIR)/$(T_MAIN) -o $(OUT)/$(T_NAME) -I$(T_INCLUDE)

