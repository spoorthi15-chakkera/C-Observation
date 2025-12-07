#include <stdio.h>
int digitSum(int n)
{
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int superDigit(int n)
{
    if (n < 10)
        return n;
    return superDigit(digitSum(n));
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Super Digit is: %d\n", superDigit(num));
    return 0;
}
