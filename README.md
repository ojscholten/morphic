# poly

[Polymorphism](https://en.wikipedia.org/wiki/Polymorphic_code) refers to the ability of a program to change its structure whilst maintaining its function.
This can be achieved through the use of a polymorphism engine - a construct within the program which acts to generate unique encryption and decryption functions which it then applies to a copy of itself.

This project judges the polymorphic variation of the code by its ability to generate unique hashes in its replicated state.
The goal is therefore to create a code which when compiled and executed creates another program which is capable of doing the same, but whos hash is unique to the first, and as many others as possible.


## Useful Resources
- Ben Dechrai discusses payload encryption (polymorphism) in his [talk about virus construction](https://www.youtube.com/watch?v=2Ra1CCG8Guo)
- [Wong and Stamp's 2006 study on metamorphic engines](https://link.springer.com/content/pdf/10.1007/s11416-006-0028-7.pdf)