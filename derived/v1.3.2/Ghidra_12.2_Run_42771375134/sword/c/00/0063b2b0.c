/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063b2b0; name: FUN_0063b2b0
 */


void FUN_0063b2b0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02714738 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  FUN_0065b7f0(param_1 + 6);
  FUN_00646a40(param_1 + 0x58e,param_2);
  FUN_00643330(param_1 + 0x6f0,param_2);
  param_1[0x74c] = 0;
  *(undefined4 *)(param_1 + 0x74d) = 0;
  param_1[0x77e] = 0;
  param_1[0x77d] = 0;
  FUN_0063b4a0(param_1 + 0x74e);
  puVar1 = PTR_DAT_02714740;
  param_1[0x7c5] = 0;
  param_1[0x7c4] = 0;
  param_1[0x7c3] = 0;
  param_1[0x7c6] = 0x60;
  puVar1 = puVar1 + 0x10;
  param_1[0x7c0] = 0;
  param_1[0x7c1] = 8;
  param_1[0x7cb] = 0;
  param_1[0x7c9] = 0;
  param_1[0x7c8] = 0;
  param_1[0x7c7] = 0;
  param_1[0x7c2] = (long)puVar1;
  param_1[0x7ca] = 0;
  lVar2 = FUN_005bc6f0();
  param_1[0x7cc] = (long)puVar1;
  param_1[0x7c3] = lVar2;
  param_1[1999] = 0;
  param_1[0x7ce] = 0;
  param_1[0x7cd] = 0;
  param_1[2000] = 0x60;
  param_1[0x7d5] = 0;
  param_1[0x7d4] = 0;
  param_1[0x7d3] = 0;
  param_1[0x7d2] = 0;
  param_1[0x7d1] = 0;
  lVar2 = FUN_005bc6f0();
  param_1[0x7d6] = (long)puVar1;
  param_1[0x7cd] = lVar2;
  param_1[0x7d9] = 0;
  param_1[0x7d8] = 0;
  param_1[0x7d7] = 0;
  param_1[0x7da] = 0x60;
  param_1[0x7df] = 0;
  param_1[0x7de] = 0;
  param_1[0x7dd] = 0;
  param_1[0x7dc] = 0;
  param_1[0x7db] = 0;
  lVar2 = FUN_005bc6f0();
  param_1[0x7d7] = lVar2;
  param_1[0x7e0] = 3;
  *(undefined4 *)(param_1 + 0x7e1) = 0xffffffff;
  param_1[0x7e2] = 0;
  *(undefined1 *)(param_1 + 0x7e3) = 0;
  param_1[0x7e7] = 0;
  param_1[0x7e6] = 0;
  param_1[0x7e5] = 0;
  param_1[0x7e4] = 0;
  param_1[0x7e8] = 3;
  *(undefined4 *)(param_1 + 0x7e9) = 0xffffffff;
  param_1[0x7ea] = 0;
  *(undefined1 *)(param_1 + 0x7eb) = 0;
  param_1[0x7f0] = 3;
  param_1[0x7ef] = 0;
  param_1[0x7ee] = 0;
  param_1[0x7ed] = 0;
  param_1[0x7ec] = 0;
  *(undefined4 *)(param_1 + 0x7f1) = 0xffffffff;
  param_1[0x7f2] = 0;
  *(undefined1 *)(param_1 + 0x7f3) = 0;
  param_1[0x7fd] = 0;
  param_1[0x7fc] = 0;
  param_1[0x7fb] = 0;
  param_1[0x7fa] = 0;
  param_1[0x7f9] = 0;
  param_1[0x7f8] = 0;
  param_1[0x7f7] = 0;
  param_1[0x7f6] = 0;
  param_1[0x7f5] = 0;
  param_1[0x7f4] = 0;
  FUN_0065bae0(param_1 + 6);
  FUN_0063b4a0(param_1 + 0x74e);
  return;
}


