/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8f190; name: FUN_00e8f190
 */


void FUN_00e8f190(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x48))();
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 3) {
    lVar3 = *(long *)(param_1 + 0x4d8);
  }
  else if (iVar1 == 2) {
    lVar3 = *(long *)(param_1 + 0x4d0);
  }
  else {
    if (iVar1 != 1) goto LAB_00e8f210;
    lVar3 = *(long *)(param_1 + 0x4c8);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x4c0);
  *(long *)(param_1 + 0x4c0) = lVar3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
LAB_00e8f210:
                    /* WARNING: Could not recover jumptable at 0x00e8f22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x28))(*(long **)(param_1 + 0x4c0),param_2);
  return;
}


