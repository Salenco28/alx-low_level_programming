#include "main.h"
#include <unistd.h>                                                                                                                     
                                                                                                                                        
/**                                                                                                                                     
 * _putchar - This writes the char c to stdout                                                                                          
 * @c: The char to be printed
 *                                                                                                                                      
 * Return: 1 on success
 * return -1 on error, and set errno appropriately.
 */                                                                                                                                     
int _putchar(char c)                                                                                                                    
{                                                                                                                                       
        return (write(1, &c, 1));                                                                                                       
}
