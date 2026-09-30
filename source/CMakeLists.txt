set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )

add_library( ${SON8_LIB} INTERFACE )

option( SON8_CXX_UNIT_DUMMY_FACE_BUILD "build interface dummy static library" OFF )

if( SON8_CXX_UNIT_DUMMY_FACE_BUILD )
    set( SON8_CXX_UNIT_DUMMY_FACE cxx-dummy_face )
    add_library( ${SON8_CXX_UNIT_DUMMY_FACE} STATIC )
    target_sources( ${SON8_CXX_UNIT_DUMMY_FACE} PRIVATE ${SON8_CXX_UNIT_DUMMY_FACE}.cxx )
    target_link_libraries( ${SON8_CXX_UNIT_DUMMY_FACE} PRIVATE ${SON8_LIB} )
endif( )

# Apache License 2.0
# NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
# SPDX-License-Identifier: Apache-2.0
# lib: cxx_unit C++17 Standard CXX Entities Namespace
# Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
