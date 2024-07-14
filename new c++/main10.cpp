#include <iostream>
#include <string>
class dog
{
public:
    std::string name;
    std::string breed;
    int *p_age{nullptr};

public:
    dog();
    dog(std::string name_param, std::string breed_param, int age_param);
    ~dog() // destructors 
    {
        delete p_age; // this ptr is for p_age
        std::cout << "dog destructor called for " << name << " at " << this << std::endl;
    }
    void print_info()
    {
        std::cout << "dog (" << this << ") : [ name :" << name << " breed :" << breed << " age : " << *p_age << "]" << std::endl;
    }
    // setters
   /*
    chain call using pointers..................

    dog *set_dog_name(const std::string name)
    {
        // name=name; compiler error to solve this u can also pass parameter with different NAme from name
        this->name = name; // right way
        return this;
    }
    dog *set_breed(const std::string breed)
    {
        this->breed = breed;
        return this;
    }
    dog *set_age(int age)
    {
        *(this->p_age) = age;
        return this;
    }
    */
   /*
    without using pointer and refernce.....................
    void set_dog_name(const std::string name) 
    {
    
        this->name = name; // right way
        
    }
    void set_breed(const std::string breed)
    {
        this->breed = breed;
        
    }
    void set_age(int age)
    {
        *(this->p_age) = age;
        
    }
    */
   // chain call using reference
   dog& set_dog_name(const std::string name) // instead of pointers u can also use void type func
    {
        // name=name; compiler error to solve this u can also pass parameter with different NAme from name
        this->name = name; // right way
        return *this;
    }
    dog& set_breed(const std::string breed)
    {
        this->breed = breed;
        return *this;
    }
    dog& set_age(int age)
    {
        *(this->p_age) = age;
        return *this;
    }

};
dog::dog(std::string name_param, std::string breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "dog constructor called for " << name << " at " << this << std::endl;
}
dog::dog()
{
    name = "none";
    breed = "none";
    p_age = new int;
    *p_age = 0;
}
int main(int argc, char const *argv[])
{
    dog dog1("fluffy", "shepherd", 8); // constructor
    dog1.print_info();
    /*
     dog1.set_dog_name("lodu");
     dog1.set_breed("husky");
     dog1.set_age(6);
    */
    // dog1.set_dog_name("chotu")->set_breed("dalmation")->set_age(5);
    dog1.set_dog_name("chotu").set_breed("dalmation").set_age(5);
    dog1.print_info();
    std::cout << "DONE" << std::endl;

    // destructor
    return 0;
}
