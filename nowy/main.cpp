#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
  vector<int> tab;
    int x;
    ifstream file("liczby.txt");
    if (file.good()) {
        cout << "OK";
    } else {
        cout << "STOP";
    }
    for (int i=0; i<10; i++){
        for (int j=0; j<5; j++){
            file >> x;
            tab.push_back(x);

        }
    }
    file.close();
    for(int i=0; i<10*5; i++) {
        cout << tab[i] << " ";
    }

    return 0;
}
