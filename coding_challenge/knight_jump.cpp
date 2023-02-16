// Create a function that takes a square where a knight jumps from as a string
// and returns all the possible squares the knight can land on as a string.
// Ignore capturing and further Chess rules. Be aware of the sides of the board.
//  Knights don't go over the edge, obviously.

#include <iostream>
using namespace std;
string temp = "";
bool knightString(char n, int m)
{
    if (n >= 'A' && n <= 'H' && m >= 1 && m <= 8)
    {
        temp += n;
        temp += (m + 48);
        return 1;
    }
    return 0;
}
void knightJumps()
{
    char x;
    int y;
    bool r = 0;
    char word[] = {"ABCDEFGH"};
    cout << "enter coordinates" << endl;
    cin >> x >> y;

    // convert char into integer
    int z = x - 65;
    y -= 1;

    char n = word[z - 1];
    int m = (y - 2) + 1;
    r = knightString(n, m);
    if (r) 
        temp +=' ';

    n = word[z + 1];
    m = (y - 2) + 1;
    r = knightString(n, m);
    if (r) 
        temp +=' ';

    n = word[z - 2];
    m = (y - 1) + 1;
    r = knightString(n, m);
    if (r) 
        temp +=' ';

    n = word[z + 2];
    m = (y - 1) + 1;
    r = knightString(n, m);
    if (r) 
        temp +=' ';

    n = word[z - 2];
    m = (y + 1) + 1;
    r = knightString(n, m);
    if (r) 
        temp +=' ';

    n = word[z + 2];
    m = (y + 1) + 1;
    r = knightString(n, m);
    if (r) 
        temp +=' ';

    n = word[z - 1];
    m = (y + 2) + 1;
    r = knightString(n, m);
    if (r) 
        temp +=' ';

    n = word[z + 1];
    m = (y + 2) + 1;
    r = knightString(n, m);

    temp += '\0';
}

int main()
{
    int chessBoard[8][8];
    knightJumps();

    cout << temp << endl;
}