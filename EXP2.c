#include<stdlib.h>
#include<string.h>
main()
{
char str[15], str1[15],p[15],c;
int i,len,skey,d,cnt,j,X,Y;
printf("\n Enter a Word:");
gets(str);
printf("\n Enter Key Integer(give within[2..8]:");
scanf("%d",&skey);
len=strlen(str);
printf("\n CIPHERED the Given Word....\t\t");
for(i=0;i<len;i++)
{
d=str[i];
d*=skey;
c=toascii(d);
printf("%c",c);
p[i]=c;
}
printf("\n\nDECIPHERED the CRYPT Word.....\t\t");
for(i=0;i<len;i++)
{
d=str[i];
X=p[i];Y=str[i];
cnt=X/Y;
for(j=1;j<cnt;j++)
d-=skey;
c=toascii(d);
printf("%c",c);
}
printf("\n");
getch();
}
