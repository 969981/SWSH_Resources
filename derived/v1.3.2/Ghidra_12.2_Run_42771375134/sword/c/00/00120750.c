/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00120750; name: FUN_00120750
 */


void FUN_00120750(long *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  puVar1 = PTR_DAT_02710c40;
  lVar7 = *(long *)(param_2 + 0xa60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = (long)param_1;
  param_1[6] = (long)"PxsContext.postCCDSweep";
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar7;
  *(undefined4 *)(param_1 + 0xb) = 0;
  puVar1 = PTR_DAT_02710c48 + 0x10;
  param_1[0xc] = (long)param_1;
  param_1[0xd] = (long)"PxsContext.postCCDAdvance";
  param_1[7] = (long)puVar1;
  param_1[8] = lVar7;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  puVar1 = PTR_DAT_02710c50 + 0x10;
  param_1[0x13] = (long)param_1;
  param_1[0x14] = (long)"PxsContext.postCCDDepenetrate";
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  param_1[0xe] = (long)puVar1;
  param_1[0xf] = lVar7;
                    /* try { // try from 001207f8 to 001207ff has its CatchHandler @ 0012092c */
  FUN_00120ad0(param_1 + 0x18);
                    /* try { // try from 00120804 to 0012080b has its CatchHandler @ 00120924 */
  FUN_00120be0(param_1 + 0x1b);
                    /* try { // try from 00120810 to 00120817 has its CatchHandler @ 0012091c */
  FUN_00120cf0(param_1 + 0x1e);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x2d] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = -0xc0c00000;
                    /* try { // try from 00120840 to 0012084b has its CatchHandler @ 0012090c */
  FUN_00127530(param_1 + 0x27,0x40);
                    /* try { // try from 00120850 to 00120857 has its CatchHandler @ 001208f8 */
  FUN_00120e00(param_1 + 0x2e);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = param_4;
  param_1[0x35] = 0;
  param_1[0x36] = 0x100000000;
  param_1[0x37] = param_2;
  param_1[0x38] = param_3;
                    /* try { // try from 00120870 to 001208db has its CatchHandler @ 00120934 */
  iVar3 = FUN_003ff600();
  if (iVar3 == 0) {
    lVar7 = 0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar8 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar8)(plVar4,iVar3,pcVar2,"./../../../../PxShared/src/foundation/include\\PsMutex.h"
                      ,0x71);
  }
  param_1[0x3a] = lVar7;
  FUN_003ff550();
  return;
}


