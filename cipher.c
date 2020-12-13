#include<stdio.h>
int main()
{
    int i,k;
    char m[100];

    printf("Enter a message to encrypt: ");
    gets(m);

     printf("\n\nEnter key: ");
    scanf("%d", &k);

    for (i=0;i<strlen(m);i++){
        m[i]=m[i]+k;

        if(m[i]>122)
        {
            m[i]=m[i]-122+96;
        }
    }

     printf("\n\nThe Encrypted message: ");

    puts(m);

      for (i=0;i<strlen(m);i++){
        m[i]=m[i]-k;
        if(m[i]>122)
        {
            m[i]=m[i]-122+96;
        }
    }

    printf("\n\nThe Message After decrypted: ");
       puts(m);

return 0;
}