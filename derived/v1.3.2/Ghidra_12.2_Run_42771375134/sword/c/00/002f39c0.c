/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f39c0; name: FUN_002f39c0
 */


void FUN_002f39c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_003ff990(*param_1);
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 002f39e0 to 002f39f3 has its CatchHandler @ 002f3a00 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


