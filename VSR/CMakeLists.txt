# add vendor
add_subdirectory(vendor)

# scip does not support target cmake
# thus we need to find_package
# TODO: configure scip cmake to support target cmake

# src dependencies
aux_source_directory(src VSR_SRC)
file(GLOB_RECURSE VSR_HEADERS include/*.h)
add_executable(${VSR_name} ${VSR_SRC} ${VSR_HEADERS})

# compile features
target_compile_features(${VSR_name} 
    PRIVATE cxx_std_20
)

# include directories
target_include_directories(${VSR_name}  
    PRIVATE include
)

# link vendor libraries
target_link_libraries(${VSR_name} 
    PRIVATE Eigen3::Eigen
    PRIVATE CGAL::CGAL
    PRIVATE SCIP_interface
)

# pch
target_precompile_headers(${VSR_name} 
    PRIVATE include/pch.h
)