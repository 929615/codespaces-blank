#include<stdio.h>
int Count(char str[100])
{
	int i;
    for(i=0;str!='\0';i++); 
	return i;
}
   int main()
   {
   	char str[100];
   	int length;
   	printf("input the string:"); 
   	gets(str);
   	length=Count(str);
    printf("The length of string is %d!\n",length);
   return 0;
   }
