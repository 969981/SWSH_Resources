/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00271240; name: FUN_00271240
 */


undefined8 * FUN_00271240(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  code *pcVar15;
  
  iVar3 = *(uint *)((long)param_1 + 0x414) << 1;
  if ((*(uint *)((long)param_1 + 0x414) & 0x7fffffff) == 0) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    uVar4 = iVar3 * 0x10;
    if (uVar4 < 0x401 && *(char *)(param_1 + 0x80) == '\0') {
      *(undefined1 *)(param_1 + 0x80) = 1;
      uVar4 = *(uint *)(param_1 + 0x82);
      puVar8 = param_1;
      goto joined_r0x002713f4;
    }
    if (uVar4 != 0) {
      plVar5 = (long *)FUN_00400d30();
      pcVar15 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::SortedTriangle>::getName() [T = physx::Gu::SortedTriangle]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (undefined8 *)
               (*pcVar15)(plVar5,uVar4,pcVar1,
                          "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
      uVar4 = *(uint *)(param_1 + 0x82);
      goto joined_r0x002713f4;
    }
  }
  puVar8 = (undefined8 *)0x0;
  uVar4 = *(uint *)(param_1 + 0x82);
joined_r0x002713f4:
  if (uVar4 == 0) {
    uVar7 = 0;
  }
  else {
    puVar14 = puVar8 + (ulong)uVar4 * 2;
    puVar2 = puVar14;
    if (puVar14 <= puVar8 + 2) {
      puVar2 = puVar8 + 2;
    }
    puVar9 = (undefined8 *)param_1[0x81];
    uVar4 = ((uint)((long)puVar2 + ~(ulong)puVar8 >> 4) & 0xfffffff) + 1;
    puVar12 = puVar8;
    if ((uVar4 & 7) != 0) {
      lVar13 = -((ulong)uVar4 & 7);
      puVar10 = puVar9;
      puVar11 = puVar8;
      do {
        puVar11[1] = puVar10[1];
        lVar13 = lVar13 + 1;
        puVar9 = puVar10 + 2;
        puVar12 = puVar11 + 2;
        *puVar11 = *puVar10;
        puVar10 = puVar9;
        puVar11 = puVar12;
      } while (lVar13 != 0);
    }
    if (0x6f < (long)puVar2 + ~(ulong)puVar8) {
      do {
        puVar12[1] = puVar9[1];
        *puVar12 = *puVar9;
        puVar12[3] = puVar9[3];
        puVar12[2] = puVar9[2];
        puVar12[5] = puVar9[5];
        puVar12[4] = puVar9[4];
        puVar12[7] = puVar9[7];
        puVar12[6] = puVar9[6];
        puVar12[9] = puVar9[9];
        puVar12[8] = puVar9[8];
        puVar12[0xb] = puVar9[0xb];
        puVar12[10] = puVar9[10];
        puVar12[0xc] = puVar9[0xc];
        puVar12[0xd] = puVar9[0xd];
        puVar12[0xe] = puVar9[0xe];
        puVar12[0xf] = puVar9[0xf];
        puVar12 = puVar12 + 0x10;
        puVar9 = puVar9 + 0x10;
      } while (puVar12 < puVar14);
    }
    uVar7 = (ulong)*(uint *)(param_1 + 0x82);
  }
  (puVar8 + uVar7 * 2)[1] = param_2[1];
  puVar8[uVar7 * 2] = *param_2;
  if (-1 < *(int *)((long)param_1 + 0x414)) {
    puVar14 = (undefined8 *)param_1[0x81];
    if (param_1 == puVar14) {
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
    else if (puVar14 != (undefined8 *)0x0) {
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar14);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x82);
  param_1[0x81] = puVar8;
  *(int *)((long)param_1 + 0x414) = iVar3;
  *(uint *)(param_1 + 0x82) = uVar4 + 1;
  return puVar8 + (ulong)uVar4 * 2;
}


