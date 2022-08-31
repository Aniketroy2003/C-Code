#include <iostream>

using namespace std;

int main()
{
    int a,row=1;
    cin>>a;
    int count = 1;
    while(row<=a){
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            count+=1;
            col +=1;
        }
        cout<<endl;
        row+=1;
    }

    return 0;
}



// 3

// 1
// 2 3
// 4 5 6
