#include <float.h>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    float ff = 1.2;
    cout << ff << endl;
    vector<int> v;
    cout << v.empty() << endl;
    v.push_back(99);
    cout << v.empty() << endl;
    cout << v[0] << endl;
    cout << v.size() << endl;

    int a = 1;

    cout << a << endl;
    cout << "Hello,World!" << endl;
    cout << "Hello,World!2" << endl;
    cout << "123" << endl;

    getchar(); 
    return 1;
}