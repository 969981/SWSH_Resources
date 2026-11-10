/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011414b0; name: FUN_011414b0
 */


void FUN_011414b0(long param_1,uint param_2,int param_3)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  int local_184;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  long alStack_160 [12];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  long local_70 [2];
  
  lVar18 = *(long *)(param_1 + 0x5d0);
  plVar13 = (long *)(lVar18 + (ulong)param_2 * 0x30);
  uVar12 = (ulong)param_2;
  if (param_3 == 1) {
    bVar4 = false;
    local_184 = 0;
    bVar16 = 0;
  }
  else {
    lVar8 = param_1 + uVar12 * 0x30;
    uVar7 = FUN_0077d450(*plVar13,*(undefined8 *)(lVar8 + 0x5d8));
    if ((uVar7 & 1) == 0) {
LAB_01141568:
      iVar6 = FUN_0077d480(*(undefined8 *)(lVar8 + 0x5d8));
      bVar3 = true;
      local_184 = 1;
      if (iVar6 != 0) {
        local_184 = 2;
      }
    }
    else {
      lVar10 = lVar18 + uVar12 * 0x30;
      lVar1 = param_1 + uVar12 * 0x30;
      if (((*(char *)(lVar10 + 8) != *(char *)(lVar1 + 0x5e0)) ||
          (*(char *)(lVar10 + 9) != *(char *)(lVar1 + 0x5e1))) ||
         (*(short *)(lVar10 + 10) != *(short *)(lVar1 + 0x5e2))) goto LAB_01141568;
      bVar3 = false;
      local_184 = 0;
    }
    lVar8 = lVar18 + uVar12 * 0x30;
    lVar10 = param_1 + uVar12 * 0x30;
    uVar7 = FUN_014ad9e0(lVar8 + 0xc,lVar10 + 0x5e4);
    bVar9 = *(byte *)(lVar8 + 0x28);
    bVar2 = *(byte *)(lVar10 + 0x600);
    bVar4 = bVar3;
    if ((uVar7 & 1) == 0) {
      bVar4 = true;
    }
    bVar16 = bVar2 ^ bVar9;
    if (((!bVar3) && ((uVar7 & 1) != 0)) && (bVar9 == bVar2)) {
      return;
    }
  }
  lVar8 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165700 + uVar12 * 8);
  if (((lVar8 == 0) ||
      (lVar10 = *(long *)(&DAT_01d4d9c0 + uVar12 * 8), lVar10 == -0x340d631b7bddd9bb)) ||
     (lVar10 == 0)) {
LAB_011419d8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_70[0] = lVar10;
  lVar10 = FUN_011431a0(*(undefined8 *)(param_1 + 0x2b0),local_70);
  if (lVar10 == 0) goto LAB_011419d8;
  lVar1 = param_1 + 0x100;
  iVar6 = FUN_0077d480(*plVar13);
  if (iVar6 == 0) {
    local_78 = *(long *)(param_1 + 0x6c0);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar1,&DAT_02165848 + uVar12 * 8,&local_78,&DAT_02165898,10);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    FUN_00ffd010(lVar1,&UNK_021658a8 + uVar12 * 0x18);
    FUN_00ffd010(lVar1,&UNK_021658a0 + uVar12 * 0x18);
    FUN_00ffd010(lVar1,&UNK_02165900 + uVar12 * 8);
    bVar9 = *(byte *)(lVar10 + 0x58);
    goto LAB_01141988;
  }
  if ((local_184 == 0) && (param_3 != 1)) {
LAB_0114188c:
    if (bVar4) {
      FUN_01142460(param_1,lVar18 + uVar12 * 0x30 + 0xc,param_2);
    }
    if (bVar16 == 0) {
      return;
    }
  }
  else {
    lVar17 = *(long *)(param_1 + 0x2b0);
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    }
    lVar14 = *(long *)(lVar17 + 0x2e0);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    uVar19 = *(undefined8 *)(param_1 + 0x6c0);
    lVar15 = *(long *)(lVar17 + 0x2e8);
    if (lVar15 == 0) {
      FUN_0077eb10(uVar19,&DAT_02165920,0);
      lVar15 = *plVar13;
    }
    else {
      plVar20 = (long *)(lVar15 + 0x48);
      (**(code **)(*plVar20 + 0x10))(plVar20);
      FUN_0077eb10(uVar19,&DAT_02165920,lVar15);
      (**(code **)(*plVar20 + 0x18))(plVar20);
      lVar15 = *plVar13;
    }
    plVar13 = (long *)(lVar15 + 0x48);
    if (lVar15 != 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    lVar11 = lVar18 + uVar12 * 0x30;
    FUN_014c9110(lVar14,0,lVar15,*(undefined1 *)(lVar11 + 8),*(undefined1 *)(lVar11 + 9));
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))(plVar13);
    FUN_0167cce0(lVar17,&DAT_02165848 + uVar12 * 8,10);
    lVar15 = *(long *)(param_1 + 0x528);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    FUN_0168e370(lVar15,param_2,*(undefined2 *)(lVar18 + uVar12 * 0x30 + 10),0,&local_100);
    pcVar5 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      (*pcVar5)(&local_e0);
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    if (local_184 == 1) {
      local_180 = &LAB_01143690;
      local_178 = FUN_011436b0;
      local_170 = &LAB_011436c0;
      local_168 = &LAB_011436d0;
      alStack_160[0] = lVar8;
      FUN_00ffd120(lVar1,&UNK_021658b0 + uVar12 * 0x18,&local_180);
      pcVar5 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = (undefined1 *)0x0;
        local_168 = (undefined1 *)0x0;
        local_180 = (undefined1 *)0x0;
        local_178 = (code *)0x0;
        (*pcVar5)(alStack_160);
      }
    }
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
    }
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    if (param_3 != 1) goto LAB_0114188c;
    FUN_01142460(param_1,lVar18 + uVar12 * 0x30 + 0xc,param_2);
  }
  bVar9 = *(byte *)(lVar10 + 0x58);
  if (*(char *)(lVar18 + uVar12 * 0x30 + 0x28) != '\0') {
    *(byte *)(lVar10 + 0x58) = bVar9 | 1;
    FUN_00ffd010(lVar1,&UNK_02165928 + uVar12 * 8);
    return;
  }
LAB_01141988:
  *(byte *)(lVar10 + 0x58) = bVar9 & 0xfe;
  return;
}


