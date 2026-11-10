/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae7a0; name: FUN_014ae7a0
 */


void FUN_014ae7a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  iVar1 = FUN_00884820(plVar3);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,iVar4);
      FUN_014ae840(uVar2,uVar2);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014ae824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  return;
}


