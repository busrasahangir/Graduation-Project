#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;


/* 5000 different OTP key generation*/

void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[13]={0};

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j =12; j >= 0; j--)
        cout << binaryNum[j];
}
int main()
{
    long inc;
    srand(time(0));

    auto start = high_resolution_clock::now();

        int p=5000;
        int t;
        for(int i=0;i<p;i++){ // i is the key
            cout<<"Decimal number: "<<i<<" ----> Binary number: ";
            decToBinary(i);
            cout<<endl;
        }


    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

    return 0;

}
