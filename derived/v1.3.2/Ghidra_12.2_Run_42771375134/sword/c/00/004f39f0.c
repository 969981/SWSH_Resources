/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f39f0; name: FUN_004f39f0
 */


void FUN_004f39f0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lStack_440;
  float afStack_434 [253];
  
  uVar7 = *(int *)(param_1 + 0x108) + *(int *)(param_1 + 0xe8) + 2;
  if (uVar7 == 0) {
    lVar12 = *(long *)(param_1 + 8);
    iVar4 = 0;
    plVar14 = (long *)0x0;
    goto LAB_004f3ba4;
  }
  plVar14 = &lStack_440 + (ulong)uVar7 * -2 + 0x80;
  plVar5 = (long *)(*(long *)(param_1 + 0xd8) + 0x30);
  lVar12 = *plVar5;
  plVar1 = (long *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x44) <= *(int *)(*(long *)(param_1 + 0xd8) + 0x44)) {
    plVar1 = plVar5;
  }
  lVar13 = -4;
  if (lVar12 != -1) {
    lVar13 = lVar12;
  }
  puVar3 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,lVar13);
  if (puVar3 == (undefined8 *)0x0) {
    uVar6 = 0;
    iVar4 = 0;
    lVar12 = *(long *)(param_1 + 8);
    uVar7 = (uint)*(byte *)(lVar12 + 0x54);
    if (*(byte *)(lVar12 + 0x54) != 0) goto LAB_004f3aec;
  }
  else {
    iVar4 = *(int *)(puVar3 + 10);
    *(int *)(puVar3 + 10) = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar3)(puVar3);
      FUN_00404870(uVar2,puVar3);
      lVar12 = *(long *)(param_1 + 0x100);
      uVar7 = *(uint *)(param_1 + 0x108);
      *plVar14 = lVar13;
      if (uVar7 == 0) goto LAB_004f3b68;
LAB_004f3a88:
      lVar11 = (ulong)uVar7 << 5;
      uVar6 = 1;
      puVar8 = (undefined4 *)(lVar12 + 0xc);
      uVar9 = 0;
      do {
        uVar10 = uVar6;
        uVar6 = (ulong)((int)uVar10 + 1);
        *(undefined4 *)(plVar14 + uVar9 * 2 + 1) = puVar8[-1];
        lVar11 = lVar11 + -0x20;
        *(undefined4 *)((long)plVar14 + uVar9 * 0x10 + 0xc) = *puVar8;
        plVar14[uVar10 * 2] = lVar13;
        puVar8 = puVar8 + 8;
        uVar9 = uVar10;
      } while (lVar11 != 0);
    }
    else {
      lVar12 = *(long *)(param_1 + 0x100);
      uVar7 = *(uint *)(param_1 + 0x108);
      *plVar14 = lVar13;
      if (uVar7 != 0) goto LAB_004f3a88;
LAB_004f3b68:
      uVar10 = 0;
      uVar6 = 1;
    }
    iVar4 = (int)uVar6;
    *(int *)(plVar14 + uVar10 * 2 + 1) = (int)plVar1[1];
    *(float *)((long)plVar14 + uVar10 * 0x10 + 0xc) =
         *(float *)(param_1 + 0xa4) * *(float *)((long)plVar1 + 0xc);
    lVar12 = *(long *)(param_1 + 8);
    if (*(char *)(lVar12 + 0x54) == '\0') {
      uVar7 = 0;
    }
    else {
LAB_004f3aec:
      iVar4 = (int)uVar6;
      if (*(uint *)(param_1 + 0xe8) == 0) {
        uVar7 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x98);
        uVar9 = 0;
        lVar13 = (ulong)*(uint *)(param_1 + 0xe8) * 0x18;
        puVar8 = *(undefined4 **)(param_1 + 0xe0);
        do {
          plVar1 = plVar14 + uVar6 * 2 + uVar9 * 2;
          uVar7 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar7;
          *plVar1 = *(long *)(lVar12 + 0x48);
          lVar13 = lVar13 + -0x18;
          *(undefined4 *)(plVar1 + 1) = *puVar8;
          *(undefined4 *)((long)plVar1 + 0xc) = uVar2;
          puVar8 = puVar8 + 6;
        } while (lVar13 != 0);
      }
    }
  }
  iVar4 = uVar7 + iVar4;
LAB_004f3ba4:
  FUN_00498930(*(undefined8 *)PTR_DAT_02712d20,lVar12,plVar14,iVar4);
  return;
}


