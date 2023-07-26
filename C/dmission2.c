#include <stdio.h>

int main()
{
    int phy = 55;
    int chm = 50;
    int math = 65;
    int total = phy + chm + math;

    int phymark = 55;
    int chmmark = 50;
    int mathmark = 65;
    int totalmark = phymark + chmmark + mathmark;

    if (phymark >= phy)
    {
        printf("Physics: ok\n");
    }
    else
    {
        printf("Physics: no\n");
    }

    if (chmmark >= chm)
    {
        printf("Chemistry: ok\n");
    }
    else
    {
        printf("Chemistry: no\n");
    }

    if (mathmark >= math)
    {
        printf("Mathematics: ok\n");
    }
    else
    {
        printf("Mathematics: no\n");
    }

    if (totalmark >= total)
    {
        printf("Total: congrats\n");
    }
    else
    {
        printf("Total: better luck next time\n");
    }

    return 0;
}
