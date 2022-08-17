//LCM that value dividable by that two value

#include<stdio.h>
main()
{
	int f,s,lcm,n,tmp,i;
	
	printf("Enter the two values:\n");
	scanf("%d%d",&f,&s);
	
	lcm=f*s;
	tmp=lcm;
	tmp--;
	for(i=tmp;i>f && i>s;i--)
	{
		if(i%f==0&&i%s==0)
			n=i;
	}
	if(n==0)
		printf("LCM of %d and %d is = %d",f,s,lcm);
	else
		printf("LCM of %d and %d is = %d",f,s,n);	
}
