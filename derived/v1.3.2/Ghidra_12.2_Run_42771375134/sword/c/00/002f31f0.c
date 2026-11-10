/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f31f0; name: FUN_002f31f0
 */


void FUN_002f31f0(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  code *pcVar14;
  
  if (param_2 != 0) {
    uVar3 = param_2 * 4;
    if ((uVar3 < 0x101) && (*(char *)(param_1 + 0x40) == '\0')) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      uVar3 = param_1[0x44];
      puVar6 = param_1;
      goto joined_r0x002f329c;
    }
    if (uVar3 != 0) {
      plVar7 = (long *)FUN_00400d30();
      pcVar14 = *(code **)(*plVar7 + 0x10);
      plVar4 = (long *)FUN_00400d60();
      uVar5 = (**(code **)(*plVar4 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
      ;
      if ((uVar5 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar6 = (undefined4 *)
               (*pcVar14)(plVar7,uVar3,pcVar1,
                          "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
      uVar3 = param_1[0x44];
      goto joined_r0x002f329c;
    }
  }
  uVar3 = param_1[0x44];
  puVar6 = (undefined4 *)0x0;
joined_r0x002f329c:
  if (uVar3 != 0) {
    puVar13 = puVar6 + uVar3;
    puVar2 = puVar13;
    if (puVar13 <= puVar6 + 1) {
      puVar2 = puVar6 + 1;
    }
    puVar8 = *(undefined4 **)(param_1 + 0x42);
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar6 >> 2) & 0x3fffffff) + 1;
    puVar11 = puVar6;
    if ((uVar3 & 3) != 0) {
      lVar12 = -((ulong)uVar3 & 3);
      puVar9 = puVar8;
      puVar10 = puVar6;
      do {
        puVar8 = puVar9 + 1;
        lVar12 = lVar12 + 1;
        puVar11 = puVar10 + 1;
        *puVar10 = *puVar9;
        puVar9 = puVar8;
        puVar10 = puVar11;
      } while (lVar12 != 0);
    }
    if (0xb < (long)puVar2 + ~(ulong)puVar6) {
      do {
        *puVar11 = *puVar8;
        puVar11[1] = puVar8[1];
        puVar11[2] = puVar8[2];
        puVar11[3] = puVar8[3];
        puVar11 = puVar11 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar11 < puVar13);
    }
  }
  if (-1 < (int)param_1[0x45]) {
    puVar13 = *(undefined4 **)(param_1 + 0x42);
    if (param_1 == puVar13) {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    else if (puVar13 != (undefined4 *)0x0) {
      plVar7 = (long *)FUN_00400d30();
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar13);
    }
  }
  *(undefined4 **)(param_1 + 0x42) = puVar6;
  param_1[0x45] = param_2;
  return;
}


