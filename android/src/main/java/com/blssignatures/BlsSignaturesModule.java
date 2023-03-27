package com.blssignatures;

import androidx.annotation.NonNull;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactMethod;

public class BlsSignaturesModule extends BlsSignaturesSpec {
  public static final String NAME = "BlsSignatures";

  BlsSignaturesModule(ReactApplicationContext context) {
    super(context);
  }

  @Override
  @NonNull
  public String getName() {
    return NAME;
  }

  static {
    System.loadLibrary("cpp");
  }

  public static native double nativeMultiply(double a, double b);
  public static native int nativeAdd(int a);

  // Example method
  // See https://reactnative.dev/docs/native-modules-android
  @ReactMethod
  public void multiply(double a, double b, Promise promise) {
    promise.resolve(nativeMultiply(a, b));
  }

  @ReactMethod
  public void add(int a, Promise promise) {
    promise.resolve(nativeAdd(a));
  }
}
