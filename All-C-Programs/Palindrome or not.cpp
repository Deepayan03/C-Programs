#include<stdio.h>
main()
{
	int rev=0,rem,n,org;
	printf("Enter the number");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		rem= n%10;
		rev= rev*10+rem;
		n= n/10;
	}
	if(org==rev)
	printf("%d is a palindrome number",org);
	else
	printf("%d is not a palindrome number",org);
}
