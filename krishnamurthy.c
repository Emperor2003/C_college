#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}
int main()
{
    int n;
    printf("Enter number\n");
    scanf("%d", &n);
    int m=n , s=0;
    while(m!=0)
    {
        int d = m%10;
        s+=fact(d);
        m/=10;
    }
    if(s==n)
        printf("%d is krishnamurthy",n);
    else
        printf("%d is not  krishnamurthy",n);
}
