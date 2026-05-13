#include <iostream>
#include <fstream>
using namespace std;
struct Sensor
{
    int sensor_id;
    float temperature;
};
int main()
{
    int no;
    int N=no%50;
    int E=no%100;
    fstream file("sensors.bin",ios::in|ios::out);
    if (file.is_open())
    {
        file.seekp(N, ios::end);
    }
    
    


}