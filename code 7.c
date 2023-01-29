#include<stdio.h>
void main()
{
    char s[100];
    int len,i,flag=0;
    printf("enter a word:"):   //user input string
    gets(s);
    len = strlrn(s);       //number of char in a string
    for(i=0;i<=len/2;i++)  //loop till half of the string
    {
        if(s[i]!=s[len-i-1])  //to compare if corrresponding charecters are same
        {
            flag=1;
            break;
        }
    }
    if(falg==1)
    {
        printf("given word is not a  palindrome");
    }
    else
    {
        printf("given word is a palindrome");
    }
}