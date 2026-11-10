/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001960c0; name: FUN_001960c0
 */


void FUN_001960c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[7];
  *param_1 = (long)(PTR_DAT_02710fc8 + 0x10);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + -8);
                    /* try { // try from 001960f0 to 00196103 has its CatchHandler @ 00196140 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2 - lVar3);
  }
  lVar2 = param_1[9];
  if ((lVar2 != 0) && (-1 < (int)param_1[10])) {
                    /* try { // try from 00196114 to 00196127 has its CatchHandler @ 0019613c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  param_1[9] = 0;
  return;
}


