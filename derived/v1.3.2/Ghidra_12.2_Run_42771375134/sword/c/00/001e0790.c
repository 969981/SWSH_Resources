/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e0790; name: FUN_001e0790
 */


long FUN_001e0790(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  byte local_38 [8];
  byte local_28 [8];
  
  plVar1 = *(long **)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x18);
  if ((plVar1 == (long *)0x0) ||
     ((**(code **)(*plVar1 + 0x68))(local_28,plVar1), (local_28[0] >> 3 & 1) != 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  if ((plVar2 == (long *)0x0) ||
     ((**(code **)(*plVar2 + 0x68))(local_38,plVar2), (local_38[0] >> 3 & 1) != 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if ((plVar1 == (long *)0x0) || (lVar3 != 0)) {
    if (lVar3 == 0) {
      lVar3 = lVar4;
    }
    if (lVar4 == 0 && plVar2 != (long *)0x0) {
      lVar3 = 0;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}


