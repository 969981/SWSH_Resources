/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fe840; name: FUN_001fe840
 */


undefined4 * FUN_001fe840(long *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  code *pcVar15;
  
  uVar7 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar7 = 1;
  }
  if (uVar7 == 0) {
    puVar11 = (undefined4 *)0x0;
    uVar6 = *(uint *)(param_1 + 1);
  }
  else {
    plVar8 = (long *)FUN_00400d30();
    pcVar15 = *(code **)(*plVar8 + 0x10);
    plVar9 = (long *)FUN_00400d60();
    uVar10 = (**(code **)(*plVar9 + 0x28))();
    pcVar4 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxDebugText>::getName() [T = physx::PxDebugText]"
    ;
    if ((uVar10 & 1) == 0) {
      pcVar4 = "<allocation names disabled>";
    }
    puVar11 = (undefined4 *)
              (*pcVar15)(plVar8,(ulong)uVar7 << 5,pcVar4,
                         "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar6 = *(uint *)(param_1 + 1);
  }
  if (uVar6 == 0) {
    uVar10 = 0;
  }
  else {
    puVar3 = puVar11 + (ulong)uVar6 * 8;
    puVar12 = (undefined4 *)*param_1;
    puVar2 = puVar11 + 8;
    puVar5 = puVar3;
    if (puVar3 <= puVar2) {
      puVar5 = puVar2;
    }
    puVar13 = puVar11;
    if (((uint)((long)puVar5 + ~(ulong)puVar11) >> 5 & 1) == 0) {
      *puVar11 = *puVar12;
      puVar11[1] = puVar12[1];
      puVar11[2] = puVar12[2];
      puVar11[7] = puVar12[7];
      *(undefined8 *)(puVar11 + 5) = *(undefined8 *)(puVar12 + 5);
      puVar1 = (undefined8 *)(puVar12 + 3);
      puVar12 = puVar12 + 8;
      *(undefined8 *)(puVar11 + 3) = *puVar1;
      puVar13 = puVar2;
    }
    if (0x1f < (long)puVar5 + ~(ulong)puVar11) {
      do {
        *puVar13 = *puVar12;
        puVar13[1] = puVar12[1];
        puVar13[2] = puVar12[2];
        puVar13[7] = puVar12[7];
        *(undefined8 *)(puVar13 + 5) = *(undefined8 *)(puVar12 + 5);
        *(undefined8 *)(puVar13 + 3) = *(undefined8 *)(puVar12 + 3);
        puVar13[8] = puVar12[8];
        puVar13[9] = puVar12[9];
        puVar13[10] = puVar12[10];
        puVar13[0xf] = puVar12[0xf];
        *(undefined8 *)(puVar13 + 0xd) = *(undefined8 *)(puVar12 + 0xd);
        *(undefined8 *)(puVar13 + 0xb) = *(undefined8 *)(puVar12 + 0xb);
        puVar13 = puVar13 + 0x10;
        puVar12 = puVar12 + 0x10;
      } while (puVar13 < puVar3);
    }
    uVar10 = (ulong)*(uint *)(param_1 + 1);
  }
  puVar2 = puVar11 + uVar10 * 8;
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[7] = param_2[7];
  *(undefined8 *)(puVar2 + 5) = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)(puVar2 + 3) = *(undefined8 *)(param_2 + 3);
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar14 = *param_1, lVar14 != 0)) {
    plVar8 = (long *)FUN_00400d30();
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar14);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *param_1 = (long)puVar11;
  *(uint *)(param_1 + 1) = uVar6 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar7;
  return puVar11 + (ulong)uVar6 * 8;
}


