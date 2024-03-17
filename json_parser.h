#include <string>
#include <unordered_map>
#include "json.h"
#include "json_value.h"
#include "json_error.h"
#ifndef JSON_PARSER_H_
#define JSON_PARSER_H_


class JSON;

JsonObject* loads(const std::string&);  
std::string dumps(const JsonObject&);
void JValToStr(JsonValue,std::string&,std::unordered_map<void*,bool>&);

#endif