/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d8390; name: FUN_001d8390
 */


void FUN_001d8390(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  code *pcVar14;
  
  if (param_2 != 0) {
    uVar3 = param_2 * 0x10;
    if ((uVar3 < 0x41) && (*(char *)(param_1 + 8) == '\0')) {
      *(undefined1 *)(param_1 + 8) = 1;
      uVar3 = *(uint *)(param_1 + 10);
      puVar6 = param_1;
      goto joined_r0x001d843c;
    }
    if (uVar3 != 0) {
      plVar7 = (long *)FUN_00400d30();
      pcVar14 = *(code **)(*plVar7 + 0x10);
      plVar4 = (long *)FUN_00400d60();
      uVar5 = (**(code **)(*plVar4 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Scb::RemovedShape>::getName() [T = physx::Scb::RemovedShape]"
      ;
      if ((uVar5 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar6 = (undefined8 *)
               (*pcVar14)(plVar7,uVar3,pcVar1,
                          "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
      uVar3 = *(uint *)(param_1 + 10);
      goto joined_r0x001d843c;
    }
  }
  uVar3 = *(uint *)(param_1 + 10);
  puVar6 = (undefined8 *)0x0;
joined_r0x001d843c:
  if (uVar3 != 0) {
    puVar13 = puVar6 + (ulong)uVar3 * 2;
    puVar2 = puVar13;
    if (puVar13 <= puVar6 + 2) {
      puVar2 = puVar6 + 2;
    }
    puVar8 = (undefined8 *)param_1[9];
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar6 >> 4) & 0xfffffff) + 1;
    puVar11 = puVar6;
    if ((uVar3 & 7) != 0) {
      lVar12 = -((ulong)uVar3 & 7);
      puVar9 = puVar8;
      puVar10 = puVar6;
      do {
        puVar10[1] = puVar9[1];
        lVar12 = lVar12 + 1;
        puVar8 = puVar9 + 2;
        puVar11 = puVar10 + 2;
        *puVar10 = *puVar9;
        puVar9 = puVar8;
        puVar10 = puVar11;
      } while (lVar12 != 0);
    }
    if (0x6f < (long)puVar2 + ~(ulong)puVar6) {
      do {
        puVar11[1] = puVar8[1];
        *puVar11 = *puVar8;
        puVar11[3] = puVar8[3];
        puVar11[2] = puVar8[2];
        puVar11[5] = puVar8[5];
        puVar11[4] = puVar8[4];
        puVar11[7] = puVar8[7];
        puVar11[6] = puVar8[6];
        puVar11[9] = puVar8[9];
        puVar11[8] = puVar8[8];
        puVar11[0xb] = puVar8[0xb];
        puVar11[10] = puVar8[10];
        puVar11[0xc] = puVar8[0xc];
        puVar11[0xd] = puVar8[0xd];
        puVar11[0xe] = puVar8[0xe];
        puVar11[0xf] = puVar8[0xf];
        puVar11 = puVar11 + 0x10;
        puVar8 = puVar8 + 0x10;
      } while (puVar11 < puVar13);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0x54)) {
    puVar13 = (undefined8 *)param_1[9];
    if (param_1 == puVar13) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else if (puVar13 != (undefined8 *)0x0) {
      plVar7 = (long *)FUN_00400d30();
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar13);
    }
  }
  param_1[9] = puVar6;
  *(int *)((long)param_1 + 0x54) = param_2;
  return;
}


