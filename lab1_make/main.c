#include <stdio.h>
#include "bibl.h"
int main(){
        int niz, ver, y1 = 0, y2 = 0;
        printf("Введите нижнюю и верхнюю границу: \n");
        int n1 = scanf("%d %d", &niz, &ver);
        printf("\n");
        if (n1 == 2 && niz <= ver){ //проверка на корректность введенных значений niz, ver//
                int s = niz;
                srav(s, y1, y2, ver);
        }
        else{
                printf("Неправильный формат ввода данных\n");
	}
		printf("\n");
        return 0;
}

