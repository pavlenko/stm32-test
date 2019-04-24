#include "PCD8544.h"

PCD8544::PCD8544(void (* setMode) (uint8_t), void (* setData) (uint8_t)): setMode(setMode), setData(setData)
{
    this->setMode(PCD8544_DC_COMMAND);  // <-- Set command transfer mode

    this->setData(PCD8544_FUNCTION_SET(0, 0, 1));  // <-- Tell LCD extended commands follow
    this->setData(PCD8544_VOP(0x30));              // <-- Set LCD Vop (Contrast)
    this->setData(PCD8544_TEMP_COEFFICIENT(0x03)); // <-- Set Temp coefficient
    this->setData(PCD8544_BIAS(0x04));             // <-- Set LCD bias mode 1:48 (can try 0x03)

    this->setData(PCD8544_FUNCTION_SET(0, 0, 0));  // <-- Tell LCD normal commands follow
    this->setData(PCD8544_DISPLAY_CONTROL(1, 0));  // <-- Set display normal mode, not inverse
}

void PCD8544::setCol(uint8_t col)
{
    this->setMode(PCD8544_DC_COMMAND);
    this->setData(0x80 | (0x07 & col));
}

void PCD8544::setRow(uint8_t row)
{
    this->setMode(PCD8544_DC_COMMAND);
    this->setData(0x40 | (0x3F & row));
}
