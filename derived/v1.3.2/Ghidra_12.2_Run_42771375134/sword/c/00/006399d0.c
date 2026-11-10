/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006399d0; name: FUN_006399d0
 */


void FUN_006399d0(long *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_027146d0 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[3] = param_3;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[4] = lVar2;
  }
  param_1[10] = param_4;
  FUN_006965e0(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar1 = PTR_DAT_02714388;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 8;
  param_1[0x18] = 0;
  param_1[0x13] = (long)(puVar1 + 0x10);
  param_1[0x14] = 0;
  lVar2 = FUN_005bc6f0();
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x14] = lVar2;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0;
  puVar1 = PTR_DAT_027146d8 + 0x10;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2a] = (long)puVar1;
  param_1[0x2b] = param_2;
  param_1[0x2e] = 0x10;
  param_1[0x2f] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x2b] = lVar2;
  }
  puVar1 = PTR_DAT_027146e0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0x50;
  param_1[0x39] = 0;
  param_1[0x34] = (long)(puVar1 + 0x10);
  param_1[0x35] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x35] = lVar2;
    return;
  }
  return;
}


