.PHONY: build run

build:
	@rm -rf dist
	@mkdir dist
	@gcc -o dist/main src/main.c

run: build
	@chmod +x dist/main
	@./dist/main