/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <device.h>
#include <kernel.h>
#include <sys/printk.h>
#include "unity_fixture.h"

#define RUN_UNIT_TESTS  1
#define RUN_APPLICATION 0

#if RUN_UNIT_TESTS
  static void RunAllTests(void)
  {
    RUN_TEST_GROUP(TestGroup1);
    RUN_TEST_GROUP(TestGroup2);
  } 
  
  static void RunAllTests_1(void)
  {
    RUN_TEST_GROUP(TestGroup1);
  } 

  static void RunAllTests_2(void)
  {
    RUN_TEST_GROUP(TestGroup2);
  } 
#endif


void main() {
  
  int argc = 2;
  const char * argv[] = {"dummy_arg" , "-v"};

  #if RUN_UNIT_TESTS
    UnityMain(argc, argv, RunAllTests);
    k_msleep(2000);
    UnityMain(argc, argv, RunAllTests_1);
    k_msleep(2000);
    UnityMain(argc, argv, RunAllTests_2);
  #endif
  
  #if RUN_APPLICATION
    while(1) { 
      printk(" Hi Champ !!\n");
      k_msleep(1000);
    }
  #endif
}
