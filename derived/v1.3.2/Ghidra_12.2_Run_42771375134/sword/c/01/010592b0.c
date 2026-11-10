/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010592b0; name: FUN_010592b0
 */


void FUN_010592b0(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x268);
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar4 + 0xb0);
    *(undefined8 *)(lVar4 + 0xb0) = 0;
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar4 = *(long *)(lVar3 + 0x10);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = *(long *)(lVar4 + 0xb0);
    *(long *)(lVar4 + 0xb0) = lVar1;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x18))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x01059348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


