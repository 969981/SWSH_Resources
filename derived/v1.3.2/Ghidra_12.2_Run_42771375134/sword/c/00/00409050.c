/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409050; name: FUN_00409050
 */


void FUN_00409050(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[6];
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  while (plVar4 != (long *)0x0) {
    lVar1 = *plVar4;
    plVar4 = (long *)plVar4[1];
    (**(code **)(lVar1 + 8))();
  }
  if ((*(byte *)((long)param_1 + 0x5a) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  iVar3 = (int)param_1[9] + -1;
  *(int *)(param_1 + 9) = iVar3;
  if (iVar3 != 0) {
    return;
  }
  if (param_1[2] == 0) {
    FUN_00406bf0(*(undefined8 *)PTR_DAT_02712a60,param_1);
  }
  else {
    FUN_00408a70(param_1[2],param_1);
  }
  uVar2 = *(undefined4 *)PTR_DAT_02712a90;
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_00404870(uVar2,param_1);
  return;
}


