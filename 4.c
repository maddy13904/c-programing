#include <stdio.h>
#include <string.h>
 int main()
{char c[100], result;
int i, len;
int max = -1;
int freq[256] = {0}; 
printf("\n Please Enter any String :  ");
scanf("%s",c);
len = strlen(c);
for(i = 0; i < len; i++)
{
freq[c[i]]++;
}
for(i = 0; i < len; i++)
{
if(max < freq[c[i]])
{
max = freq[c[i]];
result = c[i];
}
}
printf("\n The Maximum Occurring Character in a Given String = %c ", result);
return 0;
}
