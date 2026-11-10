/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006529a0; name: FUN_006529a0
 */


void FUN_006529a0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02714ae0 + 0xc0;
  *param_1 = (long)(PTR_DAT_02714ae0 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_005bf710(param_1 + 2);
  param_1[4] = param_3;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[5] = lVar2;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x30] = 0;
  FUN_005bcb10(param_1 + 0x31,0);
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  FUN_005be7f0(param_1 + 0x31,0);
  return;
}


