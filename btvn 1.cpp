#include <stdio.h>
int main(){
	int x;
	printf ("nhap 1 so nguyen tu ban phim");
	scanf("%d", &x);
	if(x <= 7){
		printf("day la thu (2-7)");
	}else{
		printf("day la chu nhat");
	}
}

