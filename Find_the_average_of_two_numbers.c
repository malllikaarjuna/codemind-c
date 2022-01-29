#include<stdio.h>
int main()
{
    float M, N, sum=0, average=0;
    scanf("%f%f", &M, &N);
    sum=M+N;
    average=sum/2;
    printf("%.4f", average);
    return 0;
}