#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int RollNo;
    string Name;
    int Class;
    int Year;
    int TotalMarks;
};

int main()
{
    ofstream file;
    file.open("Question_2_output.txt");

    for (int i = 0; i < 2; i++)
    {
        Student obj;

        cin >> obj.RollNo;
        file << obj.RollNo << "  ";

        cin.ignore();
        getline(cin, obj.Name);
        file << obj.Name << "    ";

        cin >> obj.Class >> obj.Year >> obj.TotalMarks;
        file << obj.Class << "  " << obj.Year << "  " << obj.TotalMarks << endl;
    }

    return 0;
}
