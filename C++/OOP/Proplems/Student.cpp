#include <iostream>
#include <sstream>
using namespace std;

class Student{
    string fname,lname;
    int age,standard;
    public:
        void set_age(int a){
            age=a;
        }
        int get_age(){
            return age;
        }
        void set_standard(int b){
            standard=b;
        }
        int get_standard(){
            return standard;
        }
        void set_first_name(string a){
            fname=a;
        }
        string get_first_name(){
            return fname;
        }
        void set_last_name(string b){
            lname=b;
        } 
        string get_last_name(){
            return lname;
        }
        string to_string(){
            stringstream ss;
            ss << age << "," << fname << "," << lname << "," << standard;
            return ss.str();
        }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string()<<endl;;
    
    return 0;
}