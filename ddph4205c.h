/* 1.0.0 VERSION */

#ifndef ph4205c_h
#define ph4205c_h

#define PH_CAL_VOLT 2.14
#define PH_CAL 9.18

struct DDPH4205CVal{
    float voltage = 0.0;
    float ph = 0.0;
};

class DDPH4205C{

    private:
        float _adcVoltage;
        float _M_CONSTANT;
        
    public:
        DDPH4205C(float);
        DDPH4205CVal convertValue(float);

};

#endif