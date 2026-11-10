/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00499a80; name: FUN_00499a80
 */


void FUN_00499a80(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02713360 + 0x10);
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  *param_1 = (long)(PTR_DAT_02713350 + 0x10);
  if (param_1[2] == 0) {
    lVar4 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar4 = param_1[2];
  }
  puVar2 = PTR_DAT_02713358;
  lVar3 = param_1[3];
  plVar1 = (long *)(PTR_DAT_02713358 + 0x10);
  if (*(long **)(PTR_DAT_02713358 + 0x10) != param_1) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = lVar4;
  if (*(long **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar3;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


