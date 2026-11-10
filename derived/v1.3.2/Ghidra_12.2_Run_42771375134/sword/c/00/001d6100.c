/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d6100; name: FUN_001d6100
 */


void FUN_001d6100(ulong *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar3 = (uint)param_1[1];
  uVar9 = (ulong)uVar3;
  if (uVar3 < param_2) {
    *(uint *)(param_1 + 1) = param_2 + 0x1f & 0xffffffe0;
    plVar5 = (long *)FUN_00400d30();
    lVar6 = (**(code **)(*plVar5 + 0x10))
                      (plVar5,(ulong)(param_2 + 0x1f >> 5) << 10 | 0x17,"NonTrackedAlloc",
                       "./../../LowLevel/API/include\\PxsMaterialManager.h",100);
    if (lVar6 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = lVar6 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar10 - 8) = uVar10 - lVar6;
    }
    if (uVar3 != 0) {
      lVar6 = 0;
      uVar7 = uVar9;
      do {
        puVar1 = (undefined8 *)(*param_1 + lVar6);
        puVar2 = (undefined8 *)(uVar10 + lVar6);
        lVar6 = lVar6 + 0x20;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
        *puVar2 = *puVar1;
        *(undefined2 *)((long)puVar2 + 0xc) = *(undefined2 *)((long)puVar1 + 0xc);
        *(undefined2 *)((long)puVar2 + 0xe) = *(undefined2 *)((long)puVar1 + 0xe);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar1 + 3);
        uVar7 = uVar7 - 1;
        puVar2[2] = puVar1[2];
      } while (uVar7 != 0);
    }
    uVar4 = (uint)param_1[1];
    if (uVar3 < uVar4) {
      uVar7 = ((ulong)uVar4 - 1) - uVar9;
      if ((uVar4 - uVar3 & 3) != 0) {
        lVar6 = -((ulong)(uVar4 - uVar3) & 3);
        puVar8 = (undefined4 *)(uVar10 + uVar9 * 0x20 + 0x18);
        do {
          uVar9 = uVar9 + 1;
          lVar6 = lVar6 + 1;
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 8;
        } while (lVar6 != 0);
      }
      if (2 < uVar7) {
        puVar8 = (undefined4 *)(uVar10 + uVar9 * 0x20 + 0x58);
        do {
          uVar9 = uVar9 + 4;
          puVar8[-0x10] = 0xffffffff;
          puVar8[-8] = 0xffffffff;
          *puVar8 = 0xffffffff;
          puVar8[8] = 0xffffffff;
          puVar8 = puVar8 + 0x20;
        } while (uVar9 < uVar4);
      }
    }
    uVar9 = *param_1;
    if (uVar9 != 0) {
      lVar6 = *(long *)(uVar9 - 8);
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,uVar9 - lVar6);
    }
    *param_1 = uVar10;
  }
  return;
}


