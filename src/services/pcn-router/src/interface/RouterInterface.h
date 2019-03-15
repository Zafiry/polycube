/**
* router API
* router API generated from router.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* RouterInterface.h
*
*
*/

#pragma once

#include "../serializer/RouterJsonObject.h"

#include "../ArpEntry.h"
#include "../Ports.h"
#include "../Route.h"

using namespace io::swagger::server::model;

class RouterInterface {
public:

  virtual void update(const RouterJsonObject &conf) = 0;
  virtual RouterJsonObject toJsonObject() = 0;

  /// <summary>
  /// Entry of the ports table
  /// </summary>
  virtual std::shared_ptr<Ports> getPorts(const std::string &name) = 0;
  virtual std::vector<std::shared_ptr<Ports>> getPortsList() = 0;
  virtual void addPorts(const std::string &name, const PortsJsonObject &conf) = 0;
  virtual void addPortsList(const std::vector<PortsJsonObject> &conf) = 0;
  virtual void replacePorts(const std::string &name, const PortsJsonObject &conf) = 0;
  virtual void delPorts(const std::string &name) = 0;
  virtual void delPortsList() = 0;

  /// <summary>
  /// Entry associated with the routing table
  /// </summary>
  virtual std::shared_ptr<Route> getRoute(const std::string &network, const std::string &netmask, const std::string &nexthop) = 0;
  virtual std::vector<std::shared_ptr<Route>> getRouteList() = 0;
  virtual void addRoute(const std::string &network, const std::string &netmask, const std::string &nexthop, const RouteJsonObject &conf) = 0;
  virtual void addRouteList(const std::vector<RouteJsonObject> &conf) = 0;
  virtual void replaceRoute(const std::string &network, const std::string &netmask, const std::string &nexthop, const RouteJsonObject &conf) = 0;
  virtual void delRoute(const std::string &network,const std::string &netmask,const std::string &nexthop) = 0;
  virtual void delRouteList() = 0;

  /// <summary>
  /// Entry associated with the ARP table
  /// </summary>
  virtual std::shared_ptr<ArpEntry> getArpEntry(const std::string &address) = 0;
  virtual std::vector<std::shared_ptr<ArpEntry>> getArpEntryList() = 0;
  virtual void addArpEntry(const std::string &address, const ArpEntryJsonObject &conf) = 0;
  virtual void addArpEntryList(const std::vector<ArpEntryJsonObject> &conf) = 0;
  virtual void replaceArpEntry(const std::string &address, const ArpEntryJsonObject &conf) = 0;
  virtual void delArpEntry(const std::string &address) = 0;
  virtual void delArpEntryList() = 0;
};

