
#define CPP2_IMPORT_STD          Yes

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "./src/main.cpp2"


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "./src/main.cpp2"
///* lang:cpp */
// #include <iostream>
// #include <string>
///* lang:end */

#line 6 "./src/main.cpp2"
auto print(auto const& thing) -> void;

#line 9 "./src/main.cpp2"
///* lang:cpp */
// auto say_hello() -> int {
//     std::cout << "Hello  " << name() << "\n";
// }
///* lang:end */

auto decorate_and_print(auto& thing) -> void;

#line 20 "./src/main.cpp2"
[[nodiscard]] auto name() -> std::string;

#line 26 "./src/main.cpp2"
auto decorate(std::string& s) -> void;

#line 30 "./src/main.cpp2"
[[nodiscard]] auto main() -> int;
#line 49 "./src/main.cpp2"

// test generic: (x: _, msg: _) = {
//     std::cout
//         << std::setw(30) << msg
//         << " value is "
//         << inspect x -> std::string {
//             is int = "integer " + std::to_string(x as int);
//             is std::string = '"' + x as std::string + '"';
//             is _ = "not an int or string";
//         }
//         << "\n";
// }


//=== Cpp2 function definitions =================================================

#line 1 "./src/main.cpp2"

#line 6 "./src/main.cpp2"
auto print(auto const& thing) -> void { 
    std::cout << ">> " << thing << "\n";  }

#line 15 "./src/main.cpp2"
auto decorate_and_print(auto& thing) -> void{
    thing = "[" + thing + "]";
    print(thing);
}

[[nodiscard]] auto name() -> std::string{
    std::string s {"world"}; 
    decorate(s);
    return s; 
}

auto decorate(std::string& s) -> void{
    s = "[" + s + "]";
}

[[nodiscard]] auto main() -> int{
    std::cout << "Hello " << name() << "\n";
    std::vector<std::string> words {
        "hello", "big", "world"}; 
    std::span<std::string> view {words}; 

    auto i {cpp2_new<int>(0)}; 
    for( ; cpp2::cmp_less(*cpp2::assert_not_null(i),CPP2_UFCS(ssize)(view)); ++*cpp2::assert_not_null(i) ) {
        print(CPP2_ASSERT_IN_BOUNDS(view, *cpp2::assert_not_null(i)));
    }

    do {
        std::cout << std::setw(4) << "**";
    } while ( cpp2::cmp_greater(*cpp2::assert_not_null(i),1) && [&]{ --*cpp2::assert_not_null(i) ; return true; }() );

    std::cout << "\n";
    for ( auto& word : words ) 
        decorate_and_print(word);
}

