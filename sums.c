#include <stdio.h>
int x = 7;
int* p = &x;
int main(x, p){
	for(i=0; i < 4; i++){
	*p = *p + x;
	x++;
	printf("%d", x);
	return x;
}
//7+7=14++
//15+15=30++
//31+31=62++
//63+63=126++
