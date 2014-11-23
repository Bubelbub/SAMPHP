include(AmxConfig)
include(Plugin)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

if(UNIX)
  add_definitions(-DLINUX)
endif()

if(WIN32)
  add_definitions(-D_WIN32_WINNT=_WIN32_WINNT_WINXP
                  -D_CRT_SECURE_NO_WARNINGS)
endif()

set(PLUGIN_SOURCES
  bindings.cpp
  bindings.h
  bindings_callbacks.hpp
  bindings_game.hpp
  bindings_objects.hpp
  bindings_player.hpp
  bindings_samphp.hpp
  bindings_samphp_not_working.hpp
  bindings_util.hpp
  bindings_vehicles.hpp
  main.cpp
  samphp.cpp
  samphp.h
  samphp_consts.hpp
  undef.h
)

add_plugin(samphp ${PLUGIN_SOURCES})

target_link_libraries(samphp sampgdk rt php5 resolv)

install(TARGETS samphp LIBRARY DESTINATION ".")
