#pragma once

#include "comms/IClientBase.h"
#include "graphics/common/ViewController.h"

class DeviceGUI;

class OLEDViewController : public ViewController
{
  public:
    OLEDViewController();
    virtual void init(MeshtasticView *gui, IClientBase *_client);
    virtual void runOnce(void){};
    virtual ~OLEDViewController(){};
};
