#include <stdio.h>
#include "bibl.h"
void srav(int s, int  y1, int  y2, int ver){
        for (int i = s; i <= ver; ++i){
                y1 = reverse(i);
                y2 = kvadr(i);
                if (y1 == y2)
                        printf("%d\t\t%d\t\t%d\n", y1, y2, i);
        }
}
