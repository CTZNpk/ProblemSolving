#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

const int arr_size = 8;
const int arr[arr_size] = {2, 4, 1, 5, 3, 6, 7, 8};

int main() {

    int N;
    cin >> N;


    while (N--) {
        int L, R;
        cin >> L >> R;

        double product = 1.0;
        int hits = 1;
        int i = L;


        while (i <= R) {

            product *= sqrt(arr[i]);
            i++;
      if(i > R) break;
      if(i % 2 == 0){
        hits++;
      }
        }

        product = round(product * 1000.0) / 1000.0;

        cout << product << " " << hits << endl;
    }

    return 0;
}
