add_library(fuffa OBJECT fuffa.cpp fuffa.hpp)
add_library(fuffa-static STATIC $<TARGET_OBJECTS:fuffa>)
set_target_properties(fuffa-static PROPERTIES CLEAN_DIRECT_OUTPUT 1 OUTPUT_NAME "fuffa")
