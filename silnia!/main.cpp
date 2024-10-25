#include <iostream>

using namespace std;

/* iteracyjnie */

long long silnia(int n) {
    long long s=1;
    for( int i=1; i<=n; i++) {
        s *=i;
    }
return s;
}
/* rekurencyjnie*/
long long silniaR(int n) {
    if (n==1) return 1;
    return n * silniaR( n - 1);

}

int main()
{
    cout << silnia(5) << endl;
    cout << silniaR (5) << endl;

    return 0;
}
