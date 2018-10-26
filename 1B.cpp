#include<bits/stdc++.h>
using namespace std;
int m26[6]={1,26,676,17576,456976,11881376};
char ap[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char str[100010];
int main(void)
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(str);
        int len=strlen(str);
        if(str[0]=='R')                         
        {
            if(str[1]>='0'&&str[1]<='9')
            {
                int i=1,num1=0,num2=0;
                while(str[i]!='C'&&i!=len)         
                {
                    num1=num1*10+str[i]-'0';
                    i++;
                }
                if(i==len)                            
                {
                    printf("R%dC18\n",num1);
                    continue;
                }
                i++;
                while(i!=len)                          
                {
                    num2=num2*10+str[i]-'0';
                    i++;
                }
                if(num2<=26)
                {
                    printf("%c",ap[num2-1]);
                }
                else if(num2<=26+26*26)
                {
                    int k=(num2)/26;
                    while(num2-k*26<=0)
                        k--;
                    num2-=k*26;
                    printf("%c",ap[k-1]);
                    printf("%c",ap[num2-1]);
                }
                else if(num2<=26+26*26+26*26*26)
                {
                    int k=(num2)/(26*26);
                    while(num2-k*26*26<26+1)
                        k--;
                    printf("%c",ap[k-1]);
                    num2-=k*26*26;
                    k=(num2)/26;
                    while(num2-k*26<=0)
                        k--;
                    num2-=k*26;
                    printf("%c",ap[k-1]);
                    printf("%c",ap[num2-1]);
                }
                else if(num2<=26+26*26+26*26*26+26*26*26*26)
                {
                    int k=(num2)/(26*26*26);
                    while(num2-k*26*26*26<26*26+26+1)
                        k--;
                    printf("%c",ap[k-1]);
                    num2-=k*26*26*26;
                    k=(num2)/(26*26);
                    while(num2-k*26*26<26+1)
                        k--;
                    printf("%c",ap[k-1]);
                    num2-=k*26*26;
                    k=(num2)/26;
                    while(num2-k*26<=0)
                        k--;
                    num2-=k*26;
                    printf("%c",ap[k-1]);
                    printf("%c",ap[num2-1]);
                }
                else if(num2<=26+26*26+26*26*26+26*26*26*26+26*26*26*26*26)
                {
                    int k=num2/(26*26*26*26);
                    while(num2-k*26*26*26*26<26*26*26+26*26+26+1)
                        k--;
                    num2-=k*26*26*26*26;
                    printf("%c",ap[k-1]);
                    k=(num2)/(26*26*26);
                    while(num2-k*26*26*26<26*26+26+1)
                        k--;
                    printf("%c",ap[k-1]);
                    num2-=k*26*26*26;
                    k=(num2)/(26*26);
                    while(num2-k*26*26<26+1)
                        k--;
                    printf("%c",ap[k-1]);
                    num2-=k*26*26;
                    k=(num2)/26;
                    while(num2-k*26<=0)
                        k--;
                    num2-=k*26;
                    printf("%c",ap[k-1]);
                    printf("%c",ap[num2-1]);
 
                }
                printf("%d\n",num1);
            }
            else
            {
                int bite=0,num1=0,num2=0;
                while(1)
                {
                    if(str[bite+1]>='0'&&str[bite+1]<='9')
                        break;
                    bite++;
                }
                if(bite+1==1)
                    num1=str[0]-'A'+1;
                else if(bite+1==2)
                {
                    num1+=(str[0]-'A'+1)*26;
                    num1+=str[1]-'A'+1;
                }
                else if(bite+1==3)
                {
                    num1+=(str[0]-'A'+1)*26*26;
                    num1+=(str[1]-'A'+1)*26;
                    num1+=str[2]-'A'+1;
                }
                else if(bite+1==4)
                {
                    num1+=(str[0]-'A'+1)*26*26*26;
                    num1+=(str[1]-'A'+1)*26*26;
                    num1+=(str[2]-'A'+1)*26;
                    num1+=str[3]-'A'+1;
                }
                else if(bite+1==5)
                {
                    num1+=(str[0]-'A'+1)*26*26*26*26;
                    num1+=(str[1]-'A'+1)*26*26*26;
                    num1+=(str[2]-'A'+1)*26*26;
                    num1+=(str[3]-'A'+1)*26;
                    num1+=(str[4]-'A'+1);
                }
                while(bite+1!=len)
                {
                    num2=num2*10+str[bite+1]-'0';
                    bite++;
                }
                printf("R%dC%d\n",num2,num1);
            }
        }
        else                                      
        {
            int bite=0,num1=0,num2=0;
            while(1)
            {
                if(str[bite+1]>='0'&&str[bite+1]<='9')
                    break;
                bite++;
            }
            if(bite+1==1)
                num1=str[0]-'A'+1;
            else if(bite+1==2)
            {
                num1+=(str[0]-'A'+1)*26;
                num1+=str[1]-'A'+1;
            }
            else if(bite+1==3)
            {
                num1+=(str[0]-'A'+1)*26*26;
                num1+=(str[1]-'A'+1)*26;
                num1+=str[2]-'A'+1;
            }
            else if(bite+1==4)
            {
                num1+=(str[0]-'A'+1)*26*26*26;
                num1+=(str[1]-'A'+1)*26*26;
                num1+=(str[2]-'A'+1)*26;
                num1+=str[3]-'A'+1;
            }
            else if(bite+1==5)
            {
                num1+=(str[0]-'A'+1)*26*26*26*26;
                num1+=(str[1]-'A'+1)*26*26*26;
                num1+=(str[2]-'A'+1)*26*26;
                num1+=(str[3]-'A'+1)*26;
                num1+=(str[4]-'A'+1);
            }
            while(bite+1!=len)
            {
                num2=num2*10+str[bite+1]-'0';
                bite++;
            }
            printf("R%dC%d\n",num2,num1);
        }
    }
    return 0;
}

