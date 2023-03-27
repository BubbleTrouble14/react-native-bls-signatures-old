package com.blssignatures;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.Promise;

abstract class BlsSignaturesSpec extends ReactContextBaseJavaModule {
  BlsSignaturesSpec(ReactApplicationContext context) {
    super(context);
  }

  public abstract void multiply(double a, double b, Promise promise);

  public abstract void add(int a, Promise promise);
}
