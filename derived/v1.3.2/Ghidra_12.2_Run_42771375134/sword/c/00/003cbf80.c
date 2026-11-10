/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cbf80; name: FUN_003cbf80
 */


void FUN_003cbf80(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((-1 < (int)*(uint *)((long)param_1 + 0xc)) &&
      ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) != 0)) && (lVar2 = *param_1, lVar2 != 0)) {
                    /* try { // try from 003cbfa4 to 003cbfb7 has its CatchHandler @ 003cbfc4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


