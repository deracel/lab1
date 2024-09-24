#include <stdio.h>
int reverse(int);//переворачиваем исходное число и возводим перевернутое в квадрат//
int kvadr(int);//перевернутый квадрат изначального числа//
void srav(int, int, int, int);//сравнение резултатов функций reverse и kvadr//
int main(){
	int niz, ver, y1 = 0, y2 = 0;
	printf("Введите нижнюю и верхнюю границу: \n");
	int n1 = scanf("%d %d", &niz, &ver);
	printf("\n");
	if (n1 == 2 && niz <= ver){ //проверка на корректность введенных значений niz, ver//
		int s = niz;
		srav(s, y1, y2, ver);
	}
	else
		printf("Неправильный формат ввода данных\n");
		printf("\n");
	return 0;
}
int  reverse(int s){
	int rev = 0; //вводим переменную для перевернутого числа//
	while (s != 0){
		rev = rev * 10 + s % 10;
		s = s / 10;
	}
	return rev*rev;
}
int kvadr(int s){
	int k2 = s * s;
	int rev2 = 0; //вводим переменную для перепернутого числа//
	while (k2 != 0){
		rev2 = rev2 * 10 + k2 % 10;
		k2 = k2 / 10;
	}
	return rev2;
}
void srav(int s, int  y1, int  y2, int ver){
	for (int i = s; i <= ver; ++i){
		y1 = reverse(i);
		y2 = kvadr(i);
		if (y1 == y2)
			printf("%d\t\t%d\t\t%d\n", y1, y2, i);
	}
}
