//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_COMEAU_HPP
#define BOOST_PREDEF_COMPILER_COMEAU_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_CXX_COMO BOOST_VERSION_NUMBER(0,0,0)

#if defined(__COMO__)
    #undef BOOST_CXX_COMO
    #define BOOST_CXX_COMO BOOST_PREDEF_VRP_F_F_FF(__COMO_VERSION__)
#endif

#endif
