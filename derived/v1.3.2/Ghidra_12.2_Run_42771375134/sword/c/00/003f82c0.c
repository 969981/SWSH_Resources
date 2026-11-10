/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f82c0; name: FUN_003f82c0
 */


void FUN_003f82c0(long *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char *pcVar4;
  undefined2 *puVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  code *pcVar14;
  
  if (param_2 == 0) {
    puVar10 = (undefined2 *)0x0;
    uVar6 = *(uint *)(param_1 + 1);
  }
  else {
    plVar7 = (long *)FUN_00400d30();
    pcVar14 = *(code **)(*plVar7 + 0x10);
    plVar8 = (long *)FUN_00400d60();
    uVar9 = (**(code **)(*plVar8 + 0x28))();
    pcVar4 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxFilterInfo>::getName() [T = physx::PxFilterInfo]"
    ;
    if ((uVar9 & 1) == 0) {
      pcVar4 = "<allocation names disabled>";
    }
    puVar10 = (undefined2 *)
              (*pcVar14)(plVar7,(ulong)param_2 << 3,pcVar4,
                         "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar6 = *(uint *)(param_1 + 1);
  }
  if (uVar6 != 0) {
    puVar3 = puVar10 + (ulong)uVar6 * 4;
    puVar11 = (undefined2 *)*param_1;
    puVar2 = puVar10 + 4;
    puVar5 = puVar3;
    if (puVar3 <= puVar2) {
      puVar5 = puVar2;
    }
    puVar12 = puVar10;
    if (((uint)((long)puVar5 + ~(ulong)puVar10) >> 3 & 1) == 0) {
      *puVar10 = *puVar11;
      puVar10[1] = puVar11[1];
      puVar1 = (undefined4 *)(puVar11 + 2);
      puVar11 = puVar11 + 4;
      *(undefined4 *)(puVar10 + 2) = *puVar1;
      puVar12 = puVar2;
    }
    if (7 < (long)puVar5 + ~(ulong)puVar10) {
      do {
        *puVar12 = *puVar11;
        puVar12[1] = puVar11[1];
        *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar11 + 2);
        puVar12[4] = puVar11[4];
        puVar12[5] = puVar11[5];
        *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar11 + 6);
        puVar12 = puVar12 + 8;
        puVar11 = puVar11 + 8;
      } while (puVar12 < puVar3);
    }
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar13 = *param_1, lVar13 != 0)) {
    plVar7 = (long *)FUN_00400d30();
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar13);
  }
  *param_1 = (long)puVar10;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


