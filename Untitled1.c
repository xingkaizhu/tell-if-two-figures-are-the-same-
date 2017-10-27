# include <stdio.h>
int main() {
	float a,b;
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	if (fabs(a-b)<1e-6)
	printf("a=b");
	else printf("a!=b");
	return 0;
}
