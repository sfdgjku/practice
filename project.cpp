#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int letter[26];//定义计数数组
int main()
{
    int i,j,n,maxn=0;char a[81];
    for(i=0;i<4;i++)
    {
        gets(a);
        n=strlen(a);
        for(j=0;j<n;j++)if(a[j]>='A'&&a[j]<='Z')letter[a[j]-'A']++;//统计字符出现次数
    }
    for(i=0;i<26;i++)maxn=max(maxn,letter[i]);//统计最多的次数
    for(i=maxn;i>0;i--){
    for(j=0;j<26;j++)
    if(letter[j]>=i)printf("* ");else printf("  ");//输出*
    printf("\n");}
    for(i=0;i<26;i++)printf("%c ",i+'A');//输出a~z
}
