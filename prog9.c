#include <stdio.h>
int main()
{
   char str[20];
   gets(str);
   for(int i=0;i<14;i++)
   {
      printf("%c address is %p \n",str[i],&str[i]);
   }
   return 0;
}
