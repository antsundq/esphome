#include "room_thermostat.h"
#include "esphome/core/log.h"
#include "esphome/core/helpers.h"

namespace esphome {
namespace room_thermostat {

void RoomThermostat::setup(){
    pinMode(2, OUTPUT);

}

void RoomThermostat::update() {
    self->state_ != self->state_;
    digital_write(5, self->state_);
}

}  // namespace room_thermostat
}  // namespace esphome
