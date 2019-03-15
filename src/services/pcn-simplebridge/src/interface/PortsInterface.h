/**
* simplebridge API
* simplebridge API generated from simplebridge.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* PortsInterface.h
*
*
*/

#pragma once

#include "../serializer/PortsJsonObject.h"


using namespace io::swagger::server::model;

class PortsInterface {
public:

  virtual void update(const PortsJsonObject &conf) = 0;
  virtual PortsJsonObject toJsonObject() = 0;

  /// <summary>
  /// MAC address of the port
  /// </summary>
  virtual std::string getMac() = 0;
};

