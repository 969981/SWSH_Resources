/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b2110; name: FUN_001b2110
 */


void FUN_001b2110(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((-1 < (int)*(uint *)(param_1 + 0x14)) && ((*(uint *)(param_1 + 0x14) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
                    /* try { // try from 001b2134 to 001b2147 has its CatchHandler @ 001b2154 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


