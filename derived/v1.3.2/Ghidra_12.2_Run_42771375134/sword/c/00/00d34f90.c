/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d34f90; name: FUN_00d34f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d34f90(long param_1)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  char cVar3;
  bool bVar4;
  unkbyte9 *pVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar43;
  long *plVar44;
  long lVar45;
  undefined8 *puVar46;
  long *plVar47;
  long lVar48;
  long lVar49;
  undefined8 uVar50;
  long lVar51;
  long *plVar52;
  undefined1 extraout_b0;
  byte bVar53;
  undefined1 uVar54;
  undefined1 extraout_var;
  byte bVar55;
  undefined1 uVar56;
  undefined1 extraout_var_00;
  byte bVar57;
  undefined1 uVar58;
  undefined1 extraout_var_01;
  byte bVar59;
  undefined1 uVar60;
  undefined1 extraout_var_02;
  byte bVar61;
  undefined1 uVar62;
  undefined1 extraout_var_03;
  byte bVar63;
  undefined1 uVar64;
  undefined1 extraout_var_04;
  byte bVar65;
  undefined1 uVar66;
  undefined1 extraout_var_05;
  byte bVar67;
  undefined1 uVar68;
  undefined1 extraout_var_06;
  byte bVar69;
  undefined1 uVar70;
  undefined1 extraout_var_07;
  byte bVar71;
  undefined1 uVar72;
  undefined1 extraout_var_08;
  byte bVar73;
  undefined1 uVar74;
  undefined1 extraout_var_09;
  byte bVar75;
  undefined1 uVar76;
  undefined1 extraout_var_10;
  byte bVar77;
  undefined1 uVar78;
  undefined1 extraout_var_11;
  byte bVar79;
  undefined1 uVar80;
  undefined1 extraout_var_12;
  byte bVar81;
  undefined1 uVar82;
  undefined1 extraout_var_13;
  byte bVar83;
  undefined1 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined4 uVar93;
  float fVar94;
  float fVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  float fVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  ulong uVar115;
  undefined8 uVar116;
  float fVar117;
  undefined8 uVar118;
  float fVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  float fVar123;
  undefined8 uVar122;
  undefined8 uVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  undefined4 uVar131;
  undefined8 uVar132;
  long local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  
  if (*(char *)(param_1 + 0xb6) != '\0') {
    return;
  }
  plVar52 = (long *)(param_1 + 0x90);
  if (*plVar52 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00d1a020(&local_a0);
  }
  lVar48 = param_1 + 0x60;
  plVar44 = (long *)FUN_00d11a00(local_a0 + 0xa0,lVar48);
  lVar49 = *plVar44;
  if (lVar49 != 0) {
    (**(code **)(*(long *)(lVar49 + 0x48) + 0x10))();
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  lVar45 = FUN_00d37b60(lVar49,&local_a0);
  if (lVar49 != 0) {
    (**(code **)(*(long *)(lVar49 + 0x48) + 0x18))((long *)(lVar49 + 0x48));
  }
  if (lVar45 == 0) {
    if (*plVar52 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_00d1a020(&local_a0);
    }
    plVar44 = (long *)FUN_00d11a00(local_a0 + 0xa0,lVar48);
    lVar49 = *plVar44;
    if (lVar49 != 0) {
      (**(code **)(*(long *)(lVar49 + 0x48) + 0x10))();
    }
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    if (*plVar52 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_00d1a020(&local_a0);
    }
    plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
    lVar51 = *plVar44;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    uVar24 = *(undefined8 *)(lVar51 + 0x178);
    uVar50 = *(undefined8 *)(lVar51 + 0x170);
    uVar121 = *(undefined8 *)(lVar51 + 0x148);
    uVar29 = *(undefined8 *)(lVar51 + 0x140);
    uVar30 = *(undefined8 *)(lVar51 + 0x128);
    uVar118 = *(undefined8 *)(lVar51 + 0x120);
    uVar122 = *(undefined8 *)(lVar51 + 0x138);
    uVar116 = *(undefined8 *)(lVar51 + 0x130);
    *(undefined1 *)(lVar49 + 0xc0) = 1;
    fVar129 = (float)((ulong)uVar118 >> 0x20) + (float)((ulong)uVar116 >> 0x20) +
              (float)((ulong)uVar50 >> 0x20) * (float)((ulong)uVar29 >> 0x20);
    fVar85 = (float)((ulong)uVar30 >> 0x20) + (float)((ulong)uVar122 >> 0x20) + 0.0;
    *(ulong *)(lVar49 + 0xb8) =
         CONCAT17((char)((uint)fVar85 >> 0x18),
                  CONCAT16((char)((uint)fVar85 >> 0x10),
                           CONCAT15((char)((uint)fVar85 >> 8),
                                    CONCAT14(SUB41(fVar85,0),
                                             (float)uVar30 + (float)uVar122 +
                                             (float)uVar24 * (float)uVar121))));
    *(ulong *)(lVar49 + 0xb0) =
         CONCAT17((char)((uint)fVar129 >> 0x18),
                  CONCAT16((char)((uint)fVar129 >> 0x10),
                           CONCAT15((char)((uint)fVar129 >> 8),
                                    CONCAT14(SUB41(fVar129,0),
                                             (float)uVar118 + (float)uVar116 +
                                             (float)uVar50 * (float)uVar29))));
    if (lVar49 != 0) {
      (**(code **)(*(long *)(lVar49 + 0x48) + 0x18))((long *)(lVar49 + 0x48));
    }
    lVar49 = *plVar52;
  }
  else {
    if (*plVar52 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_00d1a020(&local_a0);
    }
    plVar44 = (long *)FUN_00d11a00(local_a0 + 0xa0,lVar48);
    lVar49 = *plVar44;
    if (lVar49 != 0) {
      (**(code **)(*(long *)(lVar49 + 0x48) + 0x10))();
    }
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    if (*plVar52 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_00d1a020(&local_a0);
    }
    plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
    lVar51 = *plVar44;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    uVar50 = *(undefined8 *)(lVar51 + 0x120);
    uVar118 = *(undefined8 *)(lVar51 + 0x130);
    fVar129 = (float)((ulong)uVar50 >> 0x20) + (float)((ulong)uVar118 >> 0x20);
    fVar85 = (float)((ulong)*(undefined8 *)(lVar51 + 0x128) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar51 + 0x138) >> 0x20);
    *(ulong *)(lVar49 + 0xb8) =
         CONCAT17((char)((uint)fVar85 >> 0x18),
                  CONCAT16((char)((uint)fVar85 >> 0x10),
                           CONCAT15((char)((uint)fVar85 >> 8),
                                    CONCAT14(SUB41(fVar85,0),
                                             (float)*(undefined8 *)(lVar51 + 0x128) +
                                             (float)*(undefined8 *)(lVar51 + 0x138)))));
    *(ulong *)(lVar49 + 0xb0) =
         CONCAT17((char)((uint)fVar129 >> 0x18),
                  CONCAT16((char)((uint)fVar129 >> 0x10),
                           CONCAT15((char)((uint)fVar129 >> 8),
                                    CONCAT14(SUB41(fVar129,0),(float)uVar50 + (float)uVar118))));
    *(undefined1 *)(lVar49 + 0xc0) = 1;
    if (lVar49 != 0) {
      (**(code **)(*(long *)(lVar49 + 0x48) + 0x18))((long *)(lVar49 + 0x48));
    }
    if (*plVar52 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_00d1a020(&local_a0);
    }
    plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
    lVar49 = *plVar44;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    uVar50 = *(undefined8 *)(lVar49 + 0x170);
    *(undefined8 *)(lVar45 + 0x188) = *(undefined8 *)(lVar49 + 0x178);
    *(undefined8 *)(lVar45 + 0x180) = uVar50;
    lVar49 = *plVar52;
  }
  if (lVar49 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00d1a020(&local_a0);
  }
  plVar44 = (long *)FUN_00d11a00(local_a0 + 0xa0,lVar48);
  lVar49 = *plVar44;
  if (lVar49 != 0) {
    (**(code **)(*(long *)(lVar49 + 0x48) + 0x10))();
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (*plVar52 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00d1a020(&local_a0);
  }
  plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
  lVar51 = *plVar44;
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  uVar132 = DAT_01cd5418;
  uVar122 = DAT_01cd50f8;
  pauVar1 = (undefined1 (*) [12])(lVar51 + 0x150);
  uVar93 = (undefined4)((ulong)*(undefined8 *)(lVar51 + 0x158) >> 0x20);
  fVar129 = (float)*(undefined8 *)*pauVar1;
  fVar87 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  pVar5 = (unkbyte9 *)(lVar51 + 0x160);
  uVar30 = *(undefined8 *)(lVar51 + 0x168);
  uVar54 = (undefined1)((ulong)uVar30 >> 8);
  uVar56 = (undefined1)((ulong)uVar30 >> 0x10);
  uVar58 = (undefined1)((ulong)uVar30 >> 0x18);
  uVar60 = (undefined1)((ulong)uVar30 >> 0x20);
  uVar62 = (undefined1)((ulong)uVar30 >> 0x28);
  uVar64 = (undefined1)((ulong)uVar30 >> 0x30);
  uVar66 = (undefined1)((ulong)uVar30 >> 0x38);
  uVar118 = *(undefined8 *)pVar5;
  auVar13._12_4_ = uVar93;
  auVar13._0_12_ = *pauVar1;
  uVar124 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
  auVar18[9] = uVar54;
  auVar18._0_9_ = *pVar5;
  auVar18[10] = uVar56;
  auVar18[0xb] = uVar58;
  auVar18[0xc] = uVar60;
  auVar18[0xd] = uVar62;
  auVar18[0xe] = uVar64;
  auVar18[0xf] = uVar66;
  uVar50 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd4f90);
  auVar19[9] = uVar54;
  auVar19._0_9_ = *pVar5;
  auVar19[10] = uVar56;
  auVar19[0xb] = uVar58;
  auVar19[0xc] = uVar60;
  auVar19[0xd] = uVar62;
  auVar19[0xe] = uVar64;
  auVar19[0xf] = uVar66;
  uVar113 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5120);
  auVar20[9] = uVar54;
  auVar20._0_9_ = *pVar5;
  auVar20[10] = uVar56;
  auVar20[0xb] = uVar58;
  auVar20[0xc] = uVar60;
  auVar20[0xd] = uVar62;
  auVar20[0xe] = uVar64;
  auVar20[0xf] = uVar66;
  uVar116 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5418);
  auVar21[9] = uVar54;
  auVar21._0_9_ = *pVar5;
  auVar21[10] = uVar56;
  auVar21[0xb] = uVar58;
  auVar21[0xc] = uVar60;
  auVar21[0xd] = uVar62;
  auVar21[0xe] = uVar64;
  auVar21[0xf] = uVar66;
  uVar120 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5270);
  auVar14._12_4_ = uVar93;
  auVar14._0_12_ = *pauVar1;
  uVar114 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
  auVar22[9] = uVar54;
  auVar22._0_9_ = *pVar5;
  auVar22[10] = uVar56;
  auVar22[0xb] = uVar58;
  auVar22[0xc] = uVar60;
  auVar22[0xd] = uVar62;
  auVar22[0xe] = uVar64;
  auVar22[0xf] = uVar66;
  uVar29 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
  fVar86 = (float)((ulong)uVar124 >> 0x20);
  auVar15._12_4_ = uVar93;
  auVar15._0_12_ = *pauVar1;
  uVar121 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
  fVar88 = (float)((ulong)uVar121 >> 0x20);
  fVar89 = (float)((ulong)uVar114 >> 0x20);
  auVar23[8] = (char)uVar118;
  auVar23._0_8_ = uVar118;
  auVar23[9] = (char)((ulong)uVar118 >> 8);
  auVar23[10] = (char)((ulong)uVar118 >> 0x10);
  auVar23[0xb] = (char)((ulong)uVar118 >> 0x18);
  auVar23[0xc] = (char)((ulong)uVar118 >> 0x20);
  auVar23[0xd] = (char)((ulong)uVar118 >> 0x28);
  auVar23[0xe] = (char)((ulong)uVar118 >> 0x30);
  auVar23[0xf] = (char)((ulong)uVar118 >> 0x38);
  uVar24 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd50b0);
  fVar94 = (float)_UNK_01d4ae98;
  fVar130 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar85 = (float)_DAT_01d4ae90;
  fVar90 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  *(undefined1 *)(lVar49 + 0xc0) = 1;
  *(ulong *)(lVar49 + 0xa8) =
       CONCAT44(((float)((ulong)uVar30 >> 0x20) * fVar86 +
                 fVar130 * fVar88 * (float)((ulong)uVar113 >> 0x20) +
                fVar130 * fVar87 * (float)((ulong)uVar24 >> 0x20)) -
                fVar89 * (float)((ulong)uVar120 >> 0x20),
                ((float)uVar30 * (float)uVar124 + fVar94 * (float)uVar121 * (float)uVar113 +
                fVar94 * fVar129 * (float)uVar24) - (float)uVar114 * (float)uVar120);
  *(ulong *)(lVar49 + 0xa0) =
       CONCAT44(((float)((ulong)uVar118 >> 0x20) * fVar86 +
                 fVar90 * fVar87 * (float)((ulong)uVar50 >> 0x20) +
                fVar90 * fVar89 * (float)((ulong)uVar29 >> 0x20)) -
                fVar88 * (float)((ulong)uVar116 >> 0x20),
                ((float)uVar118 * (float)uVar124 + fVar85 * fVar129 * (float)uVar50 +
                fVar85 * (float)uVar114 * (float)uVar29) - (float)uVar121 * (float)uVar116);
  if (lVar49 != 0) {
    (**(code **)(*(long *)(lVar49 + 0x48) + 0x18))((long *)(lVar49 + 0x48));
  }
  if (*plVar52 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00d1a020(&local_a0);
  }
  plVar44 = (long *)FUN_00d11a00(local_a0 + 0xa0,lVar48);
  lVar49 = *plVar44;
  if (lVar49 != 0) {
    (**(code **)(*(long *)(lVar49 + 0x48) + 0x10))();
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (*plVar52 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00d1a020(&local_a0);
  }
  plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
  lVar51 = *plVar44;
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  uVar50 = *(undefined8 *)(lVar51 + 0x170);
  fVar90 = (float)*(undefined8 *)(lVar51 + 0x188);
  fVar94 = (float)((ulong)*(undefined8 *)(lVar51 + 0x188) >> 0x20);
  fVar85 = (float)*(undefined8 *)(lVar51 + 0x180);
  fVar87 = (float)((ulong)*(undefined8 *)(lVar51 + 0x180) >> 0x20);
  fVar129 = (float)((ulong)uVar50 >> 0x20);
  uVar115 = (ulong)(uint)fVar129;
  uVar118 = 0;
  fVar129 = fVar129 * fVar87;
  uVar54 = SUB41(fVar129,0);
  uVar56 = (undefined1)((uint)fVar129 >> 8);
  uVar58 = (undefined1)((uint)fVar129 >> 0x10);
  uVar60 = (undefined1)((uint)fVar129 >> 0x18);
  uVar62 = 0;
  uVar64 = 0;
  uVar66 = 0;
  uVar68 = 0;
  uVar70 = 0;
  uVar72 = 0;
  uVar74 = 0;
  uVar76 = 0;
  uVar78 = 0;
  uVar80 = 0;
  uVar82 = 0;
  uVar84 = 0;
  *(ulong *)(lVar49 + 0xd8) = (ulong)(uint)((float)*(undefined8 *)(lVar51 + 0x178) * fVar90);
  *(ulong *)(lVar49 + 0xd0) = CONCAT44(fVar129,(float)uVar50 * fVar85);
  *(undefined1 *)(lVar49 + 0xc0) = 1;
  if (lVar49 != 0) {
    (**(code **)(*(long *)(lVar49 + 0x48) + 0x18))((long *)(lVar49 + 0x48));
  }
  if (*plVar52 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00d1a020(&local_a0);
  }
  puVar46 = (undefined8 *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
  uVar50 = *puVar46;
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  FUN_00d32850(&local_58,uVar50);
  if (local_58 != 0) {
    if (*plVar52 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_00d1a020(&local_a0);
    }
    plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
    lVar49 = *plVar44;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    if (0.0 <= *(float *)(lVar49 + 0x1a0)) {
      plVar44 = *(long **)(local_58 + 0x490);
      if (plVar44 != (long *)0x0) {
        lVar49 = plVar44[0xb];
        if (*(long *)(lVar49 + 0x58) == 0) {
          uVar50 = (**(code **)**(undefined8 **)(lVar49 + 0x60))();
          *(undefined8 *)(lVar49 + 0x58) = uVar50;
        }
        piVar2 = (int *)(lVar49 + 0x54);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*plVar52 == 0) {
        local_a0 = 0;
      }
      else {
        FUN_00d1a020(&local_a0);
      }
      plVar47 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
      lVar49 = *plVar47;
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      *(undefined4 *)(*(long *)(plVar44[0x35] + 0xa0) + 200) = *(undefined4 *)(lVar49 + 0x1a0);
      if (plVar44 != (long *)0x0) {
        lVar49 = plVar44[0xb];
        piVar2 = (int *)(lVar49 + 0x54);
        do {
          iVar43 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar43 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar43 + -1 == 0) {
          *(undefined8 *)(lVar49 + 0x60) = 0;
          (**(code **)(*plVar44 + 0x18))(plVar44);
        }
      }
    }
    if (*plVar52 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_00d1a020(&local_a0);
    }
    plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
    lVar49 = *plVar44;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    if (0.0 <= *(float *)(lVar49 + 0x1a4)) {
      plVar44 = *(long **)(local_58 + 0x490);
      if (plVar44 != (long *)0x0) {
        lVar49 = plVar44[0xb];
        if (*(long *)(lVar49 + 0x58) == 0) {
          uVar50 = (**(code **)**(undefined8 **)(lVar49 + 0x60))();
          *(undefined8 *)(lVar49 + 0x58) = uVar50;
        }
        piVar2 = (int *)(lVar49 + 0x54);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*plVar52 == 0) {
        local_a0 = 0;
      }
      else {
        FUN_00d1a020(&local_a0);
      }
      plVar47 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
      lVar49 = *plVar47;
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      *(undefined4 *)(*(long *)(plVar44[0x35] + 0xa0) + 0xcc) = *(undefined4 *)(lVar49 + 0x1a4);
      if (plVar44 != (long *)0x0) {
        lVar49 = plVar44[0xb];
        piVar2 = (int *)(lVar49 + 0x54);
        do {
          iVar43 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar43 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar43 + -1 == 0) {
          *(undefined8 *)(lVar49 + 0x60) = 0;
          (**(code **)(*plVar44 + 0x18))(plVar44);
        }
      }
    }
    plVar44 = *(long **)(local_58 + 0x490);
    if (plVar44 != (long *)0x0) {
      lVar49 = plVar44[0xb];
      if (*(long *)(lVar49 + 0x58) == 0) {
        uVar50 = (**(code **)**(undefined8 **)(lVar49 + 0x60))();
        *(undefined8 *)(lVar49 + 0x58) = uVar50;
      }
      piVar2 = (int *)(lVar49 + 0x54);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar49 = plVar44[0xb];
      piVar2 = (int *)(lVar49 + 0x54);
      do {
        iVar43 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar43 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar43 + -1 == 0) {
        *(undefined8 *)(lVar49 + 0x60) = 0;
        (**(code **)(*plVar44 + 0x18))(plVar44);
      }
    }
  }
  if (*plVar52 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00d1a020(&local_a0);
  }
  puVar46 = (undefined8 *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
  uVar50 = *puVar46;
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  FUN_00d35e50(&local_60,uVar50);
  if ((((local_60 != 0) && (*(char *)(local_60 + 0xb4) != '\0')) &&
      (*(char *)(local_60 + 0xb6) == '\0')) && ((*(uint *)(param_1 + 0x7c) & 0xfffffffe) == 2)) {
    uVar30 = *(undefined8 *)(local_60 + 0x358);
    uVar50 = *(undefined8 *)(local_60 + 0x350);
    uVar29 = *(undefined8 *)(local_60 + 0x368);
    uVar24 = *(undefined8 *)(local_60 + 0x360);
    if (*plVar52 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_00d1a020(&local_a0);
    }
    plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
    lVar49 = *plVar44;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    }
    uVar118 = 0;
    fVar129 = (float)*(undefined8 *)(lVar49 + 0x120) + (float)*(undefined8 *)(lVar49 + 0x130) +
              (float)*(undefined8 *)(lVar49 + 0x170) * (float)*(undefined8 *)(lVar49 + 0x140);
    fVar130 = (float)((ulong)*(undefined8 *)(lVar49 + 0x120) >> 0x20) +
              (float)((ulong)*(undefined8 *)(lVar49 + 0x130) >> 0x20) +
              (float)((ulong)*(undefined8 *)(lVar49 + 0x170) >> 0x20) *
              (float)((ulong)*(undefined8 *)(lVar49 + 0x140) >> 0x20);
    fVar86 = (float)*(undefined8 *)(lVar49 + 0x128) + (float)*(undefined8 *)(lVar49 + 0x138) +
             (float)*(undefined8 *)(lVar49 + 0x178) * (float)*(undefined8 *)(lVar49 + 0x148);
    uVar70 = (undefined1)uVar29;
    uVar72 = (undefined1)((ulong)uVar29 >> 8);
    uVar74 = (undefined1)((ulong)uVar29 >> 0x10);
    uVar76 = (undefined1)((ulong)uVar29 >> 0x18);
    uVar78 = (undefined1)((ulong)uVar29 >> 0x20);
    uVar80 = (undefined1)((ulong)uVar29 >> 0x28);
    uVar82 = (undefined1)((ulong)uVar29 >> 0x30);
    uVar84 = (undefined1)((ulong)uVar29 >> 0x38);
    uVar54 = (undefined1)uVar24;
    uVar56 = (undefined1)((ulong)uVar24 >> 8);
    uVar58 = (undefined1)((ulong)uVar24 >> 0x10);
    uVar60 = (undefined1)((ulong)uVar24 >> 0x18);
    uVar62 = (undefined1)((ulong)uVar24 >> 0x20);
    uVar64 = (undefined1)((ulong)uVar24 >> 0x28);
    uVar66 = (undefined1)((ulong)uVar24 >> 0x30);
    uVar68 = (undefined1)((ulong)uVar24 >> 0x38);
    uVar115 = (ulong)(uint)fVar86;
    fVar85 = (float)uVar50 + fVar129;
    fVar87 = (float)((ulong)uVar50 >> 0x20) + fVar130;
    fVar90 = (float)uVar30 + fVar86;
    fVar94 = (float)((ulong)uVar30 >> 0x20) + 0.0;
    fVar130 = (float)((ulong)uVar24 >> 0x20) + fVar130;
    fVar88 = (float)((ulong)uVar29 >> 0x20) + 0.0;
    uStack_98 = CONCAT44(fVar94,fVar90);
    local_a0 = CONCAT44(fVar87,fVar85);
    uStack_88 = CONCAT17((char)((uint)fVar88 >> 0x18),
                         CONCAT16((char)((uint)fVar88 >> 0x10),
                                  CONCAT15((char)((uint)fVar88 >> 8),
                                           CONCAT14(SUB41(fVar88,0),(float)uVar29 + fVar86))));
    uStack_90 = CONCAT17((char)((uint)fVar130 >> 0x18),
                         CONCAT16((char)((uint)fVar130 >> 0x10),
                                  CONCAT15((char)((uint)fVar130 >> 8),
                                           CONCAT14(SUB41(fVar130,0),(float)uVar24 + fVar129))));
    lVar49 = FUN_00d26c40(param_1);
    plVar44 = (long *)(*(code *)**(undefined8 **)(lVar49 + 0x50))((undefined8 *)(lVar49 + 0x50));
    if (((*PTR_DAT_0271d570 & 1) == 0) &&
       (iVar43 = __cxa_guard_acquire(PTR_DAT_0271d570), iVar43 != 0)) {
      uVar50 = FUN_006f10c0();
      *(undefined8 *)PTR_DAT_0271d578 = uVar50;
      __cxa_guard_release(PTR_DAT_0271d570);
    }
    for (; plVar44 != (long *)0x0; plVar44 = (long *)*plVar44) {
      if (plVar44 == (long *)PTR_DAT_0271d578) goto LAB_00d35940;
    }
    lVar49 = 0;
LAB_00d35940:
    FUN_01052a80(lVar49,&local_a0);
  }
  if (*plVar52 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00d1a020(&local_a0);
  }
  plVar44 = (long *)FUN_00d11a00(local_a0 + 0xa0,lVar48);
  lVar49 = *plVar44;
  if (lVar49 != 0) {
    (**(code **)(*(long *)(lVar49 + 0x48) + 0x10))();
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  lVar51 = FUN_015bee50(lVar49,&local_a0);
  if (lVar49 != 0) {
    (**(code **)(*(long *)(lVar49 + 0x48) + 0x18))((long *)(lVar49 + 0x48));
  }
  if (lVar51 != 0) {
    if (*plVar52 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_00d1a020(&local_a0);
    }
    plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
    lVar49 = *plVar44;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    if (*(int *)(lVar49 + 0x1a8) != -1) {
      uVar50 = FUN_00794780(lVar51);
      if (lVar45 == 0) {
        if (*plVar52 == 0) {
          local_a0 = 0;
        }
        else {
          FUN_00d1a020(&local_a0);
        }
        plVar44 = (long *)FUN_00d11a00(local_a0 + 0xa0,lVar48);
        lVar49 = *plVar44;
        if (lVar49 != 0) {
          (**(code **)(*(long *)(lVar49 + 0x48) + 0x10))();
        }
        if (local_a0 != 0) {
          (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        }
        if (*(char *)(lVar49 + 0xc0) == '\0') {
          uVar118 = *(undefined8 *)(lVar49 + 0x68);
          uVar70 = (undefined1)uVar118;
          uVar72 = (undefined1)((ulong)uVar118 >> 8);
          uVar74 = (undefined1)((ulong)uVar118 >> 0x10);
          uVar76 = (undefined1)((ulong)uVar118 >> 0x18);
          uVar78 = (undefined1)((ulong)uVar118 >> 0x20);
          uVar80 = (undefined1)((ulong)uVar118 >> 0x28);
          uVar82 = (undefined1)((ulong)uVar118 >> 0x30);
          uVar84 = (undefined1)((ulong)uVar118 >> 0x38);
          uVar118 = *(undefined8 *)(lVar49 + 0x60);
          uVar54 = (undefined1)uVar118;
          uVar56 = (undefined1)((ulong)uVar118 >> 8);
          uVar58 = (undefined1)((ulong)uVar118 >> 0x10);
          uVar60 = (undefined1)((ulong)uVar118 >> 0x18);
          uVar62 = (undefined1)((ulong)uVar118 >> 0x20);
          uVar64 = (undefined1)((ulong)uVar118 >> 0x28);
          uVar66 = (undefined1)((ulong)uVar118 >> 0x30);
          uVar68 = (undefined1)((ulong)uVar118 >> 0x38);
          uVar118 = *(undefined8 *)(lVar49 + 0x78);
          uVar104 = (undefined1)uVar118;
          uVar105 = (undefined1)((ulong)uVar118 >> 8);
          uVar106 = (undefined1)((ulong)uVar118 >> 0x10);
          uVar107 = (undefined1)((ulong)uVar118 >> 0x18);
          uVar108 = (undefined1)((ulong)uVar118 >> 0x20);
          uVar109 = (undefined1)((ulong)uVar118 >> 0x28);
          uVar110 = (undefined1)((ulong)uVar118 >> 0x30);
          uVar111 = (undefined1)((ulong)uVar118 >> 0x38);
          uVar118 = *(undefined8 *)(lVar49 + 0x70);
          uVar96 = (undefined1)uVar118;
          uVar97 = (undefined1)((ulong)uVar118 >> 8);
          uVar98 = (undefined1)((ulong)uVar118 >> 0x10);
          uVar99 = (undefined1)((ulong)uVar118 >> 0x18);
          uVar100 = (undefined1)((ulong)uVar118 >> 0x20);
          uVar101 = (undefined1)((ulong)uVar118 >> 0x28);
          uVar102 = (undefined1)((ulong)uVar118 >> 0x30);
          uVar103 = (undefined1)((ulong)uVar118 >> 0x38);
          fVar90 = (float)*(undefined8 *)(lVar49 + 0x88);
          fVar129 = (float)((ulong)*(undefined8 *)(lVar49 + 0x88) >> 0x20);
          fVar85 = (float)*(undefined8 *)(lVar49 + 0x80);
          fVar87 = (float)((ulong)*(undefined8 *)(lVar49 + 0x80) >> 0x20);
          uStack_68 = *(undefined8 *)(lVar49 + 0x98);
          uStack_70 = *(ulong *)(lVar49 + 0x90);
        }
        else {
          uVar24 = *(undefined8 *)(lVar49 + 0xa8);
          uVar118 = *(undefined8 *)(lVar49 + 0xa0);
          uStack_68 = *(undefined8 *)(lVar49 + 0xb8);
          uStack_70 = *(ulong *)(lVar49 + 0xb0);
          bVar53 = (byte)uVar118 & (byte)DAT_01d4ab50;
          bVar55 = (byte)((ulong)uVar118 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
          bVar57 = (byte)((ulong)uVar118 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
          bVar59 = (byte)((ulong)uVar118 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
          bVar61 = (byte)((ulong)uVar118 >> 0x20) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
          bVar63 = (byte)((ulong)uVar118 >> 0x28) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
          bVar65 = (byte)((ulong)uVar118 >> 0x30) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
          bVar67 = (byte)((ulong)uVar118 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
          bVar69 = (byte)uVar24 & (byte)DAT_01d4ab58;
          bVar71 = (byte)((ulong)uVar24 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
          bVar73 = (byte)((ulong)uVar24 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
          bVar75 = (byte)((ulong)uVar24 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
          bVar77 = (byte)((ulong)uVar24 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
          bVar79 = (byte)((ulong)uVar24 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
          bVar81 = (byte)((ulong)uVar24 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
          bVar83 = (byte)((ulong)uVar24 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
          uVar30 = NEON_ext(CONCAT17(bVar67,CONCAT16(bVar65,CONCAT15(bVar63,CONCAT14(bVar61,CONCAT13
                                                  (bVar59,CONCAT12(bVar57,CONCAT11(bVar55,bVar53))))
                                                  ))),
                            CONCAT17(bVar67,CONCAT16(bVar65,CONCAT15(bVar63,CONCAT14(bVar61,CONCAT13
                                                  (bVar59,CONCAT12(bVar57,CONCAT11(bVar55,bVar53))))
                                                  ))),4,1);
          fVar123 = (float)((ulong)uVar30 >> 0x20);
          auVar6[1] = bVar55;
          auVar6[0] = bVar53;
          auVar6[2] = bVar57;
          auVar6[3] = bVar59;
          auVar6[4] = bVar61;
          auVar6[5] = bVar63;
          auVar6[6] = bVar65;
          auVar6[7] = bVar67;
          auVar6[8] = bVar69;
          auVar6[9] = bVar71;
          auVar6[10] = bVar73;
          auVar6[0xb] = bVar75;
          auVar6[0xc] = bVar77;
          auVar6[0xd] = bVar79;
          auVar6[0xe] = bVar81;
          auVar6[0xf] = bVar83;
          uVar118 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5188);
          fVar86 = (float)uVar118;
          fVar88 = (float)((ulong)uVar118 >> 0x20);
          auVar7[1] = bVar55;
          auVar7[0] = bVar53;
          auVar7[2] = bVar57;
          auVar7[3] = bVar59;
          auVar7[4] = bVar61;
          auVar7[5] = bVar63;
          auVar7[6] = bVar65;
          auVar7[7] = bVar67;
          auVar7[8] = bVar69;
          auVar7[9] = bVar71;
          auVar7[10] = bVar73;
          auVar7[0xb] = bVar75;
          auVar7[0xc] = bVar77;
          auVar7[0xd] = bVar79;
          auVar7[0xe] = bVar81;
          auVar7[0xf] = bVar83;
          uVar29 = a64_TBL(ZEXT816(0),auVar7,uVar132);
          auVar8[1] = bVar55;
          auVar8[0] = bVar53;
          auVar8[2] = bVar57;
          auVar8[3] = bVar59;
          auVar8[4] = bVar61;
          auVar8[5] = bVar63;
          auVar8[6] = bVar65;
          auVar8[7] = bVar67;
          auVar8[8] = bVar69;
          auVar8[9] = bVar71;
          auVar8[10] = bVar73;
          auVar8[0xb] = bVar75;
          auVar8[0xc] = bVar77;
          auVar8[0xd] = bVar79;
          auVar8[0xe] = bVar81;
          auVar8[0xf] = bVar83;
          uVar116 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5048);
          auVar9[1] = bVar55;
          auVar9[0] = bVar53;
          auVar9[2] = bVar57;
          auVar9[3] = bVar59;
          auVar9[4] = bVar61;
          auVar9[5] = bVar63;
          auVar9[6] = bVar65;
          auVar9[7] = bVar67;
          auVar9[8] = bVar69;
          auVar9[9] = bVar71;
          auVar9[10] = bVar73;
          auVar9[0xb] = bVar75;
          auVar9[0xc] = bVar77;
          auVar9[0xd] = bVar79;
          auVar9[0xe] = bVar81;
          auVar9[0xf] = bVar83;
          uVar121 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5158);
          *(undefined1 *)(lVar49 + 0xc0) = 0;
          auVar10[1] = bVar55;
          auVar10[0] = bVar53;
          auVar10[2] = bVar57;
          auVar10[3] = bVar59;
          auVar10[4] = bVar61;
          auVar10[5] = bVar63;
          auVar10[6] = bVar65;
          auVar10[7] = bVar67;
          auVar10[8] = bVar69;
          auVar10[9] = bVar71;
          auVar10[10] = bVar73;
          auVar10[0xb] = bVar75;
          auVar10[0xc] = bVar77;
          auVar10[0xd] = bVar79;
          auVar10[0xe] = bVar81;
          auVar10[0xf] = bVar83;
          uVar118 = a64_TBL(ZEXT816(0),auVar10,uVar122);
          fVar91 = (float)uVar121;
          fVar95 = (float)((ulong)uVar121 >> 0x20);
          fVar119 = (float)uVar30 * (float)uVar30;
          fVar123 = fVar123 * fVar123;
          fVar117 = (float)((ulong)uVar116 >> 0x20);
          fVar112 = (float)uVar116 * (float)uVar116;
          fVar117 = fVar117 * fVar117;
          fVar129 = (float)uVar29 * (float)CONCAT13(bVar59,CONCAT12(bVar57,CONCAT11(bVar55,bVar53)))
          ;
          fVar87 = (float)((ulong)uVar29 >> 0x20) *
                   (float)CONCAT13(bVar67,CONCAT12(bVar65,CONCAT11(bVar63,bVar61)));
          fVar94 = fVar86 * (float)CONCAT13(bVar75,CONCAT12(bVar73,CONCAT11(bVar71,bVar69)));
          fVar130 = fVar88 * (float)CONCAT13(bVar83,CONCAT12(bVar81,CONCAT11(bVar79,bVar77)));
          fVar85 = (float)((ulong)uVar24 >> 0x20);
          fVar90 = (float)uVar118 * fVar85;
          fVar89 = (float)((ulong)uVar118 >> 0x20) * fVar85;
          fVar129 = fVar129 + fVar129;
          fVar87 = fVar87 + fVar87;
          fVar94 = fVar94 + fVar94;
          fVar130 = fVar130 + fVar130;
          fVar90 = fVar90 + fVar90;
          fVar89 = fVar89 + fVar89;
          fVar92 = fVar91 * fVar85 + fVar91 * fVar85;
          fVar85 = fVar95 * fVar85 + fVar95 * fVar85;
          fVar125 = fVar129 + fVar90;
          fVar126 = fVar87 + fVar89;
          fVar127 = fVar94 + fVar92;
          fVar128 = fVar130 + fVar85;
          fVar129 = fVar129 - fVar90;
          fVar87 = fVar87 - fVar89;
          fVar94 = fVar94 - fVar92;
          fVar130 = fVar130 - fVar85;
          fVar85 = (float)_DAT_01d4a130 - (fVar112 + fVar112 + fVar119 + fVar119);
          fVar90 = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar117 + fVar117 + fVar123 + fVar123);
          uVar54 = SUB41(fVar90,0);
          uVar56 = (undefined1)((uint)fVar90 >> 8);
          uVar58 = (undefined1)((uint)fVar90 >> 0x10);
          uVar60 = (undefined1)((uint)fVar90 >> 0x18);
          fVar90 = (float)_UNK_01d4a138 -
                   (fVar91 * fVar91 + fVar91 * fVar91 + fVar86 * fVar86 + fVar86 * fVar86);
          uVar62 = (undefined1)((uint)fVar90 >> 8);
          uVar64 = (undefined1)((uint)fVar90 >> 0x10);
          uVar66 = (undefined1)((uint)fVar90 >> 0x18);
          fVar86 = (float)((ulong)_UNK_01d4a138 >> 0x20) -
                   (fVar95 * fVar95 + fVar95 * fVar95 + fVar88 * fVar88 + fVar88 * fVar88);
          uVar68 = SUB41(fVar86,0);
          uVar70 = (undefined1)((uint)fVar86 >> 8);
          uVar72 = (undefined1)((uint)fVar86 >> 0x10);
          uVar74 = (undefined1)((uint)fVar86 >> 0x18);
          auVar25._4_4_ = fVar126;
          auVar25._0_4_ = fVar125;
          auVar25._8_4_ = fVar127;
          auVar25._12_4_ = fVar128;
          auVar31._4_4_ = fVar87;
          auVar31._0_4_ = fVar129;
          auVar31._8_4_ = fVar94;
          auVar31._12_4_ = fVar130;
          uVar118 = a64_TBL(ZEXT816(0),auVar25,auVar31,DAT_01cd5250);
          auVar26._4_4_ = fVar126;
          auVar26._0_4_ = fVar125;
          auVar26._8_4_ = fVar127;
          auVar26._12_4_ = fVar128;
          auVar32._4_4_ = fVar87;
          auVar32._0_4_ = fVar129;
          auVar32._8_4_ = fVar94;
          auVar32._12_4_ = fVar130;
          uVar24 = a64_TBL(ZEXT816(0),auVar26,auVar32,DAT_01cd51f8);
          auVar27._4_4_ = fVar126;
          auVar27._0_4_ = fVar125;
          auVar27._8_4_ = fVar127;
          auVar27._12_4_ = fVar128;
          auVar33._4_4_ = fVar87;
          auVar33._0_4_ = fVar129;
          auVar33._8_4_ = fVar94;
          auVar33._12_4_ = fVar130;
          uVar132 = a64_TBL(ZEXT816(0),auVar27,auVar33,DAT_01cd5430);
          auVar28._4_4_ = fVar126;
          auVar28._0_4_ = fVar125;
          auVar28._8_4_ = fVar127;
          auVar28._12_4_ = fVar128;
          auVar34._4_4_ = fVar87;
          auVar34._0_4_ = fVar129;
          auVar34._8_4_ = fVar94;
          auVar34._12_4_ = fVar130;
          uVar116 = a64_TBL(ZEXT816(0),auVar28,auVar34,DAT_01cd5050);
          uVar93 = (undefined4)((ulong)uVar24 >> 0x20);
          auVar11[4] = uVar54;
          auVar11._0_4_ = fVar85;
          auVar11[5] = uVar56;
          auVar11[6] = uVar58;
          auVar11[7] = uVar60;
          auVar11[8] = SUB41(fVar90,0);
          auVar11[9] = uVar62;
          auVar11[10] = uVar64;
          auVar11[0xb] = uVar66;
          auVar11[0xc] = uVar68;
          auVar11[0xd] = uVar70;
          auVar11[0xe] = uVar72;
          auVar11[0xf] = uVar74;
          auVar16._8_4_ = (int)uVar24;
          auVar16._0_8_ = uVar118;
          auVar16._12_4_ = uVar93;
          uVar29 = a64_TBL(ZEXT816(0),auVar11,auVar16,DAT_01cd50d8);
          auVar12[4] = uVar54;
          auVar12._0_4_ = fVar85;
          auVar12[5] = uVar56;
          auVar12[6] = uVar58;
          auVar12[7] = uVar60;
          auVar12[8] = SUB41(fVar90,0);
          auVar12[9] = uVar62;
          auVar12[10] = uVar64;
          auVar12[0xb] = uVar66;
          auVar12[0xc] = uVar68;
          auVar12[0xd] = uVar70;
          auVar12[0xe] = uVar72;
          auVar12[0xf] = uVar74;
          auVar17._8_4_ = (int)uVar24;
          auVar17._0_8_ = uVar118;
          auVar17._12_4_ = uVar93;
          uVar121 = a64_TBL(ZEXT816(0),auVar12,auVar17,DAT_01cd4fb8);
          uVar131 = (undefined4)
                    (CONCAT17(uVar74,CONCAT16(uVar72,CONCAT15(uVar70,CONCAT14(uVar68,fVar90)))) >>
                    0x20);
          uVar93 = (undefined4)
                   (CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,fVar85)))) >>
                   0x20);
          auVar35._4_4_ = uVar93;
          auVar35._0_4_ = fVar85;
          auVar35._8_4_ = fVar90;
          auVar35._12_4_ = uVar131;
          auVar39._8_8_ = uVar116;
          auVar39._0_8_ = uVar132;
          uVar118 = a64_TBL(ZEXT816(0),auVar35,auVar39,DAT_01cd50b8);
          auVar36._4_4_ = uVar93;
          auVar36._0_4_ = fVar85;
          auVar36._8_4_ = fVar90;
          auVar36._12_4_ = uVar131;
          auVar40._8_8_ = uVar116;
          auVar40._0_8_ = uVar132;
          uVar30 = a64_TBL(ZEXT816(0),auVar36,auVar40,DAT_01cd5308);
          auVar37._4_4_ = uVar93;
          auVar37._0_4_ = fVar85;
          auVar37._8_4_ = fVar90;
          auVar37._12_4_ = uVar131;
          auVar41._8_8_ = uVar116;
          auVar41._0_8_ = uVar132;
          uVar122 = a64_TBL(ZEXT816(0),auVar37,auVar41,DAT_01cd5008);
          auVar38._4_4_ = uVar93;
          auVar38._0_4_ = fVar85;
          auVar38._8_4_ = fVar90;
          auVar38._12_4_ = uVar131;
          auVar42._8_8_ = uVar116;
          auVar42._0_8_ = uVar132;
          uVar24 = a64_TBL(ZEXT816(0),auVar38,auVar42,DAT_01cd4fb0);
          fVar129 = (float)*(undefined8 *)(lVar49 + 0xd8);
          fVar85 = (float)uVar29 * fVar129;
          fVar87 = (float)((ulong)uVar29 >> 0x20) * fVar129;
          fVar90 = (float)uVar121 * fVar129;
          fVar129 = (float)((ulong)uVar121 >> 0x20) * fVar129;
          fVar86 = (float)*(undefined8 *)(lVar49 + 0xd0);
          fVar94 = (float)uVar118 * fVar86;
          uVar54 = SUB41(fVar94,0);
          uVar56 = (undefined1)((uint)fVar94 >> 8);
          uVar58 = (undefined1)((uint)fVar94 >> 0x10);
          uVar60 = (undefined1)((uint)fVar94 >> 0x18);
          fVar130 = (float)((ulong)uVar118 >> 0x20) * fVar86;
          uVar62 = SUB41(fVar130,0);
          uVar64 = (undefined1)((uint)fVar130 >> 8);
          uVar66 = (undefined1)((uint)fVar130 >> 0x10);
          uVar68 = (undefined1)((uint)fVar130 >> 0x18);
          fVar130 = (float)uVar30 * fVar86;
          uVar70 = SUB41(fVar130,0);
          uVar72 = (undefined1)((uint)fVar130 >> 8);
          uVar74 = (undefined1)((uint)fVar130 >> 0x10);
          uVar76 = (undefined1)((uint)fVar130 >> 0x18);
          fVar86 = (float)((ulong)uVar30 >> 0x20) * fVar86;
          uVar78 = SUB41(fVar86,0);
          uVar80 = (undefined1)((uint)fVar86 >> 8);
          uVar82 = (undefined1)((uint)fVar86 >> 0x10);
          uVar84 = (undefined1)((uint)fVar86 >> 0x18);
          *(ulong *)(lVar49 + 0x88) = CONCAT44(fVar129,fVar90);
          *(ulong *)(lVar49 + 0x80) = CONCAT44(fVar87,fVar85);
          *(undefined8 *)(lVar49 + 0x98) = uStack_68;
          *(ulong *)(lVar49 + 0x90) = uStack_70;
          fVar86 = (float)((ulong)*(undefined8 *)(lVar49 + 0xd0) >> 0x20);
          fVar88 = (float)uVar122 * fVar86;
          uVar96 = SUB41(fVar88,0);
          uVar97 = (undefined1)((uint)fVar88 >> 8);
          uVar98 = (undefined1)((uint)fVar88 >> 0x10);
          uVar99 = (undefined1)((uint)fVar88 >> 0x18);
          fVar89 = (float)((ulong)uVar122 >> 0x20) * fVar86;
          uVar100 = SUB41(fVar89,0);
          uVar101 = (undefined1)((uint)fVar89 >> 8);
          uVar102 = (undefined1)((uint)fVar89 >> 0x10);
          uVar103 = (undefined1)((uint)fVar89 >> 0x18);
          fVar89 = (float)uVar24 * fVar86;
          uVar104 = SUB41(fVar89,0);
          uVar105 = (undefined1)((uint)fVar89 >> 8);
          uVar106 = (undefined1)((uint)fVar89 >> 0x10);
          uVar107 = (undefined1)((uint)fVar89 >> 0x18);
          fVar86 = (float)((ulong)uVar24 >> 0x20) * fVar86;
          uVar108 = SUB41(fVar86,0);
          uVar109 = (undefined1)((uint)fVar86 >> 8);
          uVar110 = (undefined1)((uint)fVar86 >> 0x10);
          uVar111 = (undefined1)((uint)fVar86 >> 0x18);
          *(ulong *)(lVar49 + 0x68) =
               CONCAT17(uVar84,CONCAT16(uVar82,CONCAT15(uVar80,CONCAT14(uVar78,fVar130))));
          *(ulong *)(lVar49 + 0x60) =
               CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,fVar94))));
          *(ulong *)(lVar49 + 0x78) =
               CONCAT17(uVar111,CONCAT16(uVar110,CONCAT15(uVar109,CONCAT14(uVar108,fVar89))));
          *(ulong *)(lVar49 + 0x70) =
               CONCAT17(uVar103,CONCAT16(uVar102,CONCAT15(uVar101,CONCAT14(uVar100,fVar88))));
        }
        uStack_98 = CONCAT17(uVar84,CONCAT16(uVar82,CONCAT15(uVar80,CONCAT14(uVar78,CONCAT13(uVar76,
                                                  CONCAT12(uVar74,CONCAT11(uVar72,uVar70)))))));
        local_a0 = CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(uVar60,
                                                  CONCAT12(uVar58,CONCAT11(uVar56,uVar54)))))));
        uStack_88 = CONCAT17(uVar111,CONCAT16(uVar110,CONCAT15(uVar109,CONCAT14(uVar108,CONCAT13(
                                                  uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar104)
                                                                  ))))));
        uStack_90 = CONCAT17(uVar103,CONCAT16(uVar102,CONCAT15(uVar101,CONCAT14(uVar100,CONCAT13(
                                                  uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)))))
                                             ));
        uStack_78 = CONCAT44(fVar129,fVar90);
        local_80 = CONCAT44(fVar87,fVar85);
        FUN_019d6690(uVar50,&local_a0);
        (**(code **)(*(long *)(lVar49 + 0x48) + 0x18))((long *)(lVar49 + 0x48));
      }
      else {
        FUN_00d35fc0(lVar45);
        uStack_98 = CONCAT17(extraout_var_13,
                             CONCAT16(extraout_var_12,
                                      CONCAT15(extraout_var_11,
                                               CONCAT14(extraout_var_10,
                                                        CONCAT13(extraout_var_09,
                                                                 CONCAT12(extraout_var_08,
                                                                          CONCAT11(extraout_var_07,
                                                                                   extraout_var_06))
                                                                )))));
        local_a0 = CONCAT17(extraout_var_05,
                            CONCAT16(extraout_var_04,
                                     CONCAT15(extraout_var_03,
                                              CONCAT14(extraout_var_02,
                                                       CONCAT13(extraout_var_01,
                                                                CONCAT12(extraout_var_00,
                                                                         CONCAT11(extraout_var,
                                                                                  extraout_b0)))))))
        ;
        uStack_88 = CONCAT44(fVar94,fVar90);
        uStack_90 = CONCAT44(fVar87,fVar85);
        uStack_78 = CONCAT17(uVar84,CONCAT16(uVar82,CONCAT15(uVar80,CONCAT14(uVar78,CONCAT13(uVar76,
                                                  CONCAT12(uVar74,CONCAT11(uVar72,uVar70)))))));
        local_80 = CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(uVar60,
                                                  CONCAT12(uVar58,CONCAT11(uVar56,uVar54)))))));
        uStack_70 = uVar115;
        uStack_68 = uVar118;
        FUN_019d6690(uVar50,&local_a0);
      }
      lVar49 = *(long *)PTR_DAT_027105c8;
      uVar50 = FUN_00794780(lVar51);
      if (*plVar52 == 0) {
        local_a0 = 0;
      }
      else {
        FUN_00d1a020(&local_a0);
      }
      plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
      lVar45 = *plVar44;
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      FUN_00790fe0(*(undefined8 *)(lVar49 + 0x238),uVar50,*(undefined4 *)(lVar45 + 0x1a8));
      if (*plVar52 == 0) {
        local_a0 = 0;
      }
      else {
        FUN_00d1a020(&local_a0);
      }
      plVar44 = (long *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
      lVar49 = *plVar44;
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      *(undefined4 *)(lVar49 + 0x1a8) = 0xffffffff;
    }
  }
  if (*plVar52 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00d1a020(&local_a0);
  }
  puVar46 = (undefined8 *)FUN_00d11ca0(local_a0 + 0xf8,lVar48);
  uVar50 = *puVar46;
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  FUN_00d364c0(&local_a0,uVar50);
  if (((local_a0 != 0) && (*(char *)(local_a0 + 0xb4) != '\0')) &&
     ((*(char *)(local_a0 + 0xb6) == '\0' && (*(char *)(local_a0 + 0x34c) == '\0')))) {
    FUN_00d1a020(&local_a8,*plVar52);
    lVar48 = FUN_007240b0(*(long *)(local_a8 + 0x778) + 0x6c0,0);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
    lVar49 = *(long *)(*(long *)(local_a0 + 0x5d0) + 0x78);
    *(undefined8 *)(lVar48 + 0x88) = *(undefined8 *)(lVar49 + 0x88);
    *(undefined8 *)(lVar48 + 0x80) = *(undefined8 *)(lVar49 + 0x80);
  }
  if (*(char *)(param_1 + 0xb5) != '\0') {
    *(undefined1 *)(param_1 + 0xb6) = 1;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


