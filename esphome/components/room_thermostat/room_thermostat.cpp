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
    digitalWrite(2, HIGH);
}

}  // namespace room_thermostat
}  // namespace esphome
