/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d3740; name: FUN_010d3740
 */


void FUN_010d3740(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_28;
  
  FUN_010d3900(param_1,0x5fc20a7668d46cb5,0x70328e8b668b89b2);
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 == 0) {
    local_28 = 0x562547b25f3d358;
    FUN_0167b9b0(0,&local_28,0);
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  local_28 = 0x562547b25f3d358;
  FUN_0167b9b0(lVar1,&local_28,0);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


