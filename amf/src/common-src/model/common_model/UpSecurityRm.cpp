/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UpSecurityRm.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

UpSecurityRm::UpSecurityRm() {}

void UpSecurityRm::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool UpSecurityRm::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool UpSecurityRm::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "UpSecurityRm" : pathPrefix;

  return success;
}

bool UpSecurityRm::operator==(const UpSecurityRm& rhs) const {
  return

      (getUpIntegr() == rhs.getUpIntegr()) &&

      (getUpConfid() == rhs.getUpConfid())

          ;
}

bool UpSecurityRm::operator!=(const UpSecurityRm& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const UpSecurityRm& o) {
  j             = nlohmann::json();
  j["upIntegr"] = o.m_UpIntegr;
  j["upConfid"] = o.m_UpConfid;
}

void from_json(const nlohmann::json& j, UpSecurityRm& o) {
  j.at("upIntegr").get_to(o.m_UpIntegr);
  j.at("upConfid").get_to(o.m_UpConfid);
}

oai::model::common::UpIntegrity UpSecurityRm::getUpIntegr() const {
  return m_UpIntegr;
}
void UpSecurityRm::setUpIntegr(oai::model::common::UpIntegrity const& value) {
  m_UpIntegr = value;
}
oai::model::common::UpConfidentiality UpSecurityRm::getUpConfid() const {
  return m_UpConfid;
}
void UpSecurityRm::setUpConfid(
    oai::model::common::UpConfidentiality const& value) {
  m_UpConfid = value;
}

}  // namespace oai::model::common