#include <iostream>
using namespace std;

class matrix{
    public:
    int a[2][2], b[2][2];
    void getM(int d[2][2]){
        cout<<"Enter matrix: "<<endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin>>d[i][j];
            }
            
        }
        
    }
    void sum(){
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout<<a[i][j]+b[i][j];
                cout<<"\t";
            }
            cout<<"\n";
            
        }
        
    }
};

int main()
{
    matrix A;
    A.getM(A.a);
    A.getM(A.b);
    A.sum();
    return 0;
}