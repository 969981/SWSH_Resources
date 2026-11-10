/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f5eb0; name: FUN_001f5eb0
 */


void FUN_001f5eb0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((-1 < (int)*(uint *)((long)param_1 + 0xc)) &&
      ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) != 0)) && (lVar2 = *param_1, lVar2 != 0)) {
                    /* try { // try from 001f5ed4 to 001f5ee7 has its CatchHandler @ 001f5ef4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


