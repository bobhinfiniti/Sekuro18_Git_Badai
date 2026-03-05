#include <iostream>
#include <string>

using namespace std;

class robotPemadam{
    private:
        int jarak;
        string status;
    public:
        void inputSensor(int sensorVal){
            jarak = sensorVal;
        };

        void prosesLogika(){
            if (jarak > 20){
                status = "Maju Mencari Api";
            }
            else if (jarak <= 20 && jarak > 5){
                status = "UDAH DEKET NIH BRAY";
            } 
            else {
                status = "Posisi Tepat! gas semprot kali ya!";
            }
        };

        void cetakStatus(){
            cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]";
        }
};

int main(){
    int test;
    cout << "Jarak api: ";
    cin >> test;
    robotPemadam uro01;
    while(test != 67){
        uro01.inputSensor(test);
        uro01.prosesLogika();
        uro01.cetakStatus();
        cout << "\n";
        cout << "Jarak api: ";
        cin >> test;
    };
};