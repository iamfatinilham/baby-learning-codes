
// program0000.c: Hello World! (First Program) ◄══ This is just a user comment

/*
        ║  Import C standard library header file "stdio.h"(Standard Input Output)
        ║  Standard libraries are included with most compilers
        ▼   */
#include<stdio.h>


// Write main function (Mandatory in every C program. This is what the compiler look for)
int main() // ◄══ Main function
{ // ◄══ Start of Main function

    // ◄══ This is a single-line comment (Double slash) ignored by compiler
    
      /* ◄══ Start of multi-line comment (Slash star)
                              ──┐
        This is the main        │
        part where the          │ ◄══ This is a multi-line comment ignored by compiler
        Code will run           │
                              ──┘
      */
    // ▲
    // ╚══ End of multi-line comment (Star slash)
    
    
    // Print "Hello World!" to the terminal(console) output [Standard Output]
    printf("Hello World!\n"); // ◄══ Semicolon (;) is an unavoidable part
    //                   ▲
    //                   ║
    //                This (\n) is an backslash escape sequence.
    //                Which moves the text cursor to the next line.

    /*
      ║  Return exit code 0 if the upper instructions ran successfully.
      ║  Exit code 0 means, the program exited with no errors.
      ▼  */
    return 0; // ◄══ Always need to remember Semicolons (;)

} // ◄══ End of Main function
