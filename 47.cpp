#include <iostream>
using namespace std;
int sub(int a, int b)
{
    return (a - b);
}
int main()
{
    int sum;
    // calling the function and storing
    // returned value in sum
    sum = sub(100, 78);
    cout << "100-78=" << sum << endl;
    return 0;
}