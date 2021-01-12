#include <iostream>
#include<cstdlib>
#include<ctime>
#include<stdio.h>
using namespace std;

int main(){

    int keys_array[8]={0};

    srand(time(0));

    int max=256;

    //Random key generation consist of 8 part

    cout<<"Suitable keys for encryption: ";

    for(int i = 0; i<8; i++){

        keys_array[i]=rand()%max;

        cout<<keys_array[i]<<" ";
    }

    //Which part is the real key

    int max1=8;

    int key=rand()%max1;

    cout<<endl<<"Chosen key index is "<<key<<" and key is: "<<keys_array[key]<<endl;


    //Message

    int random_char= rand()%26;

    char key_stroke='a'+random_char;

    cout<<"Keystroke: "<<key_stroke<<endl;

    int message=(int) key_stroke;

    cout<<"ASCII decimal of keystroke: "<<message<<endl;

    //XOR part

    int xor_value=(message^keys_array[key]);

    cout << "XOR: " << xor_value<<endl;

    cout<<"Encrypted version: "<<(char)xor_value;





    return 0;
}

