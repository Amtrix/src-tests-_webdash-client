#include <iostream>
#include "webdash-core.hpp"
#include "testing-tools.hpp"
using namespace std;

const string _WEBDASH_PROJECT_NAME_ = "webdash-client-tests";

int main() {
    EQUALS(WebDashCore::Get().GetMyWorldRootDirectory(),
           "/mnt/c/myworld/src/tests/_webdsash-client");
    
    
}