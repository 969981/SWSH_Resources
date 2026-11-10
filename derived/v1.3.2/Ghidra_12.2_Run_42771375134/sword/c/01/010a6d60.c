/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a6d60; name: FUN_010a6d60
 */


void FUN_010a6d60(long param_1)

{
  long lVar1;
  long *plVar2;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 == 0) {
    FUN_010a6df0(&local_28,0);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_010a6df0(&local_28,lVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


