
#include <iostream>
using namespace std;
class mUser {
private:
   string name;
   string password;
   string role;
public:
    //Default Constructor
    mUser() {
        cout << "Default constructor called " << endl;
    }
    //Parameterized Constructor
    mUser(string name, string password, string role) {
        this->name = name;
        this->password = password;
        this->role = role;
    }
    //Copy Constructor
    mUser(const mUser& user) {
        name = user.name;
        password = user.password;
        role = user.role;
        cout << "Copy constructor Called " << endl;
    }
    //Destructor
    ~mUser() {
        cout << "Destructor called for  " << name;
    }
    //Sign in bool function
    bool signin(string nam,string pass) {
        if (nam == "Fatima" && pass == "1234") {
            return true;
        }
        else
            return false;
    }
    void showdata() {
        cout << "Name : " << name << endl << "Role : " << role<<endl;
    }
    
};
int main()
{
    string n;
    string pas;
    string r;
    cout << "=======================================" << endl;
    cout << " Sign Up & Sign In Using OOP Concepts " << endl;
    cout << "=======================================\n" << endl;
   
    cout << "Enter Data for sign up : " << endl;
    cout << "Enter name : ";
    cin >> n;
    cout << "Enter password : ";
    cin >> pas;
    cout << "Enter role (Admin/User) : ";
    cin >> r;
    
    //Dynamic memory allocate 
    mUser* user1 = new mUser(n, pas, r);
    cout << "User created successfully \n" << endl ;

    cout << "==============================" << endl;
    cout << "     For Sign In " << endl;
    cout << "==============================" << endl;
   
    cout << "Enter name : ";
    cin >> n;
    cout << "Enter password : ";
    cin >> pas;

    if (user1->signin(n, pas)) {
        cout << "Sign in Successfully " << endl;
        user1->showdata();
    }
    else {
        cout << "Invalid Credentials " << endl;
    }

    cout << "Creating a copy of user 1 " << endl;
    
    mUser user2 = *user1;
    user2.showdata();

    delete user1;
    cout << "\n Program Ends "<<endl;
}

