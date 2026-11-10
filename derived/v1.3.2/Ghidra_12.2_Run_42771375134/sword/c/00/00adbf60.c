/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adbf60; name: FUN_00adbf60
 */


void FUN_00adbf60(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x3f8);
  if (lVar1 == 0) {
    FUN_01052a10(0,*(undefined8 *)(param_1 + 0x5d0));
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_01052a10(lVar1,*(undefined8 *)(param_1 + 0x5d0));
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  FUN_007277f0(*(undefined8 *)(param_1 + 0x5d0),1);
  return;
}


