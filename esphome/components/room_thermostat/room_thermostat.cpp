#include "room_thermostat.h"
#include "esphome/core/log.h"
#include "esphome/core/helpers.h"

namespace esphome {
namespace room_thermostat {

void RoomThermostat::setup(){
    self->state_=false;
    pinMode(2, OUTPUT);

}

void RoomThermostat::update() {
    self->state_ != self->state_;
    digital_write(2, self->state_);
}

}  // namespace room_thermostat
}  // namespace esphome
