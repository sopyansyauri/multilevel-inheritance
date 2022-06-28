#include <iostream>
#include <string>

using namespace std;

// Base class (parent)
class Myclass{
    public:
        void myfunction() {
            cout << "some content in parent class" << endl;
        }
};

// Derived class (child)
class Mychild: public Myclass{
    public:
        string nama;

        void setNama(string isiNama) {
            this->nama = isiNama;
            cout << this->nama << endl;
        }
};

// Derived class (grandchild)
class Mygrandchild: public Mychild{};


int main(int argc, char const *argv[])
{
    /* code */
    Mygrandchild orang1;
    orang1.setNama("Sopyan Syauri");
    orang1.myfunction();
    return 0;
}
