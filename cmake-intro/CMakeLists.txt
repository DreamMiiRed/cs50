cmake_minimum_required (VERSION 3.13)

message("Before 'project':")
message("  C: '${CMAKE_C_COMPILER}'")
message("  C++: '${CMAKE_CXX_COMPILER}'")
set(ENV{CC} "D:/LLVM/bin/clang-cl.exe")

project(hello_start)

message("After 'project':")
message("  C: '${CMAKE_C_COMPILER}'")
message("  C++: '${CMAKE_CXX_COMPILER}'")
message("-------------------------------------------")

# try to run without rd /s /q build
# -------------------------------------------
message("Regular variable (before): ${abc}")
message("Cache variable (before): ${xyz}")

set(abc "123")
set(xyz "321" CACHE STRING "")

message("Regular variable (after): ${abc}")
message("Cache variable (after): ${xyz}")
message("-------------------------------------------")

# scope variable
# -------------------------------------------
set(uvw "123")

message("Top level scope (before): ${uvw}")

add_subdirectory(scope_var)

message("Top level scope (after): ${uvw}")
message("-------------------------------------------")



# function copy value from prev scope variable
# -------------------------------------------
function(foo)
  message("[foo]: Scope for function 'foo' copied from parent 'boo': { abc = '${abc}', xyz = '${xyz}' }")
  unset(abc)
  message("[foo]: Command 'unset(abc)' will remove variable from current scope: { abc = '${abc}', xyz = '${xyz}' }")
endfunction()

function(boo)
  message("[boo]: Scope for function 'boo' copied from parent: { abc = '${abc}', xyz = '${xyz}' }")
  set(abc "789")
  message("[boo]: Command 'set(abc ...)' modify current scope, state: { abc = '${abc}', xyz = '${xyz}' }")
  foo()
endfunction()

set(abc "123")
set(xyz "456")

message("Top level scope state: { abc = '${abc}', xyz = '${xyz}' }")

boo()
message("-------------------------------------------")


# more about scope here
message("https://cgold.readthedocs.io/en/latest/tutorials/variables/regular.html")
message("-------------------------------------------")

# Environment variable
set(ENV{ABC} "123")
message("Environment variable ABC: $ENV{ABC}")
message("-------------------------------------------")

add_executable(timer timer.cpp)
