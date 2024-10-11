#include<iostream>

class OldInterface{
public:
   virtual void Operation(){// Legacy Functionality
    }
};

class Adapter : public OldInterface {
private:
    OldInterface * oldInterface;

public:
    Adapter(OldInterface* obj):oldInterface(obj){}

    void Operation() override{
        oldInterface->Operation();
    }
};