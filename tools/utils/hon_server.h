﻿#pragma once

#include <stdint.h>
#include "protocol/haier_protocol.h"
#include "hon_packet.h"

struct HvacFullStatus {
  esphome::haier::hon_protocol::HaierPacketControl control;
  esphome::haier::hon_protocol::HaierPacketSensors sensors;
};

HvacFullStatus& get_ac_state_ref();

void trigger_random_alarm();

void reset_alarms();

bool is_in_configuration_mode();

haier_protocol::HandlerError get_device_version_handler(haier_protocol::ProtocolHandler* protocol_handler, uint8_t type, const uint8_t* buffer, size_t size);

haier_protocol::HandlerError get_device_id_handler(haier_protocol::ProtocolHandler* protocol_handler, uint8_t type, const uint8_t* buffer, size_t size);

haier_protocol::HandlerError status_request_handler(haier_protocol::ProtocolHandler* protocol_handler, uint8_t type, const uint8_t* buffer, size_t size);

haier_protocol::HandlerError alarm_status_handler(haier_protocol::ProtocolHandler* protocol_handler, uint8_t type, const uint8_t* buffer, size_t size);

haier_protocol::HandlerError get_management_information_handler(haier_protocol::ProtocolHandler* protocol_handler, uint8_t type, const uint8_t* buffer, size_t size);

haier_protocol::HandlerError report_network_status_handler(haier_protocol::ProtocolHandler* protocol_handler, uint8_t type, const uint8_t* buffer, size_t size);

haier_protocol::HandlerError stop_alarm_handler(haier_protocol::ProtocolHandler* protocol_handler, uint8_t type, const uint8_t* buffer, size_t size);

haier_protocol::HandlerError process_single_parameter(haier_protocol::ProtocolHandler* protocol_handler, uint8_t parameter, uint16_t value);