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
  int is_alpha;
  int is_upper;
  int is_digit;
  int is_dollar;

  printf ("Enter your pw\n");
  scanf ("%s", str);

  len =	strlen(str);

  for (a = 0; a	< len; a++)
    {

      if (isupper(str[a])) {
	is_upper = 1;
      }

      if (isalpha(str[a])) {
	is_alpha = 1;
      }
      if (isdigit(str[a])) {
	is_digit = 1;
      }
      if (str[a] == '$') {
	is_dollar = 1;
      }
    }

    if (is_alpha == 1 && is_digit == 1 && is_upper == 1 && is_dollar == 1) {
    printf ("Strong password\n");
    } else {
      printf ("Your password is weak\n");
    }

  return 0;
}


