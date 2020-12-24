#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include<vector>
#include <string.h>

using namespace std;


int main(){

    string filepath("C:/Users/busra/Desktop/deneme.txt");
    char data = 0;
    ifstream input_file(filepath);
    vector<char> input;


    string binary;/*
    ofstream binaryFile;
    binaryFile.open("C:/Users/busra/Desktop/binary.txt");
    */

    if (!input_file.is_open()) {
        cout << "Could not open the file - '"
             << filepath << "'" << endl;
        return EXIT_FAILURE;
    }



    while(!input_file.eof()){ //read input file,turn into binary,write binaries in to file.

        input_file>>data;

        cout<<data<<endl;

        input.push_back(data);

        binary = bitset<8>(data).to_string();

        //(cout<<binary<<endl;

       // binaryFile<<binary<<endl;

    }


    //for (auto i = input.begin(); i != input.end(); ++i)
      //  cout << *i << " ";



    input_file.close();

    return EXIT_SUCCESS;
}
