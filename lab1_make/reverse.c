int  reverse(int s){
        int rev = 0; //вводим переменную для перевернутого числа//
        while (s != 0){
                rev = rev * 10 + s % 10;
                s = s / 10;
        }
        return rev*rev;
}
