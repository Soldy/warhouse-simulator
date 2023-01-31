#include <cmath>

class BatteryClass {
  private:
    Battery_struct data;
  public:
    Battery_struct status(){
        return this->data;
    };
    int percentage(){
       return std::round(float(this->data.charge)/float(this->data.capacity));
    };
    int discharge( int max){
       this->data.charge -= (max / 3600); // this have to extend.
       return max;
    };

};
