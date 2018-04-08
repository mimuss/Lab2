#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
	int len = strlen(str);
       for(int i = 0, j = len - 1; i < j; i++, j--) {
               char t = str[i];
               str[i] = str[j];
               str[j] = t;
      }
}

