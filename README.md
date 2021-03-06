# `morphic` C++ Lab

`this repository is currently under construction`

This repository contains demonstrations of various types and combinations of morphic code. Here, the term morphic refers to the structure of the code itself, meaning each program is capable of mutating parts of itself and/or its children. Here are the working definitions of each of the types of morphism used;

- [polymorphism](https://en.wikipedia.org/wiki/Polymorphic_code) - a program which can change its structure while maintaining its function
- [metamorphism](https://en.wikipedia.org/wiki/Metamorphic_code) - a program which outputs a functional copy of itself with a different structure
- [pleomorphism](https://en.wikipedia.org/wiki/Pleomorphism_(microbiology)) - a program which can change its structure in response to its environment

![image](https://github.com/ojscholten/poly/blob/main/polymorphic_engine.png)

In practice, each of the types of morphism above equate to relatively simple implementations. First, polymorphism can be achieved through the use of a polymorphism engine - a construct which acts to generate unique encryption and decryption functions which it then applies to a program. Simply encrypting a program does not make it polymorphic, but creating many [unique decryptors](https://www.youtube.com/watch?v=Jsohdah8ZCg&t=175s) for it and prepending them does. The term 'unique' when describing decryptors can mean applying obfuscation techniques used in metamorphism.

![image](https://github.com/ojscholten/poly/blob/main/metamorphic_engine.png)

Metamorphism, as [You and Yim describe](https://profsandhu.com/cs5323_s18/yk_2010.pdf), makes use of obfuscation techniques to evolve a program into new generations. Practically speaking, this means implementing a number of obfuscation techniques including `dead-code insertion`, `register reassignment`, `subroutine reordering`, `instruction substitution`, `code transposition`, and `code integration`. The final technique requires a 'host' program into which the metamorphic program will be integrated, so a very simple host program is provided.

![image](https://github.com/ojscholten/poly/blob/main/pleomorphic_program.png)

Programmatic pleomorphism is a little harder to implement, as it requires dynamic manipulation of an executing program in response to tests which probe its environment. It's important to note that in this repository, a simple branch such as 'if OS is Unix, do x, else do y' is not considered pleomorphism. However, a program which does the same check but instead directly manipulates its own code during runtime can be described as being pleomorphic.

## Levels of Morphism
Each of the types of morphism above can happen at different stages of a program's life cycle. For example, a program may be source-code metamorphic, or binary metamorphic. The first requires reading in the source code of the original program, modifying it, and recompiling it in place of the original. The second requires runtime modification of the compiled program itself (and is much more technically involved). This repository focuses on source-code morphism (for now), but will branch out into runtime morphism once all of the basics have been implemented.

## Quantifying Morphism
In order to prove that the programs in this repository are actually morphic, several metrics can be used. The most obvious is comparing the hash of output programs. Two structurally different programs should have different hashes, but this doesn't go far enough for anything other than very basic morphism.

A more specific way to judge morphism is to apply opcode ngram analysis under the assumption that the more different the opcode ngram frequencies between any two programs are, the more morphically distant they are. The [`pysan`](https://pysan.org) library is used to run these analyses and plot opcode frequencies. All analysis code is written in Python and is avaliable in the `analysis.ipynb` file.

## Program Files
- `polymorph.cpp` - a polymorphic engine
- `metamorph.cpp` - a metamorphic engine
- `pleomorph.cpp` - an example pleomorphic program
- `host.cpp` - an example program used by the *code integration* capabilities in `metamorph.cpp`
- `lab.cpp` - testing and management program
- `analysis.ipynb` - morphism analysis using [`pysan`](https://pysan.org)

## Execution
To run each of the programs in this repository, you just need to clone the repository, compile each of the programs with the following syntax;

`gcc program.cpp -lstdc++ -o program`

Which will compile the C++ code into a program called `program`, which can be executed using `./program`

Good luck! :)

## Links, Tips, & Resources

- [Size is Everything](https://www.muppetlabs.com/~breadbox/software/tiny/teensy.html)
- get the assembly code of a program using the `gcc` compiler with `-S`
- calling [`strip`](https://man7.org/linux/man-pages/man1/strip.1.html) on files removes extra bits (*pro tip, type `man strip` in terminal, not google)