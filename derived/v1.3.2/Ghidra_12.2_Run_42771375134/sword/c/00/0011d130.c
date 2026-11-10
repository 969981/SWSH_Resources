/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011d130; name: FUN_0011d130
 */


void FUN_0011d130(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
                    /* try { // try from 0011d148 to 0011d14f has its CatchHandler @ 0011d1bc */
  lVar1 = FUN_003ffa00(*param_1);
  while (lVar1 != 0) {
    FUN_00120610(lVar1);
    lVar3 = *(long *)(lVar1 + -8);
                    /* try { // try from 0011d160 to 0011d17f has its CatchHandler @ 0011d1c0 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1 - lVar3);
    lVar1 = FUN_003ffa00(*param_1);
  }
  FUN_003ff990(*param_1);
  lVar1 = *param_1;
  if (lVar1 != 0) {
                    /* try { // try from 0011d194 to 0011d1a7 has its CatchHandler @ 0011d1b8 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
  }
  return;
}


