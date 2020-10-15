
#include <iostream>

using namespace std;

double C = 1.2;
double sum;
double sales(int t, int x){
    if (t == 0) {
        return x;
    } else {
        sum = 0;
        for (int i = 0; i < t; i++){
            sum = sum + sales(i, x);
        }
    }
    
    return sum * C / t;

}

int main()
{
    cout << sales(2,1);
    
}
