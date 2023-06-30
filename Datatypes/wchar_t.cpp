#include <iostream>
using namespace std;
int main() {
    wchar_t myWideChar = L'€';
    wcout << "Wide character: " << myWideChar << endl;
    wcout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
    return 0;
}