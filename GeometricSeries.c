// WAP to find sum of geometric series(25/05/21)
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int a,r,n,ans;
    printf("%s"," enter first term: ");
	scanf("%d",&a);
	printf("%s"," common ratio: ");
	scanf("%d",&r);
	printf("%s"," number of terms: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		ans=a*(pow(r,i));
		ans+=ans;
	}
	ans=ans-a;
	printf(" Answer is: %d\n",ans );
	return 0;
}
