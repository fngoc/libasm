# libasm

## Description

A library written in Assembly language that repeats some of the functions of the standard C library.

Compiling the ``.s`` files was with the flags: ``nasm -f macho64``.

Compiling the ``.c`` files was with the flags: ``gcc -Wall -Wextra -Werror``.

The ``.c`` files pass to ``Norminette``.

## Using

``make`` и ``make all`` build the library, or recompile the modified file, also recompiling the library.

``make bonus`` collects a library with bonuses.

``make re`` deletes all ``.o`` files, deletes ``libasm.a``, rebuilds the library.

``make clean`` deletes all ``.o`` files.

``make fclean`` deletes all ``.o`` files, also deletes ``libasm.a``.

## my_test

According to the task, function testers should go along with the project. Just compile ``main.c`` and ``main_bonus.c``.
