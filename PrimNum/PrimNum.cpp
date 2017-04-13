#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	printf("Find prime numbers in range : ");
	int num;
	scanf("%d",&num);
	bool arr[num+1]={};
	int i,j;
	for(i=2;i<=sqrt(num);i++)
		if(!arr[i])
			for(j=i;j<=num;j+=i)
				if(j%i==0&j!=i)
					arr[j]=true;
	int coun=0;
	for(i=2;i<=num;i++)
		if(!arr[i])
        {
			printf("%d ",i);
			coun++;
			if(coun%7==0)
				printf("\n");
		}
	if(coun%7!=0)
		printf("\n");
	printf("Total : %d prime number(s)\n",coun);
	system("PAUSE");
}
