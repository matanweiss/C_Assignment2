#ifndef MY_MAT
#define MY_MAT
#define SIZE 10

void A(int matrix[SIZE][SIZE], int dp[SIZE][SIZE][SIZE]);
void B(int matrix[SIZE][SIZE], int i, int j, int dp[SIZE][SIZE][SIZE]);
void C(int matrix[SIZE][SIZE], int i, int j, int dp[SIZE][SIZE][SIZE]);
int min(int a, int b);

#endif