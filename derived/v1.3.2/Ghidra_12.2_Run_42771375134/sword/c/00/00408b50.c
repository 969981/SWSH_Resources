/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00408b50; name: FUN_00408b50
 */


void FUN_00408b50(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1[9] + -1;
  *(int *)(param_1 + 9) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  if (param_1[2] == 0) {
    FUN_00406bf0(*(undefined8 *)PTR_DAT_02712a60,param_1);
  }
  else {
    FUN_00408a70(param_1[2],param_1);
  }
  uVar1 = *(undefined4 *)PTR_DAT_02712a90;
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_00404870(uVar1,param_1);
  return;
}


