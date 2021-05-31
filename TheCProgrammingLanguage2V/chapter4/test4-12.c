#include<math.h>
static void itoa1(int i, char s[], int p, int index)
{
    if (i != 0){
        s[index] = i / p +'0';
        itoa1(i %p, s, p / 10, index + 1);
    }
   
}

void itoa(int i, char s[])
{
    int p = 1;
    int n = 0;
    int tmp = i;
    while (tmp / 10 != 0)
    {
        n++;
        p *= 10;
        tmp /= 10;
    }
    itoa1(i, s, p, 0);
    s[n + 1] = '\0';
}
