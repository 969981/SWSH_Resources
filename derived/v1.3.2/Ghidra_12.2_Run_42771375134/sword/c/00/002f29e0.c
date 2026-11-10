/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f29e0; name: FUN_002f29e0
 */


undefined4 * FUN_002f29e0(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  code *pcVar16;
  
  iVar4 = param_1[0x45] << 1;
  if ((param_1[0x45] & 0x7fffffff) == 0) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    uVar5 = iVar4 * 4;
    if (uVar5 < 0x101 && *(char *)(param_1 + 0x40) == '\0') {
      *(undefined1 *)(param_1 + 0x40) = 1;
      uVar5 = param_1[0x44];
      puVar9 = param_1;
      goto joined_r0x002f2a94;
    }
    if (uVar5 != 0) {
      plVar6 = (long *)FUN_00400d30();
      pcVar16 = *(code **)(*plVar6 + 0x10);
      plVar7 = (long *)FUN_00400d60();
      uVar8 = (**(code **)(*plVar7 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
      ;
      if ((uVar8 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar9 = (undefined4 *)
               (*pcVar16)(plVar6,uVar5,pcVar1,
                          "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
      uVar5 = param_1[0x44];
      goto joined_r0x002f2a94;
    }
  }
  uVar5 = param_1[0x44];
  puVar9 = (undefined4 *)0x0;
joined_r0x002f2a94:
  if (uVar5 == 0) {
    *puVar9 = *param_2;
    iVar3 = param_1[0x45];
  }
  else {
    puVar15 = puVar9 + uVar5;
    puVar2 = puVar15;
    if (puVar15 <= puVar9 + 1) {
      puVar2 = puVar9 + 1;
    }
    puVar10 = *(undefined4 **)(param_1 + 0x42);
    uVar5 = ((uint)((long)puVar2 + ~(ulong)puVar9 >> 2) & 0x3fffffff) + 1;
    puVar13 = puVar9;
    if ((uVar5 & 3) != 0) {
      lVar14 = -((ulong)uVar5 & 3);
      puVar11 = puVar10;
      puVar12 = puVar9;
      do {
        puVar10 = puVar11 + 1;
        lVar14 = lVar14 + 1;
        puVar13 = puVar12 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar10;
        puVar12 = puVar13;
      } while (lVar14 != 0);
    }
    if (0xb < (long)puVar2 + ~(ulong)puVar9) {
      do {
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
        puVar13[2] = puVar10[2];
        puVar13[3] = puVar10[3];
        puVar13 = puVar13 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar13 < puVar15);
    }
    puVar9[(uint)param_1[0x44]] = *param_2;
    iVar3 = param_1[0x45];
  }
  if (-1 < iVar3) {
    puVar15 = *(undefined4 **)(param_1 + 0x42);
    if (param_1 == puVar15) {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    else if (puVar15 != (undefined4 *)0x0) {
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar15);
    }
  }
  uVar5 = param_1[0x44];
  *(undefined4 **)(param_1 + 0x42) = puVar9;
  param_1[0x45] = iVar4;
  param_1[0x44] = uVar5 + 1;
  return puVar9 + uVar5;
}


