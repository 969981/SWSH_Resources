/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f1340; name: FUN_005f1340
 */


void FUN_005f1340(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02714348 + 0xf8;
  *param_1 = (long)(PTR_DAT_02714348 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_005bf710(param_1 + 2);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
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
  *(undefined4 *)(param_1 + 0xb) = 2;
  param_1[10] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  puVar1 = PTR_DAT_02714350 + 0x10;
  param_1[0x11] = 0;
  param_1[0x12] = (long)puVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x20;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  lVar2 = FUN_005bc6f0();
  puVar1 = PTR_DAT_02714358;
  param_1[0x13] = lVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0x20;
  param_1[0x21] = 0;
  param_1[0x1c] = (long)(puVar1 + 0x10);
  param_1[0x1d] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x1d] = lVar2;
  }
  puVar1 = PTR_DAT_02714360;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0x28;
  param_1[0x2b] = 0;
  param_1[0x26] = (long)(puVar1 + 0x10);
  param_1[0x27] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x27] = lVar2;
    return;
  }
  return;
}


