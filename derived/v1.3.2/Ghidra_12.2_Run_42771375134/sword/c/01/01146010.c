/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01146010; name: FUN_01146010
 */


void FUN_01146010(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *(long *)(param_1 + 0x88);
  lVar2 = *(long *)(lVar1 + 0x418);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_008859b0(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar1 = *(long *)(param_1 + 0x88);
  }
  lVar2 = *(long *)(lVar1 + 0x420);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_008859b0(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar1 = *(long *)(param_1 + 0x88);
  }
  lVar2 = *(long *)(lVar1 + 0x428);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_008859b0(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar1 = *(long *)(param_1 + 0x88);
  }
  lVar2 = *(long *)(lVar1 + 0x430);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_008859b0(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar1 = *(long *)(param_1 + 0x88);
  }
  lVar1 = *(long *)(lVar1 + 0x438);
  if (lVar1 == 0) {
    return;
  }
  plVar3 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_008859b0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x01146144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


