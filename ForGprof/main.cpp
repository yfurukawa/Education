/**
 * main.cpp<br>
 *
 *  Created on: 2014/04/23<br>
 *      Author: M825504
 */

// main.cpp

int a(void) {
    int i(0),g(0);
    while(i++<10000)
    {
        g+=i;
    }

    return g;
}

int b(void) {
    int i(0),g(0);
    while(i++<40000)
    {
        g+=i;
    }

    a();

    return g;
}

int main()
{
    int iterations = 1000;
    while(iterations--)
    {
        a();
        b();

        int i(0),g(0);
        while(i++<30000)
        {
            g+=i;
        }
    }

    return 0;
}
