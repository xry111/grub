/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2012 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any
 * later version. Please see the file LICENSE-GPL for details.
 *
 * Web Page: http://mielke.cc/brltty/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

#ifndef BRLTTY_INCLUDED_DEVICE
#define BRLTTY_INCLUDED_DEVICE

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "prologue.h"

extern int getConsole (void);
extern int writeConsole (const unsigned char *address, size_t count);
extern int ringBell (void);

extern const char *getDeviceDirectory (void);
extern char *getDevicePath (const char *device);
extern const char *resolveDeviceName (const char *const *names, const char *description, int mode);

extern int isQualifiedDevice (const char **identifier, const char *qualifier);

#undef ALLOW_DOS_DEVICE_NAMES
#if defined(__MSDOS__) || (defined(WINDOWS) && !defined(__CYGWIN32__))
#define ALLOW_DOS_DEVICE_NAMES 1
extern int isDosDevice (const char *identifier, const char *prefix);
#endif /* DOS or Windows (but not Cygwin) */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BRLTTY_INCLUDED_DEVICE */