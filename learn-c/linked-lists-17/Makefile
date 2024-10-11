.PHONY: build run build-content run-build

build:
	@rm -rf dist
	@mkdir dist
	@gcc -o dist/main src/main.c

run: build
	@chmod +x dist/main
	@./dist/main

build-content:
	@rm -rf build
	@mkdir build
	@gcc -o build/main content/main.c

run-content: build-content
	@chmod +x build/main
	@./build/main
