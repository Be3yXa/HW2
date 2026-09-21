#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "RUS");
	int x;
	int y;
	int mid;
	int midx;
	int midy;
	x = 14;
	y = 24;
	mid = (x + y) / 2;
	midx = abs(mid - x);
	midy = abs(mid - y);
	printf("Средний возраст мальчиков = %d лет \n Возраст Коли отличается от среднего на %d лет, а возраст Миши отличается от среднего на %d лет", mid, midx, midy);
}