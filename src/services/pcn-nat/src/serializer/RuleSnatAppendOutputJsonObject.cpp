/**
* nat API
* nat API generated from nat.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "RuleSnatAppendOutputJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

RuleSnatAppendOutputJsonObject::RuleSnatAppendOutputJsonObject() {
  m_idIsSet = false;
}

RuleSnatAppendOutputJsonObject::RuleSnatAppendOutputJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_idIsSet = false;


  if (val.count("id")) {
    setId(val.at("id").get<uint32_t>());
  }
}

nlohmann::json RuleSnatAppendOutputJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_idIsSet) {
    val["id"] = m_id;
  }

  return val;
}

uint32_t RuleSnatAppendOutputJsonObject::getId() const {
  return m_id;
}

void RuleSnatAppendOutputJsonObject::setId(uint32_t value) {
  m_id = value;
  m_idIsSet = true;
}

bool RuleSnatAppendOutputJsonObject::idIsSet() const {
  return m_idIsSet;
}

void RuleSnatAppendOutputJsonObject::unsetId() {
  m_idIsSet = false;
}


nlohmann::json RuleSnatAppendOutputJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json RuleSnatAppendOutputJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["id"]["name"] = "id";
  val["id"]["type"] = "leaf"; // Suppose that type is leaf
  val["id"]["simpletype"] = "integer";
  val["id"]["description"] = R"POLYCUBE()POLYCUBE";
  val["id"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json RuleSnatAppendOutputJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();

  val["id"]["name"] = "id";
  val["id"]["simpletype"] = "integer";
  val["id"]["description"] = R"POLYCUBE()POLYCUBE";
  val["id"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json RuleSnatAppendOutputJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

std::vector<std::string> RuleSnatAppendOutputJsonObject::helpActions() {
  std::vector<std::string> val;
  return val;
}

}
}
}
}

