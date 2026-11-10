/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d28c0; name: FUN_003d28c0
 */


void FUN_003d28c0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((-1 < (int)*(uint *)(param_1 + 0x214)) && ((*(uint *)(param_1 + 0x214) & 0x7fffffff) != 0)) {
    lVar2 = *(long *)(param_1 + 0x208);
    if (param_1 == lVar2) {
      *(undefined1 *)(param_1 + 0x200) = 0;
      return;
    }
    if (lVar2 != 0) {
                    /* try { // try from 003d28ec to 003d28ff has its CatchHandler @ 003d291c */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
  }
  return;
}


