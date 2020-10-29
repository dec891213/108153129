#include <iostream>

using namespace std;

int x[3][3] = {{22, 89, 22},{89, 22, 22},{78, 98, 100}};

int get(int i, int j)
{
    i--;
    j--;
    return (x+(i*3)+j);
}
void set(int i, int j, int v)
{
    i--;
    j--;
    int h = &(x+(i3)+j);
    *h = v;
}
void dump()
{
        cout << "已知二維陣列 轉 一維陣列";
        for(int i=0; i<sizeof(x)/sizeof(int); i++)
        {
            cout << (x+i) << " ";
            cout << *(x+i) << " ";
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
