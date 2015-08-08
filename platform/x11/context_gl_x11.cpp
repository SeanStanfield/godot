/*************************************************************************/
/*  context_gl_x11.cpp                                                   */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                    http://www.godotengine.org                         */
/*************************************************************************/
/* Copyright (c) 2007-2015 Juan Linietsky, Ariel Manzur.                 */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/
#define EGL_EGLEXT_PROTOTYPES
#include "context_gl_x11.h"

#ifdef X11_ENABLED
#if defined(OPENGL_ENABLED) || defined(LEGACYGL_ENABLED)
//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>

//#include <GL/glx.h>

//#define GLX_CONTEXT_MAJOR_VERSION_ARB		0x2091
//#define GLX_CONTEXT_MINOR_VERSION_ARB		0x2092

//typedef GLXContext (*GLXCREATECONTEXTATTRIBSARBPROC)(Display*, GLXFBConfig, GLXContext, Bool, const int*);

//struct ContextGL_X11_Private { 

	//::GLXContext glx_context;
//};


//void ContextGL_X11::release_current() {

	//glXMakeCurrent(x11_display, None, NULL);
//}

//void ContextGL_X11::make_current() {

	//glXMakeCurrent(x11_display, x11_window, p->glx_context);
//}
//void ContextGL_X11::swap_buffers() {

	//glXSwapBuffers(x11_display,x11_window);
//}
///*
//static GLWrapperFuncPtr wrapper_get_proc_address(const char* p_function) {

	////print_line(String()+"getting proc of: "+p_function);
	//GLWrapperFuncPtr func=(GLWrapperFuncPtr)glXGetProcAddress( (const GLubyte*) p_function);
	//if (!func) {
		//print_line("Couldn't find function: "+String(p_function));
	//}

	//return func;

//}*/

//Error ContextGL_X11::initialize() {

	
	//GLXCREATECONTEXTATTRIBSARBPROC glXCreateContextAttribsARB = NULL;
	
////	const char *extensions = glXQueryExtensionsString(x11_display, DefaultScreen(x11_display));
	
	//glXCreateContextAttribsARB = (GLXCREATECONTEXTATTRIBSARBPROC)glXGetProcAddress((const GLubyte*)"glXCreateContextAttribsARB");
	
	//ERR_FAIL_COND_V( !glXCreateContextAttribsARB, ERR_UNCONFIGURED );


	//static int visual_attribs[] = {
	    //GLX_RENDER_TYPE, GLX_RGBA_BIT,
	    //GLX_DRAWABLE_TYPE, GLX_WINDOW_BIT,
	    //GLX_DOUBLEBUFFER, true,
	    //GLX_RED_SIZE, 1,
	    //GLX_GREEN_SIZE, 1,
	    //GLX_BLUE_SIZE, 1,
	    //GLX_DEPTH_SIZE, 24,
	    //None 
	//};

	//int fbcount;
	//GLXFBConfig *fbc = glXChooseFBConfig(x11_display, DefaultScreen(x11_display), visual_attribs, &fbcount);
	//ERR_FAIL_COND_V(!fbc,ERR_UNCONFIGURED);
	
	//XVisualInfo *vi = glXGetVisualFromFBConfig(x11_display, fbc[0]);

	//XSetWindowAttributes swa;

	//swa.colormap = XCreateColormap(x11_display, RootWindow(x11_display, vi->screen), vi->visual, AllocNone);
	//swa.border_pixel = 0;
	//swa.event_mask = StructureNotifyMask;

	///*
	//char* windowid = getenv("GODOT_WINDOWID");
	//if (windowid) {

		////freopen("/home/punto/stdout", "w", stdout);
		////reopen("/home/punto/stderr", "w", stderr);
		//x11_window = atol(windowid);
	//} else {
	//*/
		//x11_window = XCreateWindow(x11_display, RootWindow(x11_display, vi->screen), 0, 0, OS::get_singleton()->get_video_mode().width, OS::get_singleton()->get_video_mode().height, 0, vi->depth, InputOutput, vi->visual, CWBorderPixel|CWColormap|CWEventMask, &swa);
		//ERR_FAIL_COND_V(!x11_window,ERR_UNCONFIGURED);
		//XMapWindow(x11_display, x11_window);
		//while(true) {
			//// wait for mapnotify (window created)
			//XEvent e;
			//XNextEvent(x11_display, &e);
			//if (e.type == MapNotify)
				//break;
		//}
		////};


	//if (!opengl_3_context) {
		////oldstyle context:
		//p->glx_context = glXCreateContext(x11_display, vi, 0, GL_TRUE);
	//} else {
		//static int context_attribs[] = {
			//GLX_CONTEXT_MAJOR_VERSION_ARB, 3,
			//GLX_CONTEXT_MINOR_VERSION_ARB, 0,
			//None
		//};
	
		//p->glx_context = glXCreateContextAttribsARB(x11_display, fbc[0], NULL, true, context_attribs);
		//ERR_FAIL_COND_V(!p->glx_context,ERR_UNCONFIGURED);
	//}

	//glXMakeCurrent(x11_display, x11_window, p->glx_context);

	///*
	//glWrapperInit(wrapper_get_proc_address);
	//glFlush();
	
	//glXSwapBuffers(x11_display,x11_window);
