- **Convert string to integer:** stoi(string);
- **Convert integer to string:** to_string(integer);
- **Check if space is present in string:** isspace();
- **Check if string contains alphabet:** isalpha(char);
- **Remove duplicates from vector**: ans.erase(unique ( ans.begin(), ans.end() ), ans.end() ); For more methods check [Techie Delight's article](https://www.techiedelight.com/remove-duplicates-vector-cpp/)
- **Convert decimal to binary number** : ``#include<stdio.h>

                                            void main()
                                            {
                                              unsigned int num;
                                              int i;
                                              scanf("%u", &num);
                                              for (i = 0; i < 16; i++)
                                              printf("%d", (num << i & 1 << 15)? 1:0);
                                             }``
