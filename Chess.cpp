#include <iostream>
#include <stdio.h>

using namespace std;

void Board(int N)
{
int i, j;
char A[N][N];
// for(i=0;i<N-1;i++){
// A[i][0]=
// }
for (i = 0; i < N; i++) // цикл по строкам
for (j = 1; j < N; j++) // цикл по столбцам строки (элементы строки)
{
A[i][j] = '\0'; // ввод A[i][j]
}
A[8][0] = '\0';
A[0][0] = '8';
A[1][0] = '7';
A[2][0] = '6';
A[3][0] = '5';
A[4][0] = '4';
A[5][0] = '3';
A[6][0] = '2';
A[7][0] = '1';
A[8][1] = 'a';
A[8][2] = 'b';
A[8][3] = 'c';
A[8][4] = 'd';
A[8][5] = 'e';
A[8][6] = 'f';
A[8][7] = 'g';
A[8][8] = 'h';
for (i = 0; i < N; i++) // цикл по строкам
{
for (j = 0; j < N; j++) // вывод одной строки (в цикле)
printf("%4c", A[i][j]); // 4 символа на число
printf("\n"); // переход на другую строку
}
}

int main()
{
const int N = 9;
Board(N);
return 0;
}