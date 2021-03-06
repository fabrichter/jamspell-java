/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include <typeinfo>
#include <stdexcept>


#include <vector>
#include <stdexcept>


#include <string>

SWIGINTERN std::vector< std::wstring >::const_reference std_vector_Sl_std_wstring_Sg__get(std::vector< std::wstring > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_std_wstring_Sg__set(std::vector< std::wstring > *self,int i,std::vector< std::wstring >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }

#include "jamspell/spell_corrector.hpp"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_new_1StringVector_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< std::wstring > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::vector< std::wstring > *)new std::vector< std::wstring >();
  *(std::vector< std::wstring > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_new_1StringVector_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< std::wstring >::size_type arg1 ;
  std::vector< std::wstring > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< std::wstring >::size_type)jarg1; 
  result = (std::vector< std::wstring > *)new std::vector< std::wstring >(arg1);
  *(std::vector< std::wstring > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_StringVector_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< std::wstring > *arg1 = (std::vector< std::wstring > *) 0 ;
  std::vector< std::wstring >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::wstring > **)&jarg1; 
  result = ((std::vector< std::wstring > const *)arg1)->size();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_StringVector_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< std::wstring > *arg1 = (std::vector< std::wstring > *) 0 ;
  std::vector< std::wstring >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::wstring > **)&jarg1; 
  result = ((std::vector< std::wstring > const *)arg1)->capacity();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_StringVector_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< std::wstring > *arg1 = (std::vector< std::wstring > *) 0 ;
  std::vector< std::wstring >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::wstring > **)&jarg1; 
  arg2 = (std::vector< std::wstring >::size_type)jarg2; 
  (arg1)->reserve(arg2);
}


SWIGEXPORT jboolean JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_StringVector_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< std::wstring > *arg1 = (std::vector< std::wstring > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::wstring > **)&jarg1; 
  result = (bool)((std::vector< std::wstring > const *)arg1)->empty();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_StringVector_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< std::wstring > *arg1 = (std::vector< std::wstring > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::wstring > **)&jarg1; 
  (arg1)->clear();
}


SWIGEXPORT void JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_StringVector_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  std::vector< std::wstring > *arg1 = (std::vector< std::wstring > *) 0 ;
  std::vector< std::wstring >::value_type *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::wstring > **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null std::wstring");
    return ;
  }
  const jchar *arg2_pstr = jenv->GetStringChars(jarg2, 0);
  if (!arg2_pstr) return ;
  jsize arg2_len = jenv->GetStringLength(jarg2);
  std::wstring arg2_str;
  if (arg2_len) {
    arg2_str.reserve(arg2_len);
    for (jsize i = 0; i < arg2_len; ++i) {
      arg2_str.push_back((wchar_t)arg2_pstr[i]);
    }
  }
  arg2 = &arg2_str;
  jenv->ReleaseStringChars(jarg2, arg2_pstr);
  
  (arg1)->push_back((std::vector< std::wstring >::value_type const &)*arg2);
}


