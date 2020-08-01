## Without STL 
- **To convert an uppercase into lowercase** : if (str[i] >= 'A' && str[i] <= 'Z') 
                                                { str[i]+=32; }
- [**Alphabets to ASCII Code Table**](https://www.easycalculation.com/unit-conversion/alphabets-ascii-code.php) : A-Z(65-90) and a-z (97-122);
- **Ways to read string with spaces in C**:

1. Using fgets()

      
      fgets() function requires three parameters

     *  **char** ***s** - character pointer (in which string will be stored)

     * **int n** - maximum number of character of the string

     * **FILE** ***stream** – a pointer of file stream, we can use “stdin”

      fgets() will reads the complete string with spaces and also add a new line character after the string input.
