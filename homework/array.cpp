#include <iostream>

using namespace std;

int a[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

int get(int i, int j)
{
    i--;
    j--;
    return (a+(i*3)+j);
}
void set(int i, int j, int v)
{
    i--;
    j--;
    int h = &(a+(i3)+j);
    *h = v;
}
void dump()
{
        cout << "已知二維陣列 轉 一維陣列";
        for(int i=0; i<sizeof(a)/sizeof(int); i++)
        {
            cout << (a+i) << " ";
            cout << *(a+i) << " ";
        }
        cout << endl;
    }

int main()
{
    dump();
    cout << "get(2, 2) 第2列 第2行 = " << get(2, 2) << endl;
    set(2, 2, 228922);
    cout << "set(2, 2, 228922) 變更第2列 第2行 = " << get(2, 2) << endl;
}
