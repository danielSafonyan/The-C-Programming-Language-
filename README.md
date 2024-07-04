For Mac users.

You don't need any IDE for C Programming, but you need a compiler. 

First, check if you have a compiler: open your terminal and type `gcc -v`.

If you dont have gcc, google `gcc`, download and install it.

Now create a new file, name it `hello.c`, and paste the following code.

```
#include <stdio.h>

int main(void) {
   printf("Hello, World!\n");
   return 0;
}
```

Save the file.

Open terminal, make sure your current directory is folder with the `hello.c` file and run the command `gcc -o hello hello.c`; this will compile your code and create a `hello` execution file.

Syntax is the following: `gcc -o` `<future program name>` `<source code file>.c`

In terminal run the command `./hello`, this will run you programm.

Good Luck.