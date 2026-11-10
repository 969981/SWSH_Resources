/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dd510; name: FUN_003dd510
 */


void FUN_003dd510(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x224) != 0) {
                    /* try { // try from 003dd530 to 003dd537 has its CatchHandler @ 003dd5d0 */
    FUN_003ee0e0(param_1);
  }
  if (*(uint *)(param_1 + 0x218) != 0) {
    plVar2 = *(long **)(param_1 + 0x210);
    lVar3 = (ulong)*(uint *)(param_1 + 0x218) << 3;
    do {
      lVar4 = *plVar2;
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + -8);
                    /* try { // try from 003dd554 to 003dd567 has its CatchHandler @ 003dd5d4 */
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar4 - lVar5);
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((-1 < (int)*(uint *)(param_1 + 0x21c)) && ((*(uint *)(param_1 + 0x21c) & 0x7fffffff) != 0)) {
    lVar3 = *(long *)(param_1 + 0x210);
    if (param_1 + 8 == lVar3) {
      *(undefined1 *)(param_1 + 0x208) = 0;
    }
    else if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + -8);
                    /* try { // try from 003dd59c to 003dd5af has its CatchHandler @ 003dd5cc */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 - lVar4);
    }
  }
  return;
}


