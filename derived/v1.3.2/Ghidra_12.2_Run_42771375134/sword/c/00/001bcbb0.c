/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001bcbb0; name: FUN_001bcbb0
 */


undefined8 * FUN_001bcbb0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  
  iVar3 = *(uint *)((long)param_1 + 0x214) << 1;
  if ((*(uint *)((long)param_1 + 0x214) & 0x7fffffff) == 0) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    uVar9 = iVar3 * 8;
    if (uVar9 < 0x201 && *(char *)(param_1 + 0x40) == '\0') {
      *(undefined1 *)(param_1 + 0x40) = 1;
      uVar9 = *(uint *)(param_1 + 0x42);
      puVar8 = param_1 + uVar9;
      puVar7 = param_1;
      goto joined_r0x001bcc6c;
    }
    if (uVar9 != 0) {
      plVar4 = (long *)FUN_00400d30();
      pcVar16 = *(code **)(*plVar4 + 0x10);
      plVar5 = (long *)FUN_00400d60();
      uVar6 = (**(code **)(*plVar5 + 0x28))();
      pcVar2 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<64> >::getName() [T = physx::NpPtrTableStorageManager::PtrBlock<64>]"
      ;
      if ((uVar6 & 1) == 0) {
        pcVar2 = "<allocation names disabled>";
      }
      puVar7 = (undefined8 *)
               (*pcVar16)(plVar4,uVar9,pcVar2,
                          "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
      uVar9 = *(uint *)(param_1 + 0x42);
      puVar8 = puVar7 + uVar9;
      goto joined_r0x001bcc6c;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x42);
  puVar8 = (undefined8 *)((ulong)uVar9 << 3);
  puVar7 = (undefined8 *)0x0;
joined_r0x001bcc6c:
  if (uVar9 != 0) {
    puVar15 = puVar8;
    if (puVar8 <= puVar7 + 1) {
      puVar15 = puVar7 + 1;
    }
    puVar10 = (undefined8 *)param_1[0x41];
    uVar1 = ((uint)((long)puVar15 + ~(ulong)puVar7 >> 3) & 0x1fffffff) + 1;
    puVar13 = puVar7;
    if ((uVar1 & 3) != 0) {
      lVar14 = -((ulong)uVar1 & 3);
      puVar11 = puVar10;
      puVar12 = puVar7;
      do {
        puVar10 = puVar11 + 1;
        lVar14 = lVar14 + 1;
        puVar13 = puVar12 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar10;
        puVar12 = puVar13;
      } while (lVar14 != 0);
    }
    if (0x17 < (long)puVar15 + ~(ulong)puVar7) {
      do {
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
        puVar13[2] = puVar10[2];
        puVar13[3] = puVar10[3];
        puVar13 = puVar13 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar13 < puVar8);
    }
  }
  *puVar8 = *param_2;
  if (-1 < *(int *)((long)param_1 + 0x214)) {
    puVar15 = (undefined8 *)param_1[0x41];
    if (param_1 == puVar15) {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    else if (puVar15 != (undefined8 *)0x0) {
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,puVar15);
      uVar9 = *(uint *)(param_1 + 0x42);
      puVar8 = puVar7 + uVar9;
    }
  }
  param_1[0x41] = puVar7;
  *(int *)((long)param_1 + 0x214) = iVar3;
  *(uint *)(param_1 + 0x42) = uVar9 + 1;
  return puVar8;
}


