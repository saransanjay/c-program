#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>

int A = 0, B = 0, C = 0, D = 0;

//Decimal to Binary
void binary(int dec_Number)
{
    D = dec_Number % 2;
    dec_Number /= 2;
    C = dec_Number % 2;
    dec_Number /= 2;
    B = dec_Number % 2;
    dec_Number /= 2;
    A = dec_Number % 2;
}

//7 Segment decoder
int aPart(int A, int B, int C, int D)
{
    int a = 0;
    a = (!B & !D) | (B & D) | C | A;
    return a;
}

int bPart(int A, int B, int C, int D)
{
    int b = 0;
    b = !B | (!C & !D) | (C & D);
    return b;
}

int cPart(int A, int B, int C, int D)
{
    int c = 0;
    c = !C | D | B;
    return c;
}

int dPart(int A, int B, int C, int D)
{
    int d = 0;
    d = (!B & !D) | (!B & C) | (B & !C & D) | (C & !D) | A;
    return d;
}

int ePart(int A, int B, int C, int D)
{
    int e = 0;
    e = (!B & !D) | (C & !D);
    return e;
}

int fPart(int A, int B, int C, int D)
{
    int f = 0;
    f = (!C & !D) | (B & !C) | (B & !D) | A;
    return f;
}

int gPart(int A, int B, int C, int D)
{
    int g = 0;
    g = (!B & C) | (B & !C) | A | (B & !D);
    return g;
}

