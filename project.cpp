#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int ff[26];//�����������
int main()
{
    int i,j,n,maxn=0;char a[81];
    for(i=0;i<4;i++)
    {
        gets(a);//gets����
        n=strlen(a);
        for(j=0;j<n;j++)if(a[j]>='A'&&a[j]<='Z')ff[a[j]-'A']++;//ͳ���ַ����ִ���
    }
    for(i=0;i<26;i++)maxn=max(maxn,ff[i]);//�������������״ͼ��
    for(i=maxn;i>0;i--){
    for(j=0;j<26;j++)
    if(ff[j]>=i)printf("* ");else printf("  ");//ģ�⣬�ǿ�������ľ����*����������
    printf("\n");}//����
    for(i=0;i<26;i++)printf("%c ",i+'A');//���a~z
}
