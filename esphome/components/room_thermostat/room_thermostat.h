#pragma once

#include "esphome/core/component.h"
#include "esphome/core/hal.h"
#include "esphome/components/sensor/sensor.h"

namespace esphome {
namespace room_thermostat {

class RoomThermostat : public sensor::Sensor, public PollingComponent {
public:
    void setup() override;
    void update() override;

protected:
  bool state_;
  //sensor::Sensor *temperature_sensor_{nullptr};
  //sensor::Sensor *humidity_sensor_{nullptr};
}


}  // namespace room_thermostat
}  // namespace esphome
