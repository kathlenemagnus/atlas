project(Atlas)

add_subdirectory(i)
add_subdirectory(m)
add_subdirectory(a)
add_subdirectory(b)
add_subdirectory(f)
add_subdirectory(d)
add_subdirectory(v)
add_subdirectory(zicsr)
add_subdirectory(zifencei)
add_subdirectory(zicond)

add_library(atlasinsts)
target_link_libraries(atlasinsts
    rvi
    rvm
    rva
    rvf
    rvd
    rvb
    rvzicsr
    rvzifencei
    rvzicond
    rvv
)
add_dependencies(atlasinsts AutogenArchFiles)
