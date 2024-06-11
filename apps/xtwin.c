/*
 * Twin - A Tiny Window System
 * Copyright © 2004 Keith Packard <keithp@keithp.com>
 * All rights reserved.
 */

#include "twin_x11.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <time.h>
#include <assert.h>
#include <twin_clock.h>
#include <twin_text.h>
#include <twin_demo.h>
#include <twin_hello.h>
#include <twin_calc.h>
#include <twin_demoline.h>
#include <twin_demospline.h>

#define WIDTH	1000
#define HEIGHT	1000

int
main (void)
{
    // Display	    *dpy = XOpenDisplay (0);
    twin_x11_t	    *x11;

    x11 = twin_x11_create (WIDTH, HEIGHT);
    printf("create window\n");

#if 1
    twin_demo_start (x11->screen, "Demo", 100, 100, 400, 400);
#endif
#if 0
    twin_text_start (x11->screen,  "Gettysburg Address", 0, 0, 300, 300);
#endif
#if 0
    twin_hello_start (x11->screen, "Hello, World", 0, 0, 200, 200);
#endif
#if 1
    twin_clock_start (x11->screen, "Clock", 10, 10, 200, 200);
#endif
#if 0
    twin_calc_start (x11->screen, "Calculator", 100, 100, 200, 200);
#endif
#if 0
    twin_demoline_start (x11->screen, "Demo Line", 0, 0, 200, 200);
#endif
#if 0
    twin_demospline_start (x11->screen, "Demo Spline", 20, 20, 400, 400);
#endif
    printf("dispatch\n");
    twin_dispatch ();
    printf("end\n");
    return 0;
}
