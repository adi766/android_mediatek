/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_ver1_volume_custom_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Chipeng chang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_VER1_VOLUME_CUSTOM_DEFAULT_H
#define AUDIO_VER1_VOLUME_CUSTOM_DEFAULT_H

#define VER1_AUD_VOLUME_RING \
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_SIP \
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    0,43,85,128,171,213,255,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MIC \
    64,112,184,144,184,200,160,184,184,184,184,0,0,0,0,\
    255,192,184,180,184,208,172,184,184,184,184,0,0,0,0,\
    255,208,208,180,255,208,172,0,0,0,0,0,0,0,0,\
    255,208,208,164,255,208,172,0,0,0,0,0,0,0,0

#ifdef FM_DIGITAL_INPUT
#define VER1_AUD_VOLUME_FM \
        16,80,112,144,176,208,240,0,0,0,0,0,0,0,0,\
        112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
        112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
        112,136,160,184,208,232,255,0,0,0,0,0,0,0,0
#else
#define VER1_AUD_VOLUME_FM \
        16,80,112,144,176,208,240,0,0,0,0,0,0,0,0,\
        16,80,112,144,176,208,240,0,0,0,0,0,0,0,0,\
        112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
        112,136,160,184,208,232,255,0,0,0,0,0,0,0,0
#endif

#define VER1_AUD_VOLUME_SPH \
    40,52,64,76,88,100,112,0,0,0,0,0,0,0,0,\
    40,52,64,76,88,100,112,0,0,0,0,0,0,0,0,\
    48,60,72,84,96,108,120,0,0,0,0,0,0,0,0,\
    40,52,64,76,88,100,112,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_SID \
    0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MEDIA \
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    104,128,152,176,200,224,248,0,0,0,0,0,0,0,0,\
    104,128,152,176,200,224,248,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MATV \
    0,32,64,92,128,160,192,0,0,0,0,0,0,0,0,\
    0,32,64,92,128,160,192,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    0,43,85,128,171,213,255,0,0,0,0,0,0,0,0

#define VER1_AUD_NORMAL_VOLUME_DEFAULT \
    128,0,0,0,0,0

#define VER1_AUD_HEADSER_VOLUME_DEFAULT \
    148,0,0,0,0,0

#define VER1_AUD_SPEAKER_VOLUME_DEFAULT \
    144,0,0,0,0,0

#define VER1_AUD_HEADSETSPEAKER_VOLUME_DEFAULT \
    132,120,0,0,0,0,0,0

#define VER1_AUD_EXTAMP_VOLUME_DEFAULT \
    132,0,0,0,0,0

#define VER1_AUD_VOLUME_LEVEL_DEFAULT \
    7,7,7,7,7,7,7,7,7

#endif
