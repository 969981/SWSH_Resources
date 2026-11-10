/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039b290; name: FUN_0039b290
 */


void FUN_0039b290(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_027126f0 + 0x10);
                    /* try { // try from 0039b2b0 to 0039b2b3 has its CatchHandler @ 0039b3b8 */
  FUN_0039b420();
  if (((-1 < (int)*(uint *)((long)param_1 + 0x2004)) &&
      ((*(uint *)((long)param_1 + 0x2004) & 0x7fffffff) != 0)) &&
     (lVar2 = param_1[0x3ff], lVar2 != 0)) {
                    /* try { // try from 0039b2cc to 0039b2df has its CatchHandler @ 0039b3b4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1ff4)) &&
      ((*(uint *)((long)param_1 + 0x1ff4) & 0x7fffffff) != 0)) &&
     (lVar2 = param_1[0x3fd], lVar2 != 0)) {
                    /* try { // try from 0039b2f8 to 0039b30b has its CatchHandler @ 0039b3b0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1fdc)) &&
      ((*(uint *)((long)param_1 + 0x1fdc) & 0x7fffffff) != 0)) &&
     (lVar2 = param_1[0x3fa], lVar2 != 0)) {
                    /* try { // try from 0039b324 to 0039b337 has its CatchHandler @ 0039b3ac */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1fcc)) &&
      ((*(uint *)((long)param_1 + 0x1fcc) & 0x7fffffff) != 0)) &&
     (lVar2 = param_1[0x3f8], lVar2 != 0)) {
                    /* try { // try from 0039b350 to 0039b363 has its CatchHandler @ 0039b3a8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  FUN_0039ebf0(param_1 + 0x3f2);
  FUN_003a69a0(param_1 + 10);
  lVar2 = param_1[4];
  param_1[2] = 0;
  param_1[3] = 0;
  if (lVar2 != 0) {
                    /* try { // try from 0039b384 to 0039b397 has its CatchHandler @ 0039b410 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  param_1[4] = 0;
  return;
}