//*/
	////glXMakeCurrent(x11_display, None, NULL);

	//return OK;
//}

//int ContextGL_X11::get_window_width() {

	//XWindowAttributes xwa;
	//XGetWindowAttributes(x11_display,x11_window,&xwa);
	
	//return xwa.width;
//}
//int ContextGL_X11::get_window_height() {
	//XWindowAttributes xwa;
	//XGetWindowAttributes(x11_display,x11_window,&xwa);
	
	//return xwa.height;

//}


//ContextGL_X11::ContextGL_X11(::Display *p_x11_display,::Window &p_x11_window,const OS::VideoMode& p_default_video_mode,bool p_opengl_3_context) : x11_window(p_x11_window) {

	//default_video_mode=p_default_video_mode;
	//x11_display=p_x11_display;
	
	//opengl_3_context=p_opengl_3_context;
	
	//double_buffer=false;
	//direct_render=false;
	//glx_minor=glx_major=0;
	//p = memnew( ContextGL_X11_Private );
	//p->glx_context=0;
//}


//ContextGL_X11::~ContextGL_X11() {

	//memdelete( p );
//}


#elif defined(GLES2_ENABLED)

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <X11/Xatom.h>
#include <X11/Xutil.h>
#include <GLES2/gl2.h>
#include <EGL/eglext_brcm.h>


#define GLX_CONTEXT_MAJOR_VERSION_ARB		0x2091
#define GLX_CONTEXT_MINOR_VERSION_ARB		0x2092

/*typedef GLXContext (*GLXCREATECONTEXTATTRIBSARBPROC)(Display*, GLXFBConfig, GLXContext, Bool, const int*);

struct ContextGL_X11_Private { 

	::GLXContext glx_context;
};*/

typedef struct Rect {
    float orgx;
    float orgy;
    float sizex;
    float sizey;
} Rect;
//// X windows globals
static Display *Xdsp;
static Window Xwin;
static XWindowAttributes Xgwa;
static GC Xgc; 
static XImage *Ximage = 0;
static Rect Xwindowrect;

//// EGL globals
static EGLDisplay egl_display;
static EGLContext egl_context;
static EGLSurface egl_surface;

//// Rect support

#define RectGetMinX(r) ((r).orgx)
#define RectGetMinY(r) ((r).orgy)
#define RectGetMaxX(r) ((r).orgx + (r).sizex)
#define RectGetMaxY(r) ((r).orgy + (r).sizey)
//#define MIN(a, b)       (((a) < (b)) ? (a) : (b))
//#define MAX(a, b)       (((a) > (b)) ? (a) : (b))

Rect RectMake(float ox, float oy, float width, float height)
{
    Rect r;

    r.orgx = ox;
    r.orgy = oy;
    r.sizex = width;
    r.sizey = height;
    return r;
}

Rect RectNull()
{
    return RectMake(-1000, -1000, -1000, -1000);
}

int RectIsNull(Rect r)
{
    if(r.orgx != -1000)
        return 0;
    if(r.orgy != -1000)
        return 0;
    if(r.sizex != -1000)
        return 0;
    if(r.sizey != -1000)
        return 0;
    return 1;
}

