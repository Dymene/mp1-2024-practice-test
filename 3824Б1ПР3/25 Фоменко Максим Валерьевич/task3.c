// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.
char* task3(int N) {
    int isNegative = 0;
    if (N < 0) {
        isNegative = 1;
        N = -N;
    }

    char* str = (char*)malloc(12);
    int i = 0;

    do {
        str[i++] = (N % 10) + '0';
        N /= 10;
    } while (N > 0);

    if (isNegative) {
        str[i++] = '-';
    }

    str[i] = '0';

    for (int j = 0; j < i / 2; j++) {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    return str;
}
