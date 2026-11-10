/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c4da0; name: FUN_003c4da0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003c4da0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ulong *puVar16;
  code *pcVar17;
  ulong *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  float local_48;
  float local_44;
  
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(long *)(param_1 + 0x60) = param_5;
  *(long *)(param_1 + 0x68) = param_2;
  *(undefined1 *)(param_1 + 0x88) = 0;
  if ((param_3 == 0) || (*(char *)(param_3 + 0xd) == '\0')) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    uVar6 = FUN_003d9630(param_3);
    *(undefined8 *)(param_1 + 0x78) = uVar6;
  }
  if ((param_4 == 0) || (*(char *)(param_4 + 0xd) == '\0')) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    lVar13 = *(long *)(param_5 + 0x1110);
    iVar4 = *(int *)(lVar13 + 0x18);
  }
  else {
    uVar6 = FUN_003d9630(param_4);
    *(undefined8 *)(param_1 + 0x80) = uVar6;
    lVar13 = *(long *)(param_5 + 0x1110);
    iVar4 = *(int *)(lVar13 + 0x18);
  }
  if (iVar4 == 0) {
    uVar12 = *(uint *)(lVar13 + 8);
    *(uint *)(lVar13 + 8) = uVar12 + 1;
  }
  else {
    uVar12 = *(uint *)(*(long *)(lVar13 + 0x10) + (ulong)(iVar4 - 1U) * 4);
    *(uint *)(lVar13 + 0x18) = iVar4 - 1U;
  }
  *(uint *)(param_1 + 0x4c) = uVar12;
  lVar13 = *(long *)(param_5 + 0x750);
  uVar2 = *(uint *)(lVar13 + 0xf4) & 0x7fffffff;
  if (uVar2 <= uVar12 && uVar2 < *(uint *)(lVar13 + 0xf4) << 1) {
    FUN_003c60b0(lVar13 + 0xe0);
    uVar12 = *(uint *)(param_1 + 0x4c);
  }
  uVar2 = *(uint *)(lVar13 + 0xf0);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = (ulong *)0x0;
  uStack_68 = 0;
  if (uVar2 < uVar12 + 1) {
    uVar2 = uVar12 + 1;
  }
  FUN_003c5100(lVar13 + 0xe0,uVar2,&local_70);
  puVar1 = (undefined8 *)(*(long *)(lVar13 + 0xe8) + (ulong)*(uint *)(param_1 + 0x4c) * 0x20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  uVar7 = FUN_003c51c0(param_1);
  if ((uVar7 & 1) == 0) {
    return;
  }
  FUN_003c1560(param_2,&local_44,&local_48);
  if ((local_44 < DAT_01d4c18c) || (local_48 < DAT_01d4c18c)) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 2;
  }
  *(long *)(param_2 + 0x50) = param_1;
  uVar6 = *(undefined8 *)(param_5 + 0x800);
  if ((*(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x750) + 0xe8) +
                (ulong)*(uint *)(param_1 + 0x4c) * 0x20 + 0xc) == 0) &&
     ((**(ushort **)(param_1 + 0x68) & 6) != 0)) {
    FUN_003c19e0(uVar6,param_1);
    lVar13 = *(long *)(*(long *)(param_1 + 0x60) + 0x1160);
  }
  else {
    lVar13 = *(long *)(param_1 + 0x80);
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar11 = *(long *)(*(long *)(param_1 + 0x78) + 200), lVar11 != 0)) {
      FUN_003c2510(uVar6,lVar11,param_1);
    }
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 200), lVar13 != 0)) {
      FUN_003c2510(uVar6,lVar13,param_1);
    }
    lVar13 = *(long *)(*(long *)(param_1 + 0x60) + 0x1160);
  }
  if (param_3 == 0) {
    uVar6 = *(undefined8 *)(param_5 + 0x1130);
  }
  else {
    uVar6 = FUN_003d9630(param_3);
  }
  if (param_4 == 0) {
    uVar15 = *(undefined8 *)(param_5 + 0x1130);
    puVar16 = *(ulong **)(lVar13 + 0x230);
  }
  else {
    uVar15 = FUN_003d9630(param_4);
    puVar16 = *(ulong **)(lVar13 + 0x230);
  }
  if (puVar16 == (ulong *)0x0) {
    iVar4 = *(int *)(lVar13 + 0x228);
    if (iVar4 == 0) {
      puVar10 = (ulong *)0x0;
    }
    else {
      plVar8 = (long *)FUN_00400d30();
      pcVar17 = *(code **)(*plVar8 + 0x10);
      plVar9 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar9 + 0x28))();
      pcVar3 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ConstraintInteraction>::getName() [T = physx::Sc::ConstraintInteraction]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar3 = "<allocation names disabled>";
      }
      puVar10 = (ulong *)(*pcVar17)(plVar8,iVar4,pcVar3,
                                    "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar12 = *(uint *)(lVar13 + 0x218);
    local_70 = puVar10;
    if (uVar12 < (*(uint *)(lVar13 + 0x21c) & 0x7fffffff)) {
      *(ulong **)(*(long *)(lVar13 + 0x210) + (ulong)uVar12 * 8) = puVar10;
      *(uint *)(lVar13 + 0x218) = uVar12 + 1;
    }
    else {
      FUN_003c61a0(lVar13 + 8,&local_70);
    }
    if (puVar10 + (ulong)*(uint *)(lVar13 + 0x220) * 7 + -7 < puVar10) {
      puVar16 = *(ulong **)(lVar13 + 0x230);
    }
    else {
      puVar5 = puVar10 + (ulong)*(uint *)(lVar13 + 0x220) * 7 + -7;
      puVar14 = *(ulong **)(lVar13 + 0x230);
      do {
        puVar16 = puVar5;
        *puVar16 = (ulong)puVar14;
        puVar5 = puVar16 + -7;
        puVar14 = puVar16;
      } while (puVar10 <= puVar16 + -7);
      *(ulong **)(lVar13 + 0x230) = puVar16;
    }
  }
  *(ulong *)(lVar13 + 0x230) = *puVar16;
  *(int *)(lVar13 + 0x224) = *(int *)(lVar13 + 0x224) + 1;
  if (puVar16 != (ulong *)0x0) {
    FUN_003c6370(puVar16,param_1,uVar6,uVar15);
  }
  *(ulong **)(param_1 + 0x70) = puVar16;
  return;
}


