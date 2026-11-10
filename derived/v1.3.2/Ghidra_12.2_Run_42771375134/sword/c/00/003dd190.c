/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dd190; name: FUN_003dd190
 */


void FUN_003dd190(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((-1 < (int)*(uint *)((long)param_1 + 0x3c)) &&
      ((*(uint *)((long)param_1 + 0x3c) & 0x7fffffff) != 0)) && (lVar2 = param_1[6], lVar2 != 0)) {
                    /* try { // try from 003dd1b8 to 003dd1cb has its CatchHandler @ 003dd268 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x2c)) &&
      ((*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) != 0)) && (lVar2 = param_1[4], lVar2 != 0)) {
                    /* try { // try from 003dd1e4 to 003dd1f7 has its CatchHandler @ 003dd264 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1c)) &&
      ((*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) != 0)) && (lVar2 = param_1[2], lVar2 != 0)) {
                    /* try { // try from 003dd210 to 003dd223 has its CatchHandler @ 003dd260 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xc)) &&
      ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) != 0)) && (lVar2 = *param_1, lVar2 != 0)) {
                    /* try { // try from 003dd23c to 003dd24f has its CatchHandler @ 003dd25c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


