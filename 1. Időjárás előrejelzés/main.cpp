#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main () {

    int n;
    int tomb[500][2];
    int fagy = 0;
    int maxdif = 0;
    int maxdifi = 0;
    int mindifi = -1;
    vector <int> arr;
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>tomb[i][0]>>tomb[i][1];
    }

    for(int i=0;i<n;i++) {
        tomb[i][0]<=0 || tomb[i][1]<=0 ? fagy++ : fagy;
        abs(tomb[i][0]-tomb[i][1])>maxdif? maxdif = abs(tomb[i][0]-tomb[i][1]), maxdifi = i+1 : maxdif;
        tomb[i+1][1]<tomb[i][0] && mindifi==-1 && i<n-1 ? mindifi = i+2 : mindifi;
        if ((tomb[i][0] <=0 && tomb[i][1] >0) || (tomb[i][0] <=0 && tomb[i][1] >0)) {
            arr.push_back(i+1);
        }
    }

    cout<<"#"<<endl<<fagy<<endl<<"#"<<endl<<maxdifi<<endl<<"#"<<endl<<mindifi<<endl<<"#"<<endl<<arr.size()<<" ";
    for (int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }


    return 0;
}
