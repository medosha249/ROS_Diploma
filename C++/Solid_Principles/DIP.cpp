#include<iostream>

class IProtocol
{
    public:
        virtual void IniProtocol() = 0;
        virtual void Authenticate() = 0;
        virtual void sendRequest(std::string data) = 0;
};


class HTTP: public IProtocol
{
    public:
        void IniProtocol() override
        {

        }

        void Authenticate() override
        {

        }

        void sendRequest(std::string data) override
        {

        }
};

class Transmitter
{
    public:
        Transmitter(IProtocol *p):protocol{p}{}
        void send()
        {
            protocol->sendRequest("any data");
        }

        private:
            IProtocol * protocol;
};

int main()
{
    Transmitter transmitter(new FTP);
    Transmitter transmitter_HTTP(new FTP);
}