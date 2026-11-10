/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf6fb0; name: FUN_00cf6fb0
 */


void FUN_00cf6fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar3 + 0x2e8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5d8),param_3,lVar1);
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 == 0) {
    FUN_0167cce0(0,param_2,10);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0167cce0(lVar3,param_2,10);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cf707c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


