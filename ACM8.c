#include <stdio.h>

#define Size 300 //������
#define Sur 1 //�Ҵ�����

void Print(int sum, int num)//num��������
{
	int i,j,k;//k������������
	int N[Size];
	for(i=0; i<sum; i++)
	{
		N[i] = i+1;
	}
	i=1;
	k=0;
	for(j=0; k<(sum-Sur); j=++j%sum)
	{
		if(N[j]!=0)
		{
			if(i==num)
			{
				k++;
				N[j] = 0;
				i = 1;
			}
			else
				i++;
		}
	}
	for(i=0; i<sum; i++)
	{
		if(N[i]!=0)
			printf("%d\n",N[i]);
	}
}


int main()
{
	int m[10000],n[10000];
	int cnt=0,i=0;
	while(1)
	{
		scanf("%d%d",&m[cnt],&n[cnt]);
		if(m[cnt]==0&&n[cnt]==0)
			break;
		cnt++;
	}
	for(i=0; i<cnt; i++)
		Print(m[i],n[i]);
	return 0;
}
