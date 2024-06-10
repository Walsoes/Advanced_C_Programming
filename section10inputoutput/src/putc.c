#include <stdio.h>

int main()
{
    /*   char ch = '\0';

      FILE *fp = NULL;

      if (fp = fopen("/home/walsoe/C/Advanced_C_Programming/section10inputoutput/src/bajs.txt", "rw"))
      {
          ch = getc(fp);

          while (ch != EOF)
          {
              putc(ch, fp);
              ch = getc(fp);
          }
      }

      fclose(fp); */

    char ch = 'd';

    putc(ch, stdout);

    return 0;
}
