#pragma once
#include "graphics/driver/DisplayDriver.h"

/**
 * @brief For simulation on pc/raspberry
 * This class provides an X11 GUI on the local desktop; dimensions are defined
 * in lv_drv_conf.h Usage: define USE_X11=1 for the rasbian/portduino target and
 * link with -lX11
 */
class X11Driver : public DisplayDriver
{
  public:
    static X11Driver &create(uint16_t width, uint16_t height);
    void init(DeviceGUI *gui) override;
    virtual ~X11Driver() {}

  private:
    X11Driver(uint16_t width, uint16_t height);

    static X11Driver *x11driver;
};