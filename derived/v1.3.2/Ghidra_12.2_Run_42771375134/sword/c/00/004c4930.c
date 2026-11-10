/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4930; name: FUN_004c4930
 */


int FUN_004c4930(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  
  iVar4 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar4;
  puVar5 = PTR_DAT_02712a90;
  if (iVar4 == 0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712a90;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_004c2ce0();
    }
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    }
    piVar6 = *(int **)(param_1 + 0x10);
    if (piVar6 != (int *)0x0) {
      iVar2 = *piVar6;
      *piVar6 = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        uVar3 = *(undefined4 *)puVar5;
        FUN_004c4590(piVar6);
        FUN_00404870(uVar3,piVar6);
      }
    }
    FUN_00404870(uVar1,param_1);
  }
  return iVar4;
}


