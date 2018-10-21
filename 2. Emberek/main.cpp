#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    cin>>n;
    int maxkor = 0;
    int maxindex = 0;
    int kisfizetes = 0;
    vector <int> kor;
    vector <int> fizetes;
    vector <int> eletkor;
    vector <int> fiatalabb;

    for (int i=0;i<n;i++) {
        int sv1,sv2;
        cin>>sv1>>sv2;
        kor.push_back(sv1);
        fizetes.push_back(sv2);
    }

    for (int i=0;i<n;i++) {
        kor[i]>maxkor ? maxkor=kor[i], maxindex = i+1 : maxkor;
        kor[i]>40 && fizetes[i]<200000 ? kisfizetes++ : kisfizetes;
        int j=0;
        while (j<eletkor.size() && eletkor[j]!=kor[i]) {
            j++;
        }
        if (j==eletkor.size()) {
            eletkor.push_back(kor[i]);
        }
        if (kor[i]<30) {
            fiatalabb.push_back(i+1);
        }
    }

    cout<<maxindex<<endl<<kisfizetes<<endl<<eletkor.size()<<endl<<fiatalabb.size()<<" ";

    for(int i=0;i<fiatalabb.size();i++) {
        cout<<fiatalabb[i]<<" ";
    }




    return 0;
}
