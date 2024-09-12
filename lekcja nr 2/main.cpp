#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;
vector <double> d_weX;

vector <double> d_weY;

vector<float> d_we;

struct punkt{
double x, y;
};

int main()
{
    ifstream we ("wuz2-zad-1-punktytxt.txt");
    punkt p;

    while (!we.eof()){
            we >> p.x >>p.y;
         d_weX.push_back(p.x);
         d_weY.push_back(p.y);
    }

    we.close();

    cout << p[0].x << "" << p[0].y << endl;
    return 0;
}
