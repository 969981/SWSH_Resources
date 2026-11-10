/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0019e7c0; name: FUN_0019e7c0
 */


void FUN_0019e7c0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + -8);
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2 - lVar3);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_0019e810(param_1,0);
  return;
}


