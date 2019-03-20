#include<iostream>
#include<cstdio>
using namespace std;//atbash cipher does not require key
int main()//If you encrypt data two times you will get original message
{
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("text.txt","r+");
    fp2=fopen("file2.txt","w+");
    cout<<"ATBASH cipher does not require any key"<<endl;
    cout<<"Your file is ready";
while(feof(fp1)==0)
{
    ch=fgetc(fp1);
    if(!feof(fp1))
    {
     if(ch>96 &&ch<123)
     {
         ch=(122-ch)+97;
     }
     if(ch>64 && ch<91)
     {
         ch=(97-ch)+65;
     }
     fputc(ch,fp2);
    }
}
fclose(fp1);
fclose(fp2);

return 0;
}
