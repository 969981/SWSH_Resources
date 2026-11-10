/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00137140; name: FUN_00137140
 */


void FUN_00137140(long param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  void *__dest;
  void *pvVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar1 = *(int *)(param_1 + 0x74) + 0x80;
  if (uVar1 == 0) {
    __dest = (void *)0x0;
    iVar4 = *(int *)(param_1 + 0x70);
  }
  else {
    lVar10 = (ulong)uVar1 * 8;
    plVar5 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar5 + 0x10);
    plVar6 = (long *)FUN_00400d60();
    uVar7 = (**(code **)(*plVar6 + 0x28))();
    pcVar3 = 
    "static const char *physx::shdfnd::ReflectionAllocator<MBPEntry>::getName() [T = MBPEntry]";
    if ((uVar7 & 1) == 0) {
      pcVar3 = "<allocation names disabled>";
    }
    __dest = (void *)(*pcVar11)(plVar5,lVar10,pcVar3,
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                                ,0x487);
    uVar2 = ((uint)(lVar10 - 8U >> 3) & 0x1fffffff) + 1;
    pvVar8 = __dest;
    if ((uVar2 & 7) != 0) {
      lVar9 = -((ulong)uVar2 & 7);
      do {
        *(undefined4 *)((long)pvVar8 + 4) = 0xffffffff;
        pvVar8 = (void *)((long)pvVar8 + 8);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0);
    }
    if (0x37 < lVar10 - 8U) {
      do {
        *(undefined4 *)((long)pvVar8 + 4) = 0xffffffff;
        *(undefined4 *)((long)pvVar8 + 0xc) = 0xffffffff;
        *(undefined4 *)((long)pvVar8 + 0x14) = 0xffffffff;
        *(undefined4 *)((long)pvVar8 + 0x1c) = 0xffffffff;
        *(undefined4 *)((long)pvVar8 + 0x24) = 0xffffffff;
        *(undefined4 *)((long)pvVar8 + 0x2c) = 0xffffffff;
        *(undefined4 *)((long)pvVar8 + 0x34) = 0xffffffff;
        *(undefined4 *)((long)pvVar8 + 0x3c) = 0xffffffff;
        pvVar8 = (void *)((long)pvVar8 + 0x40);
      } while ((void *)((long)__dest + lVar10) != pvVar8);
    }
    iVar4 = *(int *)(param_1 + 0x70);
  }
  if (iVar4 != 0) {
    memcpy(__dest,*(void **)(param_1 + 0x80),(ulong)(uint)(iVar4 << 3));
  }
  lVar10 = *(long *)(param_1 + 0x80);
  if (lVar10 != 0) {
                    /* try { // try from 00137268 to 0013727b has its CatchHandler @ 0013729c */
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(void **)(param_1 + 0x80) = __dest;
  *(uint *)(param_1 + 0x74) = uVar1;
  return;
}


