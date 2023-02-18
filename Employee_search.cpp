#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    int id;
    float salary;

public:
    void enter_Detail()
    {
        cout << "\nEnter the deatil of the employee\n";
        cout << "Name : ";
        cin >> name;
        cout << "ID : ";
        cin >> id;
        cout << "Salary : ";
        cin >> salary;
    }
    void print_Detail()
    {
        cout << "\nDetail of the Employee\n";
        cout << "Name : " << name << "\nID : " << id << "\nSalary : " << salary<<endl;
    }
    bool IsIDtrue(int i_d)
    {
        if (id == i_d)
            return true;
        return false;
    }
    bool IsNametrue(string n)
    {
        if (name == n)
            return true;
        return false;
    }
};

void search_By_Id(employee *e, int n, int i_d)
{
    for (int i = 0; i < n; i++)
    {
        if (e[i].IsIDtrue(i_d))
        {
            e[i].print_Detail();
            return;
        }
    }
    cout << "No found\n";
}

void search_By_name(employee *e, int n, string nam)
{
    for (int i = 0; i < n; i++)
    {
        if (e[i].IsNametrue(nam))
        {
            e[i].print_Detail();
            return;
        }
    }
    cout << "No found\n";
}

int main()
{
    cout<<"ANSHIKA MEHTA,Univ Roll.no-2018188,Section-G"<<endl;
    int n, choice, id;
    string nam;
    cout << "Enter the number of the employee : ";
    cin >> n;
    employee e[10];
    for (int i = 0; i < n; i++)
    {
        e[i].enter_Detail();
    }
    cout << "\nPress 1 to search deatil by id\nPress 2 to search detail by name\nPress 0 to exit\n ";
    cout << "Enter the choice : ";
    cin >> choice;
    while (choice)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter id : ";
            cin >> id;
            search_By_Id(e, n, id);
            break;
        case 2:
            cout << "Enter name : ";
            cin >> nam;
            search_By_name(e, n, nam);
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid Choice \n";
        }
        cout << "\nEnter the choice : ";
        cin >> choice;
    }
    return 0;
}
