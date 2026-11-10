/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00401ea0; name: FUN_00401ea0
 */


void FUN_00401ea0(long *param_1,long param_2,long param_3,long param_4)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = (long)(PTR_DAT_02712a08 + 0x10);
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = -0xc0c00000;
  param_1[10] = 0;
                    /* try { // try from 00401ee8 to 00401ef3 has its CatchHandler @ 00401f84 */
  FUN_00403200(param_1 + 4,0x40);
  *(undefined4 *)(param_1 + 0xb) = 0;
                    /* try { // try from 00401ef8 to 00401f63 has its CatchHandler @ 00401f90 */
  iVar2 = FUN_003ff600();
  if (iVar2 == 0) {
    lVar6 = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar7 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar6 = (*pcVar7)(plVar3,iVar2,pcVar1,"./../../foundation/include\\PsMutex.h",0x71);
  }
  param_1[0xc] = lVar6;
  FUN_003ff550();
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}


