/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d8920; name: FUN_001d8920
 */


void FUN_001d8920(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && ((*(uint *)(param_1 + 0x34) & 0x7fffffff) != 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (param_1 == lVar2) {
      *(undefined1 *)(param_1 + 0x20) = 0;
      return;
    }
    if (lVar2 != 0) {
                    /* try { // try from 001d894c to 001d895f has its CatchHandler @ 001d897c */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
  }
  return;
}


