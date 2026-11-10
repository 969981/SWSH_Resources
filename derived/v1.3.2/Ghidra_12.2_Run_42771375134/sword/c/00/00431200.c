/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431200; name: FUN_00431200
 */


void FUN_00431200(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  puVar2 = PTR_DAT_02712a90;
  if (iVar1 + -1 != 0) {
    return;
  }
  uVar3 = (ulong)(uint)param_1[1];
  if (param_1[1] != 0) {
    uVar4 = 0;
    plVar5 = (long *)(param_1 + 4);
    do {
      if (*plVar5 != 0) {
        FUN_00404870(*(undefined4 *)puVar2);
        uVar3 = (ulong)(uint)param_1[1];
      }
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 4;
    } while (uVar4 < uVar3);
  }
  FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,param_1);
  return;
}


