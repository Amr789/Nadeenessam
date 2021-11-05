# include <stdio.h>
int main (){
	int seconds, h,m,s;
	printf("enter number of seconds:");
	scanf("%d",&seconds);
	h = seconds/3600;
	m = (seconds-(3600*h))/60;
	s = (seconds -(3600*h)-(m*60));
	
	printf("hours:\n%d\nminutes:\n%d\nseconds:\n%d",h,m,s);
	return 0;
}
