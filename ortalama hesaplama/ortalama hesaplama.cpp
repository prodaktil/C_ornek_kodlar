/* ilk program */
#include <stdio.h>
int main (void)
{
  int kar;
  if ((kar=getchar())!='\n')
    main();
  putchar(kar);
  return 0;
}
