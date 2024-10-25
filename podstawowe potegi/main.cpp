#include <iostream>

using namespace std;

void czytaj(float &x, string &s){
cout << "Podaj podstawe potegi w systemie dziesietnym: ";
cin >> x;
cout << "Podaj wykladnik w systemie binarnym: ";
cin >> s;
}

float potega(float x, string s) {
float y=1;
for(int i=0; i<s.size(); i++) {
    y = y * y;
    if (s[i] == '1'){
        y = y * x;

    }
}
return y;
}

int main()
{
    float x;
    string s;
    czytaj (x, s);
    cout << x << " " << s << endl;
    cout << potega(x, s);

    return 0;
}
