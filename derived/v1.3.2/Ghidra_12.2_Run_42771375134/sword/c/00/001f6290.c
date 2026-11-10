/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f6290; name: FUN_001f6290
 */


void FUN_001f6290(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[9];
  *param_1 = (long)(PTR_DAT_02710c30 + 0x10);
  if (((lVar2 != 0) && (-1 < (int)*(uint *)((long)param_1 + 0x54))) &&
     ((*(uint *)((long)param_1 + 0x54) & 0x7fffffff) != 0)) {
                    /* try { // try from 001f62c8 to 001f62db has its CatchHandler @ 001f63a8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x44)) &&
      ((*(uint *)((long)param_1 + 0x44) & 0x7fffffff) != 0)) && (lVar2 = param_1[7], lVar2 != 0)) {
                    /* try { // try from 001f62f4 to 001f6307 has its CatchHandler @ 001f63a4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x34)) &&
      ((*(uint *)((long)param_1 + 0x34) & 0x7fffffff) != 0)) && (lVar2 = param_1[5], lVar2 != 0)) {
                    /* try { // try from 001f6320 to 001f6333 has its CatchHandler @ 001f63a0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x24)) &&
      ((*(uint *)((long)param_1 + 0x24) & 0x7fffffff) != 0)) && (lVar2 = param_1[3], lVar2 != 0)) {
                    /* try { // try from 001f634c to 001f635f has its CatchHandler @ 001f639c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x14)) &&
      ((*(uint *)((long)param_1 + 0x14) & 0x7fffffff) != 0)) && (lVar2 = param_1[1], lVar2 != 0)) {
                    /* try { // try from 001f6378 to 001f638b has its CatchHandler @ 001f6398 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


