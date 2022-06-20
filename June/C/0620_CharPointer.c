#include<stdio.h>

int main()
{
	char *dessert = "apple";
	
	printf("후식은 %s, 주소값:%p ",dessert,dessert);
	
	dessert = "banna";
	
	printf("후식은 %s, 주소값:%p ",dessert,dessert);
	
	return 0;
	
}
