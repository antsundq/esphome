import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import sensor
from esphome.const import CONF_ID, UNIT_EMPTY, ICON_EMPTY

room_thermostat_ns = cg.esphome_ns.namespace("room_thermostat")
RoomThermostat = room_thermostat_ns.class_("RoomThermostat", cg.PollingComponent)

CONFIG_SCHEMA = (
    sensor.sensor_schema(UNIT_EMPTY, ICON_EMPTY, 1)
    .extend({cv.GenerateID(): cv.declare_id(RoomThermostat)})
    .extend(cv.polling_component_schema("5s"))
)


async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)
    yield sensor.register_sensor(var, config)