Rect RectIntersection(Rect a, Rect b)
{
    float minx, maxx, miny, maxy;

    if(RectIsNull(a)) return RectNull();
    if(RectIsNull(b)) return RectNull();
    if(RectGetMinX(a) > RectGetMaxX(b)) return RectNull();
    if(RectGetMinY(a) > RectGetMaxY(b)) return RectNull();
    if(RectGetMinX(b) > RectGetMaxX(a)) return RectNull();
    if(RectGetMinY(b) > RectGetMaxY(a)) return RectNull();
    minx = MAX(RectGetMinX(a),RectGetMinX(b));
    maxx = MIN(RectGetMaxX(a),RectGetMaxX(b));
    miny = MAX(RectGetMinY(a),RectGetMinY(b));
    maxy = MIN(RectGetMaxY(a),RectGetMaxY(b));
    return RectMake(minx, miny, maxx-minx, maxy-miny);
}

Rect RectEvenWidth(Rect r)
{
    int sizex = r.sizex;
    if(sizex & 1) {
        if(r.orgx>0.0)
            r.orgx -= 1.0;
        r.sizex += 1.0;
    }
    return r;
}
void xfixedsize(Display *dsp, Window win, int sizex, int sizey)
{
    XSizeHints *hints = XAllocSizeHints();
    hints->flags = PMinSize ;//| PMaxSize;
    hints->min_width = sizex;
    //hints->max_width = sizex;
    hints->min_height = sizey;
    //hints->max_height = sizey;
    XSetWMNormalHints(dsp, win, hints);
}



