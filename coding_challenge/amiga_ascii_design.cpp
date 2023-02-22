// amiga style ascii designing
#include <iostream>
using namespace std;
void convertToASCII(string word)
{
    int i = 0, l = 0;
    int count = 0;

    //convert every char into upper case
    for(int i=0;word[i];i++)
    {
        if(word[i]>=97 && word[i]<=122)
             word[i] ^= 32;
    }
    
    //word length finder 
    while (word[l])
    {
        l++;
    }
    while (word[i])
    {
        for (int j = i; word[j]; j++)
        {
            int option = (int)word[j] - 64;
            // first segment
            switch (option)
            {
            case 1:
                cout << "    ___ ";
                count++;
                break;
            case 2:
                cout << "    ____ ";
                count++;
                break;
            case 3:
                cout << "   ______";
                count++;
                break;
            case 4:
                cout << "    ____ ";
                count++;
                break;
            case 5:
                cout << "    ______";
                count++;
                break;
            case 6:
                cout << "    ______";
                count++;
                break;
            case 7:
                cout << "   ______";
                count++;
                break;
            case 8:
                cout << "    __  __";
                count++;
                break;
            case 9:
                cout << "    ____";
                count++;
                break;
            case 10:
                cout << "       __";
                count++;
                break;
            case 11:
                cout << "    __ __";
                count++;
                break;
            case 12:
                cout << "    __ ";
                count++;
                break;
            case 13:
                cout << "    __  ___";
                count++;
                break;
            case 14:
                cout << "    _   __";
                count++;
                break;
            case 15:
                cout << "   ____ ";
                count++;
                break;
            case 16:
                cout << "    ____ ";
                count++;
                break;
            case 17:
                cout << "   ____ ";
                count++;
                break;
            case 18:
                cout << "    ____ ";
                count++;
                break;
            case 19:
                cout << "   _____";
                count++;
                break;
            case 20:
                cout << "  ______";
                count++;
                break;
            case 21:
                cout << "   __  __";
                count++;
                break;
            case 22:
                cout << " _    __";
                count++;
                break;
            case 23:
                cout << " _       __";
                count++;
                break;
            case 24:
                cout << "   _  __";
                count++;
                break;
            case 25:
                cout << "__  __";
                count++;
                break;
            case 26:
                cout << "/____/";
                count++;
                break;
            }
        }
        if (count == l)
        {
            count = 0;
            cout << endl;
        }
        // second segment
        for (int j = i; word[j]; j++)
        {
            int option = (int)word[j] - 64;
            switch (option)
            {
            case 1:
                cout << "   /   |";
                count++;
                break;
            case 2:
                cout << "   / __ )";
                count++;
                break;
            case 3:
                cout << "  / ____/";
                count++;
                break;
            case 4:
                cout << "   / __ \\";
                count++;
                break;
            case 5:
                cout << "   / ____/";
                count++;
                break;
            case 6:
                cout << "   / ____/";
                count++;
                break;
            case 7:
                cout << "  / ____/";
                count++;
                break;
            case 8:
                cout << "   / / / /";
                count++;
                break;
            case 9:
                cout << "   /  _/";
                count++;
                break;
            case 10:
                cout << "      / /";
                count++;
                break;
            case 11:
                cout << "   / //_/";
                count++;
                break;
            case 12:
                cout << "   / / ";
                count++;
                break;
            case 13:
                cout << "   /  |/  /";
                count++;
                break;
            case 14:
                cout << "   / | / /";
                count++;
                break;
            case 15:
                cout << "  / __ \\";
                count++;
                break;
            case 16:
                cout << "   / __ \\";
                count++;
                break;
            case 17:
                cout << "  / __ \\";
                count++;
                break;
            case 18:
                cout << "   / __ \\";
                count++;
                break;
            case 19:
                cout << "  / ___/";
                count++;
                break;
            case 20:
                cout << " /_  __/";
                count++;
                break;
            case 21:
                cout << "  / / / /";
                count++;
                break;
            case 22:
                cout << "| |  / /";
                count++;
                break;
            case 23:
                cout << "| |     / /";
                count++;
                break;
            case 24:
                cout << "  | |/ /";
                count++;
                break;
            case 25:
                cout << "\\ \\/ /";
                count++;
                break;
            case 26:
                cout << " / /__";
                count++;
                break;
            }
        }
        if (count == l)
        {
            count = 0;
            cout << endl;
        }
        // third segment
        for (int j = i; word[j]; j++)
        {
            int option = (int)word[j] - 64;
            switch (option)
            {
            case 1:
                cout << "  / /| |";
                count++;
                break;
            case 2:
                cout << "  / __  |";
                count++;
                break;
            case 3:
                cout << " / /     ";
                count++;
                break;
            case 4:
                cout << "  / / / /";
                count++;
                break;
            case 5:
                cout << "  / __/   ";
                count++;
                break;
            case 6:
                cout << "  / /_    ";
                count++;
                break;
            case 7:
                cout << " / / __  ";
                count++;
                break;
            case 8:
                cout << "  / /_/ / ";
                count++;
                break;
            case 9:
                cout << "   / /  ";
                count++;
                break;
            case 10:
                cout << " __  / / ";
                count++;
                break;
            case 11:
                cout << "  / ,<   ";
                count++;
                break;
            case 12:
                cout << "  / /  ";
                count++;
                break;
            case 13:
                cout << "  / /|_/ / ";
                count++;
                break;
            case 14:
                cout << "  /  |/ / ";
                count++;
                break;
            case 15:
                cout << " / / / /";
                count++;
                break;
            case 16:
                cout << "  / /_/ /";
                count++;
                break;
            case 17:
                cout << " / / / /";
                count++;
                break;
            case 18:
                cout << "  / /_/ /";
                count++;
                break;
            case 19:
                cout << "  \\__ \\ ";
                count++;
                break;
            case 20:
                cout << "  / /   ";
                count++;
                break;
            case 21:
                cout << " / / / / ";
                count++;
                break;
            case 22:
                cout << "| | / / ";
                count++;
                break;
            case 23:
                cout << "| | /| / / ";
                count++;
                break;
            case 24:
                cout << "  |   / ";
                count++;
                break;
            case 25:
                cout << " \\  / ";
                count++;
                break;
            case 26:
                cout << "  / / ";
                count++;
                break;
            }
        }
        if (count == l)
        {
            count = 0;
            cout << endl;
        }
        // forth segment
        for (int j = i; word[j]; j++)
        {
            int option = (int)word[j] - 64;
            switch (option)
            {
            case 1:
                cout << " / ___ |";
                count++;
                break;
            case 2:
                cout << " / /_/ / ";
                count++;
                break;
            case 3:
                cout << " / /___   ";
                count++;
                break;
            case 4:
                cout << " / /_/ / ";
                count++;
                break;
            case 5:
                cout << " / /___   ";
                count++;
                break;
            case 6:
                cout << " / __/    ";
                count++;
                break;
            case 7:
                cout << "/ /_/ /  ";
                count++;
                break;
            case 8:
                cout << " / __  /  ";
                count++;
                break;
            case 9:
                cout << " _/ /   ";
                count++;
                break;
            case 10:
                cout << "/ /_/ /  ";
                count++;
                break;
            case 11:
                cout << " / /| |  ";
                count++;
                break;
            case 12:
                cout << " / /___";
                count++;
                break;
            case 13:
                cout << " / /  / /  ";
                count++;
                break;
            case 14:
                cout << " / /|  /  ";
                count++;
                break;
            case 15:
                cout << "/ /_/ / ";
                count++;
                break;
            case 16:
                cout << " / ____/ ";
                count++;
                break;
            case 17:
                cout << "/ /_/ / ";
                count++;
                break;
            case 18:
                cout << " / _, _/ ";
                count++;
                break;
            case 19:
                cout << " ___/ / ";
                count++;
                break;
            case 20:
                cout << " / /    ";
                count++;
                break;
            case 21:
                cout << "/ /_/ /  ";
                count++;
                break;
            case 22:
                cout << "| |/ /  ";
                count++;
                break;
            case 23:
                cout << "| |/ |/ /  ";
                count++;
                break;
            case 24:
                cout << " /   |  ";
                count++;
                break;
            case 25:
                cout << " / /  ";
                count++;
                break;
            case 26:
                cout << "/__  /";
                count++;
                break;
            }
        }
        if (count == l)
        {
            count = 0;
            cout << endl;
        }
        // fifth segment
        for (int j = i; word[j]; j++)
        {
            int option = (int)word[j] - 64;
            switch (option)
            {
            case 1:
                cout << "/_/  |_|";
                count++;
                break;
            case 2:
                cout << "/_____/  ";
                count++;
                break;
            case 3:
                cout << " \\____/   ";
                count++;
                break;
            case 4:
                cout << "/_____/  ";
                count++;
                break;
            case 5:
                cout << "/_____/   ";
                count++;
                break;
            case 6:
                cout << "/_/       ";
                count++;
                break;
            case 7:
                cout << "\\____/   ";
                count++;
                break;
            case 8:
                cout << "/_/ /_/   ";
                count++;
                break;
            case 9:
                cout << "/___/   ";
                count++;
                break;
            case 10:
                cout << "\\____/   ";
                count++;
                break;
            case 11:
                cout << "/_/ |_|  ";
                count++;
                break;
            case 12:
                cout << "/_____/";
                count++;
                break;
            case 13:
                cout << "/_/  /_/   ";
                count++;
                break;
            case 14:
                cout << "/_/ |_/   ";
                count++;
                break;
            case 15:
                cout << "\\____/  ";
                count++;
                break;
            case 16:
                cout << "/_/      ";
                count++;
                break;
            case 17:
                cout << "\\___\\_\\ ";
                count++;
                break;
            case 18:
                cout << "/_/ |_|  ";
                count++;
                break;
            case 19:
                cout << "/____/  ";
                count++;
                break;
            case 20:
                cout << "/_/     ";
                count++;
                break;
            case 21:
                cout << "\\____/   ";
                count++;
                break;
            case 22:
                cout << "|___/   ";
                count++;
                break;
            case 23:
                cout << "|__/|__/   ";
                count++;
                break;
            case 24:
                cout << "/_/|_|  ";
                count++;
                break;
            case 25:
                cout << "/_/   ";
                count++;
                break;
            case 26:
                cout << " _____";
                count++;
                break;
            }
        }
        if (count == l)
        {
            count = 0;
            cout << endl;
        }
        break;
        i++;
    }
}
int main()
{
    string word;
    cin >> word;
    convertToASCII(word);
}
