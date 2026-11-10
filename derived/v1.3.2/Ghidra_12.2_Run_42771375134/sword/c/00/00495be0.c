/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00495be0; name: FUN_00495be0
 */


void FUN_00495be0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_02712f28;
  *param_1 = (long)(PTR_DAT_02713308 + 0x10);
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
  puVar2 = PTR_DAT_02713310;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


