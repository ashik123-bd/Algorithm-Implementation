#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
    T * arr;
    int size;

    vector(int m){
        size = m;
        arr = new T [size];

    }
    T dot_product(vector &v){
        T d = 0;
        for(int i=0;i<size;i++){
            d = d + this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3);
    v1.arr[0] =1.4;
    v1.arr[1] =3.3;
    v1.arr[2] =0.1;
    vector <float> v2(3);
    v1.arr[0] =0.1;
    v1.arr[1] =1.90;
    v1.arr[2] =4.1;

    float a = v1.dot_product(v2);
    cout<<a;
}
