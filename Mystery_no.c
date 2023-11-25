/*---------------------------- Mystery No -----------------------------*/

/* Mystery no is number which can be expressed a sum of two numbers and those two nubers should be reverse of each other.    */
	/*	Ex- 121				22
		    29+92=121			11+11=22
		    121 is a Mystery no		22 is a mystery no	*/



# include<stdio.h>
int reverse(int a);
int main()
{
	int n,i,j,p=0;
	printf("Enter a no : ");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		j=reverse(i);
		if(i+j==n)
		{
			printf("%d %d\n",i,j);
			p++;
			break;	
		}
	}
	if(p==1)
		printf("%d is a Mystery no.",n);
	else
		printf("%d is not a Mystery no.",n);

}
int reverse(int num)
{
	int rev=0,r;
	while(num>0){
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	return rev;
}