/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b23e0; name: FUN_003b23e0
 */


void FUN_003b23e0(long *param_1)

{
  uint uVar1;
  short sVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if ((plVar3 == (long *)0x0) ||
     (sVar2 = (short)plVar3[1] + -1, *(short *)(plVar3 + 1) = sVar2, sVar2 != 0)) {
    uVar1 = *(uint *)((long)param_1 + 0x1c);
  }
  else {
    (**(code **)(*plVar3 + 8))();
    uVar1 = *(uint *)((long)param_1 + 0x1c);
  }
  if (((-1 < (int)uVar1) && ((uVar1 & 0x7fffffff) != 0)) && (lVar4 = param_1[2], lVar4 != 0)) {
                    /* try { // try from 003b2424 to 003b2437 has its CatchHandler @ 003b245c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4);
  }
  return;
}


