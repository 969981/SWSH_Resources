/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00683c20; name: FUN_00683c20
 */


long FUN_00683c20(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  while( true ) {
    if (lVar4 == 0) {
      return 0;
    }
    plVar3 = *(long **)(lVar4 + 0x20);
    if (((plVar3 != (long *)0x0) &&
        (uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3), (uVar1 & 1) != 0)) &&
       (lVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2), lVar2 != 0)) break;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  return lVar2;
}


