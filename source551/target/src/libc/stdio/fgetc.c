/* fgetc.c - get character from file -- stdio.h */

/* Copyright 1992-1993 Wind River Systems, Inc. */
 
/*
modification history
-------------------
01d,05mar93,jdi  documentation cleanup for 5.1.
01c,13oct92,jdi  mangen fixes.
01b,20sep92,smb  documentation additions
01a,29jul92,smb  taken from UCB stdio
*/
  
/*
DESCRIPTION
 *
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Chris Torek.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.

INCLUDE FILE: stdio.h

SEE ALSO: American National Standard X3.159-1989

NOMANUAL
*/

#include "vxWorks.h"
#include "private/stdioP.h"

/******************************************************************************
*
* fgetc - return the next character from a stream (ANSI)
*
* This routine returns the next character (converted to an `int') from the
* specified stream, and advances the file position indicator for the stream.
*
* If the stream is at end-of-file, the end-of-file indicator for the stream is
* set; if a read error occurs, the error indicator is set.
* 
* INCLUDE FILES: stdio.h 
*
* RETURNS:
* The next character from the stream, or EOF if the stream is at end-of-file
* or a read error occurs.
*
* SEE ALSO: fgets(), getc()
*/

int fgetc
    (
    FILE *  fp	/* stream to read from */
    )
    {
    return (getc(fp));
    }
