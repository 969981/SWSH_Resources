/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cb780; name: FUN_003cb780
 */


void FUN_003cb780(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x224) != 0) {
                    /* try { // try from 003cb79c to 003cb7a3 has its CatchHandler @ 003cb83c */
    FUN_003d1480(param_1);
  }
  if (*(uint *)(param_1 + 0x218) != 0) {
    plVar3 = *(long **)(param_1 + 0x210);
    lVar4 = (ulong)*(uint *)(param_1 + 0x218) << 3;
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
                    /* try { // try from 003cb7bc to 003cb7cf has its CatchHandler @ 003cb840 */
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
      }
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((-1 < (int)*(uint *)(param_1 + 0x21c)) && ((*(uint *)(param_1 + 0x21c) & 0x7fffffff) != 0)) {
    lVar4 = *(long *)(param_1 + 0x210);
    if (param_1 + 8 == lVar4) {
      *(undefined1 *)(param_1 + 0x208) = 0;
      return;
    }
    if (lVar4 != 0) {
                    /* try { // try from 003cb800 to 003cb813 has its CatchHandler @ 003cb838 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4);
    }
  }
  return;
}


