/*!
 * \file obs_conf.cc
 * \brief Class that contains all the configuration parameters for generic
 * observables block
 * \author Javier Arribas, 2020. jarribas(at)cttc.es
 *
 * -----------------------------------------------------------------------------
 *
 * GNSS-SDR is a Global Navigation Satellite System software-defined receiver.
 * This file is part of GNSS-SDR.
 *
 * Copyright (C) 2010-2020  (see AUTHORS file for a list of contributors)
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * -----------------------------------------------------------------------------
 */

#include "obs_conf.h"
#include "gnss_sdr_flags.h"

Obs_Conf::Obs_Conf()
{
    dump_filename = std::string("obs_dump.dat");
    smoothing_factor = FLAGS_carrier_smoothing_factor;
    nchannels_in = 0U;
    nchannels_out = 0U;
    observable_interval_ms = 20U;
    enable_carrier_smoothing = false;
    dump = false;
    dump_mat = false;
}
