/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d8470; name: FUN_003d8470
 */


void * FUN_003d8470(long *param_1,void *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  void *__src;
  void *pvVar9;
  code *pcVar10;
  
  uVar3 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    pvVar7 = (void *)0x0;
    uVar2 = *(uint *)(param_1 + 1);
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar10 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxTriggerPair>::getName() [T = physx::PxTriggerPair]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    pvVar7 = (void *)(*pcVar10)(plVar4,(ulong)uVar3 * 0x28,pcVar1,
                                "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar2 = *(uint *)(param_1 + 1);
  }
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    __src = (void *)*param_1;
    pvVar9 = pvVar7;
    do {
      memcpy(pvVar9,__src,0x24);
      *(undefined1 *)((long)pvVar9 + 0x24) = *(undefined1 *)((long)__src + 0x24);
      pvVar9 = (void *)((long)pvVar9 + 0x28);
      __src = (void *)((long)__src + 0x28);
    } while (pvVar9 < (void *)((long)pvVar7 + (ulong)uVar2 * 0x28));
    uVar6 = (ulong)*(uint *)(param_1 + 1);
  }
  pvVar9 = (void *)((long)pvVar7 + uVar6 * 0x28);
  memcpy(pvVar9,param_2,0x24);
  *(undefined1 *)((long)pvVar9 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar8 = *param_1, lVar8 != 0)) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar8);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (long)pvVar7;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar3;
  return (void *)((long)pvVar7 + (ulong)uVar2 * 0x28);
}


