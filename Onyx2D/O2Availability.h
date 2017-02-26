#pragma once


#if __has_include(<libtiff/include/tiffio.h>)
#   define LIBTIFF_PRESENT 1
#else
#   warning LibTIFF not found
#   define LIBTIFF_PRESENT 0
#endif


#if __has_include(<libpng/include/png.h>)
#   define LIBPNG_PRESENT 1
#else
#   warning libpng not found
#   define LIBPNG_PRESENT 0
#endif


#if __has_include(<zlib-1.2.5/include/zlib.h>)
#   define ZLIB_PRESENT 1
#else
#   warning zlib not found
#   define ZLIB_PRESENT 0
#endif


#if __has_include(<ft2build.h>)
#   define FREETYPE_PRESENT 1
#else
#   warning FreeType not found
#   define FREETYPE_PRESENT 0
#endif
