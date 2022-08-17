#include<stdio.h>
main()
{
	int a[10][10],b[10][10],m[10][10],fnr,fnc,snr,snc,r,c,p,sum;

	printf("Enter 2 Square Matrix");
	fs:
	f:
	printf("\nHow many Rows and Columns You Want To Enter For 1st Matrix upto 10x10: ");
	scanf("%d%d",&fnr,&fnc);
	if(fnr!=fnc)
	{
		printf("\nEnter Square Matrix Only...Let's try again..");
		goto f;
	}
	s:
	printf("\nHow many Rows and Columns You Want To Enter For 2nd Matrix upto 10x10: ");
	scanf("%d%d",&snr,&snc);
	if(snr!=snc)
	{
		printf("\nEnter Square Matrix Only...Let's try again..");
		goto s;
	}
	
	if(fnr!=snr)	//Cheking both matrix is same or not
	{
		printf("\nBoth Matrix should be same square Matrix...Let's try again..");
		goto fs;
	}

	printf("Enter %d elements for 1st Matrix: ",fnr*fnc);
	for(r=0;r<fnr;r++)
	{
		for(c=0;c<fnc;c++)
		{
			scanf("%d",&a[r][c]);
			printf("%5d",a[r][c]);		
		}
		printf("\n");
	}
	
	printf("\nEnter %d elements for 2nd Matrix: ",snr*snc);
	for(r=0;r<snr;r++)
	{
		for(c=0;c<snc;c++)
		{
			scanf("%d",&b[r][c]);
			printf("%5d",b[r][c]);		
		}
		printf("\n");
	}
	
	for(r=0;r<fnr;r++)
	{
		for(c=0;c<fnc;c++)
		{
			for(sum=0,p=0;p<snc;p++)
				sum+=a[r][p]*b[p][c];
			m[r][c]=sum;
		}
	}
	printf("Multiplication of %dx%d Matrix:\n",fnr,fnc);
	for(r=0;r<fnr;r++)
	{
		for(c=0;c<fnc;c++)
			printf("%5d",m[r][c]);
		printf("\n");
	}
}
