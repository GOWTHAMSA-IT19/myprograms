#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the starting and ending number");
    scanf("%d %d",&a,&b);
    for(int i=a;i<b;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
