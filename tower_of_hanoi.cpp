#include<bits/stdc++.h>
using namespace std;

void tower_hannoi (int disk, char tower1, char tower2, char tower3)
{
    if (disk == 1)
    {
        cout << "Move disk " << disk << " from " << tower1 << " to " << tower3 << endl;}
    else
    {
        tower_hannoi (disk-1, tower1, tower3, tower2);
        cout << "Move disk " << disk << " from " << tower1 << " to " << tower3 << endl;
        tower_hannoi (disk-1, tower2, tower1, tower3);
    }
}