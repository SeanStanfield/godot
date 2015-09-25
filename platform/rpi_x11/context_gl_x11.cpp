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



#elif defined(GLES2_ENABLED)

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <X11/Xatom.h>
#include <X11/Xutil.h>
#include <GLES2/gl2.h>
#include <EGL/eglext_brcm.h>



Display *d;
Window w;
XEvent e;
char *msg = "Hello, World!";
int s;



   DISPMANX_ELEMENT_HANDLE_T dispman_element;
   DISPMANX_DISPLAY_HANDLE_T dispman_display;
   DISPMANX_UPDATE_HANDLE_T dispman_update;

void ContextGL_X11::release_current() {
	fprintf(stderr, "releasecurrent\n");
    eglMakeCurrent(egl_display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
}

void ContextGL_X11::make_current() {
	fprintf(stderr, "makecurrent\n");
    eglMakeCurrent(egl_display, egl_surface, egl_surface, egl_context);
}
EGL_DISPMANX_WINDOW_T nativewindow;
void ContextGL_X11::swap_buffers() {
EGLBoolean result;
       eglSwapBuffers(egl_display, egl_surface);
    
   //static EGL_DISPMANX_WINDOW_T nativewindow;
	//if ( nativewindow.)
   //DISPMANX_ELEMENT_HANDLE_T dispman_element;
   //DISPMANX_DISPLAY_HANDLE_T dispman_display;
   //DISPMANX_UPDATE_HANDLE_T dispman_update;
   VC_RECT_T dst_rect;
   VC_RECT_T src_rect;
   
   	if(x11_window != NULL){
	   dst_rect.x = OS::get_singleton()->get_window_position().x;
	   dst_rect.y = OS::get_singleton()->get_window_position().y;
	   dst_rect.width = get_window_width();
	   dst_rect.height = get_window_height();
	   src_rect.x = 0;
	   src_rect.y = 0;
	   src_rect.width = get_window_width() << 16;
	   src_rect.height = get_window_height() << 16;
   }
   else
   {
	   dst_rect.x = 0;
	   dst_rect.y = 0;
	   dst_rect.width = OS::get_singleton()->get_video_mode().width;
	   dst_rect.height = OS::get_singleton()->get_video_mode().height;
	   src_rect.x = 0;
	   src_rect.y = 0;
	   src_rect.width = OS::get_singleton()->get_video_mode().width << 16;
	   src_rect.height = OS::get_singleton()->get_video_mode().height << 16;
	   
	   
	   
	
   }
   
      
        

   //dispman_display = vc_dispmanx_display_open( 0 /* LCD */);
   dispman_update = vc_dispmanx_update_start( 0 );
         
    vc_dispmanx_element_change_attributes ( dispman_update, dispman_element,
      0/*layer*/, 0, 255, &dst_rect,
      &src_rect, DISPMANX_PROTECTION_NONE, (DISPMANX_TRANSFORM_T)0 );
      
   
   //uint32_t screen_width;
   //uint32_t screen_height;
   //graphics_get_display_size(0 /* LCD */, &screen_width, &screen_height);
   
   //nativewindow.element = dispman_element;
   //nativewindow.width = screen_width;
   //nativewindow.height = screen_height;
   vc_dispmanx_update_submit_sync( dispman_update );
   //vc_dispmanx_display_reconfigure( dispman_display, get_window_width(), get_window_height() );
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
   uint32_t screen_width;
   uint32_t screen_height;
Error ContextGL_X11::initialize()
{
	bcm_host_init();
   int success;
   EGLBoolean result;
   EGLint num_config;
   

   //static EGL_DISPMANX_WINDOW_T nativewindow;


   VC_RECT_T dst_rect;
   VC_RECT_T src_rect;

   static const EGLint attribute_list[] =
   {
      EGL_RED_SIZE, 8,
      EGL_GREEN_SIZE, 8,
      EGL_BLUE_SIZE, 8,
      EGL_ALPHA_SIZE, 8,
      EGL_DEPTH_SIZE, 16,
      EGL_SURFACE_TYPE, EGL_WINDOW_BIT | EGL_OPENGL_ES2_BIT,
      EGL_NONE
   };
   
   static const EGLint context_attributes[] = 
   {
      EGL_CONTEXT_CLIENT_VERSION, 2,
      EGL_NONE
   };
   EGLConfig config;


   // get an EGL display connection
   egl_display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
   assert(egl_display!=EGL_NO_DISPLAY);
   assert(glGetError() == 0);

   // initialize the EGL display connection
   result = eglInitialize(egl_display, NULL, NULL);
   assert(EGL_FALSE != result);
   assert(glGetError() == 0);

   // get an appropriate EGL frame buffer configuration
   result = eglChooseConfig(egl_display, attribute_list, &config, 1, &num_config);
   assert(EGL_FALSE != result);
   assert(glGetError() == 0);

 // get an appropriate EGL frame buffer configuration
   result = eglBindAPI(EGL_OPENGL_ES_API);
   assert(EGL_FALSE != result);
   assert(glGetError() == 0);

   // create an EGL rendering context
   egl_context = eglCreateContext(egl_display, config, EGL_NO_CONTEXT, context_attributes);
   assert(egl_context!=EGL_NO_CONTEXT);
   assert(glGetError() == 0);

   // create an EGL window surface
   success = graphics_get_display_size(0 /* LCD */, &screen_width, &screen_height);
   //assert( success >= 0 );

	if(x11_window != NULL){
	   dst_rect.x = OS::get_singleton()->get_window_position().x;
	   dst_rect.y = OS::get_singleton()->get_window_position().y;
	   dst_rect.width = get_window_width();
	   dst_rect.height = get_window_height();
	   src_rect.x = 0;
	   src_rect.y = 0;
	   src_rect.width = get_window_width() << 16;
	   src_rect.height = get_window_height() << 16;
   }
   else
   {
	   dst_rect.x = 0;
	   dst_rect.y = 0;
	   dst_rect.width = OS::get_singleton()->get_video_mode().width;
	   dst_rect.height = OS::get_singleton()->get_video_mode().height;
	   src_rect.x = 0;
	   src_rect.y = 0;
	   src_rect.width = OS::get_singleton()->get_video_mode().width << 16;
	   src_rect.height = OS::get_singleton()->get_video_mode().height << 16;
   }
   
      
        

   dispman_display = vc_dispmanx_display_open( 0 /* LCD */);
   dispman_update = vc_dispmanx_update_start( 0 );
         
   dispman_element = vc_dispmanx_element_add ( dispman_update, dispman_display,
      0/*layer*/, &dst_rect, 0/*src*/,
      &src_rect, DISPMANX_PROTECTION_NONE, 0 /*alpha*/, 0/*clamp*/, 0/*transform*/);
      
   nativewindow.element = dispman_element;
   nativewindow.width = screen_width;
   nativewindow.height = screen_height;
   vc_dispmanx_update_submit_sync( dispman_update );
      
   egl_surface = eglCreateWindowSurface( egl_display, config, &nativewindow, NULL );
   assert(egl_surface != EGL_NO_SURFACE);
   assert(glGetError() == 0);

   // connect the context to the surface
   result = eglMakeCurrent(egl_display, egl_surface, egl_surface, egl_context);
   assert(EGL_FALSE != result);
   assert(glGetError() == 0);
   
   
   
   
   
 
	if (x11_display == NULL)
	{
   x11_display = XOpenDisplay(NULL);
   if (x11_display == NULL) {
      fprintf(stderr, "Cannot open display\n");
      exit(1);
   }
}
 
   s = DefaultScreen(x11_display);
   x11_window = XCreateSimpleWindow(x11_display, RootWindow(x11_display, s), 10, 10, OS::get_singleton()->get_video_mode().width, OS::get_singleton()->get_video_mode().width, 1,
                           BlackPixel(x11_display, s), WhitePixel(x11_display, s));
   XSelectInput(x11_display, x11_window, ExposureMask | KeyPressMask);
   XMapWindow(x11_display, x11_window);
   fprintf(stderr, "Window?\n");
   fprintf(stderr, glGetString(GL_VERSION));
   fprintf(stderr, "\n");
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

    // Release OpenGL resources
   eglMakeCurrent( egl_display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT );
   eglDestroySurface( egl_display, egl_surface );
   eglDestroyContext( egl_display, egl_context );
   eglTerminate( egl_display );
}

#elif defined(GLES1_ENABLED)



#endif
#endif
