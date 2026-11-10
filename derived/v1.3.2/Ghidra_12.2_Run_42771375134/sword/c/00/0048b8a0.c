/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048b8a0; name: FUN_0048b8a0
 */


void FUN_0048b8a0(long param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined5 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  
  puVar1 = (uint *)(param_1 + 0x26b);
  uVar3 = *puVar1;
  uVar6 = *(undefined5 *)puVar1;
  if ((uVar3 >> 0x1c & 1) != 0) {
    FUN_0048d110(param_1,0);
    uVar3 = *puVar1;
    uVar6 = *(undefined5 *)puVar1;
  }
  if ((uVar3 >> 0x14 & 1) == 0) {
    *(char *)(param_1 + 0x26f) = (char)((uint5)uVar6 >> 0x20);
    *puVar1 = (uint)uVar6 | 0x100000;
    if (*(int *)(param_1 + 0x2b0) != 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x2a8);
      do {
        puVar16 = puVar8 + 1;
        FUN_004815f0(*puVar8,param_1);
        puVar8 = puVar16;
      } while (puVar16 !=
               (undefined8 *)(*(long *)(param_1 + 0x2a8) + (ulong)*(uint *)(param_1 + 0x2b0) * 8));
    }
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    local_50[0] = 0;
    local_38 = 1;
    local_34 = 0x100;
    local_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = 0;
    (**(code **)(**(long **)(param_1 + 0x160) + 0x120))(*(long **)(param_1 + 0x160),local_50);
    lVar9 = *(long *)(param_1 + 0x1e0);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x1e0);
  }
  if (lVar9 != 0) {
    FUN_004be250(*(undefined8 *)PTR_DAT_02712b18,lVar9,param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
    FUN_004be250(*(undefined8 *)PTR_DAT_02712b18,*(long *)(param_1 + 0x1e8),param_1 + 0x10);
  }
  if ((*puVar1 >> 8 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
    *puVar1 = *puVar1 & 0xfffffeff;
  }
  if (*(int *)(param_1 + 0x1d8) != 0) {
    FUN_0048fc40(*(undefined8 *)PTR_DAT_02712ad0,*(int *)(param_1 + 0x1d8),param_1);
  }
  lVar9 = param_1 + 0x18;
  FUN_004a57c0(param_1 + 0x170,param_1 + 0x28);
  if (*(long *)(param_1 + 0x1a0) != 0) {
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x160);
  lVar10 = *(long *)(lVar7 + 0x70);
  if (lVar10 != 0) {
    plVar11 = (long *)(lVar10 + 0x10);
    lVar10 = *plVar11;
    lVar14 = 0;
    if (lVar10 != 0) {
      lVar15 = lVar10;
      if (lVar10 != lVar9) {
        do {
          lVar14 = lVar15;
          lVar15 = *(long *)(lVar14 + 0x48);
        } while (lVar15 != 0 && lVar15 != lVar9);
      }
      if (lVar15 != 0) {
        if (lVar15 != lVar10) {
          plVar11 = (long *)(lVar14 + 0x48);
        }
        *plVar11 = *(long *)(lVar15 + 0x48);
      }
    }
    lVar7 = *(long *)(lVar7 + 0x70);
    if (((((*(short *)(lVar7 + 0x90) < 1) && (*(short *)(lVar7 + 0x94) < 1)) &&
         (*(short *)(lVar7 + 0x88) == 0)) &&
        ((*(short *)(lVar7 + 0x8a) == 0 && (*(long *)(lVar7 + 0x10) == 0)))) &&
       (*(int *)(lVar7 + 8) == 0)) {
      FUN_00481ff0();
    }
  }
  if (*(long *)(param_1 + 0x290) != 0) {
    FUN_004a7fd0(*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x290) = 0;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x198);
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,0);
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  uVar5 = *(ushort *)(*(long *)(param_1 + 0x1f8) + 0xc);
  lVar7 = *(long *)(param_1 + 0x2a0);
  if (lVar7 != 0) {
    puVar8 = *(undefined8 **)(lVar7 + 0x40);
    if (puVar8 != (undefined8 *)0x0) {
      puVar16 = puVar8;
      puVar13 = (undefined8 *)0x0;
      do {
        puVar12 = puVar16;
        puVar16 = (undefined8 *)*puVar12;
        if (puVar12[2] == param_1) {
          puVar2 = (undefined8 *)(lVar7 + 0x40);
          if (puVar8 != puVar12) {
            puVar2 = puVar13;
          }
          *puVar2 = puVar16;
          if (*(undefined8 **)(lVar7 + 0x48) == puVar12) {
            *(undefined8 **)(lVar7 + 0x48) = puVar13;
          }
          *puVar12 = *(undefined8 *)(lVar7 + 0x50);
          *(undefined8 **)(lVar7 + 0x50) = puVar12;
          *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + -1;
          puVar8 = *(undefined8 **)(lVar7 + 0x10);
          goto joined_r0x0048bb70;
        }
        puVar13 = puVar12;
      } while (puVar16 != (undefined8 *)0x0);
    }
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
joined_r0x0048bb70:
    if (((puVar8 != (undefined8 *)0x0) && (*(int *)(lVar7 + 100) == 0)) &&
       (*(int *)(lVar7 + 0x8c) == 0)) {
      (**(code **)*puVar8)();
    }
    FUN_004c4860(*(undefined8 *)(param_1 + 0x2a0));
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  if (((uVar5 >> 8 & 1) != 0) && (lVar7 = *(long *)(param_1 + 0x1f8), lVar7 != 0)) {
    uVar4 = *(undefined4 *)PTR_DAT_02712a90;
    FUN_004a7c60(lVar7);
    FUN_00404870(uVar4,lVar7);
  }
  FUN_0044e860(lVar9,0);
  return;
}


