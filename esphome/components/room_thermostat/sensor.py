import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import (
    CONF_ID,
    CONF_PIN,
)
from esphome import pins

room_thermostat_ns = cg.esphome_ns.namespace("room_thermostat")
RoomThermostat = room_thermostat_ns.class_("RoomThermostat", cg.PollingComponent)

CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(): cv.declare_id(RoomThermostat),
        cv.Required(CONF_PIN): pins.gpio_output_pin_schema,
    }
).extend(cv.polling_component_schema("2s"))


async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
    pin = await cg.gpio_pin_expression(config[CONF_PIN])
    cg.add(var.set_pin(pin))