SWIGEXPORT jstring JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_StringVector_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  std::vector< std::wstring > *arg1 = (std::vector< std::wstring > *) 0 ;
  int arg2 ;
  std::vector< std::wstring >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::wstring > **)&jarg1; 
  arg2 = (int)jarg2; 
  try {
    result = (std::vector< std::wstring >::value_type *) &std_vector_Sl_std_wstring_Sg__get(arg1,arg2);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return 0;
  }
  
  jsize result_len = result->length();
  jchar *conv_buf = new jchar[result_len];
  for (jsize i = 0; i < result_len; ++i) {
    conv_buf[i] = (jchar)(*result)[i];
  }
  jresult = jenv->NewString(conv_buf, result_len);
  delete [] conv_buf; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_StringVector_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3) {
  std::vector< std::wstring > *arg1 = (std::vector< std::wstring > *) 0 ;
  int arg2 ;
  std::vector< std::wstring >::value_type *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::wstring > **)&jarg1; 
  arg2 = (int)jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null std::wstring");
    return ;
  }
  const jchar *arg3_pstr = jenv->GetStringChars(jarg3, 0);
  if (!arg3_pstr) return ;
  jsize arg3_len = jenv->GetStringLength(jarg3);
  std::wstring arg3_str;
  if (arg3_len) {
    arg3_str.reserve(arg3_len);
    for (jsize i = 0; i < arg3_len; ++i) {
      arg3_str.push_back((wchar_t)arg3_pstr[i]);
    }
  }
  arg3 = &arg3_str;
  jenv->ReleaseStringChars(jarg3, arg3_pstr);
  
  try {
    std_vector_Sl_std_wstring_Sg__set(arg1,arg2,(std::wstring const &)*arg3);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_delete_1StringVector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< std::wstring > *arg1 = (std::vector< std::wstring > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< std::wstring > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jboolean JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_NativeSpellCorrector_1loadLangModel(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  NJamSpell::TSpellCorrector *arg1 = (NJamSpell::TSpellCorrector *) 0 ;
  std::string *arg2 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(NJamSpell::TSpellCorrector **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (bool)(arg1)->LoadLangModel((std::string const &)*arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_NativeSpellCorrector_1trainLangModel(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3, jstring jarg4) {
  jboolean jresult = 0 ;
  NJamSpell::TSpellCorrector *arg1 = (NJamSpell::TSpellCorrector *) 0 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  std::string *arg4 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(NJamSpell::TSpellCorrector **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  std::string arg3_str(arg3_pstr);
  arg3 = &arg3_str;
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return 0;
  std::string arg4_str(arg4_pstr);
  arg4 = &arg4_str;
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  result = (bool)(arg1)->TrainLangModel((std::string const &)*arg2,(std::string const &)*arg3,(std::string const &)*arg4);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_NativeSpellCorrector_1getCandidates(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jlong jarg3) {
  jlong jresult = 0 ;
  NJamSpell::TSpellCorrector *arg1 = (NJamSpell::TSpellCorrector *) 0 ;
  std::vector< std::wstring > *arg2 = 0 ;
  size_t arg3 ;
  std::vector< std::wstring > result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(NJamSpell::TSpellCorrector **)&jarg1; 
  arg2 = *(std::vector< std::wstring > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< std::wstring > const & reference is null");
    return 0;
  } 
  arg3 = (size_t)jarg3; 
  result = ((NJamSpell::TSpellCorrector const *)arg1)->GetCandidates((std::vector< std::wstring > const &)*arg2,arg3);
  *(std::vector< std::wstring > **)&jresult = new std::vector< std::wstring >((const std::vector< std::wstring > &)result); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_NativeSpellCorrector_1fixFragment(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jstring jresult = 0 ;
  NJamSpell::TSpellCorrector *arg1 = (NJamSpell::TSpellCorrector *) 0 ;
  std::wstring *arg2 = 0 ;
  std::wstring result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(NJamSpell::TSpellCorrector **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null std::wstring");
    return 0;
  }
  const jchar *arg2_pstr = jenv->GetStringChars(jarg2, 0);
  if (!arg2_pstr) return 0;
  jsize arg2_len = jenv->GetStringLength(jarg2);
  std::wstring arg2_str;
  if (arg2_len) {
    arg2_str.reserve(arg2_len);
    for (jsize i = 0; i < arg2_len; ++i) {
      arg2_str.push_back((wchar_t)arg2_pstr[i]);
    }
  }
  arg2 = &arg2_str;
  jenv->ReleaseStringChars(jarg2, arg2_pstr);
  
  result = ((NJamSpell::TSpellCorrector const *)arg1)->FixFragment((std::wstring const &)*arg2);
  jsize result_len = (&result)->length();
  jchar *conv_buf = new jchar[result_len];
  for (jsize i = 0; i < result_len; ++i) {
    conv_buf[i] = (jchar)result[i];
  }
  jresult = jenv->NewString(conv_buf, result_len);
  delete [] conv_buf; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_NativeSpellCorrector_1fixFragmentNormalized(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jstring jresult = 0 ;
  NJamSpell::TSpellCorrector *arg1 = (NJamSpell::TSpellCorrector *) 0 ;
  std::wstring *arg2 = 0 ;
  std::wstring result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(NJamSpell::TSpellCorrector **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null std::wstring");
    return 0;
  }
  const jchar *arg2_pstr = jenv->GetStringChars(jarg2, 0);
  if (!arg2_pstr) return 0;
  jsize arg2_len = jenv->GetStringLength(jarg2);
  std::wstring arg2_str;
  if (arg2_len) {
    arg2_str.reserve(arg2_len);
    for (jsize i = 0; i < arg2_len; ++i) {
      arg2_str.push_back((wchar_t)arg2_pstr[i]);
    }
  }
  arg2 = &arg2_str;
  jenv->ReleaseStringChars(jarg2, arg2_pstr);
  
  result = ((NJamSpell::TSpellCorrector const *)arg1)->FixFragmentNormalized((std::wstring const &)*arg2);
  jsize result_len = (&result)->length();
  jchar *conv_buf = new jchar[result_len];
  for (jsize i = 0; i < result_len; ++i) {
    conv_buf[i] = (jchar)result[i];
  }
  jresult = jenv->NewString(conv_buf, result_len);
  delete [] conv_buf; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_NativeSpellCorrector_1setPenalty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2, jdouble jarg3) {
  NJamSpell::TSpellCorrector *arg1 = (NJamSpell::TSpellCorrector *) 0 ;
  double arg2 ;
  double arg3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(NJamSpell::TSpellCorrector **)&jarg1; 
  arg2 = (double)jarg2; 
  arg3 = (double)jarg3; 
  (arg1)->SetPenalty(arg2,arg3);
}


SWIGEXPORT void JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_NativeSpellCorrector_1setMaxCandiatesToCheck(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  NJamSpell::TSpellCorrector *arg1 = (NJamSpell::TSpellCorrector *) 0 ;
  size_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(NJamSpell::TSpellCorrector **)&jarg1; 
  arg2 = (size_t)jarg2; 
  (arg1)->SetMaxCandiatesToCheck(arg2);
}


SWIGEXPORT jlong JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_new_1NativeSpellCorrector(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  NJamSpell::TSpellCorrector *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (NJamSpell::TSpellCorrector *)new NJamSpell::TSpellCorrector();
  *(NJamSpell::TSpellCorrector **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_davipb_jamspell_jni_JamSpellJNI_delete_1NativeSpellCorrector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  NJamSpell::TSpellCorrector *arg1 = (NJamSpell::TSpellCorrector *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(NJamSpell::TSpellCorrector **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

