/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00200fd0; name: FUN_00200fd0
 */


void FUN_00200fd0(long *param_1,long param_2,void *param_3)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = (long)(PTR_DAT_027111d8 + 0x10);
  iVar2 = FUN_003ffad0();
  if (iVar2 == 0) {
    lVar6 = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar7 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SyncImpl>::getName() [T = physx::shdfnd::SyncImpl]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar6 = (*pcVar7)(plVar3,iVar2,pcVar1,"./../../../../PxShared/src/foundation/include\\PsSync.h",
                      0x5f);
  }
  param_1[1] = lVar6;
  FUN_003ffae0();
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  memcpy(param_1 + 8,param_3,0x70);
  *(undefined4 *)(param_1 + 0x16) = 0xfffffff0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  return;
}


