#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  
  char str[10];
  int a;
  int len = 0;


  printf ("Enter your pw\n");
  scanf ("%s", str);
  
  len = strlen(str);

  for (a = 0; a < len; a++)
    {
 
      if (isalpha(str[a])) 
	{
	  printf ("%c is an alpha\n", str[a]);
    }
      if (isdigit(str[a]))
	{
          printf ("%c is a digit\n", str[a]);
	}   
      if (isupper(str[a]))
        {
          printf ("%c is an uppercase letter\n", str[a]);
        }
      if (str[a] == '$')
        {
          printf ("%c is a dollar sign\n", str[a]);
        }
      }
    
  return 0;
}
 
 























  
 











  



