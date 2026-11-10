/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013bf20; name: FUN_0013bf20
 */


void FUN_0013bf20(long *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  void *pvVar6;
  void *__src;
  long lVar7;
  code *pcVar8;
  void *__dest;
  
  if (param_2 == 0) {
    pvVar6 = (void *)0x0;
    uVar2 = *(uint *)(param_1 + 1);
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar8 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<RegionData>::getName() [T = RegionData]";
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    pvVar6 = (void *)(*pcVar8)(plVar3,(ulong)param_2 * 0x38,pcVar1,
                               "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar2 = *(uint *)(param_1 + 1);
  }
  if (uVar2 != 0) {
    __src = (void *)*param_1;
    __dest = pvVar6;
    do {
      memcpy(__dest,__src,0x38);
      __dest = (void *)((long)__dest + 0x38);
      __src = (void *)((long)__src + 0x38);
    } while (__dest < (void *)((long)pvVar6 + (ulong)uVar2 * 0x38));
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar7 = *param_1, lVar7 != 0)) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  *param_1 = (long)pvVar6;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


