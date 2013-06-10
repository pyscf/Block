/*                                                                           
Developed by Sandeep Sharma and Garnet K.-L. Chan, 2012                      
Copyright (c) 2012, Garnet K.-L. Chan                                        
                                                                             
This program is integrated in Molpro with the permission of 
Sandeep Sharma and Garnet K.-L. Chan
*/


#ifndef SWEEPTHREEPDM_HEADER
#define SWEEPTHREEPDM_HEADER
#include "global.h"
#include "solver.h"
#include "initblocks.h"
#include "rotationmat.h"
#include "davidson.h"
#include "linear.h"
#include "guess_wavefunction.h"
#include "threepdm.h"

#ifndef SERIAL
#include <boost/mpi/communicator.hpp>
#include <boost/mpi.hpp>
#endif
using namespace boost;
using namespace std;

namespace SpinAdapted{
namespace SweepThreepdm
{
  double do_one(SweepParams &sweepParams, const bool &warmUp, const bool &forward, const bool &restart, const int &restartSize, int state);
};
}

#endif