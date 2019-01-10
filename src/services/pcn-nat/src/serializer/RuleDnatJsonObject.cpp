/**
* nat API
* NAT Service
*
* OpenAPI spec version: 1.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "RuleDnatJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

RuleDnatJsonObject::RuleDnatJsonObject() {

  m_entryIsSet = false;
}

RuleDnatJsonObject::~RuleDnatJsonObject() {}

void RuleDnatJsonObject::validateKeys() {

}

void RuleDnatJsonObject::validateMandatoryFields() {

}

void RuleDnatJsonObject::validateParams() {

}

nlohmann::json RuleDnatJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();

  {
    nlohmann::json jsonArray;
    for (auto& item : m_entry) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["entry"] = jsonArray;
    }
  }

  return val;
}

void RuleDnatJsonObject::fromJson(nlohmann::json& val) {
  for(nlohmann::json::iterator it = val.begin(); it != val.end(); ++it) {
    std::string key = it.key();
    bool found = (std::find(allowedParameters_.begin(), allowedParameters_.end(), key) != allowedParameters_.end());
    if (!found) {
      throw std::runtime_error(key + " is not a valid parameter");
      return;
    }
  }

  m_entry.clear();
  for (auto& item : val["entry"]) {

    RuleDnatEntryJsonObject newItem;
    newItem.fromJson(item);
    m_entry.push_back(newItem);
    m_entryIsSet = true;
  }

}

nlohmann::json RuleDnatJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json RuleDnatJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["entry"]["name"] = "entry";
  val["entry"]["type"] = "leaf"; // Suppose that type is leaf
  val["entry"]["type"] = "list";
  val["entry"]["description"] = R"POLYCUBE(List of Destination NAT rules)POLYCUBE";
  val["entry"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json RuleDnatJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json RuleDnatJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();

  val["entry"]["name"] = "entry";
  val["entry"]["type"] = "list";
  val["entry"]["description"] = R"POLYCUBE(List of Destination NAT rules)POLYCUBE";
  val["entry"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

std::vector<std::string> RuleDnatJsonObject::helpActions() {
  std::vector<std::string> val;
  val.push_back("append");
  return val;
}

const std::vector<RuleDnatEntryJsonObject>& RuleDnatJsonObject::getEntry() const{
  return m_entry;
}

void RuleDnatJsonObject::addRuleDnatEntry(RuleDnatEntryJsonObject value) {
  m_entry.push_back(value);
}


bool RuleDnatJsonObject::entryIsSet() const {
  return m_entryIsSet;
}

void RuleDnatJsonObject::unsetEntry() {
  m_entryIsSet = false;
}




}
}
}
}
