# eoswdt
this is test project
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    printf("number: ");
    n = GetInt();
   
     for (int i = 0; i <= 10; i++)
     {
          float f = i * n;
          printf("%f\n", f);
     }
}
