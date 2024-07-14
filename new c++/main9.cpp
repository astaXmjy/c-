#include<iostream>
#include<string>
class dog{
    public:
       std::string name;
       std::string breed;
       int * p_age{nullptr};
    public:
           dog();
           dog(std::string name_param,std::string breed_param,int age_param);
           ~dog(){
            delete p_age;
            std::cout<<"dog destructor called for "<<name<<std::endl;
           }


           
};
dog::dog(std::string name_param,std::string breed_param,int age_param)
{
    name=name_param;
    breed=breed_param;
    p_age=new int;
    *p_age=age_param;
    std::cout<<"dog constructor called for "<<name<<std::endl;
}
dog::dog()
{
    name="none";
    breed="none";
    p_age=new int;
    *p_age=0;

}
void my_func()
{
    dog * my_dog=new dog("weed","bulldog",5);// if we dont free memory we dont get destructor in it
    delete my_dog; 
}
int main(int argc, char const *argv[])
{
    /*dog dog1;
    std::cout<<dog1.name<< " "<<*(dog1.p_age)<<std::endl; */
dog dog2("robbin","jungli",5);
//std::cout<<dog2.name<<" "<<dog2.breed<<" "<<*dog2.p_age<<std::endl;
my_func();
    return 0;
}

