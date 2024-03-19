#include "room_thermostat.h"
#include "esphome/core/log.h"
#include "esphome/core/helpers.h"

namespace esphome {
namespace room_thermostat {

static const char *const TAG = "rt";

void RoomThermostat::setup(){
    this->state_=false;
    this->pin_->setup();
}

void RoomThermostat::update() {
    this->state_ = !this->state_;    
    this->pin_->digital_write(this->state_);
    if (this->temperature_sensor_ != nullptr)
      this->temperature_sensor_->publish_state(23);
    if (this->humidity_sensor_ != nullptr)
      this->humidity_sensor_->publish_state(42);
}

}  // namespace room_thermostat
}  // namespace esphome
