.PHONY: build run

build:
	@rm -rf dist
	@mkdir dist
	@gcc -o dist/hello-world src/main.c

run: build
	@chmod +x dist/hello-world
	@./dist/hello-world