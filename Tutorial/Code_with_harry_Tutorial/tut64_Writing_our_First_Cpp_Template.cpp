#include <iostream>
using namespace std;

template <class T>
class vector
{
    int size;

public:
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // for int vector calculation
    vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    int res1 = v1.dotProduct(v2);
    cout << res1 << endl;
    // for float vector calculation
    vector<float> v3(3);
    v3.arr[0] = 4.5;
    v3.arr[1] = 3.78;
    v3.arr[2] = 1.6;
    vector<float> v4(3);
    v4.arr[0] = 1.3;
    v4.arr[1] = 0.8;
    v4.arr[2] = 1.9;
    float res2 = v3.dotProduct(v4);
    cout << res2 << endl;
    return 0;
}