void main()
{
    int hour1, hour2, minute1, minute2, second1, second2, i, j, k, h = 0, m = 0, s = 0, adder = 0, pixel = 0;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
    int a1 = 0, b1 = 0, c1 = 0, d1 = 0, e1 = 0, f1 = 0, g1 = 0;
    int a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0, f2 = 0, g2 = 0;
    int a3 = 0, b3 = 0, c3 = 0, d3 = 0, e3 = 0, f3 = 0, g3 = 0;
    int a4 = 0, b4 = 0, c4 = 0, d4 = 0, e4 = 0, f4 = 0, g4 = 0;
    int a5 = 0, b5 = 0, c5 = 0, d5 = 0, e5 = 0, f5 = 0, g5 = 0;

    //Get Time and Convert to int
    fflush(stdin);
    char time[] = __TIME__;
    for (k = 0; k < 8; k++)
    {
        if (k == 0)
        {
            hour1 = (time[k] - 48);
        }
        if (k == 1)
        {
            hour2 = (time[k] - 48);
        }
        if (k == 3)
        {
            minute1 = (time[k] - 48);
        }
        if (k == 4)
        {
            minute2 = (time[k] - 48);
        }
        if (k == 6)
        {
            second1 = (time[k] - 48);
        }
        if (k == 7)
        {
            second2 = (time[k] - 48);
        }
    }
    h = (hour1 * 10) + hour2;
    m = (minute1 * 10) + minute2;
    s = (second1 * 10) + second2;
    while (1)
    {
        for (h; h < 24; h++)
        {
            for (m; m < 60; m++)
            {
                for (s; s < 60; s++)
                {
                    sleep(1);
                    system("cls");
                    fflush(stdout);

                    hour1 = h / 10;
                    hour2 = h % 10;
                    minute1 = m / 10;
                    minute2 = m % 10;
                    second1 = s / 10;
                    second2 = s % 10;
  
                    //First Digit
                    binary(hour1);
                    a = aPart(A, B, C, D);
                    b = bPart(A, B, C, D);
                    c = cPart(A, B, C, D);
                    d = dPart(A, B, C, D);
                    e = ePart(A, B, C, D);
                    f = fPart(A, B, C, D);
                    g = gPart(A, B, C, D);

                    //Second Digit
                    binary(hour2);
                    a1 = aPart(A, B, C, D);
                    b1 = bPart(A, B, C, D);
                    c1 = cPart(A, B, C, D);
                    d1 = dPart(A, B, C, D);
                    e1 = ePart(A, B, C, D);
                    f1 = fPart(A, B, C, D);
                    g1 = gPart(A, B, C, D);

                    //Third Digit
                    binary(minute1);
                    a2 = aPart(A, B, C, D);
                    b2 = bPart(A, B, C, D);
                    c2 = cPart(A, B, C, D);
                    d2 = dPart(A, B, C, D);
                    e2 = ePart(A, B, C, D);
                    f2 = fPart(A, B, C, D);
                    g2 = gPart(A, B, C, D);

                    //Fourth Digit
                    binary(minute2);
                    a3 = aPart(A, B, C, D);
                    b3 = bPart(A, B, C, D);
                    c3 = cPart(A, B, C, D);
                    d3 = dPart(A, B, C, D);
                    e3 = ePart(A, B, C, D);
                    f3 = fPart(A, B, C, D);
                    g3 = gPart(A, B, C, D);

                    //Fifth Digit
                    binary(second1);
                    a4 = aPart(A, B, C, D);
                    b4 = bPart(A, B, C, D);
                    c4 = cPart(A, B, C, D);
                    d4 = dPart(A, B, C, D);
                    e4 = ePart(A, B, C, D);
                    f4 = fPart(A, B, C, D);
                    g4 = gPart(A, B, C, D);

                    //Sixth Digit
                    binary(second2);
                    a5 = aPart(A, B, C, D);
                    b5 = bPart(A, B, C, D);
                    c5 = cPart(A, B, C, D);
                    d5 = dPart(A, B, C, D);
                    e5 = ePart(A, B, C, D);
                    f5 = fPart(A, B, C, D);
                    g5 = gPart(A, B, C, D);

                    //Number Printing
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 70; j++)
                        {
                            //First Digit
                            //a
                            if (a == 1 && j < 8 && i == 0)
                            {
                                pixel = 1;
                            }
                            //f
                            else if (f == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 0 || j == 1))
                            {
                                pixel = 1;
                            }
                            //b
                            else if (b == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 6 || j == 7))
                            {
                                pixel = 1;
                            }
                            //g
                            else if (g == 1 && j < 8 && i == 3)
                            {
                                pixel = 1;
                            }
                            //e
                            else if (e == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 0 || j == 1))
                            {
                                pixel = 1;
                            }
                            //c
                            else if (c == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 6 || j == 7))
                            {
                                pixel = 1;
                            }
                            //d
                            else if (d == 1 && j < 8 && i == 6)
                            {
                                pixel = 1;
                            }
                            else
                            {
                                pixel = 0;
                            }

                            //Second Digit
                            //a1
                            if (a1 == 1 && (j > 9 && j < 18) && i == 0)
                            {
                                pixel = 1;
                            }
                            //f1
                            else if (f1 == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 10 || j == 11))
                            {
                                pixel = 1;
                            }
                            //b1
                            else if (b1 == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 16 || j == 17))
                            {
                                pixel = 1;
                            }
                            //g1
                            else if (g1 == 1 && (j > 9 && j < 18) && i == 3)
                            {
                                pixel = 1;
                            }
                            //e1
                            else if (e1 == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 10 || j == 11))
                            {
                                pixel = 1;
                            }
                            //c1
                            else if (c1 == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 16 || j == 17))
                            {
                                pixel = 1;
                            }
                            //d1
                            else if (d1 == 1 && (j > 9 && j < 18) && i == 6)
                            {
                                pixel = 1;
                            }

                            //Point 1 Space
                            if ((j == 21 || j == 22) && (i == 1 || i == 2 || i == 4 || i == 5))
                            {
                                pixel = 1;
                            }

                            //Third Digit
                            //a2
                            if (a2 == 1 && (j > 25 && j < 34) && i == 0)
                            {
                                pixel = 1;
                            }
                            //f2
                            else if (f2 == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 26 || j == 27))
                            {
                                pixel = 1;
                            }
                            //b2
                            else if (b2 == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 32 || j == 33))
                            {
                                pixel = 1;
                            }
                            //g2
                            else if (g2 == 1 && (j > 25 && j < 34) && i == 3)
                            {
                                pixel = 1;
                            }
                            //e2
                            else if (e2 == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 26 || j == 27))
                            {
                                pixel = 1;
                            }
                            //c2
                            else if (c2 == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 32 || j == 33))
                            {
                                pixel = 1;
                            }
                            //d2
                            else if (d2 == 1 && (j > 25 && j < 34) && i == 6)
                            {
                                pixel = 1;
                            }

                            //Fourth Digit
                            //a3
                            if (a3 == 1 && (j > 35 && j < 44) && i == 0)
                            {
                                pixel = 1;
                            }
                            //f3
                            else if (f3 == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 36 || j == 37))
                            {
                                pixel = 1;
                            }
                            //b3
                            else if (b3 == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 42 || j == 43))
                            {
                                pixel = 1;
                            }
                            //g3
                            else if (g3 == 1 && (j > 35 && j < 44) && i == 3)
                            {
                                pixel = 1;
                            }
                            //e3
                            else if (e3 == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 36 || j == 37))
                            {
                                pixel = 1;
                            }
                            //c3
                            else if (c3 == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 42 || j == 43))
                            {
                                pixel = 1;
                            }
                            //d3
                            else if (d3 == 1 && (j > 35 && j < 44) && i == 6)
                            {
                                pixel = 1;
                            }

                            //Point 2 Space
                            if ((j == 47 || j == 48) && (i == 1 || i == 2 || i == 4 || i == 5))
                            {
                                pixel = 1;
                            }

                            //Fifth Digit
                            //a4
                            if (a4 == 1 && (j > 51 && j < 60) && i == 0)
                            {
                                pixel = 1;
                            }
                            //f4
                            else if (f4 == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 52 || j == 53))
                            {
                                pixel = 1;
                            }
                            //b4
                            else if (b4 == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 58 || j == 59))
                            {
                                pixel = 1;
                            }
                            //g4
                            else if (g4 == 1 && (j > 51 && j < 60) && i == 3)
                            {
                                pixel = 1;
                            }
                            //e4
                            else if (e4 == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 52 || j == 53))
                            {
                                pixel = 1;
                            }
                            //c4
                            else if (c4 == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 58 || j == 59))
                            {
                                pixel = 1;
                            }
                            //d4
                            else if (d4 == 1 && (j > 51 && j < 60) && i == 6)
                            {
                                pixel = 1;
                            }

                            //Sixth Digit
                            //a5
                            if (a5 == 1 && (j > 61 && j < 70) && i == 0)
                            {
                                pixel = 1;
                            }
                            //f5
                            else if (f5 == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 62 || j == 63))
                            {
                                pixel = 1;
                            }
                            //b5
                            else if (b5 == 1 && (i == 0 || i == 1 || i == 2 || i == 3) && (j == 68 || j == 69))
                            {
                                pixel = 1;
                            }
                            //g5
                            else if (g5 == 1 && (j > 61 && j < 70) && i == 3)
                            {
                                pixel = 1;
                            }
                            //e5
                            else if (e5 == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 62 || j == 63))
                            {
                                pixel = 1;
                            }
                            //c5
                            else if (c5 == 1 && (i == 3 || i == 4 || i == 5 || i == 6) && (j == 68 || j == 69))
                            {
                                pixel = 1;
                            }
                            //d5
                            else if (d5 == 1 && (j > 61 && j < 70) && i == 6)
                            {
                                pixel = 1;
                            }

                            //print pixel
                            if (pixel == 1)
                            {
                                printf("#");
                            }
                            else
                            {
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                }
                s = 0;
            }
            m = 0;
        }
        h = 0;
    }
    getch();
}