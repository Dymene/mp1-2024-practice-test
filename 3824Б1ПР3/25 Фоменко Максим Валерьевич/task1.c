// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего левого соседа.
size_t task1(int A[], size_t n)
{
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (A[i] < A[i - 1]) {
            count++;
        }
    }
    return count;
}
