/*
 * SpanDSP - a series of DSP components for telephony
 *
 * spandsp.h - The head guy amongst the headers
 *
 * Written by Steve Underwood <spandsp/steveu@coppice.org>
 *
 * Copyright (C) 2003 Steve Underwood
 *
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2, as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * $Id: spandsp.h,v 1.47 2007/02/27 16:52:16 steveu Exp $
 */

/*! \file */

#if !defined(_SPANDSP_H_)
#define _SPANDSP_H_

#include <inttypes.h>
#include <limits.h>
#include <time.h>
#include <tiffio.h>

#include <spandsp/telephony.h>
#include <spandsp/logging.h>
#include <spandsp/complex.h>
#include <spandsp/bit_operations.h>
#include <spandsp/bitstream.h>
#include <spandsp/queue.h>
#include <spandsp/schedule.h>
#include <spandsp/g711.h>
#include <spandsp/timing.h>
#include <spandsp/vector_float.h>
#include <spandsp/complex_vector_float.h>
#include <spandsp/vector_int.h>
#include <spandsp/arctan2.h>
#include <spandsp/biquad.h>
#include <spandsp/fir.h>
#include <spandsp/awgn.h>
#include <spandsp/bert.h>
#include <spandsp/power_meter.h>
#include <spandsp/complex_filters.h>
#include <spandsp/dc_restore.h>
#include <spandsp/dds.h>
#include <spandsp/echo.h>
#include <spandsp/modem_echo.h>
#include <spandsp/hdlc.h>
#include <spandsp/async.h>
#include <spandsp/noise.h>
#include <spandsp/time_scale.h>
#include <spandsp/tone_detect.h>
#include <spandsp/tone_generate.h>
#include <spandsp/super_tone_rx.h>
#include <spandsp/super_tone_tx.h>
#include <spandsp/modem_connect_tones.h>
#include <spandsp/dtmf.h>
#include <spandsp/bell_r2_mf.h>
#include <spandsp/sig_tone.h>
#include <spandsp/fsk.h>
#include <spandsp/silence_gen.h>
#include <spandsp/v29rx.h>
#include <spandsp/v29tx.h>
#if defined(ENABLE_V17)
#include <spandsp/v17rx.h>
#include <spandsp/v17tx.h>
#endif
#include <spandsp/v22bis.h>
#include <spandsp/v27ter_rx.h>
#include <spandsp/v27ter_tx.h>
#include <spandsp/v8.h>
#include <spandsp/v42.h>
#include <spandsp/v42bis.h>
#include <spandsp/t4.h>
#include <spandsp/t30.h>
#include <spandsp/t30_fcf.h>
#include <spandsp/t35.h>
#include <spandsp/at_interpreter.h>
#include <spandsp/t38_core.h>
#include <spandsp/t38_gateway.h>
#include <spandsp/t38_terminal.h>
#include <spandsp/t31.h>
#include <spandsp/fax.h>
#include <spandsp/adsi.h>
#include <spandsp/oki_adpcm.h>
#include <spandsp/ima_adpcm.h>
#include <spandsp/g722.h>
#include <spandsp/g726.h>
#include <spandsp/lpc10.h>
#include <spandsp/gsm0610.h>
#include <spandsp/plc.h>
#include <spandsp/playout.h>

#endif
/*- End of file ------------------------------------------------------------*/