/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498000; name: FUN_00498000
 */


undefined8 FUN_00498000(long param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == 0) {
    return 2;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_2 / uVar1;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8);
  if (plVar5 == (long *)0x0) {
    return 2;
  }
  while (plVar5[1] != param_2) {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return 2;
    }
  }
  if ((*(int *)(plVar5[2] + 0x40) == 0) || (lVar3 = **(long **)(plVar5[2] + 0x38), lVar3 == 0)) {
    uVar4 = 2;
  }
  else {
    FUN_00496290(lVar3,param_3,param_4,param_5);
    uVar4 = 1;
  }
  if (((param_4 == 0) || (*(uint *)(plVar5[2] + 0x40) < 3)) ||
     (lVar3 = *(long *)(*(long *)(plVar5[2] + 0x38) + 0x10), lVar3 == 0)) {
    return uVar4;
  }
  FUN_0042be50(lVar3,param_3);
  return 1;
}


