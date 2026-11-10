/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00496070; name: FUN_00496070
 */


void FUN_00496070(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_02713320;
  *param_1 = (long)(PTR_DAT_02713318 + 0x10);
  param_1[1] = 0;
  lVar3 = *(long *)(puVar2 + 8);
  param_1[2] = 0;
  param_1[3] = lVar3;
  plVar1 = (long *)(puVar2 + 0x10);
  if (*(long *)(puVar2 + 0x10) != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  *(long **)(puVar2 + 8) = param_1;
  *(int *)puVar2 = *(int *)puVar2 + 1;
  puVar2 = PTR_DAT_02713328;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(byte *)((long)param_1 + 0x3a) = *(byte *)((long)param_1 + 0x3a) & 0xf8;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
  return;
}


