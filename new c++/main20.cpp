#include<iostream>
class Parent
{
public:
    Parent() = default;
    Parent(int member_var) : m_member_var(member_var){   
    }
    ~Parent() = default;
    
    void print_var()const{
        std::cout << "The value in parent is : " << m_member_var << std::endl;
    }
protected: 
    int m_member_var{100};
};
class Child : public Parent 
{
public:
    Child();
    Child( int member_var) : m_member_var(member_var){
    }
    ~Child() = default;
    
    void print_var()const{
        std::cout << "The value in child is : " << m_member_var << std::endl;
    }
    
    void show_values()const{
        std::cout << "The value in child is :" << m_member_var << std::endl;
        std::cout << "The value in parent is : " << Parent::m_member_var << std::endl;
                // The value in parent must be in accessible scope from the derived class.
    }
private: 
    int m_member_var{1000};
};
int main(int argc, char const *argv[])
{	Child child(33);
    child.print_var();// Calls the method in Child
    child.Parent::print_var(); // Calls the method in Parent, 
                               // value in parent just contains junk or whatever
                               // in class initialization we did.
							   
    std::cout << "--------" << std::endl;
    child.show_values();
    
    return 0;
}
