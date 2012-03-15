/*
 *  .file oglplus/enums/ext/debug_output_source.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/debug_output_source.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// DEBUG_SOURCE_API_ARB
API,
/// DEBUG_SOURCE_WINDOW_SYSTEM_ARB
WindowSystem,
/// DEBUG_SOURCE_SHADER_COMPILER_ARB
ShaderCompiler,
/// DEBUG_SOURCE_THIRD_PARTY_ARB
ThirdParty,
/// DEBUG_SOURCE_APPLICATION_ARB
Application,
/// DEBUG_SOURCE_OTHER_ARB
Other,
/// DONT_CARE
DontCare

#else // !OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_DEBUG_SOURCE_API_ARB
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
API = GL_DEBUG_SOURCE_API_ARB
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
WindowSystem = GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEBUG_SOURCE_SHADER_COMPILER_ARB
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
ShaderCompiler = GL_DEBUG_SOURCE_SHADER_COMPILER_ARB
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEBUG_SOURCE_THIRD_PARTY_ARB
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
ThirdParty = GL_DEBUG_SOURCE_THIRD_PARTY_ARB
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEBUG_SOURCE_APPLICATION_ARB
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
Application = GL_DEBUG_SOURCE_APPLICATION_ARB
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEBUG_SOURCE_OTHER_ARB
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
Other = GL_DEBUG_SOURCE_OTHER_ARB
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DONT_CARE
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
DontCare = GL_DONT_CARE
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // !OGLPLUS_DOCUMENTATION_ONLY

