#include <fstream>
#include<iostream>
using namespace std;

int main()
{
    char data[100];
    
    //open a file in write mode
    ofstream outfile;
    outfile.open("afile.dat");

    cout<<"Writing to file"<<endl;
    cout<<"Enter your name:";
    cin.getline(data,100);

    //write inputted data into the file.
    outfile<<data<<endl;

    cout<<"Enter your age:";
    cin>>data;
    //ignore or clear one or more characters from the input buffer
    cin.ignore();

    //again write inputted data into the file.
    outfile <<data <<endl;
    //close the opened file
    outfile.close();

    //open a file in read mode.
    ifstream infile;
    infile.open("afile.dat");

    cout<<"Reading from the file"<<endl;
    infile>>data;

    //write the data at the screen.This will bring the first data to the screen i.e name
    cout<<data<<endl;

    //again read the daa from the file and display it for second data to the screen i.e age
    infile>>data;
    cout<<data<<endl;

    //close the opened file.
    infile.close();

    return 0;
}

