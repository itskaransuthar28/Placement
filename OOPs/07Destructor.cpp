#include <iostream>
using namespace std;

class Customer 
{
    private:
    string name;
    int *data;

    public:
    Customer()
    {
        cout << "Constructor" << endl;
    }

    Customer(string s)
    {
        name = s;
        data = new int[5]; // Dynamically allocate memory for an array of 5 integers
        cout << "Constructor with parameter: " << s << endl;
    }

    // Destructor
    ~Customer()
    {
        delete[] data; // Free the dynamically allocated memory
        cout << "Destructor for: " << name << endl;
    }
};

int main()
{
    Customer C1("Karan"), C2("Pandu"), C3("Aniket");
    Customer *C4 = new Customer("Rahul");
    delete C4;
    
    return 0;
}