/**
 * m65.h
 */

#pragma once

#include "amk_config.h"

#ifdef ACTIONMAP_ENABLE
#define LT_NO AC_NO
#else
#define LT_NO KC_NO
#endif

#define LAYOUT_default( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,      k2d, k2e, \
	k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
	k40, k41, k42,                k46,                k4a, k4b, k4c, k4d, k4e \
) { \
    {k00,  k01, k02,  k03,  k04,  k05,   k06,  k07,  k08,  k09,  k0a, k0b,  k0c,   k0d, k0e}, \
    {k10,  k11, k12,  k13,  k14,  k15,   k16,  k17,  k18,  k19,  k1a, k1b,  k1c,   k1d, LT_NO}, \
    {k20,  k21, k22,  k23,  k24,  k25,   k26,  k27,  k28,  k29,  k2a, k2b,LT_NO,   k2d, k2e}, \
    {k30,LT_NO, k32,  k33,  k34,  k35,   k36,  k37,  k38,  k39,  k3a, k3b,  k3c,   k3d, k3e}, \
    {k40,  k41, k42,LT_NO,LT_NO,LT_NO, LT_NO,  k46,LT_NO,LT_NO,  k4a, k4b,  k4c,   k4d, k4e}, \
}
