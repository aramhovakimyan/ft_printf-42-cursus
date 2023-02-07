# ft_printf-42-cursus 

This is my implementation of the **printf** function from the standard library of the C programming language, as part of the 42 cursus.

**Mandatory Parts**
Handle conversions: c, s, p, d, i, u, x, X:
    • **%c** Prints a single character.
    • **%s** Prints a string (as defined by the common C convention).
    • **%p** The void * pointer argument has to be printed in hexadecimal format.
    • **%d** Prints a decimal (base 10) number.
    • **%i** Prints an integer in base 10.
    • **%u** Prints an unsigned decimal (base 10) number.
    • **%x** Prints a number in hexadecimal (base 16) lowercase format.
    • **%X** Prints a number in hexadecimal (base 16) uppercase format.
    •  **%%** Prints a percent sign.
      
**Bonus Parts**
In addition to the mandatory parts, I have also implemented the space, #, + flags.

**How to Use**
To use the ft_printf function in your own project, simply include the header file **"ft_printf.h"** and compile the source files **"*.c"** along with your own project. The function can be used in the same way as the standard printf function.
Example:
```
#include "ft_printf.h"
int main()
{
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```
 **Conclusion**
I hope you find my implementation of the **ft_printf** function to be useful. If you have any questions or comments, feel free to reach out to me.

