//Yasmin Alves
//12.07.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= y; i ++) {
        if (i % x != 0) cout << i << " ";
        else cout << i << endl;
    }
 
    return 0;
}
