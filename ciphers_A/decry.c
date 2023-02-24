
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int k,i;
    char str[200],p;

    printf("Enter a message to decrypt: ");
    gets(str);
    printf("Enter the key: ");
    scanf("%d",&k);

    for(i=0; i < tolower(strlen(str)); i++)
    {
        if(tolower(str[i])>=tolower('A') && tolower(str[i])<=tolower('Z'))
        {
            p = tolower(str[i])- tolower('A');
            if( p - k >= 0) p = (p - k)%26;
            else p = (p - k) % 26+26; //Avoid negative mod.
            printf("%c",p + tolower('A'));
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            p=str[i] - 'a';
            if(p - k >= 0) p = (p - k) % 26;
            else p = (p - k)%26+26;
            printf("%c",p + 'a');
        }
        else
            printf ("%c",tolower(str[i]));
    }
    return 0;
}