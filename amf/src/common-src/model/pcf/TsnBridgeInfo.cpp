/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TsnBridgeInfo.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

TsnBridgeInfo::TsnBridgeInfo() {
  m_BridgeId           = 0;
  m_BridgeIdIsSet      = false;
  m_DsttAddr           = "";
  m_DsttAddrIsSet      = false;
  m_DsttPortNum        = 0;
  m_DsttPortNumIsSet   = false;
  m_DsttResidTime      = 0;
  m_DsttResidTimeIsSet = false;
}

void TsnBridgeInfo::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool TsnBridgeInfo::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool TsnBridgeInfo::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "TsnBridgeInfo" : pathPrefix;
  /*
  if (dsttAddrIsSet()) {
    const std::string& value           = m_DsttAddr;
    const std::string currentValuePath = _pathPrefix + ".dsttAddr";
  }
   */

  if (dsttPortNumIsSet()) {
    const int32_t& value               = m_DsttPortNum;
    const std::string currentValuePath = _pathPrefix + ".dsttPortNum";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  if (dsttResidTimeIsSet()) {
    const int32_t& value               = m_DsttResidTime;
    const std::string currentValuePath = _pathPrefix + ".dsttResidTime";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  return success;
}

bool TsnBridgeInfo::operator==(const TsnBridgeInfo& rhs) const {
  return

      ((!bridgeIdIsSet() && !rhs.bridgeIdIsSet()) ||
       (bridgeIdIsSet() && rhs.bridgeIdIsSet() &&
        getBridgeId() == rhs.getBridgeId())) &&

      ((!dsttAddrIsSet() && !rhs.dsttAddrIsSet()) ||
       (dsttAddrIsSet() && rhs.dsttAddrIsSet() &&
        getDsttAddr() == rhs.getDsttAddr())) &&

      ((!dsttPortNumIsSet() && !rhs.dsttPortNumIsSet()) ||
       (dsttPortNumIsSet() && rhs.dsttPortNumIsSet() &&
        getDsttPortNum() == rhs.getDsttPortNum())) &&

      ((!dsttResidTimeIsSet() && !rhs.dsttResidTimeIsSet()) ||
       (dsttResidTimeIsSet() && rhs.dsttResidTimeIsSet() &&
        getDsttResidTime() == rhs.getDsttResidTime()))

          ;
}

bool TsnBridgeInfo::operator!=(const TsnBridgeInfo& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TsnBridgeInfo& o) {
  j = nlohmann::json();
  if (o.bridgeIdIsSet()) j["bridgeId"] = o.m_BridgeId;
  if (o.dsttAddrIsSet()) j["dsttAddr"] = o.m_DsttAddr;
  if (o.dsttPortNumIsSet()) j["dsttPortNum"] = o.m_DsttPortNum;
  if (o.dsttResidTimeIsSet()) j["dsttResidTime"] = o.m_DsttResidTime;
}

void from_json(const nlohmann::json& j, TsnBridgeInfo& o) {
  if (j.find("bridgeId") != j.end()) {
    j.at("bridgeId").get_to(o.m_BridgeId);
    o.m_BridgeIdIsSet = true;
  }
  if (j.find("dsttAddr") != j.end()) {
    j.at("dsttAddr").get_to(o.m_DsttAddr);
    o.m_DsttAddrIsSet = true;
  }
  if (j.find("dsttPortNum") != j.end()) {
    j.at("dsttPortNum").get_to(o.m_DsttPortNum);
    o.m_DsttPortNumIsSet = true;
  }
  if (j.find("dsttResidTime") != j.end()) {
    j.at("dsttResidTime").get_to(o.m_DsttResidTime);
    o.m_DsttResidTimeIsSet = true;
  }
}

int32_t TsnBridgeInfo::getBridgeId() const {
  return m_BridgeId;
}
void TsnBridgeInfo::setBridgeId(int32_t const value) {
  m_BridgeId      = value;
  m_BridgeIdIsSet = true;
}
bool TsnBridgeInfo::bridgeIdIsSet() const {
  return m_BridgeIdIsSet;
}
void TsnBridgeInfo::unsetBridgeId() {
  m_BridgeIdIsSet = false;
}
std::string TsnBridgeInfo::getDsttAddr() const {
  return m_DsttAddr;
}
void TsnBridgeInfo::setDsttAddr(std::string const& value) {
  m_DsttAddr      = value;
  m_DsttAddrIsSet = true;
}
bool TsnBridgeInfo::dsttAddrIsSet() const {
  return m_DsttAddrIsSet;
}
void TsnBridgeInfo::unsetDsttAddr() {
  m_DsttAddrIsSet = false;
}
int32_t TsnBridgeInfo::getDsttPortNum() const {
  return m_DsttPortNum;
}
void TsnBridgeInfo::setDsttPortNum(int32_t const value) {
  m_DsttPortNum      = value;
  m_DsttPortNumIsSet = true;
}
bool TsnBridgeInfo::dsttPortNumIsSet() const {
  return m_DsttPortNumIsSet;
}
void TsnBridgeInfo::unsetDsttPortNum() {
  m_DsttPortNumIsSet = false;
}
int32_t TsnBridgeInfo::getDsttResidTime() const {
  return m_DsttResidTime;
}
void TsnBridgeInfo::setDsttResidTime(int32_t const value) {
  m_DsttResidTime      = value;
  m_DsttResidTimeIsSet = true;
}
bool TsnBridgeInfo::dsttResidTimeIsSet() const {
  return m_DsttResidTimeIsSet;
}
void TsnBridgeInfo::unsetDsttResidTime() {
  m_DsttResidTimeIsSet = false;
}

}  // namespace oai::model::pcf