/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f7740; name: FUN_003f7740
 */


undefined8 * FUN_003f7740(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  iVar2 = *(uint *)((long)param_1 + 0x214) << 1;
  if ((*(uint *)((long)param_1 + 0x214) & 0x7fffffff) == 0) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    if ((uint)(iVar2 * 8) < 0x201 && *(char *)(param_1 + 0x40) == '\0') {
      *(undefined1 *)(param_1 + 0x40) = 1;
      uVar6 = *(uint *)(param_1 + 0x42);
      puVar5 = param_1 + uVar6;
      puVar12 = param_1;
      goto joined_r0x003f77e0;
    }
    plVar3 = (long *)FUN_00400d30();
    lVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,(ulong)(uint)(iVar2 * 8) + 0x47,"NonTrackedAlloc",
                       "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    if (lVar4 != 0) {
      puVar12 = (undefined8 *)(lVar4 + 0x47U & 0xffffffffffffffc0);
      puVar12[-1] = (long)puVar12 - lVar4;
      uVar6 = *(uint *)(param_1 + 0x42);
      puVar5 = puVar12 + uVar6;
      goto joined_r0x003f77e0;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x42);
  puVar5 = (undefined8 *)((ulong)uVar6 << 3);
  puVar12 = (undefined8 *)0x0;
joined_r0x003f77e0:
  if (uVar6 != 0) {
    puVar9 = puVar5;
    if (puVar5 <= puVar12 + 1) {
      puVar9 = puVar12 + 1;
    }
    puVar7 = (undefined8 *)param_1[0x41];
    uVar1 = ((uint)((long)puVar9 + ~(ulong)puVar12 >> 3) & 0x1fffffff) + 1;
    puVar11 = puVar12;
    if ((uVar1 & 3) != 0) {
      lVar4 = -((ulong)uVar1 & 3);
      puVar8 = puVar7;
      puVar10 = puVar12;
      do {
        puVar7 = puVar8 + 1;
        lVar4 = lVar4 + 1;
        puVar11 = puVar10 + 1;
        *puVar10 = *puVar8;
        puVar8 = puVar7;
        puVar10 = puVar11;
      } while (lVar4 != 0);
    }
    if (0x17 < (long)puVar9 + ~(ulong)puVar12) {
      do {
        *puVar11 = *puVar7;
        puVar11[1] = puVar7[1];
        puVar11[2] = puVar7[2];
        puVar11[3] = puVar7[3];
        puVar11 = puVar11 + 4;
        puVar7 = puVar7 + 4;
      } while (puVar11 < puVar5);
    }
  }
  *puVar5 = *param_2;
  if (-1 < *(int *)((long)param_1 + 0x214)) {
    puVar9 = (undefined8 *)param_1[0x41];
    if (param_1 == puVar9) {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    else if (puVar9 != (undefined8 *)0x0) {
      lVar4 = puVar9[-1];
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,(long)puVar9 - lVar4);
      uVar6 = *(uint *)(param_1 + 0x42);
      puVar5 = puVar12 + uVar6;
    }
  }
  param_1[0x41] = puVar12;
  *(int *)((long)param_1 + 0x214) = iVar2;
  *(uint *)(param_1 + 0x42) = uVar6 + 1;
  return puVar5;
}


