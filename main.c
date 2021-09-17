#include <stdio.h>

void printPoint(int a, int b, int numberPoint);

void outputResult(int a, int b);

float scanPoint(int a, float b, double d);

int findY(double y2, double y1, double x2, double x1, double x3);

int main()
{
    float xPoint1=0, yPoint1=0, xPoint2=0, yPoint2=0, xPoint3=0, yPoint3=0, comparedY=0;
    xPoint1=scanPoint(1, xPoint1, 1);
    yPoint1=scanPoint(1, yPoint1, 2);
    xPoint2=scanPoint(2, xPoint2, 1);
    yPoint2=scanPoint(2, yPoint2, 2);
    xPoint3=scanPoint(3, xPoint3, 1);
    yPoint3=scanPoint(3, yPoint3, 2);
    printPoint(xPoint1, yPoint1, 1);
    printPoint(xPoint2, yPoint2, 2);
    printPoint(xPoint3, yPoint3, 3);
    if(xPoint1==xPoint2)
    {
        if(yPoint1==yPoint2)
           printf("Syntaxix Error, Please correct your data\n");
        if(yPoint1!=yPoint3)
        {
            if(xPoint3==xPoint1)
                 printf("On the straight line\n");
            if(xPoint3<xPoint1)
                 printf("Lefter than straight line\n");
            if(xPoint3>xPoint1)
                 printf("Righter than straight line\n");
        }
    }
    if(xPoint1<xPoint2)
    {
        comparedY=findY(yPoint2, yPoint1, xPoint2, xPoint1, xPoint3);
        outputResult(yPoint3, comparedY);
    }
    if(xPoint1>xPoint2)
    {
        comparedY=findY(yPoint1, yPoint2, xPoint1, xPoint2, xPoint3);
        outputResult(yPoint3, comparedY);
    }
    return 0;
}

void printPoint(int a, int b, int numberPoint)
{

    printf("Point %d: x: %d y: %d\n", numberPoint, a, b);
}

void outputResult(int a, int b)
{
    if(a>b)
        printf("Over the straight line\n");
    if(a<b)
        printf("Under the straight line\n");
    if(a==b)
        printf("On the straight line\n");
}

float scanPoint(int a, float b, double d)
{
    float c;
    do
    {
        if(d==1)
            printf("Point %d X: ", a);
        if(d==2)
            printf("Point %d Y: ", a);
        fflush(stdin);
        c = scanf("%g", &b);
    }
    while (c < 1);
    return b;
}

int findY(double y2, double y1, double x2, double x1, double x3)
{
    double Y=(((y2-y1)/(x2-x1))*(x3-x1)+y1);
    return Y;
}
