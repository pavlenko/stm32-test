#include "PCD8544.h"

PCD8544::PCD8544(void (* setMode) (uint8_t), void (* setData) (uint8_t)): _setMode(setMode), _setData(setData)
{}

void PCD8544::_setDisplayMode(PCD8544_DisplayMode_t mode)
{
    this->_setData(0x08 | mode);
}

void PCD8544::initialize()
{
    this->_setMode(PCD8544_DC_COMMAND);  // <-- Set command transfer mode

    this->_setData(PCD8544_FUNCTION_SET(0, 0, 1));  // <-- Tell LCD extended commands follow
    this->_setData(PCD8544_VOP(0x30));              // <-- Set LCD Vop (Contrast)
    this->_setData(PCD8544_TEMP_COEFFICIENT(0x03)); // <-- Set Temp coefficient
    this->_setData(PCD8544_BIAS(0x04));             // <-- Set LCD bias mode 1:48 (can try 0x03)

    this->_setData(PCD8544_FUNCTION_SET(0, 0, 0));  // <-- Tell LCD normal commands follow
    this->_setDisplayMode(PCD8544_DISPLAY_MODE_NORMAL);
}

void PCD8544::setDisplayMode(PCD8544_DisplayMode_t mode)
{
    this->_setMode(PCD8544_DC_COMMAND);
    this->_setDisplayMode(mode);
}

void PCD8544::setCol(uint8_t col)
{
    this->_setMode(PCD8544_DC_COMMAND);
    this->_setData(0x80 | (0x07 & col));
}

void PCD8544::setRow(uint8_t row)
{
    this->_setMode(PCD8544_DC_COMMAND);
    this->_setData(0x40 | (0x3F & row));
}

