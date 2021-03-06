/***************************************************************************
 *  Project:    osm-router
 *  File:       Utils.h
 *  Language:   C++
 *
 *  osm-router is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the Free
 *  Software Foundation, either version 3 of the License, or (at your option)
 *  any later version.
 *
 *  osm-router is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 *  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 *  more details.
 *
 *  You should have received a copy of the GNU General Public License along with
 *  osm-router.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Author:     Mark Padgham / Andreas Petutschnig
 *  E-Mail:     mark.padgham@email.com / andras@petutschnig.de
 *
 *  Description:    C++ implementation of OSM router using boost::graph.
 *                  Designed to work in a designated area, and so reads data
 *                  from a planet.osm file. Hard-coded at present to read data
 *                  for greater London and greater NYC, and to route between
 *                  points given in ./data/routing-points-(city).txt using the
 *                  profile given in profile.cfg
 *
 *  Limitations:
 *
 *  Dependencies:       libboost
 *
 *  Compiler Options:   -std=c++11 -lboost_program_options 
 ***************************************************************************/

#include <sys/ioctl.h> // for console width: Linux only!
#include <fstream>
#include <sstream>
#include <iostream>
#include <assert.h>

#include <boost/config.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>

#include <boost/program_options.hpp>

#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/dijkstra_shortest_paths.hpp>
#include <boost/property_map/property_map.hpp>

#ifndef UTILS_H
#define UTILS_H

#define PI 3.1415926535897932384626433832795

typedef boost::numeric::ublas::vector <int> ivec;
typedef boost::numeric::ublas::matrix <int> imat;
typedef boost::numeric::ublas::vector <double> dvec;
typedef boost::numeric::ublas::matrix <double> dmat;

const double DOUBLE_MAX = std::numeric_limits<double>::max (),
    DOUBLE_MIN = -DOUBLE_MAX,
    FLOAT_MAX = std::numeric_limits <float>::max ();


#endif
