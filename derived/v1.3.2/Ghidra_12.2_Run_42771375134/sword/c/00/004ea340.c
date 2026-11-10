/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ea340; name: FUN_004ea340
 */


void FUN_004ea340(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02713758 + 0x10);
  lVar3 = 0;
  if (param_1[2] != 0) {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar3 = param_1[2];
  }
  puVar2 = PTR_DAT_02713628;
  lVar4 = param_1[3];
  plVar1 = (long *)(PTR_DAT_02713628 + 0x10);
  if (*(long **)(PTR_DAT_02713628 + 0x10) != param_1) {
    plVar1 = (long *)(lVar4 + 0x10);
  }
  *plVar1 = lVar3;
  if (*(long **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar4;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    return;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


