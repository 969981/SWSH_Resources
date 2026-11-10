/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ecc70; name: FUN_005ecc70
 */


void FUN_005ecc70(long *param_1,long param_2)

{
  long lVar1;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  if (param_2 == 0) {
    lVar1 = FUN_005bc740();
    if (lVar1 == 0) {
      lVar1 = FUN_005bc6f0();
    }
    else {
      lVar1 = FUN_005bc740();
    }
    *param_1 = lVar1;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    lVar1 = FUN_005bc740();
    if (lVar1 == 0) {
      lVar1 = FUN_005bc6f0();
    }
    else {
      lVar1 = FUN_005bc740();
    }
    param_1[6] = lVar1;
  }
  else {
    param_1[6] = param_2;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  FUN_005c47b0(param_1,"ShaderPackage");
  FUN_005c47b0(param_1 + 6,&DAT_01d03998);
  *(undefined2 *)((long)param_1 + 0x66) = 0;
  *(undefined4 *)((long)param_1 + 0x62) = 0;
  return;
}


