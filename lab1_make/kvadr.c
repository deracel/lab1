int kvadr(int s){
        int k2 = s * s;
        int rev2 = 0; //вводим переменную для перепернутого числа//
        while (k2 != 0){
                rev2 = rev2 * 10 + k2 % 10;
                k2 = k2 / 10;
        }
        return rev2;
}
