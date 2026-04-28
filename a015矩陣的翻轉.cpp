include <iostream>
using namespace std;

int main() {
    int r, c;
    int a[100][100];
    while (cin ＞＞　ｒ　＞＞　ｃ）｛
　　　　　ｆｏｒ　（ｉｎｔ　ｉ＝０；　ｉ＜ｒ　；　ｉ＋＋）｛
　　　　　　　　　ｆｏｒ　（ｉｎｔ　ｊ＝０；　ｊ＜ｃ；　ｊ＋＋）｛
　　　　　　　　　　　　　ｃｉｎ　＞＞　ａ［ｉ］［ｊ］；
　　　　　　　　　｝
　　　　　｝
　　　　　ｆｏｒ　（ｉｎｔ　ｉ＝０；　ｉ＜ｃ；　ｉ＋＋）｛
　　　　　　　　　　ｆｏｒ　（ｉｎｔ　ｊ＝０；　ｊ＜ｒ；　ｊ＋＋） {
                            cout << a[j][i] << " ";
         }
         cout << "\n";
     }
}
return 0;
