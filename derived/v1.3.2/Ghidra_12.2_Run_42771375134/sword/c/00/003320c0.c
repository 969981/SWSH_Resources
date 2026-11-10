/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003320c0; name: FUN_003320c0
 */


void FUN_003320c0(undefined8 *param_1,int param_2)

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
    uVar3 = param_2 * 8;
    if ((uVar3 < 0x29) && (*(char *)(param_1 + 5) == '\0')) {
      *(undefined1 *)(param_1 + 5) = 1;
      uVar3 = *(uint *)(param_1 + 7);
      puVar6 = param_1;
      goto joined_r0x0033216c;
    }
    if (uVar3 != 0) {
      plVar7 = (long *)FUN_00400d30();
      pcVar14 = *(code **)(*plVar7 + 0x10);
      plVar4 = (long *)FUN_00400d60();
      uVar5 = (**(code **)(*plVar4 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::PxMaterial *>::getName() [T = physx::PxMaterial *]"
      ;
      if ((uVar5 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar6 = (undefined8 *)
               (*pcVar14)(plVar7,uVar3,pcVar1,
                          "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
      uVar3 = *(uint *)(param_1 + 7);
      goto joined_r0x0033216c;
    }
  }
  uVar3 = *(uint *)(param_1 + 7);
  puVar6 = (undefined8 *)0x0;
joined_r0x0033216c:
  if (uVar3 != 0) {
    puVar13 = puVar6 + uVar3;
    puVar2 = puVar13;
    if (puVar13 <= puVar6 + 1) {
      puVar2 = puVar6 + 1;
    }
    puVar8 = (undefined8 *)param_1[6];
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar6 >> 3) & 0x1fffffff) + 1;
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
    if (0x17 < (long)puVar2 + ~(ulong)puVar6) {
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
  if (-1 < *(int *)((long)param_1 + 0x3c)) {
    puVar13 = (undefined8 *)param_1[6];
    if (param_1 == puVar13) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    else if (puVar13 != (undefined8 *)0x0) {
      plVar7 = (long *)FUN_00400d30();
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar13);
    }
  }
  param_1[6] = puVar6;
  *(int *)((long)param_1 + 0x3c) = param_2;
  return;
}