void ContextGL_X11::release_current() {

	eglMakeCurrent(egl_display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
}

void ContextGL_X11::make_current() {

	eglMakeCurrent(egl_display, egl_surface, egl_surface, egl_context);
}
void ContextGL_X11::swap_buffers() {
	static unsigned int *pixbuffer;
    static int pixbufferbytes;
    int orgx, orgy, sizex, sizey;
    int winsizex, winsizey;
	Rect copyrect = Xwindowrect;
    copyrect = RectIntersection(Xwindowrect, copyrect);
    if(RectIsNull(copyrect))
	return;
    copyrect = RectEvenWidth(copyrect);	// force copy rect to be even
    winsizex = Xwindowrect.sizex;
    winsizey = Xwindowrect.sizey;
    if(winsizex & 1) {
	fprintf(stderr, "Error: window size x must be even\n");
	return;
    }

    int nbytes = winsizex * winsizey * 4;
    if(pixbufferbytes != nbytes) {
        if(pixbuffer)
            free(pixbuffer);
        pixbuffer = (unsigned int *)malloc(nbytes);
        pixbufferbytes = nbytes;
    }
    glFinish();
    glReadPixels(copyrect.orgx, copyrect.orgy, copyrect.sizex, copyrect.sizey, 
						GL_RGBA, GL_UNSIGNED_BYTE, pixbuffer);
    unsigned int *pixptr = pixbuffer;
    int count, x, y;
    for(y=0; y<copyrect.sizey; y++) {
        int srcy = copyrect.sizey-1-y;		// flip y for X windows
        unsigned int *dest = ((unsigned int*)(&(Ximage->data[0])))+(srcy*(winsizex/2));
        count = copyrect.sizex/2;
        while(count--) {
            unsigned int src0 = pixptr[0];
            unsigned int src1 = pixptr[1];
            pixptr += 2;

            *dest++ = ((src1 & 0xf8)      <<24) |
                      ((src1 & (0xfc<< 8))<<11) |
                      ((src1 & (0xf8<<16))>> 3) |
                      ((src0 & 0xf8)      << 8) |
                      ((src0 & (0xfc<< 8))>> 5) |
                      ((src0 & (0xf8<<16))>>19);
        }
    }
    orgx = copyrect.orgx;
    orgy = winsizey-(copyrect.orgy+copyrect.sizey);
    sizex = copyrect.sizex;
    sizey = copyrect.sizey;
    XPutImage(Xdsp, Xwin, Xgc, Ximage, 0, 0, orgx, orgy, sizex, sizey);
	//eglSwapBuffers(egl_display, egl_surface);
}

const char* EGLErrorString()
{
	EGLint nErr = eglGetError();
	switch(nErr){
		case EGL_SUCCESS:
			return "EGL_SUCCESS";
		case EGL_BAD_DISPLAY:
			return "EGL_BAD_DISPLAY";
		case EGL_NOT_INITIALIZED:
			return "EGL_NOT_INITIALIZED";
		case EGL_BAD_ACCESS:
			return "EGL_BAD_ACCESS";
		case EGL_BAD_ALLOC:
			return "EGL_BAD_ALLOC";
		case EGL_BAD_ATTRIBUTE:
			return "EGL_BAD_ATTRIBUTE";
		case EGL_BAD_CONFIG:
			return "EGL_BAD_CONFIG";
		case EGL_BAD_CONTEXT:
			return "EGL_BAD_CONTEXT";
		case EGL_BAD_CURRENT_SURFACE:
			return "EGL_BAD_CURRENT_SURFACE";
		case EGL_BAD_MATCH:
			return "EGL_BAD_MATCH";
		case EGL_BAD_NATIVE_PIXMAP:
			return "EGL_BAD_NATIVE_PIXMAP";
		case EGL_BAD_NATIVE_WINDOW:
			return "EGL_BAD_NATIVE_WINDOW";
		case EGL_BAD_PARAMETER:
			return "EGL_BAD_PARAMETER";
		case EGL_BAD_SURFACE:
			return "EGL_BAD_SURFACE";
		default:
			return "unknown";
	}
}

Error ContextGL_X11::initialize()
{
	Xdsp = x11_display;
    if (Xdsp == NULL) {
        fputs("cannot connect to X server\n", stderr);
        return OK;
    }
    Window root = DefaultRootWindow(Xdsp);

    XSetWindowAttributes swa;
    swa.event_mask = ExposureMask | 
                     KeyPressMask | 
                     KeyReleaseMask | 
                     PointerMotionMask | 
                     ButtonMotionMask | 
                     ButtonPressMask | 
                     ButtonReleaseMask;
    Xwin = XCreateWindow(Xdsp, root, 0, 0, OS::get_singleton()->get_video_mode().width, OS::get_singleton()->get_video_mode().height, 0, CopyFromParent, 
                                InputOutput, CopyFromParent, CWEventMask, &swa);
    XMapWindow(Xdsp, Xwin); // make the window visible on the screen
    XStoreName(Xdsp, Xwin, "GL test"); // give the window a name
    xfixedsize(Xdsp, Xwin, OS::get_singleton()->get_video_mode().width, OS::get_singleton()->get_video_mode().height); // force fixed window size

    //// create an X image for drawing to the screen
    Xgc = DefaultGC(Xdsp, 0);
    XGetWindowAttributes(Xdsp, Xwin, &Xgwa);
    char *buf = (char *)malloc(Xgwa.width*Xgwa.height*2);
    Ximage = XCreateImage(Xdsp, 
                DefaultVisual(Xdsp, DefaultScreen(Xdsp)),
                DefaultDepth(Xdsp, DefaultScreen(Xdsp)),
                ZPixmap, 0, buf, Xgwa.width, Xgwa.height, 16, 0);
    Xwindowrect = RectMake(0,0,Xgwa.width,Xgwa.height);
    
    x11_window = Xwin;
    
    
    
EGLint attr[] = { // some attributes to set up our egl-interface
        EGL_RED_SIZE, 8,
        EGL_GREEN_SIZE, 8,
        EGL_BLUE_SIZE, 8,
        EGL_ALPHA_SIZE, 8,
        EGL_DEPTH_SIZE, 16,
        EGL_SURFACE_TYPE,
        EGL_PIXMAP_BIT | EGL_OPENGL_ES2_BIT,
        EGL_NONE
    };
    EGLint num_config;
    EGLConfig ecfg;

    if (!eglChooseConfig(egl_display, attr, &ecfg, 1, &num_config)) {
        fprintf(stderr, "Failed to choose config (eglError: %s)\n", eglGetError());
        return OK;
    }
    if (num_config != 1) {
        fprintf(stderr, "Didn't get exactly one config, but %d\n", num_config);
        return OK;
    }

    EGLint rt;
    EGLint pixel_format = EGL_PIXEL_FORMAT_ARGB_8888_BRCM;
    eglGetConfigAttrib(egl_display, ecfg, EGL_RENDERABLE_TYPE, &rt);
    if (rt & EGL_OPENGL_ES_BIT) {
        pixel_format |= EGL_PIXEL_FORMAT_RENDER_GLES_BRCM;
        pixel_format |= EGL_PIXEL_FORMAT_GLES_TEXTURE_BRCM;
    }
    if (rt & EGL_OPENGL_ES2_BIT) {
        pixel_format |= EGL_PIXEL_FORMAT_RENDER_GLES2_BRCM;
        pixel_format |= EGL_PIXEL_FORMAT_GLES2_TEXTURE_BRCM;
    }
    if (rt & EGL_OPENVG_BIT) {
        pixel_format |= EGL_PIXEL_FORMAT_RENDER_VG_BRCM;
        pixel_format |= EGL_PIXEL_FORMAT_VG_IMAGE_BRCM;
    }
    if (rt & EGL_OPENGL_BIT) {
        pixel_format |= EGL_PIXEL_FORMAT_RENDER_GL_BRCM;
    }

    EGLint pixmap[5];
    pixmap[0] = 0;
    pixmap[1] = 0;
    pixmap[2] = OS::get_singleton()->get_video_mode().width;
    pixmap[3] = OS::get_singleton()->get_video_mode().height;
    pixmap[4] = pixel_format;
    #define WINDOW_WIDTH (OS::get_singleton()->get_video_mode().width)
    #define WINDOW_HEIGHT (OS::get_singleton()->get_video_mode().height)
    eglCreateGlobalImageBRCM(WINDOW_WIDTH, WINDOW_HEIGHT, pixmap[4], 0, WINDOW_WIDTH*4, pixmap);
    egl_surface = eglCreatePixmapSurface(egl_display, ecfg, pixmap, 0);
    if (egl_surface == EGL_NO_SURFACE) {
        fprintf(stderr, "Unable to create EGL surface (eglError: %s)\n", eglGetError());
        return;
    }

    //// egl-contexts collect all state descriptions needed required for operation
    EGLint ctxattr[] = {
        EGL_CONTEXT_CLIENT_VERSION, 2,
        EGL_NONE
    };
    egl_context = eglCreateContext(egl_display, ecfg, EGL_NO_CONTEXT, ctxattr);
    if (egl_context == EGL_NO_CONTEXT) {
        fprintf(stderr, "Unable to create EGL context (eglError: %s)\n", eglGetError());
        return OK;
    }

    //// associate the egl-context with the egl-surface
    eglMakeCurrent(egl_display, egl_surface, egl_surface, egl_context);
	return OK;
}

int ContextGL_X11::get_window_width() {

	XWindowAttributes xwa;
	XGetWindowAttributes(x11_display,x11_window,&xwa);
	
	return xwa.width;
}
int ContextGL_X11::get_window_height() {
	XWindowAttributes xwa;
	XGetWindowAttributes(x11_display,x11_window,&xwa);
	
	return xwa.height;

}


ContextGL_X11::ContextGL_X11(::Display *p_x11_display,::Window &p_x11_window,const OS::VideoMode& p_default_video_mode,bool p_opengl_3_context) : x11_window(p_x11_window) {

	default_video_mode=p_default_video_mode;
	x11_display=p_x11_display;
	egl_display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    if (egl_display == EGL_NO_DISPLAY) {
        fputs("Got no EGL display.\n", stderr);
        return;
    }
    if (!eglInitialize(egl_display, NULL, NULL)) {
        fputs("Unable to initialize EGL\n", stderr);
        return;
    }
	
	opengl_3_context=p_opengl_3_context;
	
	double_buffer=false;
	direct_render=false;
	glx_minor=glx_major=0;
	/*p = memnew( ContextGL_X11_Private );
	p->glx_context=0;*/
}


ContextGL_X11::~ContextGL_X11() {

	//memdelete( p );
}

#elif defined(GLES1_ENABLED)

//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>
//#include <GLES/gl.h>


//#define GLX_CONTEXT_MAJOR_VERSION_ARB		0x2091
//#define GLX_CONTEXT_MINOR_VERSION_ARB		0x2092

///*typedef GLXContext (*GLXCREATECONTEXTATTRIBSARBPROC)(Display*, GLXFBConfig, GLXContext, Bool, const int*);

//struct ContextGL_X11_Private { 

	//::GLXContext glx_context;
//};*/


//void ContextGL_X11::release_current() {

	//eglMakeCurrent(egl_display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
//}

//void ContextGL_X11::make_current() {

	//eglMakeCurrent(egl_display, egl_surface, egl_surface, egl_context);
//}
//void ContextGL_X11::swap_buffers() {

	//eglSwapBuffers(egl_display, egl_surface);
//}

//Error ContextGL_X11::initialize() {

	////_______________________________________________________________________________________
	//// code from http://pandorawiki.org/GLESGAE#GLES1Context.h
	//printf("I'm creating a XWindow!");
	//// Create the actual window and store the pointer.
	//x11_window = XCreateWindow(x11_display			// Pointer to the Display
				//, RootWindow(x11_display,DefaultScreen(x11_display))	// Parent Window
				//, 0				// X of top-left corner
				//, 0				// Y of top-left corner
				//, OS::get_singleton()->get_video_mode().width				// requested width
				//, OS::get_singleton()->get_video_mode().height			// requested height
				//, 0				// border width
				//, CopyFromParent		// window depth
				//, CopyFromParent		// window class - InputOutput / InputOnly / CopyFromParent
				//, CopyFromParent		// visual type
				//, 0				// value mask 
				//, 0);				// attributes
						
	//// Map the window to the display.
	//XMapWindow(x11_display, x11_window);
	
	//printf("I'm setting up a EGL Display!\n");
	//// Initialise the EGL Display
	//if (0 == eglInitialize(egl_display, NULL, NULL)) {
		//printf("failed to init egl..\n");
	//}

	//// Now we want to find an EGL Surface that will work for us...
	//EGLint eglAttribs[] = {
		//EGL_BUFFER_SIZE, 16			// 16bit Colour Buffer
    //,   EGL_DEPTH_SIZE, 24
	//,	EGL_NONE
	//};

	//EGLConfig  eglConfig;
	//EGLint     numConfig;
	//if (0 == eglChooseConfig(egl_display, eglAttribs, &eglConfig, 1, &numConfig)) {
		//printf("failed to get context..\n");
	//}

	//// Create the actual surface based upon the list of configs we've just gotten...
	//egl_surface = eglCreateWindowSurface(egl_display, eglConfig, reinterpret_cast<EGLNativeWindowType>(/*x11_window.getWindow()*/x11_window), NULL);
	//if (EGL_NO_SURFACE == egl_surface) {
		//printf("failed to get surface..\n");
	//}

	//// Setup the EGL context
	//EGLint contextAttribs[] = {
		//EGL_CONTEXT_CLIENT_VERSION, 1
	//,	EGL_NONE
	//};

	//// Create our Context
	//egl_context = eglCreateContext (egl_display, eglConfig, EGL_NO_CONTEXT, contextAttribs);
	//if (EGL_NO_CONTEXT == egl_context) {
		//printf("failed to get context...\n");
	//}

	//// Bind the Display, Surface and Contexts together
	//eglMakeCurrent(egl_display, egl_surface, egl_surface, egl_context);
	

	//// Setup the viewport
	//glViewport(0, 0, default_video_mode.width, default_video_mode.height);
	////______________________________________________________________________________________
	//printf("done!\n");
	//return OK;
//}

//int ContextGL_X11::get_window_width() {

	//XWindowAttributes xwa;
	//XGetWindowAttributes(x11_display,x11_window,&xwa);
	
	//return xwa.width;
//}
//int ContextGL_X11::get_window_height() {
	//XWindowAttributes xwa;
	//XGetWindowAttributes(x11_display,x11_window,&xwa);
	
	//return xwa.height;

//}


//ContextGL_X11::ContextGL_X11(::Display *p_x11_display,::Window &p_x11_window,const OS::VideoMode& p_default_video_mode,bool p_opengl_3_context) : x11_window(p_x11_window) {

	//default_video_mode=p_default_video_mode;
	//x11_display=p_x11_display;
	//egl_display=eglGetDisplay((EGLNativeDisplayType)x11_display);
	
	//opengl_3_context=p_opengl_3_context;
	
	//double_buffer=false;
	//direct_render=false;
	//glx_minor=glx_major=0;
	///*p = memnew( ContextGL_X11_Private );
	//p->glx_context=0;*/
//}


//ContextGL_X11::~ContextGL_X11() {

	////memdelete( p );
//}

#endif
#endif
