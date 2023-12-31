# CppFront - "Fixing" C++ with Syntax 2.0 | Gamefromscratch

https://youtu.be/z5o5pu3FOfg?si=-WI2SIJP959PZowB

# Makefile

```Makefile
C = gcc 
CXX = clang++
CXX_GPP = g++
CXX2_CPPFRONT = ./cppfront

SOURCE_CXX = ./src/main.cpp
SOURCE_CXX_OBJ = ./target/main.o
CXX2_LINK_OBJ = -c ./src/cpp2util.h

TARGET = ./target/a.out
LDFLAGS_COMMON = -std=c++2b -pedantic -pthread -pedantic-errors -Wall -Wextra -ggdb
LDFLAGS_DEBUG = -c -std=c++2b -pthread -lm -Wall -Wextra -ggdb
LDFLAGS_EMIT_LLVM = -S -emit-llvm
LDFLAGS_ASSEMBLY = -Wall -save-temps
LDFLAGS_FSANITIZE_ADDRESS = -O1 -g -fsanitize=address -fno-omit-frame-pointer -c
LDFLAGS_FSANITIZE_OBJECT = -g -fsanitize=address
LDFLAGS_FSANITIZE_VALGRIND = -fsanitize=address -g3 -std=c++2b

r:
		rm -rf target
		mkdir target
		cp -rf ../cpp2util.h ./src/.
		cp -rf ../cppfront ./.
		$(CXX2_CPPFRONT) ./src/main.cpp2 -p
		$(CXX_GPP) $(LINK_OBJ) $(LDFLAGS_COMMON) $(SOURCE_CXX)
		mv *.out ./target/
		$(TARGET)

clean:
		rm -rf ./target *.out ./src/*.out *.bc ./src/target/ *.dSYM ./src/*.dSYM ./src/*.cpp ./cppfront ./src/cpp2util.h
```


# Can C++ be 10x Simpler & Safer? - Herb Sutter - CppCon 2022 | CppCon
- https://youtu.be/ELeZAKCN4tY?si=FiU3rE9xmqbXq3fk
