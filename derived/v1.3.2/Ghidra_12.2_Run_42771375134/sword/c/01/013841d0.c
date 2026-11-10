/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013841d0; name: FUN_013841d0
 */


void FUN_013841d0(long *param_1)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  
  FUN_01383ad0();
  puVar1 = PTR_DAT_02728bd0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xe8);
  param_1[10] = (long)(puVar1 + 0x158);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  puVar1 = PTR_DAT_02710848;
  param_1[0x3c] = 0x3f80000000000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  fVar2 = (float)FUN_01029020(0x40800000,*(undefined8 *)(*(long *)puVar1 + 0x98));
  fVar3 = (float)FUN_01029020(0x40800000,*(undefined8 *)(*(long *)puVar1 + 0x98));
  *(undefined4 *)((long)param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(float *)(param_1 + 0x3d) = (fVar2 + 0.0 + fVar3) * 0.5 + 1.0;
  *(undefined8 *)((long)param_1 + 0x1fb) = 0;
  *(undefined8 *)((long)param_1 + 500) = 0;
  return;
}


