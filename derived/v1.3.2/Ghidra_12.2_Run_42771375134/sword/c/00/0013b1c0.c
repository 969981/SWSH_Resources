/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013b1c0; name: FUN_0013b1c0
 */


void FUN_0013b1c0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_1[0x11];
  *param_1 = (long)(PTR_DAT_02710cd8 + 0x10);
  if (lVar3 != 0) {
    FUN_00138800(lVar3);
                    /* try { // try from 0013b1f0 to 0013b203 has its CatchHandler @ 0013b2e0 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    param_1[0x11] = 0;
  }
  lVar3 = param_1[0x12];
  if (lVar3 != 0) {
                    /* try { // try from 0013b210 to 0013b223 has its CatchHandler @ 0013b2a8 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xbc)) &&
      ((*(uint *)((long)param_1 + 0xbc) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x16], lVar3 != 0))
  {
                    /* try { // try from 0013b23c to 0013b24f has its CatchHandler @ 0013b2a4 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xac)) &&
      ((*(uint *)((long)param_1 + 0xac) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x14], lVar3 != 0))
  {
                    /* try { // try from 0013b268 to 0013b27b has its CatchHandler @ 0013b2a0 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  puVar1 = PTR_DAT_02710c20;
  param_1[0xb] = 0;
  param_1[9] = (long)(puVar1 + 0x10);
  FUN_0013c300(param_1 + 1);
  return;
}


