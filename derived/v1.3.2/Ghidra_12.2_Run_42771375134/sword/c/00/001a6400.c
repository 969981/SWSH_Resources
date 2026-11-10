/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a6400; name: FUN_001a6400
 */


long FUN_001a6400(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_48;
  
  lVar6 = *(long *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x1c);
  lVar7 = *(long *)(lVar6 + (ulong)*(uint *)(param_1 + 0x18) * 8) + (ulong)uVar3;
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar8 = (param_3 + -1 + (int)lVar7 & -param_3) - (int)lVar7;
  if (uVar1 < uVar3 + param_2 + uVar8) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar8 = *(uint *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar8;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (uVar8 < uVar3) {
      uVar4 = 0;
    }
    else {
      if (uVar1 == 0) {
        local_48 = 0;
      }
      else {
        plVar2 = (long *)FUN_00400d30();
        local_48 = (**(code **)(*plVar2 + 0x10))
                             (plVar2,uVar1,"NonTrackedAlloc","./../../Common/src\\CmFlushPool.h",
                              0x58);
        uVar3 = *(uint *)(param_1 + 0x10);
      }
      if (uVar3 < (*(uint *)(param_1 + 0x14) & 0x7fffffff)) {
        *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8) = local_48;
        *(uint *)(param_1 + 0x10) = uVar3 + 1;
      }
      else {
        FUN_00112510((long *)(param_1 + 8),&local_48);
      }
      lVar6 = *(long *)(param_1 + 8);
      uVar8 = *(uint *)(param_1 + 0x18);
      uVar4 = (ulong)*(uint *)(param_1 + 0x1c);
    }
    uVar3 = (uint)uVar4;
    lVar7 = *(long *)(lVar6 + (ulong)uVar8 * 8);
    iVar5 = (int)lVar7;
    uVar8 = (param_3 + -1 + iVar5 & -param_3) - iVar5;
    lVar7 = lVar7 + uVar4;
  }
  *(uint *)(param_1 + 0x1c) = uVar8 + param_2 + uVar3;
  return lVar7 + (ulong)uVar8;
}


