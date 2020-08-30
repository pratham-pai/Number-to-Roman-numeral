//C program to convert Integer number to Roman Numeral between 1-3999
//By Pratham Pai 31-7-2020
#include <stdio.h>
#define p(x) printf(x);
int main()
{
    int num;
    printf("-------------------------------\n");
    printf("Enter any number between 1-3999\n");
    scanf("%d",&num);
    printf("The number in Roman Numeral is \n");
    start:
    if(num<=3999 && num>=1000)
    {
        int a;
        a = num/1000;
        if(a==1)
            {p("M");}
        else if(a==2)
            {p("MM");}
        else if(a==3)
            {p("MMM");}

        num-=(a*1000);

        if(num != 0)
            {goto start;}
    }
    else if(num<1000 && num>=500)
    {
        int a;
        a = num/100;

        if(a==5)
            {p("D");}
        else if(a==6)
            {p("DC");}
        else if(a==7)
            {p("DCC");}
        else if(a==8)
            {p("DCCC");}
        else if(a==9)
            {p("CM");}

        num-=(a*100);

        if(num != 0)
            {goto start;}
    }
    else if(num<500 && num>=100)
    {
        int a;
        a=num/100;

        if(a==1)
            {p("C");}
        else if(a==2)
            {p("CC");}
        else if(a==3)
            {p("CCC");}
        else if(a==4)
            {p("CD");}

        num-=(a*100);

        if(num != 0)
            {goto start;}
    }
    else if(num<100 && num>=50)
    {
        int a;
        a=num/10;

        if(a==5)
            {p("L");}
        else if(a==6)
            {p("LX");}
        else if(a==7)
            {p("LXX");}
        else if(a==8)
            {p("LXXX");}
        else if(a==9)
            {p("XC");}

        num-=(a*10);

        if(num != 0)
            {goto start;}
    }
    else if(num<50 && num>=10)
    {
        int a;
        a=num/10;

        if(a==1)
            {p("X");}
        else if(a==2)
            {p("XX");}
        else if(a==3)
            {p("XXX");}
        else if(a==4)
            {p("XL");}

            num-=(a*10);

        if(num != 0)
           {goto start;}
    }
    else if(num<10 && num>=5)
    {
        if(num==5)
            {p("V");}
        else if(num==6)
            {p("VI");}
        else if(num==7)
            {p("VII");}
        else if(num==8)
            {p("VIII");}
        else if(num==9)
            {p("IX");}

    }
    else if(num<5 && num>=1)
    {
        if(num==1)
            {p("I");}
        else if(num==2)
            {p("II");}
        else if(num==3)
            {p("III");}
        else if(num==4)
            {p("IV");}
    }
    else
    {
      printf("not possible for the entered number");
    }
    printf("\n-------------------------------\n");
    printf("\nTry another\n");
    main();
    return 0;
}
