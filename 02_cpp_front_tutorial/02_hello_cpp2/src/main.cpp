
#define CPP2_IMPORT_STD          Yes

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "./src/main.cpp2"


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "./src/main.cpp2"
[[nodiscard]] auto main() -> int;

#line 5 "./src/main.cpp2"
[[nodiscard]] auto name() -> std::string;

#line 11 "./src/main.cpp2"
auto decorate(std::string& s) -> void;

//=== Cpp2 function definitions =================================================

#line 1 "./src/main.cpp2"
[[nodiscard]] auto main() -> int{
#line 2 "./src/main.cpp2"
    std::cout << "Hello " << name() << "\n";
}

[[nodiscard]] auto name() -> std::string{
    std::string s {"world"}; 
    decorate(s);
    return s; 
}

auto decorate(std::string& s) -> void{
    s = "[" + s + "]";
}

