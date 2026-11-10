/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d0700; name: FUN_003d0700
 */


void * FUN_003d0700(long param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  long *plVar4;
  void *pvVar5;
  void *__dest;
  void *pvVar6;
  size_t __n;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  
  pvVar6 = *(void **)(param_1 + 0x40);
  uVar12 = *param_4;
  Hint_Prefetch((long)pvVar6 + (ulong)uVar12,0,0,0);
  param_3 = param_3 + (uint)((param_3 & 0xf) != 0) * 0x10;
  uVar2 = param_3 & 0xfffffff0;
  iVar1 = uVar2 + param_2 * 0x40;
  if (*(uint *)(param_1 + 0x54) == uVar12) {
    uVar9 = (ulong)*(uint *)(param_1 + 0x4c);
    uVar11 = uVar12 + 0xf & 0xfffffff0;
    *(uint *)(param_1 + 0x48) = uVar12;
    if (*(uint *)(param_1 + 0x4c) < uVar11 + iVar1) {
      if (*(char *)(param_1 + 0x58) != '\0') {
        return (void *)0x0;
      }
      uVar8 = uVar9;
      do {
        uVar7 = (int)uVar8 * 2;
        uVar8 = (ulong)uVar7;
      } while (uVar7 < uVar11 + iVar1);
      *(uint *)(param_1 + 0x4c) = uVar7;
      if (uVar7 != 0) goto LAB_003d0794;
LAB_003d0818:
      pvVar5 = (void *)0x0;
LAB_003d081c:
      memcpy(pvVar5,pvVar6,uVar9);
      lVar10 = *(long *)(param_1 + 0x40);
      if (lVar10 != 0) {
        plVar4 = (long *)FUN_00400d30();
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar10);
      }
      *(void **)(param_1 + 0x40) = pvVar5;
      pvVar6 = pvVar5;
      uVar7 = *(uint *)(param_1 + 0x48);
      goto LAB_003d084c;
    }
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x48);
    uVar9 = (ulong)*(uint *)(param_1 + 0x4c);
    uVar11 = uVar12 + 0xf & 0xfffffff0;
    if (*(uint *)(param_1 + 0x4c) < uVar11 + iVar1) {
      if (*(char *)(param_1 + 0x58) != '\0') {
        return (void *)0x0;
      }
      uVar8 = uVar9;
      do {
        uVar7 = (int)uVar8 * 2;
        uVar8 = (ulong)uVar7;
      } while (uVar7 < uVar11 + iVar1);
      *(uint *)(param_1 + 0x4c) = uVar7;
      if (uVar7 == 0) goto LAB_003d0818;
LAB_003d0794:
      plVar4 = (long *)FUN_00400d30();
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x10))
                                 (plVar4,uVar8,"NonTrackedAlloc",
                                  "./../../SimulationController/src/ScContactReportBuffer.h",0xa7);
      pvVar6 = *(void **)(param_1 + 0x40);
      goto LAB_003d081c;
    }
  }
  uVar7 = uVar12;
LAB_003d084c:
  pvVar5 = (void *)((long)pvVar6 + (ulong)uVar11);
  *(uint *)(param_1 + 0x54) = uVar11;
  *(uint *)(param_1 + 0x48) = (iVar1 - uVar12) + uVar11 + uVar7;
  if (pvVar5 != (void *)0x0) {
    pvVar6 = (void *)((long)pvVar6 + (ulong)*param_4);
    uVar9 = (ulong)(*(ushort *)((long)param_4 + 10) >> 1) & 0x7ff0;
    uVar12 = (uint)uVar9;
    if (*param_4 == uVar11) {
      if (uVar12 < uVar2) {
        memmove((void *)((long)pvVar5 + (ulong)uVar2),(void *)((long)pvVar6 + uVar9),
                (ulong)*(ushort *)((long)param_4 + 6) << 6);
        uVar3 = (ushort)param_4[1];
      }
      else {
        uVar3 = (ushort)param_4[1];
      }
    }
    else {
      if (uVar12 < uVar2) {
        memcpy(pvVar5,pvVar6,(ulong)(ushort)param_4[2]);
        pvVar6 = (void *)((long)pvVar6 + uVar9);
        __n = (ulong)*(ushort *)((long)param_4 + 6) << 6;
        __dest = (void *)((long)pvVar5 + (ulong)uVar2);
      }
      else {
        __n = uVar9 + (ulong)*(ushort *)((long)param_4 + 6) * 0x40;
        __dest = pvVar5;
      }
      memcpy(__dest,pvVar6,__n);
      *param_4 = uVar11;
      uVar3 = (ushort)param_4[1];
    }
    if (uVar3 < param_2) {
      *(short *)(param_4 + 1) = (short)param_2;
    }
    if (uVar12 < uVar2) {
      *(ushort *)((long)param_4 + 10) =
           *(ushort *)((long)param_4 + 10) & 0x1f | (ushort)((param_3 >> 4 & 0x7ff) << 5);
    }
  }
  return pvVar5;
}


