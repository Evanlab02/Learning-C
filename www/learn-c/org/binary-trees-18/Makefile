.PHONY: build run build-content run-build

build:
	@rm -rf dist
	@mkdir dist
	@gcc -o dist/main src/main.c

run: build
	@chmod +x dist/main
	@./dist/main

