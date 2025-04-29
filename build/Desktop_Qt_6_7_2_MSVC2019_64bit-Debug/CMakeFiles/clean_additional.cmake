# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\testskrtmini_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\testskrtmini_autogen.dir\\ParseCache.txt"
  "testskrtmini_autogen"
  )
endif()
