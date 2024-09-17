#include <iostream>
#include <memory>

class GassolineSource
{
public:
    virtual void FuelUp() = 0;
   virtual ~GassolineSource() = default;
};

class GasStation : public GassolineSource
{
public:
    void FuelUp() override
    {
        std::cout << "Pumping at GasStation" << std::endl;
    }
};

class FuelCan : public GassolineSource
{
public:
    void FuelUp() override
    {
        std::cout << "Pumping From FuelCan" << std::endl;
    }
};

class Car
{
private:
    std::shared_ptr<GassolineSource> gasService;

public:
    Car(std::shared_ptr<GassolineSource> Service) : gasService(Service)
    {
        if (gasService == nullptr)
        {
            throw std::invalid_argument("Service must not be..");
        }
    }

    void getGassoline()
    {
        std::cout << "Car need more gas!" << std::endl;

        gasService->FuelUp();
    }
};

int main()
{
    std::shared_ptr<GassolineSource> station = std::make_shared<GasStation>();
    std::shared_ptr<GassolineSource> fuelCan = std::make_shared<FuelCan>();

    Car raceCar(fuelCan);
    raceCar.getGassoline();

    Car duneBuggy(station);
    duneBuggy.getGassoline();
}
