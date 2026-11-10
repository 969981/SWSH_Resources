/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0018f8a0; name: FUN_0018f8a0
 */


void FUN_0018f8a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[0x14];
  *param_1 = (long)(PTR_DAT_02710f50 + 0x10);
  if (lVar2 != 0) {
    FUN_0018fcb0(lVar2 + 0x1f8);
    FUN_0018fcb0(lVar2 + 0x150);
    FUN_0018fcb0(lVar2 + 0xa8);
    FUN_0018fcb0(lVar2);
                    /* try { // try from 0018f8e8 to 0018f8fb has its CatchHandler @ 0018f9e8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    FUN_001910b0(lVar2);
                    /* try { // try from 0018f90c to 0018f91f has its CatchHandler @ 0018f9e4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  nn::os::FinalizeMutex((MutexType *)param_1[0x13]);
  lVar2 = param_1[0x13];
  if (lVar2 != 0) {
                    /* try { // try from 0018f930 to 0018f943 has its CatchHandler @ 0018f9e0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
                    /* try { // try from 0018f948 to 0018f94b has its CatchHandler @ 0018f9cc */
  FUN_00190870(param_1 + 0xb);
  lVar2 = param_1[0x11];
  if ((lVar2 != 0) && (-1 < (int)param_1[0x12])) {
                    /* try { // try from 0018f95c to 0018f96f has its CatchHandler @ 0018f9b4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  param_1[0x11] = 0;
                    /* try { // try from 0018f978 to 0018f97b has its CatchHandler @ 0018f9b8 */
  FUN_00190710(param_1 + 3);
  lVar2 = param_1[9];
  if ((lVar2 != 0) && (-1 < (int)param_1[10])) {
                    /* try { // try from 0018f98c to 0018f99f has its CatchHandler @ 0018f9b0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  param_1[9] = 0;
  return;
}


