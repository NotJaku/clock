#include <iostream>
#include <conio.h>
#include <ctime>
#include <windows.h>

using namespace std;

int h, m, s;
string hs, ms, ss;

int main()
{
    while (true) {
        time_t tim = time(0);
        tm *gettime = gmtime(&tim);

        h = gettime->tm_hour+2;
        m = gettime->tm_min;
        s = gettime->tm_sec;

        //Hours
        if (h < 10) {
            hs = "0" + to_string(h);
        }
        else {
            hs = to_string(h);
        }

        //Minutes
        if (m < 10) {
            ms = "0" + to_string(m);
        }
        else {
            ms = to_string(m);
        }

        //Seconds
        if (s < 10) {
            ss = "0" + to_string(s);
        }
        else {
            ss = to_string(s);
        }

        cout << "------------" << endl;
        cout << "| " << hs << ":" << ms << ":" << ss << " |" << endl;
        cout << "------------" << endl;
        Sleep(1000);
        system("cls");
    }


    return 0;
}
