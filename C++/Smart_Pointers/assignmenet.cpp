#include<iostream>
#include<memory>

void sharedPtr(std::shared_ptr<int> sptr)
{
    std::cout<<sptr.use_count()<<std::endl;
}
int main()
{
    std::shared_ptr<int> sptr2 = std::make_shared<int>(10);

    std::cout<<sptr2.use_count()<<std::endl;

    sharedPtr(sptr2);

    std::cout<<sptr2.use_count()<<std::endl;


}