#include <stdio.h>
#include <string.h>

int main(void)
{
   void output(int array[], int status[], int x, int left);
   int array[100], status[100], i, n, x, y, left;

   (void) scanf("%d", &n);

   for (i = 0; i < n; i++)
   {
      memset(array, 0, sizeof(array));
      memset(status, 0, sizeof(status));

      (void) scanf("%d", &x);
      left = x;

      for (y = 0; y < x; y++) (void) scanf("%d", &array[y]);

      output(array, status, x, left);
   }

   return 0;
}

void output(int array[], int status[], int x, int left)
{
   int count;

   if  (left == 0)
   {
      printf("-->");
      for (count = 0; count < x; count++) if (status[count]) printf(" %d", array[count]);
      printf("\n");
      return ;
   }

   status[x-left] = 1;
   output(array, status, x, left - 1);
   status[x-left] = 0;
   output(array, status, x, left - 1);

   return ;
}
