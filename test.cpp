#include <iostream>
#include "json.h"
#include "json_error.h"
#include "json_parser.h"
#include "json_value.h"

using namespace std;

int main()
{
    //Make json
    JsonObject json;
    json["name"] = (string)"Nafees";
    json["isGay"] = (bool)true;

    JsonObject sub;
    sub["Programming"] = (bool)true;
    
    json["skills"] = sub;

    //Dump JSON as String
    std::string result = dumps(json);
    cout << result << endl;

    //Parse from string
    JsonObject* json1 = loads("{\"value\": \"dummy\"}"); // loads returns a JsonObject created on heap
    cout << dumps(*json1) << endl;
    delete json1; //free heap
}