/*
Design a parking system for a parking lot. 
The parking lot has three kinds of parking spaces: big, medium, and small, with a fixed number of slots for each size.

Implement the ParkingSystem class:

ParkingSystem(int big, int medium, int small) Initializes object of the ParkingSystem class. 
The number of slots for each parking space are given as part of the constructor.
bool addCar(int carType) Checks whether there is a parking space of carType for the car that wants to get into the parking lot. 
carType can be of three kinds: big, medium, or small, which are represented by 1, 2, and 3 respectively. 
A car can only park in a parking space of its carType. 
If there is no space available, return false, else park the car in that size space and return true.
*/

class ParkingSystem {
public:
    int b,m,s;
    ParkingSystem(int big, int medium, int small) {
        b=big;
        m=medium;
        s=small;
    }
    
    bool addCar(int carType) {
        if(carType==1)
        {
            if(b>0)
            {
                b--;
                return true;
            }
            else
                return false;
        }
        else if(carType==2)
        {
            if(m>0)
            {
                m--;
                return true;
            }
            else
                return false;
        }
        else
        {
            if(s>0)
            {
                s--;
                return true;
            }
            else
                return false;
        }
    }
};
/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
