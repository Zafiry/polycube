/**
* lbrp API
* lbrp API generated from lbrp.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "LbrpJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

LbrpJsonObject::LbrpJsonObject() {
  m_nameIsSet = false;
  m_portsIsSet = false;
  m_srcIpRewriteIsSet = false;
  m_serviceIsSet = false;
}

LbrpJsonObject::LbrpJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nameIsSet = false;
  m_portsIsSet = false;
  m_srcIpRewriteIsSet = false;
  m_serviceIsSet = false;


  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }

  if (val.count("ports")) {
    for (auto& item : val["ports"]) {
      PortsJsonObject newItem{ item };
      m_ports.push_back(newItem);
    }

    m_portsIsSet = true;
  }

  if (val.count("src-ip-rewrite")) {
    if (!val["src-ip-rewrite"].is_null()) {
      SrcIpRewriteJsonObject newItem { val["src-ip-rewrite"] };
      setSrcIpRewrite(newItem);
    }
  }

  if (val.count("service")) {
    for (auto& item : val["service"]) {
      ServiceJsonObject newItem{ item };
      m_service.push_back(newItem);
    }

    m_serviceIsSet = true;
  }
}

nlohmann::json LbrpJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_ports) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["ports"] = jsonArray;
    }
  }

  if (m_srcIpRewriteIsSet) {
    val["src-ip-rewrite"] = JsonObjectBase::toJson(m_srcIpRewrite);
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_service) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["service"] = jsonArray;
    }
  }

  return val;
}

std::string LbrpJsonObject::getName() const {
  return m_name;
}

void LbrpJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool LbrpJsonObject::nameIsSet() const {
  return m_nameIsSet;
}



const std::vector<PortsJsonObject>& LbrpJsonObject::getPorts() const{
  return m_ports;
}

void LbrpJsonObject::addPorts(PortsJsonObject value) {
  m_ports.push_back(value);
  m_portsIsSet = true;
}


bool LbrpJsonObject::portsIsSet() const {
  return m_portsIsSet;
}

void LbrpJsonObject::unsetPorts() {
  m_portsIsSet = false;
}

SrcIpRewriteJsonObject LbrpJsonObject::getSrcIpRewrite() const {
  return m_srcIpRewrite;
}

void LbrpJsonObject::setSrcIpRewrite(SrcIpRewriteJsonObject value) {
  m_srcIpRewrite = value;
  m_srcIpRewriteIsSet = true;
}

bool LbrpJsonObject::srcIpRewriteIsSet() const {
  return m_srcIpRewriteIsSet;
}

void LbrpJsonObject::unsetSrcIpRewrite() {
  m_srcIpRewriteIsSet = false;
}

const std::vector<ServiceJsonObject>& LbrpJsonObject::getService() const{
  return m_service;
}

void LbrpJsonObject::addService(ServiceJsonObject value) {
  m_service.push_back(value);
  m_serviceIsSet = true;
}


bool LbrpJsonObject::serviceIsSet() const {
  return m_serviceIsSet;
}

void LbrpJsonObject::unsetService() {
  m_serviceIsSet = false;
}


nlohmann::json LbrpJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();

  val["name"]["name"] = "name";
  val["name"]["type"] = "key";
  val["name"]["simpletype"] = "string";
  val["name"]["description"] = R"POLYCUBE(Name of the lbrp service)POLYCUBE";
  val["name"]["example"] = R"POLYCUBE(lbrp1)POLYCUBE";

  return val;
}

nlohmann::json LbrpJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["uuid"]["name"] = "uuid";
  val["uuid"]["type"] = "leaf"; // Suppose that type is leaf
  val["uuid"]["simpletype"] = "string";
  val["uuid"]["description"] = R"POLYCUBE(UUID of the Cube)POLYCUBE";
  val["uuid"]["example"] = R"POLYCUBE()POLYCUBE";
  val["type"]["name"] = "type";
  val["type"]["type"] = "leaf"; // Suppose that type is leaf
  val["type"]["simpletype"] = "string";
  val["type"]["description"] = R"POLYCUBE(Type of the Cube (TC, XDP_SKB, XDP_DRV))POLYCUBE";
  val["type"]["example"] = R"POLYCUBE(TC)POLYCUBE";
  val["loglevel"]["name"] = "loglevel";
  val["loglevel"]["type"] = "leaf"; // Suppose that type is leaf
  val["loglevel"]["simpletype"] = "string";
  val["loglevel"]["description"] = R"POLYCUBE(Defines the logging level of a service instance, from none (OFF) to the most verbose (TRACE))POLYCUBE";
  val["loglevel"]["example"] = R"POLYCUBE(INFO)POLYCUBE";
  val["ports"]["name"] = "ports";
  val["ports"]["type"] = "leaf"; // Suppose that type is leaf
  val["ports"]["type"] = "list";
  val["ports"]["description"] = R"POLYCUBE(Entry of the ports table)POLYCUBE";
  val["ports"]["example"] = R"POLYCUBE()POLYCUBE";
  val["src-ip-rewrite"]["name"] = "src-ip-rewrite";
  val["src-ip-rewrite"]["type"] = "leaf"; // Suppose that type is leaf
  val["src-ip-rewrite"]["description"] = R"POLYCUBE()POLYCUBE";
  val["src-ip-rewrite"]["example"] = R"POLYCUBE()POLYCUBE";
  val["service"]["name"] = "service";
  val["service"]["type"] = "leaf"; // Suppose that type is leaf
  val["service"]["type"] = "list";
  val["service"]["description"] = R"POLYCUBE(Services (i.e., virtual ip:protocol:port) exported to the client)POLYCUBE";
  val["service"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json LbrpJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();

  val["loglevel"]["name"] = "loglevel";
  val["loglevel"]["simpletype"] = "string";
  val["loglevel"]["description"] = R"POLYCUBE(Defines the logging level of a service instance, from none (OFF) to the most verbose (TRACE))POLYCUBE";
  val["loglevel"]["example"] = R"POLYCUBE(INFO)POLYCUBE";

  return val;
}

nlohmann::json LbrpJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();

  val["ports"]["name"] = "ports";
  val["ports"]["type"] = "list";
  val["ports"]["description"] = R"POLYCUBE(Entry of the ports table)POLYCUBE";
  val["ports"]["example"] = R"POLYCUBE()POLYCUBE";
  val["src-ip-rewrite"]["name"] = "src-ip-rewrite";
  val["src-ip-rewrite"]["type"] = "complex";
  val["src-ip-rewrite"]["description"] = R"POLYCUBE()POLYCUBE";
  val["src-ip-rewrite"]["example"] = R"POLYCUBE()POLYCUBE";
  val["service"]["name"] = "service";
  val["service"]["type"] = "list";
  val["service"]["description"] = R"POLYCUBE(Services (i.e., virtual ip:protocol:port) exported to the client)POLYCUBE";
  val["service"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

std::vector<std::string> LbrpJsonObject::helpActions() {
  std::vector<std::string> val;
  return val;
}

}
}
}
}

