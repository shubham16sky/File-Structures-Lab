#include<iostream>
#include<fstream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()


{ 
    
    cout<<"Enter the choice \n 1. for basic I/O\n 2. for std file I/O"<<endl;

    int choice;
    cin>>choice;

    if(choice==1)
    {

    

    cout<<"Enter the number of names : "<<endl;

	int n;

	cin>>n;


	while(n!=0)
	{
		cout<<"Enter the name to be reversed : "<<endl;
		string name;

		cin>>name;
		
		cout<<"Reversed name is : \n";
                
        for (int i = name.length()-1;i>=0;i--)
        {
            cout<<name[i];
        }
		cout<<endl;
		n=n-1;


	}
    exit(0);
    }
    else if (choice==2)
    {
    cout<<"Enter the input filename : \n";
    string ifname;
    cin>>ifname;
    ifstream inp(ifname);

    cout<<"Enter the output filename : \n";
    string ofname;
    cin>>ofname;
    ofstream out(ofname);
    while(!inp.eof())
    {
        string name;
        inp>>name;
        
        

        reverse(name.begin(),name.end());

        out<<name<<endl;
}
    exit(0);
    }
    else{
        cout<<"Please enter the valid option\n Thank you:)\n";
    }
return 0;
    
}

