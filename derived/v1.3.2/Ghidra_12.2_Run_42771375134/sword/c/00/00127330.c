/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00127330; name: FUN_00127330
 */


undefined8 * FUN_00127330(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  code *pcVar15;
  
  uVar5 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar5 = 1;
  }
  if (uVar5 == 0) {
    puVar9 = (undefined8 *)0x0;
    uVar1 = (uint)param_1[1];
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    pcVar15 = *(code **)(*plVar6 + 0x10);
    plVar7 = (long *)FUN_00400d60();
    uVar8 = (**(code **)(*plVar7 + 0x28))();
    pcVar3 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsCCDBlockArray<physx::PxsCCDShape, 128>::BlockInfo>::getName() [T = physx::PxsCCDBlockArray<physx::PxsCCDShape, 128>::BlockInfo]"
    ;
    if ((uVar8 & 1) == 0) {
      pcVar3 = "<allocation names disabled>";
    }
    puVar9 = (undefined8 *)
             (*pcVar15)(plVar6,(ulong)uVar5 << 4,pcVar3,
                        "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar1 = (uint)param_1[1];
  }
  if (uVar1 == 0) {
    uVar8 = 0;
  }
  else {
    puVar2 = puVar9 + (ulong)uVar1 * 2;
    puVar4 = puVar2;
    if (puVar2 <= puVar9 + 2) {
      puVar4 = puVar9 + 2;
    }
    puVar10 = (undefined8 *)*param_1;
    uVar1 = ((uint)((long)puVar4 + ~(ulong)puVar9 >> 4) & 0xfffffff) + 1;
    puVar13 = puVar9;
    if ((uVar1 & 7) != 0) {
      lVar14 = -((ulong)uVar1 & 7);
      puVar11 = puVar10;
      puVar12 = puVar9;
      do {
        puVar12[1] = puVar11[1];
        lVar14 = lVar14 + 1;
        puVar10 = puVar11 + 2;
        puVar13 = puVar12 + 2;
        *puVar12 = *puVar11;
        puVar11 = puVar10;
        puVar12 = puVar13;
      } while (lVar14 != 0);
    }
    if (0x6f < (long)puVar4 + ~(ulong)puVar9) {
      do {
        puVar13[1] = puVar10[1];
        *puVar13 = *puVar10;
        puVar13[3] = puVar10[3];
        puVar13[2] = puVar10[2];
        puVar13[5] = puVar10[5];
        puVar13[4] = puVar10[4];
        puVar13[7] = puVar10[7];
        puVar13[6] = puVar10[6];
        puVar13[9] = puVar10[9];
        puVar13[8] = puVar10[8];
        puVar13[0xb] = puVar10[0xb];
        puVar13[10] = puVar10[10];
        puVar13[0xc] = puVar10[0xc];
        puVar13[0xd] = puVar10[0xd];
        puVar13[0xe] = puVar10[0xe];
        puVar13[0xf] = puVar10[0xf];
        puVar13 = puVar13 + 0x10;
        puVar10 = puVar10 + 0x10;
      } while (puVar13 < puVar2);
    }
    uVar8 = (ulong)(uint)param_1[1];
  }
  (puVar9 + uVar8 * 2)[1] = param_2[1];
  puVar9[uVar8 * 2] = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar8 = *param_1, uVar8 != 0)) {
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar8);
  }
  uVar8 = param_1[1];
  *param_1 = (ulong)puVar9;
  *(uint *)(param_1 + 1) = (uint)uVar8 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar5;
  return puVar9 + (ulong)(uint)uVar8 * 2;
}


