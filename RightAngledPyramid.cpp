#include <iostream>

using namespace std;

int main()
{
    int a,row=1;
    cin>>a;
    while(row<=a){
        int col=1;
        while(col<=row){
            cout<<"+";
            col +=1;
        }
        cout<<endl;
        row+=1;
    }

    return 0;
}

// 5
// +
// ++
// +++
// ++++
// +++++
