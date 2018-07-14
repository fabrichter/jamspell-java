/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.davipb.jamspell.jni;

public final class StringVector {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  public StringVector(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  public static long getCPtr(StringVector obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        JamspellJNI.delete_StringVector(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public StringVector() {
    this(JamspellJNI.new_StringVector__SWIG_0(), true);
  }

  public StringVector(long n) {
    this(JamspellJNI.new_StringVector__SWIG_1(n), true);
  }

  public long size() {
    return JamspellJNI.StringVector_size(swigCPtr, this);
  }

  public long capacity() {
    return JamspellJNI.StringVector_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    JamspellJNI.StringVector_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return JamspellJNI.StringVector_isEmpty(swigCPtr, this);
  }

  public void clear() {
    JamspellJNI.StringVector_clear(swigCPtr, this);
  }

  public void add(String x) {
    JamspellJNI.StringVector_add(swigCPtr, this, x);
  }

  public String get(int i) {
    return JamspellJNI.StringVector_get(swigCPtr, this, i);
  }

  public void set(int i, String val) {
    JamspellJNI.StringVector_set(swigCPtr, this, i, val);
  }

}
