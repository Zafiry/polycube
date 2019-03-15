/**
* transparenthelloworld API
* transparenthelloworld API generated from transparenthelloworld.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */


#include "TransparenthelloworldApiImpl.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

namespace TransparenthelloworldApiImpl {
namespace {
std::unordered_map<std::string, std::shared_ptr<Transparenthelloworld>> cubes;
std::mutex cubes_mutex;

std::shared_ptr<Transparenthelloworld> get_cube(const std::string &name) {
  std::lock_guard<std::mutex> guard(cubes_mutex);
  auto iter = cubes.find(name);
  if (iter == cubes.end()) {
    throw std::runtime_error("Cube " + name + " does not exist");
  }

  return iter->second;
}

}

void create_transparenthelloworld_by_id(const std::string &name, const TransparenthelloworldJsonObject &jsonObject) {
  {
    // check if name is valid before creating it
    std::lock_guard<std::mutex> guard(cubes_mutex);
    if (cubes.count(name) != 0) {
      throw std::runtime_error("There is already a cube with name " + name);
    }
  }
  auto ptr = std::make_shared<Transparenthelloworld>(name, jsonObject);
  std::unordered_map<std::string, std::shared_ptr<Transparenthelloworld>>::iterator iter;
  bool inserted;

  std::lock_guard<std::mutex> guard(cubes_mutex);
  std::tie(iter, inserted) = cubes.emplace(name, std::move(ptr));

  if (!inserted) {
    throw std::runtime_error("There is already a cube with name " + name);
  }
}

void replace_transparenthelloworld_by_id(const std::string &name, const TransparenthelloworldJsonObject &bridge){
  throw std::runtime_error("Method not supported!");
}

void delete_transparenthelloworld_by_id(const std::string &name) {
  std::lock_guard<std::mutex> guard(cubes_mutex);
  if (cubes.count(name) == 0) {
    throw std::runtime_error("Cube " + name + " does not exist");
  }
  cubes.erase(name);
}

std::vector<TransparenthelloworldJsonObject> read_transparenthelloworld_list_by_id() {
  std::vector<TransparenthelloworldJsonObject> jsonObject_vect;
  for(auto &i : cubes) {
    auto m = get_cube(i.first);
    jsonObject_vect.push_back(m->toJsonObject());
  }
  return jsonObject_vect;
}

std::vector<nlohmann::fifo_map<std::string, std::string>> read_transparenthelloworld_list_by_id_get_list() {
  std::vector<nlohmann::fifo_map<std::string, std::string>> r;
  for (auto &x : cubes) {
    nlohmann::fifo_map<std::string, std::string> m;
    m["name"] = x.first;
    r.push_back(std::move(m));
  }
  return r;
}

//std::vector<nlohmann::fifo_map<std::string, std::string>> read_transparenthelloworld_ports_list_by_id_get_list(const std::string &name) {
//  std::vector<nlohmann::fifo_map<std::string, std::string>> r;
//  auto m = get_cube(name);
//  for(auto &i : m->getPortsList()){
//    nlohmann::fifo_map<std::string, std::string> m;
//    m["name"] = i->getName();
//    r.push_back(std::move(m));
//  }
//  return r;
//}

/**
* @brief   Read transparenthelloworld by ID
*
* Read operation of resource: transparenthelloworld*
*
* @param[in] name ID of name
*
* Responses:
* TransparenthelloworldJsonObject
*/
TransparenthelloworldJsonObject
read_transparenthelloworld_by_id(const std::string &name) {
  return get_cube(name)->toJsonObject();

}




/**
* @brief   Read egress-action by ID
*
* Read operation of resource: egress-action*
*
* @param[in] name ID of name
*
* Responses:
* TransparenthelloworldEgressActionEnum
*/
TransparenthelloworldEgressActionEnum
read_transparenthelloworld_egress_action_by_id(const std::string &name) {
  auto transparenthelloworld = get_cube(name);
  return transparenthelloworld->getEgressAction();

}




/**
* @brief   Read ingress-action by ID
*
* Read operation of resource: ingress-action*
*
* @param[in] name ID of name
*
* Responses:
* TransparenthelloworldIngressActionEnum
*/
TransparenthelloworldIngressActionEnum
read_transparenthelloworld_ingress_action_by_id(const std::string &name) {
  auto transparenthelloworld = get_cube(name);
  return transparenthelloworld->getIngressAction();

}




/**
* @brief   Update transparenthelloworld by ID
*
* Update operation of resource: transparenthelloworld*
*
* @param[in] name ID of name
* @param[in] value transparenthelloworldbody object
*
* Responses:
*
*/
void
update_transparenthelloworld_by_id(const std::string &name, const TransparenthelloworldJsonObject &value) {
  auto transparenthelloworld = get_cube(name);

  transparenthelloworld->update(value);
}




/**
* @brief   Update egress-action by ID
*
* Update operation of resource: egress-action*
*
* @param[in] name ID of name
* @param[in] value Action performed on egress packets
*
* Responses:
*
*/
void
update_transparenthelloworld_egress_action_by_id(const std::string &name, const TransparenthelloworldEgressActionEnum &value) {
  auto transparenthelloworld = get_cube(name);

  transparenthelloworld->setEgressAction(value);
}




/**
* @brief   Update ingress-action by ID
*
* Update operation of resource: ingress-action*
*
* @param[in] name ID of name
* @param[in] value Action performed on ingress packets
*
* Responses:
*
*/
void
update_transparenthelloworld_ingress_action_by_id(const std::string &name, const TransparenthelloworldIngressActionEnum &value) {
  auto transparenthelloworld = get_cube(name);

  transparenthelloworld->setIngressAction(value);
}




/**
* @brief   Update transparenthelloworld by ID
*
* Update operation of resource: transparenthelloworld*
*
* @param[in] value transparenthelloworldbody object
*
* Responses:
*
*/
void
update_transparenthelloworld_list_by_id(const std::vector<TransparenthelloworldJsonObject> &value) {
  throw std::runtime_error("Method not supported");
}


#ifdef IMPLEMENT_POLYCUBE_GET_LIST
std::vector<nlohmann::fifo_map<std::string, std::string>> update_transparenthelloworld_list_by_id_get_list(const std::vector<TransparenthelloworldJsonObject> &value) {
  std::vector<nlohmann::fifo_map<std::string, std::string>> r;
}
#endif


}
}
}
}
}

