set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )
add_library( ${SON8PROJ} INTERFACE )

if ( NOT TARGET son8__c_header )
    include( FetchContent )
    message( STATUS "${SON8PROJ}: FetchContent `soneight/c_header" )
    FetchContent_Declare(
        son8__c_header
        GIT_REPOSITORY https://github.com/soneight/c_header.git
        GIT_TAG        97076a6168cf7b2edad2e79bc551d8a2a2406566 # v0.0.2
    )
    FetchContent_MakeAvailable( son8__c_header )
endif( )
message( STATUS "${SON8PROJ}: found target `son8__c_header` " )
target_link_libraries( ${SON8PROJ} INTERFACE son8::c_header )
