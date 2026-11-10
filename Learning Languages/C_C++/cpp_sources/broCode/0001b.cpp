/*
        ║  Import C++ header file "iostream"
        ║  Standard libraries are included with most compilers
        ▼   */
#include <iostream>

// This is a single-line comment.



// TO RUN THIS CODE USING Code Runner VSCode extension, type:
/*
  CTRL + ALT + N
*/



/*
    This is a
    multi-line comment

    Both single and multi-line comments are ignored
    by compiler.

    These are generally used as notes for Yourself
    and other co-workers or developers.

*/

// Main Function
// Write main function (Mandatory in every C/C++ program. This is what the compiler look for)
int main() // ◄══ Main function
{ // ◄══ Start of Main function

    // ◄══ This is a single-line comment (Double slash) ignored by compiler

    // ╔══ Start of multi-line comment (Slash star)
    // ▼
      /*
                              ──┐
        This is the main        │
        part where the          │ ◄══ This is a multi-line comment ignored by compiler
        Code will run           │
                              ──┘
      */
    // ▲
    // ╚══ End of multi-line comment (Star slash)

    // Print "Hello World!" to the terminal(console) output [Standard Output]
    std::cout << "Hello World!" << std::endl; // ◄══ Semicolon (;) is an unavoidable part
    //                                   ▲
    //                                   ║
    //                This std::endl adds new line and clears output buffer.
    //                It moves the text cursor to the next line.


    std::cout << "This is your first C++ Program" << std::endl;

    /*
      ║  Return exit code 0 if the upper instructions ran successfully.
      ║  Exit code 0 means, the program exited with no errors.
      ▼  */
    return 0; // The end of program. Here '0' means that the program ended succesfully.
    //      ▲
    //      ╚══ Always need to remember Semicolons (;) at the end of each statements

} // End of Main Function
