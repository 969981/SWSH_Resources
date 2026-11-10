/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c54e0; name: FUN_003c54e0
 */


void FUN_003c54e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  code *pcVar17;
  ulong *local_48;
  
  if ((param_2 == 0) || (*(char *)(param_2 + 0xd) == '\0')) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_003d9630(param_2);
  }
  if ((param_3 == 0) || (*(char *)(param_3 + 0xd) == '\0')) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_003d9630(param_3);
  }
  uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x800);
  if ((**(byte **)(param_1 + 0x68) & 6) == 0) {
    if ((lVar7 != 0) && (*(long *)(lVar7 + 200) != 0)) {
      FUN_003c2510(uVar16,*(long *)(lVar7 + 200),param_1);
    }
    if ((lVar8 != 0) && (*(long *)(lVar8 + 200) != 0)) {
      FUN_003c2510(uVar16,*(long *)(lVar8 + 200),param_1);
    }
  }
  else if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    FUN_003c19e0(uVar16,param_1);
  }
  lVar1 = 0;
  if (lVar7 != 0) {
    lVar1 = lVar7 + 0x60;
  }
  lVar2 = 0;
  if (lVar8 != 0) {
    lVar2 = lVar8 + 0x60;
  }
  *(long *)(param_1 + 0x28) = lVar1;
  *(long *)(param_1 + 0x30) = lVar2;
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x28);
  }
  if (lVar8 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(lVar2 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar16;
  *(long *)(param_1 + 0x78) = lVar7;
  *(long *)(param_1 + 0x80) = lVar8;
  lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x1160);
  if (param_2 == 0) {
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1130);
  }
  else {
    uVar16 = FUN_003d9630(param_2);
  }
  if (param_3 == 0) {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1130);
    puVar15 = *(ulong **)(lVar7 + 0x230);
  }
  else {
    uVar9 = FUN_003d9630(param_3);
    puVar15 = *(ulong **)(lVar7 + 0x230);
  }
  if (puVar15 == (ulong *)0x0) {
    iVar4 = *(int *)(lVar7 + 0x228);
    if (iVar4 == 0) {
      puVar13 = (ulong *)0x0;
    }
    else {
      plVar10 = (long *)FUN_00400d30();
      pcVar17 = *(code **)(*plVar10 + 0x10);
      plVar11 = (long *)FUN_00400d60();
      uVar12 = (**(code **)(*plVar11 + 0x28))();
      pcVar3 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ConstraintInteraction>::getName() [T = physx::Sc::ConstraintInteraction]"
      ;
      if ((uVar12 & 1) == 0) {
        pcVar3 = "<allocation names disabled>";
      }
      puVar13 = (ulong *)(*pcVar17)(plVar10,iVar4,pcVar3,
                                    "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar5 = *(uint *)(lVar7 + 0x218);
    local_48 = puVar13;
    if (uVar5 < (*(uint *)(lVar7 + 0x21c) & 0x7fffffff)) {
      *(ulong **)(*(long *)(lVar7 + 0x210) + (ulong)uVar5 * 8) = puVar13;
      *(uint *)(lVar7 + 0x218) = uVar5 + 1;
    }
    else {
      FUN_003c61a0(lVar7 + 8,&local_48);
    }
    if (puVar13 + (ulong)*(uint *)(lVar7 + 0x220) * 7 + -7 < puVar13) {
      puVar15 = *(ulong **)(lVar7 + 0x230);
    }
    else {
      puVar6 = puVar13 + (ulong)*(uint *)(lVar7 + 0x220) * 7 + -7;
      puVar14 = *(ulong **)(lVar7 + 0x230);
      do {
        puVar15 = puVar6;
        *puVar15 = (ulong)puVar14;
        puVar6 = puVar15 + -7;
        puVar14 = puVar15;
      } while (puVar13 <= puVar15 + -7);
      *(ulong **)(lVar7 + 0x230) = puVar15;
    }
  }
  *(ulong *)(lVar7 + 0x230) = *puVar15;
  *(int *)(lVar7 + 0x224) = *(int *)(lVar7 + 0x224) + 1;
  if (puVar15 != (ulong *)0x0) {
    FUN_003c6370(puVar15,param_1,uVar16,uVar9);
  }
  *(ulong **)(param_1 + 0x70) = puVar15;
  return;
}


