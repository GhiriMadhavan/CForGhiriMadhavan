#include<stdio.h>

    int perimeter(int l,int b)
    {
        return 2*(l+b);
    }
    void main()
    {
        int l=2;
        int b=3;
        printf("%d units",perimeter(l,b));
    }

