/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a84fa0; name: FUN_00a84fa0
 */


void FUN_00a84fa0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x4a8);
  lVar2 = *(long *)(param_1 + 0x3f8);
  if (lVar2 == 0) {
    FUN_00a911e0(uVar1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x4c8);
    lVar2 = *(long *)(param_1 + 0x400);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00a911e0(uVar1,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x4c8);
    lVar2 = *(long *)(param_1 + 0x400);
  }
  if (lVar2 == 0) {
    FUN_00a911e0(uVar1,0);
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_00a911e0(uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00a85034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


