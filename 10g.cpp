#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

struct student
{
    string stud1;
    int ball1;
    string stud2;
    int ball2;
    void read()
    {
        cin >> stud1 >> ball1 >> stud2 >> ball2;
    }
};
bool cmp(student a, student b)
{
    if (a.stud1 < b.stud1)
    {
        return true;
    }
    if (a.stud1 > b.stud1)
    {
        return false;
    }
    if (a.stud2 < b.stud2)
    {
        return true;
    }
    if (a.stud2 > b.stud2)
    {
        return false;
    }
    if (a.ball1 < b.ball1)
    {
        return true;
    }
    if (a.ball1 > b.ball1)
    {
        return false;
    }
    return a.ball2 < b.ball2;
}
int main()
{
    int n;
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].read();
    }
    sort(s, s + n, cmp);
    cout << s[0].stud1 << " and " << s[0].stud2 << " " << s[0].ball1 + s[0].ball2 << endl;
    for (int i = 1; i < n; i++)
    {
        if (s[i].stud1 != s[i - 1].stud1 || s[i].stud2 != s[i - 1].stud2 || s[i].ball1 != s[i - 1].ball1 || s[i].ball2 != s[i - 1].ball2)
        {
            cout << s[i].stud1 << " and " << s[i].stud2 << " " << s[i].ball1 + s[i].ball2 << endl;
        }
    }
}