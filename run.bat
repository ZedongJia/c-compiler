@echo off

if %1 equ clean (
    if exist bin (
        rmdir /S /q bin
    )
    if exist include\parser.h (
        del /q include\parser.h
    )
    if exist src\flex.c (
        del /q src\flex.c
    )
    if exist src\parser.c (
        del /q src\parser.c
    )
) else if %1 equ build (
    if exist bin\c.exe (
        del /q bin\c.exe
    )
    if exist include\parser.h (
        del /q include\parser.h
    )
    if exist src\flex.c (
        del /q src\flex.c
    )
    if exist src\parser.c (
        del /q src\parser.c
    )
    if not exist bin (
        mkdir bin
    )
    flex -osrc/flex.c src/lex.l
    bison -d --defines=include/parser.h -o src/parser.c src/parser.y
    gcc -fexec-charset=gbk -o bin/c src/main.c -I include src/flex.c src/node.c src/parser.c src/foutput.c src/symbolTable.c
) else if %1 equ test (
    cd bin
    c ..\tests\test.c
    cd ..
)
