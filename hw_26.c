#include<stdio.h>
main()
{
	int id,qty;
	char name[' '];
	float rate,amt,dis,net;
	
	printf("Enter the Id, Name, Quantity of product, Rate of the product:");
	scanf("%d%s%d%f",&id,&name,&qty,&rate);
	
	amt=qty*rate;
	dis=amt*35/100;
	net=amt-dis;
	printf("Id no:%d\nName:%s\nQuantity of product:%d\nRate of the product:%.2f\nToatl Amount:%.2f\n35%% Discount:%.2f\nTotal Net Amount:%.2f",id,name,qty,rate,amt,dis,net);
}
