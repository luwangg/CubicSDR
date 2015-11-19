#pragma once
#include "ModemAnalog.h"

class ModemUSB : public ModemAnalog {
public:
    ModemUSB();
    ~ModemUSB();
    std::string getName();
    Modem *factory();
    void demodulate(ModemKit *kit, ModemIQData *input, AudioThreadInput *audioOut);
    
private:
    resamp2_crcf ssbFilt;
    ampmodem demodAM_USB;
};