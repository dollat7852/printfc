#include "main.h"                                                                                                                       
#include <string.h>                                                                                                                     
                                                                                                                                        
/**                                                                                                                                     
 * cap_string - capitalize the first letter of every word                                                                               
 * @s: arg 1                                                                                                                            
 * Return: 0                                                                                                                            
 *                                                                                                                                      
 */                                                                                                                                     
char *cap_string(char *s)
{  int len = strlen(s);                                                                                                            
        int i, j;                                                                                                                       
        char delim[] = ", ;\"(){}!\t\n.";                                                                                               
	int len2 = strlen(delim);
                                                                                                                                        
        for (i = 0; i < len - 1; i++)                                                                                                   
        {                                                                                                                               
                for (j = 0; j < len2; j++)                                                                                              
                {                                                                                                                       
                        if (s[i] == delim[j])                                                                                           
                        {                                                                                                               
                                if (s[i + 1] >= 'a' && s[i + 1] <= 'z')                                                                 
                                        s[i + 1] = s[i + 1] - 32;                                                                       
                                else if (s[i + 2] >= 'a' && s[i + 2] <= 'z')                                                            
                                        s[i + 2] = s[i + 2] - 32;                                                                       
                        }                                                                                                               
                }                                                                                                                       
        }                                                                                                                               
        return (s);                                                                                                                     
}        
