/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd4a60; name: FUN_00cd4a60
 */


void FUN_00cd4a60(long param_1)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  char *pcVar16;
  char *pcVar17;
  undefined8 local_68;
  
  local_68 = 0;
  lVar11 = *(long *)(param_1 + 200);
  lVar15 = *(long *)(lVar11 + 0x10);
  plVar12 = *(long **)(lVar15 + 0x6a8);
  if (plVar12 == (long *)0x0) goto LAB_00cd4c94;
  lVar13 = *plVar12;
  if (lVar13 == plVar12[1]) {
LAB_00cd4bdc:
    iVar5 = FUN_0077d480(*(undefined8 *)(lVar11 + 0x18));
    if (iVar5 != 0) {
      FUN_0077d660(*(undefined8 *)(lVar11 + 0x18));
      *(undefined4 *)(lVar11 + 0x2c) = 0;
      *(undefined2 *)(lVar11 + 0x28) = 0;
      *(undefined8 *)(lVar11 + 0x20) = 0;
      local_68._0_5_ = CONCAT14(1,(undefined4)local_68);
    }
  }
  else {
    pcVar8 = (char *)(lVar13 + 0x26);
    do {
      if ((*(long *)(pcVar8 + -0x26) != 0) && (bVar3 = FUN_007b5850(), bVar3 < 4)) {
        uVar9 = (ulong)bVar3;
        *(undefined1 *)((long)&local_68 + uVar9) = 1;
        FUN_0077d520(*(undefined8 *)(param_1 + 0xa0),pcVar8 + -0x1a);
        puVar14 = (undefined8 *)(lVar11 + uVar9 * 0x18 + 0x18);
        uVar6 = FUN_0077d450(*puVar14,*(undefined8 *)(param_1 + 0xa0));
        if ((uVar6 & 1) == 0) {
          pcVar16 = (char *)(lVar11 + uVar9 * 0x18 + 0x24);
          pcVar17 = pcVar8;
        }
        else {
          pcVar17 = (char *)(lVar13 + 0x26);
          pcVar16 = (char *)(lVar11 + uVar9 * 0x18 + 0x24);
          if (((*pcVar16 == *pcVar8) && (*(char *)(lVar11 + uVar9 * 0x18 + 0x25) == pcVar8[1])) &&
             (*(int *)(lVar11 + uVar9 * 0x18 + 0x20) == *(int *)(pcVar8 + -0x1e)))
          goto LAB_00cd4bb8;
        }
        *(undefined1 *)((long)&local_68 + uVar9 + 4) = 1;
        FUN_0077d520(*puVar14,pcVar8 + -0x1a);
        lVar7 = lVar11 + uVar9 * 0x18;
        *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(pcVar8 + -0x1e);
        *pcVar16 = *pcVar17;
        *(char *)(lVar7 + 0x25) = pcVar8[1];
        *(char *)(lVar7 + 0x27) = pcVar8[2];
        *(char *)(lVar7 + 0x28) = pcVar8[3];
        *(char *)(lVar7 + 0x29) = pcVar8[4];
        *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)(pcVar8 + 6);
      }
LAB_00cd4bb8:
      pcVar17 = pcVar8 + 10;
      lVar13 = lVar13 + 0x30;
      pcVar8 = pcVar8 + 0x30;
    } while (pcVar17 != (char *)plVar12[1]);
    if ((char)local_68 == '\0') goto LAB_00cd4bdc;
  }
  if ((local_68._1_1_ == '\0') && (iVar5 = FUN_0077d480(*(undefined8 *)(lVar11 + 0x30)), iVar5 != 0)
     ) {
    FUN_0077d660(*(undefined8 *)(lVar11 + 0x30));
    *(undefined4 *)(lVar11 + 0x44) = 0;
    *(undefined2 *)(lVar11 + 0x40) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    local_68._0_6_ = CONCAT15(1,(undefined5)local_68);
  }
  if ((local_68._2_1_ == '\0') && (iVar5 = FUN_0077d480(*(undefined8 *)(lVar11 + 0x48)), iVar5 != 0)
     ) {
    FUN_0077d660(*(undefined8 *)(lVar11 + 0x48));
    *(undefined4 *)(lVar11 + 0x5c) = 0;
    *(undefined2 *)(lVar11 + 0x58) = 0;
    *(undefined8 *)(lVar11 + 0x50) = 0;
    local_68._0_7_ = CONCAT16(1,(undefined6)local_68);
  }
  if ((local_68._3_1_ == '\0') && (iVar5 = FUN_0077d480(*(undefined8 *)(lVar11 + 0x60)), iVar5 != 0)
     ) {
    FUN_0077d660(*(undefined8 *)(lVar11 + 0x60));
    *(undefined4 *)(lVar11 + 0x74) = 0;
    *(undefined2 *)(lVar11 + 0x70) = 0;
    *(undefined8 *)(lVar11 + 0x68) = 0;
    local_68 = CONCAT17(1,(undefined7)local_68);
  }
LAB_00cd4c94:
  plVar12 = *(long **)(lVar15 + 0x6c8);
  if (plVar12 == (long *)0x0) {
    bVar3 = 1;
  }
  else {
    plVar10 = (long *)*plVar12;
    if (plVar10 == (long *)plVar12[1]) {
      bVar3 = 1;
    }
    else {
      bVar3 = 1;
      do {
        if ((*plVar10 != 0) && (bVar4 = FUN_007b5850(), bVar4 < 4)) {
          bVar2 = (int)plVar10[1] != 0;
          pcVar8 = (char *)(lVar11 + (ulong)bVar4 * 0x18 + 0x26);
          if ((bool)*pcVar8 != bVar2) {
            *(undefined1 *)((long)&local_68 + (ulong)bVar4 + 4) = 1;
            *pcVar8 = bVar2;
          }
          bVar3 = bVar3 & bVar2;
        }
        plVar10 = plVar10 + 2;
      } while (plVar10 != (long *)plVar12[1]);
    }
  }
  if (local_68._4_1_ != '\0') {
    FUN_00ccdd40(*(undefined8 *)(param_1 + 0x78),*(long *)(param_1 + 200) + 0x18,0);
  }
  if (local_68._5_1_ != '\0') {
    FUN_00ccdd40(*(undefined8 *)(param_1 + 0x78),*(long *)(param_1 + 200) + 0x30,1);
  }
  if (local_68._6_1_ != '\0') {
    FUN_00ccdd40(*(undefined8 *)(param_1 + 0x78),*(long *)(param_1 + 200) + 0x48,2);
  }
  if (local_68._7_1_ != '\0') {
    FUN_00ccdd40(*(undefined8 *)(param_1 + 0x78),*(long *)(param_1 + 200) + 0x60,3);
  }
  uVar1 = *(uint *)(lVar15 + 0x6a0);
  FUN_00cce2f0(*(undefined8 *)(param_1 + 0x78),uVar1);
  if (uVar1 < *(uint *)(param_1 + 0xb8)) {
    FUN_016df8f0(*(undefined8 *)(param_1 + 0x80),uVar1);
  }
  *(uint *)(param_1 + 0xb8) = uVar1;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    FUN_00cce8b0(*(undefined8 *)(param_1 + 0x78),bVar3);
  }
  return;
}


