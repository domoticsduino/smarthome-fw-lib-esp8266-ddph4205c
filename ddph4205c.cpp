/* 1.0.0 VERSION */

#include "ddph4205c.h"

DDPH4205C::DDPH4205C(float adcVoltage){
    this->_adcVoltage = adcVoltage;
    this->_M_CONSTANT = (7 - PH_CAL) / ((this->_adcVoltage / 2) - PH_CAL_VOLT);
}

DDPH4205CVal DDPH4205C::convertValue(float v){
    DDPH4205CVal ret;
    ret.voltage = v;
    ret.ph = 7 - (((this->_adcVoltage / 2) - v) * this->_M_CONSTANT);
    return ret;
}
