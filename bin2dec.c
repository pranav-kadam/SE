//Binary to equivalent decimal number


#include<stdio.h>
#include<string.h>
int main()
{
int bin2int(char[]);
char p[15];
int res;
printf("Enter String\n");
scanf("%s",p);
res=bin2int(p);
if (res==-1)
printf("Invalid String\n");
else
printf("Decimal No: %d\n",res);
return 0;
}
int bin2int(char k[]){
    int i=strlen(k)-1,val,mf=1,no=0;
    while(i>=0)
    {
        if(k[i]=='0'|| k[i]=='1')
        {
            val=k[i]-48;
            no=no+mf*val;
        }
        else
        break;
        i--;
        mf*=2;
    }
    if(i==-1)
    return no;
    else
    return -1;
}