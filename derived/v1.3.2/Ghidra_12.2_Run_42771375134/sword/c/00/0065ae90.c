/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065ae90; name: FUN_0065ae90
 */


void FUN_0065ae90(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02714c28 + 0xe8;
  *param_1 = (long)(PTR_DAT_02714c28 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_00638e20(param_1 + 2);
  param_1[4] = param_3;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[6] = lVar2;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 100) = 7;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}


