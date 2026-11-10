/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0104e8d0; name: FUN_0104e8d0
 */


void FUN_0104e8d0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  char cStack_fc;
  char cStack_fb;
  char cStack_fa;
  char cStack_f9;
  char cStack_f8;
  undefined4 uStack_f7;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  undefined4 uStack_ef;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 local_e9;
  undefined1 uStack_e8;
  undefined4 uStack_e7;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 local_e1;
  undefined1 uStack_e0;
  undefined4 uStack_df;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 local_d9;
  undefined1 uStack_d8;
  undefined4 uStack_d7;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 local_d1;
  undefined1 uStack_d0;
  undefined4 uStack_cf;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 local_c9;
  undefined1 uStack_c8;
  undefined4 uStack_c7;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 local_b8;
  char local_b0;
  undefined8 local_af;
  undefined8 local_a7;
  undefined8 local_9f;
  undefined8 local_97;
  undefined8 local_8f;
  undefined8 local_87;
  undefined8 local_7f;
  undefined8 local_77;
  
  plVar6 = *(long **)(param_2 + 8);
  puVar2 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x30,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0104f57c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = plVar6;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *param_1 = (long)puVar2;
  param_1[1] = (long)plVar6;
  param_1[2] = 0x30;
  param_1[3] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  local_b8 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *param_1;
  local_b0 = '\0';
  uStack_c1 = 0;
  uStack_c0 = 1;
  local_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  local_d1 = 0;
  uStack_d0 = 0;
  uStack_cf = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  local_d9 = 0;
  uStack_d8 = 0;
  uStack_d7 = 0;
  uStack_d3 = 0;
  uStack_d2 = 0;
  local_e1 = 0;
  uStack_e0 = 0;
  uStack_df = 0;
  uStack_db = 0;
  uStack_da = 0;
  local_e9 = 0;
  uStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_f1 = 0;
  uStack_f0 = 0;
  uStack_ef = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  cStack_f9 = '\0';
  cStack_f8 = '\0';
  uStack_f7 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  cStack_fa = 'd';
  cStack_fc = '_';
  cStack_fb = 'i';
  local_100 = 0x74666967;
  puVar2 = *(undefined8 **)(lVar3 + 8);
  if (puVar2 < *(undefined8 **)(lVar3 + 0x10)) {
    uVar8 = *(undefined8 *)(lVar3 + 0x18);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0104f57c;
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar2 = CONCAT17(cStack_f9,
                       CONCAT16(cStack_fa,CONCAT15(cStack_fb,CONCAT14(cStack_fc,local_100))));
    puVar2[1] = CONCAT17(uStack_f1,
                         CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT41(uStack_f7,cStack_f8))));
    puVar2[4] = CONCAT17(local_d9,CONCAT16(uStack_da,
                                           CONCAT15(uStack_db,CONCAT41(uStack_df,uStack_e0))));
    puVar2[5] = CONCAT17(local_d1,CONCAT16(uStack_d2,
                                           CONCAT15(uStack_d3,CONCAT41(uStack_d7,uStack_d8))));
    puVar2[2] = CONCAT17(local_e9,CONCAT16(uStack_ea,
                                           CONCAT15(uStack_eb,CONCAT41(uStack_ef,uStack_f0))));
    puVar2[3] = CONCAT17(local_e1,CONCAT16(uStack_e2,
                                           CONCAT15(uStack_e3,CONCAT41(uStack_e7,uStack_e8))));
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = CONCAT71(uStack_bf,uStack_c0);
    puVar2[9] = local_b8;
    puVar2[6] = CONCAT17(local_c9,CONCAT16(uStack_ca,
                                           CONCAT15(uStack_cb,CONCAT41(uStack_cf,uStack_d0))));
    puVar2[7] = CONCAT17(uStack_c1,
                         CONCAT16(uStack_c2,CONCAT15(uStack_c3,CONCAT41(uStack_c7,uStack_c8))));
    if (local_b0 != '\0') {
      *(undefined8 *)((long)puVar2 + 0x69) = local_97;
      *(undefined8 *)((long)puVar2 + 0x61) = local_9f;
      *(undefined8 *)((long)puVar2 + 0x59) = local_a7;
      *(undefined8 *)((long)puVar2 + 0x51) = local_af;
      *(undefined8 *)((long)puVar2 + 0x71) = local_8f;
      *(undefined8 *)((long)puVar2 + 0x89) = local_77;
      *(undefined8 *)((long)puVar2 + 0x81) = local_7f;
      *(undefined8 *)((long)puVar2 + 0x79) = local_87;
      *(undefined1 *)(puVar2 + 10) = 1;
    }
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 0x98;
  }
  else {
    FUN_01033e20(lVar3,&local_100);
  }
  local_b8 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *param_1;
  local_b0 = '\0';
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  local_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_d3 = 0;
  uStack_d2 = 0;
  local_d1 = 0;
  uStack_d0 = 0;
  uStack_cf = 0;
  uStack_db = 0;
  uStack_da = 0;
  local_d9 = 0;
  uStack_d8 = 0;
  uStack_d7 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  local_e1 = 0;
  uStack_e0 = 0;
  uStack_df = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  local_e9 = 0;
  uStack_e8 = 0;
  uStack_e7 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_f0 = 0;
  uStack_ef = 0;
  local_100 = s_get_monsno_01d4510d._0_4_;
  cStack_fc = s_get_monsno_01d4510d[4];
  cStack_fb = s_get_monsno_01d4510d[5];
  cStack_fa = s_get_monsno_01d4510d[6];
  cStack_f9 = s_get_monsno_01d4510d[7];
  uStack_c0 = 1;
  cStack_f8 = 'n';
  uStack_f7 = 0x6f;
  puVar2 = *(undefined8 **)(lVar3 + 8);
  if (puVar2 < *(undefined8 **)(lVar3 + 0x10)) {
    uVar8 = *(undefined8 *)(lVar3 + 0x18);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0104f57c;
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar2 = CONCAT17(cStack_f9,
                       CONCAT16(cStack_fa,CONCAT15(cStack_fb,CONCAT14(cStack_fc,local_100))));
    puVar2[1] = CONCAT17(uStack_f1,
                         CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT41(uStack_f7,cStack_f8))));
    puVar2[4] = CONCAT17(local_d9,CONCAT16(uStack_da,
                                           CONCAT15(uStack_db,CONCAT41(uStack_df,uStack_e0))));
    puVar2[5] = CONCAT17(local_d1,CONCAT16(uStack_d2,
                                           CONCAT15(uStack_d3,CONCAT41(uStack_d7,uStack_d8))));
    puVar2[2] = CONCAT17(local_e9,CONCAT16(uStack_ea,
                                           CONCAT15(uStack_eb,CONCAT41(uStack_ef,uStack_f0))));
    puVar2[3] = CONCAT17(local_e1,CONCAT16(uStack_e2,
                                           CONCAT15(uStack_e3,CONCAT41(uStack_e7,uStack_e8))));
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = CONCAT71(uStack_bf,uStack_c0);
    puVar2[9] = local_b8;
    puVar2[6] = CONCAT17(local_c9,CONCAT16(uStack_ca,
                                           CONCAT15(uStack_cb,CONCAT41(uStack_cf,uStack_d0))));
    puVar2[7] = CONCAT17(uStack_c1,
                         CONCAT16(uStack_c2,CONCAT15(uStack_c3,CONCAT41(uStack_c7,uStack_c8))));
    if (local_b0 != '\0') {
      *(undefined8 *)((long)puVar2 + 0x69) = local_97;
      *(undefined8 *)((long)puVar2 + 0x61) = local_9f;
      *(undefined8 *)((long)puVar2 + 0x59) = local_a7;
      *(undefined8 *)((long)puVar2 + 0x51) = local_af;
      *(undefined8 *)((long)puVar2 + 0x71) = local_8f;
      *(undefined8 *)((long)puVar2 + 0x89) = local_77;
      *(undefined8 *)((long)puVar2 + 0x81) = local_7f;
      *(undefined8 *)((long)puVar2 + 0x79) = local_87;
      *(undefined1 *)(puVar2 + 10) = 1;
    }
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 0x98;
  }
  else {
    FUN_01033e20(lVar3,&local_100);
  }
  local_b8 = *(undefined8 *)(param_2 + 0x20);
  local_b0 = '\0';
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 1;
  lVar3 = *param_1;
  uStack_cb = 0;
  uStack_ca = 0;
  local_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_d3 = 0;
  uStack_d2 = 0;
  local_d1 = 0;
  uStack_d0 = 0;
  uStack_cf = 0;
  uStack_db = 0;
  uStack_da = 0;
  local_d9 = 0;
  uStack_d8 = 0;
  uStack_d7 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  local_e1 = 0;
  uStack_e0 = 0;
  uStack_df = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  local_e9 = 0;
  uStack_e8 = 0;
  uStack_e7 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_f0 = 0;
  uStack_ef = 0;
  cStack_f8 = s_get_mons_form_01cfdb68[8];
  uStack_f7 = s_get_mons_form_01cfdb68._9_4_;
  local_100 = s_get_mons_form_01cfdb68._0_4_;
  cStack_fc = s_get_mons_form_01cfdb68[4];
  cStack_fb = s_get_mons_form_01cfdb68[5];
  cStack_fa = s_get_mons_form_01cfdb68[6];
  cStack_f9 = s_get_mons_form_01cfdb68[7];
  puVar2 = *(undefined8 **)(lVar3 + 8);
  if (puVar2 < *(undefined8 **)(lVar3 + 0x10)) {
    uVar8 = *(undefined8 *)(lVar3 + 0x18);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0104f57c;
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar2 = CONCAT17(cStack_f9,
                       CONCAT16(cStack_fa,CONCAT15(cStack_fb,CONCAT14(cStack_fc,local_100))));
    puVar2[1] = CONCAT17(uStack_f1,
                         CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT41(uStack_f7,cStack_f8))));
    puVar2[4] = CONCAT17(local_d9,CONCAT16(uStack_da,
                                           CONCAT15(uStack_db,CONCAT41(uStack_df,uStack_e0))));
    puVar2[5] = CONCAT17(local_d1,CONCAT16(uStack_d2,
                                           CONCAT15(uStack_d3,CONCAT41(uStack_d7,uStack_d8))));
    puVar2[2] = CONCAT17(local_e9,CONCAT16(uStack_ea,
                                           CONCAT15(uStack_eb,CONCAT41(uStack_ef,uStack_f0))));
    puVar2[3] = CONCAT17(local_e1,CONCAT16(uStack_e2,
                                           CONCAT15(uStack_e3,CONCAT41(uStack_e7,uStack_e8))));
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = CONCAT71(uStack_bf,uStack_c0);
    puVar2[9] = local_b8;
    puVar2[6] = CONCAT17(local_c9,CONCAT16(uStack_ca,
                                           CONCAT15(uStack_cb,CONCAT41(uStack_cf,uStack_d0))));
    puVar2[7] = CONCAT17(uStack_c1,
                         CONCAT16(uStack_c2,CONCAT15(uStack_c3,CONCAT41(uStack_c7,uStack_c8))));
    if (local_b0 != '\0') {
      *(undefined8 *)((long)puVar2 + 0x69) = local_97;
      *(undefined8 *)((long)puVar2 + 0x61) = local_9f;
      *(undefined8 *)((long)puVar2 + 0x59) = local_a7;
      *(undefined8 *)((long)puVar2 + 0x51) = local_af;
      *(undefined8 *)((long)puVar2 + 0x71) = local_8f;
      *(undefined8 *)((long)puVar2 + 0x89) = local_77;
      *(undefined8 *)((long)puVar2 + 0x81) = local_7f;
      *(undefined8 *)((long)puVar2 + 0x79) = local_87;
      *(undefined1 *)(puVar2 + 10) = 1;
    }
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 0x98;
  }
  else {
    FUN_01033e20(lVar3,&local_100);
  }
  if (local_b0 != '\0') {
    local_b0 = '\0';
  }
  uVar7 = 0;
  puVar2 = (undefined8 *)(param_2 + 0x30);
  do {
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    snprintf((char *)&local_140,0x40,"get_item_%d",(int)uVar7);
    snprintf((char *)&local_180,0x40,"get_itemcnt_%d",(int)uVar7);
    uVar8 = puVar2[-1];
    lVar3 = *param_1;
    local_b0 = '\0';
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_cb = 0;
    uStack_ca = 0;
    local_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c3 = 0;
    uStack_c2 = 0;
    uStack_c1 = 0;
    uStack_e0 = 0;
    uStack_df = 0;
    uStack_db = 0;
    uStack_da = 0;
    local_d9 = 0;
    uStack_d8 = 0;
    uStack_d7 = 0;
    uStack_d3 = 0;
    uStack_d2 = 0;
    local_d1 = 0;
    uStack_f0 = 0;
    uStack_ef = 0;
    uStack_eb = 0;
    uStack_ea = 0;
    local_e9 = 0;
    uStack_e8 = 0;
    uStack_e7 = 0;
    uStack_e3 = 0;
    uStack_e2 = 0;
    local_e1 = 0;
    local_100 = 0;
    cStack_fc = '\0';
    cStack_fb = '\0';
    cStack_fa = '\0';
    cStack_f9 = '\0';
    cStack_f8 = '\0';
    uStack_f7 = 0;
    uStack_f3 = 0;
    uStack_f2 = 0;
    uStack_f1 = 0;
    sVar5 = strlen((char *)&local_140);
    memcpy(&local_100,&local_140,sVar5);
    uStack_c0 = 1;
    if (local_b0 != '\0') {
      local_b0 = '\0';
    }
    puVar1 = *(undefined8 **)(lVar3 + 8);
    local_b8 = uVar8;
    if (puVar1 < *(undefined8 **)(lVar3 + 0x10)) {
      uVar8 = *(undefined8 *)(lVar3 + 0x18);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0104f57c;
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar1 = CONCAT17(cStack_f9,
                         CONCAT16(cStack_fa,CONCAT15(cStack_fb,CONCAT14(cStack_fc,local_100))));
      puVar1[1] = CONCAT17(uStack_f1,
                           CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT41(uStack_f7,cStack_f8))));
      puVar1[4] = CONCAT17(local_d9,CONCAT16(uStack_da,
                                             CONCAT15(uStack_db,CONCAT41(uStack_df,uStack_e0))));
      puVar1[5] = CONCAT17(local_d1,CONCAT16(uStack_d2,
                                             CONCAT15(uStack_d3,CONCAT41(uStack_d7,uStack_d8))));
      puVar1[2] = CONCAT17(local_e9,CONCAT16(uStack_ea,
                                             CONCAT15(uStack_eb,CONCAT41(uStack_ef,uStack_f0))));
      puVar1[3] = CONCAT17(local_e1,CONCAT16(uStack_e2,
                                             CONCAT15(uStack_e3,CONCAT41(uStack_e7,uStack_e8))));
      *(undefined1 *)(puVar1 + 10) = 0;
      puVar1[8] = CONCAT71(uStack_bf,uStack_c0);
      puVar1[9] = local_b8;
      puVar1[6] = CONCAT17(local_c9,CONCAT16(uStack_ca,
                                             CONCAT15(uStack_cb,CONCAT41(uStack_cf,uStack_d0))));
      puVar1[7] = CONCAT17(uStack_c1,
                           CONCAT16(uStack_c2,CONCAT15(uStack_c3,CONCAT41(uStack_c7,uStack_c8))));
      if (local_b0 != '\0') {
        *(undefined8 *)((long)puVar1 + 0x69) = local_97;
        *(undefined8 *)((long)puVar1 + 0x61) = local_9f;
        *(undefined8 *)((long)puVar1 + 0x59) = local_a7;
        *(undefined8 *)((long)puVar1 + 0x51) = local_af;
        *(undefined8 *)((long)puVar1 + 0x89) = local_77;
        *(undefined8 *)((long)puVar1 + 0x81) = local_7f;
        *(undefined8 *)((long)puVar1 + 0x79) = local_87;
        *(undefined8 *)((long)puVar1 + 0x71) = local_8f;
        *(undefined1 *)(puVar1 + 10) = 1;
      }
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 0x98;
    }
    else {
      FUN_01033e20(lVar3,&local_100);
    }
    uVar8 = *puVar2;
    lVar3 = *param_1;
    local_b0 = '\0';
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_cb = 0;
    uStack_ca = 0;
    local_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c3 = 0;
    uStack_c2 = 0;
    uStack_c1 = 0;
    uStack_e0 = 0;
    uStack_df = 0;
    uStack_db = 0;
    uStack_da = 0;
    local_d9 = 0;
    uStack_d8 = 0;
    uStack_d7 = 0;
    uStack_d3 = 0;
    uStack_d2 = 0;
    local_d1 = 0;
    uStack_f0 = 0;
    uStack_ef = 0;
    uStack_eb = 0;
    uStack_ea = 0;
    local_e9 = 0;
    uStack_e8 = 0;
    uStack_e7 = 0;
    uStack_e3 = 0;
    uStack_e2 = 0;
    local_e1 = 0;
    local_100 = 0;
    cStack_fc = '\0';
    cStack_fb = '\0';
    cStack_fa = '\0';
    cStack_f9 = '\0';
    cStack_f8 = '\0';
    uStack_f7 = 0;
    uStack_f3 = 0;
    uStack_f2 = 0;
    uStack_f1 = 0;
    sVar5 = strlen((char *)&local_180);
    memcpy(&local_100,&local_180,sVar5);
    uStack_c0 = 1;
    if (local_b0 != '\0') {
      local_b0 = '\0';
    }
    puVar1 = *(undefined8 **)(lVar3 + 8);
    local_b8 = uVar8;
    if (puVar1 < *(undefined8 **)(lVar3 + 0x10)) {
      uVar8 = *(undefined8 *)(lVar3 + 0x18);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0104f57c;
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar1 = CONCAT17(cStack_f9,
                         CONCAT16(cStack_fa,CONCAT15(cStack_fb,CONCAT14(cStack_fc,local_100))));
      puVar1[1] = CONCAT17(uStack_f1,
                           CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT41(uStack_f7,cStack_f8))));
      puVar1[4] = CONCAT17(local_d9,CONCAT16(uStack_da,
                                             CONCAT15(uStack_db,CONCAT41(uStack_df,uStack_e0))));
      puVar1[5] = CONCAT17(local_d1,CONCAT16(uStack_d2,
                                             CONCAT15(uStack_d3,CONCAT41(uStack_d7,uStack_d8))));
      puVar1[2] = CONCAT17(local_e9,CONCAT16(uStack_ea,
                                             CONCAT15(uStack_eb,CONCAT41(uStack_ef,uStack_f0))));
      puVar1[3] = CONCAT17(local_e1,CONCAT16(uStack_e2,
                                             CONCAT15(uStack_e3,CONCAT41(uStack_e7,uStack_e8))));
      *(undefined1 *)(puVar1 + 10) = 0;
      puVar1[8] = CONCAT71(uStack_bf,uStack_c0);
      puVar1[9] = local_b8;
      puVar1[6] = CONCAT17(local_c9,CONCAT16(uStack_ca,
                                             CONCAT15(uStack_cb,CONCAT41(uStack_cf,uStack_d0))));
      puVar1[7] = CONCAT17(uStack_c1,
                           CONCAT16(uStack_c2,CONCAT15(uStack_c3,CONCAT41(uStack_c7,uStack_c8))));
      if (local_b0 != '\0') {
        *(undefined8 *)((long)puVar1 + 0x69) = local_97;
        *(undefined8 *)((long)puVar1 + 0x61) = local_9f;
        *(undefined8 *)((long)puVar1 + 0x59) = local_a7;
        *(undefined8 *)((long)puVar1 + 0x51) = local_af;
        *(undefined8 *)((long)puVar1 + 0x89) = local_77;
        *(undefined8 *)((long)puVar1 + 0x81) = local_7f;
        *(undefined8 *)((long)puVar1 + 0x79) = local_87;
        *(undefined8 *)((long)puVar1 + 0x71) = local_8f;
        *(undefined1 *)(puVar1 + 10) = 1;
      }
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 0x98;
    }
    else {
      FUN_01033e20(lVar3,&local_100);
    }
    if (local_b0 != '\0') {
      local_b0 = '\0';
    }
    uVar7 = uVar7 + 1;
    puVar2 = puVar2 + 2;
  } while (uVar7 < 6);
  uVar7 = 0;
  puVar2 = (undefined8 *)(param_2 + 0x90);
  do {
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    snprintf((char *)&local_140,0x40,"get_parts_%d",(int)uVar7);
    snprintf((char *)&local_180,0x40,"get_dress_%d",(int)uVar7);
    uVar8 = puVar2[-1];
    lVar3 = *param_1;
    local_b0 = '\0';
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_cb = 0;
    uStack_ca = 0;
    local_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c3 = 0;
    uStack_c2 = 0;
    uStack_c1 = 0;
    uStack_e0 = 0;
    uStack_df = 0;
    uStack_db = 0;
    uStack_da = 0;
    local_d9 = 0;
    uStack_d8 = 0;
    uStack_d7 = 0;
    uStack_d3 = 0;
    uStack_d2 = 0;
    local_d1 = 0;
    uStack_f0 = 0;
    uStack_ef = 0;
    uStack_eb = 0;
    uStack_ea = 0;
    local_e9 = 0;
    uStack_e8 = 0;
    uStack_e7 = 0;
    uStack_e3 = 0;
    uStack_e2 = 0;
    local_e1 = 0;
    local_100 = 0;
    cStack_fc = '\0';
    cStack_fb = '\0';
    cStack_fa = '\0';
    cStack_f9 = '\0';
    cStack_f8 = '\0';
    uStack_f7 = 0;
    uStack_f3 = 0;
    uStack_f2 = 0;
    uStack_f1 = 0;
    sVar5 = strlen((char *)&local_140);
    memcpy(&local_100,&local_140,sVar5);
    uStack_c0 = 1;
    if (local_b0 != '\0') {
      local_b0 = '\0';
    }
    puVar1 = *(undefined8 **)(lVar3 + 8);
    local_b8 = uVar8;
    if (puVar1 < *(undefined8 **)(lVar3 + 0x10)) {
      uVar8 = *(undefined8 *)(lVar3 + 0x18);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0104f57c;
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar1 = CONCAT17(cStack_f9,
                         CONCAT16(cStack_fa,CONCAT15(cStack_fb,CONCAT14(cStack_fc,local_100))));
      puVar1[1] = CONCAT17(uStack_f1,
                           CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT41(uStack_f7,cStack_f8))));
      puVar1[4] = CONCAT17(local_d9,CONCAT16(uStack_da,
                                             CONCAT15(uStack_db,CONCAT41(uStack_df,uStack_e0))));
      puVar1[5] = CONCAT17(local_d1,CONCAT16(uStack_d2,
                                             CONCAT15(uStack_d3,CONCAT41(uStack_d7,uStack_d8))));
      puVar1[2] = CONCAT17(local_e9,CONCAT16(uStack_ea,
                                             CONCAT15(uStack_eb,CONCAT41(uStack_ef,uStack_f0))));
      puVar1[3] = CONCAT17(local_e1,CONCAT16(uStack_e2,
                                             CONCAT15(uStack_e3,CONCAT41(uStack_e7,uStack_e8))));
      *(undefined1 *)(puVar1 + 10) = 0;
      puVar1[8] = CONCAT71(uStack_bf,uStack_c0);
      puVar1[9] = local_b8;
      puVar1[6] = CONCAT17(local_c9,CONCAT16(uStack_ca,
                                             CONCAT15(uStack_cb,CONCAT41(uStack_cf,uStack_d0))));
      puVar1[7] = CONCAT17(uStack_c1,
                           CONCAT16(uStack_c2,CONCAT15(uStack_c3,CONCAT41(uStack_c7,uStack_c8))));
      if (local_b0 != '\0') {
        *(undefined8 *)((long)puVar1 + 0x69) = local_97;
        *(undefined8 *)((long)puVar1 + 0x61) = local_9f;
        *(undefined8 *)((long)puVar1 + 0x59) = local_a7;
        *(undefined8 *)((long)puVar1 + 0x51) = local_af;
        *(undefined8 *)((long)puVar1 + 0x89) = local_77;
        *(undefined8 *)((long)puVar1 + 0x81) = local_7f;
        *(undefined8 *)((long)puVar1 + 0x79) = local_87;
        *(undefined8 *)((long)puVar1 + 0x71) = local_8f;
        *(undefined1 *)(puVar1 + 10) = 1;
      }
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 0x98;
    }
    else {
      FUN_01033e20(lVar3,&local_100);
    }
    uVar8 = *puVar2;
    lVar3 = *param_1;
    local_b0 = '\0';
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_cb = 0;
    uStack_ca = 0;
    local_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c3 = 0;
    uStack_c2 = 0;
    uStack_c1 = 0;
    uStack_e0 = 0;
    uStack_df = 0;
    uStack_db = 0;
    uStack_da = 0;
    local_d9 = 0;
    uStack_d8 = 0;
    uStack_d7 = 0;
    uStack_d3 = 0;
    uStack_d2 = 0;
    local_d1 = 0;
    uStack_f0 = 0;
    uStack_ef = 0;
    uStack_eb = 0;
    uStack_ea = 0;
    local_e9 = 0;
    uStack_e8 = 0;
    uStack_e7 = 0;
    uStack_e3 = 0;
    uStack_e2 = 0;
    local_e1 = 0;
    local_100 = 0;
    cStack_fc = '\0';
    cStack_fb = '\0';
    cStack_fa = '\0';
    cStack_f9 = '\0';
    cStack_f8 = '\0';
    uStack_f7 = 0;
    uStack_f3 = 0;
    uStack_f2 = 0;
    uStack_f1 = 0;
    sVar5 = strlen((char *)&local_180);
    memcpy(&local_100,&local_180,sVar5);
    uStack_c0 = 1;
    if (local_b0 != '\0') {
      local_b0 = '\0';
    }
    puVar1 = *(undefined8 **)(lVar3 + 8);
    local_b8 = uVar8;
    if (puVar1 < *(undefined8 **)(lVar3 + 0x10)) {
      uVar8 = *(undefined8 *)(lVar3 + 0x18);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0104f57c;
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar1 = CONCAT17(cStack_f9,
                         CONCAT16(cStack_fa,CONCAT15(cStack_fb,CONCAT14(cStack_fc,local_100))));
      puVar1[1] = CONCAT17(uStack_f1,
                           CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT41(uStack_f7,cStack_f8))));
      puVar1[4] = CONCAT17(local_d9,CONCAT16(uStack_da,
                                             CONCAT15(uStack_db,CONCAT41(uStack_df,uStack_e0))));
      puVar1[5] = CONCAT17(local_d1,CONCAT16(uStack_d2,
                                             CONCAT15(uStack_d3,CONCAT41(uStack_d7,uStack_d8))));
      puVar1[2] = CONCAT17(local_e9,CONCAT16(uStack_ea,
                                             CONCAT15(uStack_eb,CONCAT41(uStack_ef,uStack_f0))));
      puVar1[3] = CONCAT17(local_e1,CONCAT16(uStack_e2,
                                             CONCAT15(uStack_e3,CONCAT41(uStack_e7,uStack_e8))));
      *(undefined1 *)(puVar1 + 10) = 0;
      puVar1[8] = CONCAT71(uStack_bf,uStack_c0);
      puVar1[9] = local_b8;
      puVar1[6] = CONCAT17(local_c9,CONCAT16(uStack_ca,
                                             CONCAT15(uStack_cb,CONCAT41(uStack_cf,uStack_d0))));
      puVar1[7] = CONCAT17(uStack_c1,
                           CONCAT16(uStack_c2,CONCAT15(uStack_c3,CONCAT41(uStack_c7,uStack_c8))));
      if (local_b0 != '\0') {
        *(undefined8 *)((long)puVar1 + 0x69) = local_97;
        *(undefined8 *)((long)puVar1 + 0x61) = local_9f;
        *(undefined8 *)((long)puVar1 + 0x59) = local_a7;
        *(undefined8 *)((long)puVar1 + 0x51) = local_af;
        *(undefined8 *)((long)puVar1 + 0x89) = local_77;
        *(undefined8 *)((long)puVar1 + 0x81) = local_7f;
        *(undefined8 *)((long)puVar1 + 0x79) = local_87;
        *(undefined8 *)((long)puVar1 + 0x71) = local_8f;
        *(undefined1 *)(puVar1 + 10) = 1;
      }
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 0x98;
    }
    else {
      FUN_01033e20(lVar3,&local_100);
    }
    if (local_b0 != '\0') {
      local_b0 = '\0';
    }
    uVar7 = uVar7 + 1;
    puVar2 = puVar2 + 2;
  } while (uVar7 < 6);
  local_b8 = *(undefined8 *)(param_2 + 0xe8);
  lVar3 = *param_1;
  local_b0 = '\0';
  uStack_ca = 0;
  local_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c3 = 0;
  uStack_d2 = 0;
  local_d1 = 0;
  uStack_d0 = 0;
  uStack_cf = 0;
  uStack_cb = 0;
  uStack_da = 0;
  local_d9 = 0;
  uStack_d8 = 0;
  uStack_d7 = 0;
  uStack_d3 = 0;
  uStack_e2 = 0;
  local_e1 = 0;
  uStack_e0 = 0;
  uStack_df = 0;
  uStack_db = 0;
  uStack_ea = 0;
  local_e9 = 0;
  uStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_f0 = 0;
  uStack_ef = 0;
  uStack_eb = 0;
  cStack_fa = '\0';
  cStack_f9 = '\0';
  cStack_f8 = '\0';
  uStack_f7 = 0;
  uStack_f3 = 0;
  cStack_fc = 'b';
  cStack_fb = 'p';
  local_100 = 0x5f746567;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 1;
  puVar2 = *(undefined8 **)(lVar3 + 8);
  if (puVar2 < *(undefined8 **)(lVar3 + 0x10)) {
    uVar8 = *(undefined8 *)(lVar3 + 0x18);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0104f57c;
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar2 = CONCAT17(cStack_f9,
                       CONCAT16(cStack_fa,CONCAT15(cStack_fb,CONCAT14(cStack_fc,local_100))));
    puVar2[1] = CONCAT17(uStack_f1,
                         CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT41(uStack_f7,cStack_f8))));
    puVar2[4] = CONCAT17(local_d9,CONCAT16(uStack_da,
                                           CONCAT15(uStack_db,CONCAT41(uStack_df,uStack_e0))));
    puVar2[5] = CONCAT17(local_d1,CONCAT16(uStack_d2,
                                           CONCAT15(uStack_d3,CONCAT41(uStack_d7,uStack_d8))));
    puVar2[2] = CONCAT17(local_e9,CONCAT16(uStack_ea,
                                           CONCAT15(uStack_eb,CONCAT41(uStack_ef,uStack_f0))));
    puVar2[3] = CONCAT17(local_e1,CONCAT16(uStack_e2,
                                           CONCAT15(uStack_e3,CONCAT41(uStack_e7,uStack_e8))));
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = CONCAT71(uStack_bf,uStack_c0);
    puVar2[9] = local_b8;
    puVar2[6] = CONCAT17(local_c9,CONCAT16(uStack_ca,
                                           CONCAT15(uStack_cb,CONCAT41(uStack_cf,uStack_d0))));
    puVar2[7] = CONCAT17(uStack_c1,
                         CONCAT16(uStack_c2,CONCAT15(uStack_c3,CONCAT41(uStack_c7,uStack_c8))));
    if (local_b0 != '\0') {
      *(undefined8 *)((long)puVar2 + 0x69) = local_97;
      *(undefined8 *)((long)puVar2 + 0x61) = local_9f;
      *(undefined8 *)((long)puVar2 + 0x59) = local_a7;
      *(undefined8 *)((long)puVar2 + 0x51) = local_af;
      *(undefined8 *)((long)puVar2 + 0x71) = local_8f;
      *(undefined8 *)((long)puVar2 + 0x89) = local_77;
      *(undefined8 *)((long)puVar2 + 0x81) = local_7f;
      *(undefined8 *)((long)puVar2 + 0x79) = local_87;
      *(undefined1 *)(puVar2 + 10) = 1;
    }
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 0x98;
  }
  else {
    FUN_01033e20(lVar3,&local_100);
  }
  local_b8 = *(undefined8 *)(param_2 + 0xf0);
  lVar3 = *param_1;
  local_b0 = '\0';
  uStack_c7 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_cf = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  local_c9 = 0;
  uStack_c8 = 0;
  uStack_d7 = 0;
  uStack_d3 = 0;
  uStack_d2 = 0;
  local_d1 = 0;
  uStack_d0 = 0;
  uStack_df = 0;
  uStack_db = 0;
  uStack_da = 0;
  local_d9 = 0;
  uStack_d8 = 0;
  uStack_e7 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  local_e1 = 0;
  uStack_e0 = 0;
  uStack_ef = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  local_e9 = 0;
  uStack_e8 = 0;
  uStack_f7 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_f0 = 0;
  local_100 = s_get_money_01ce5c22._0_4_;
  cStack_fc = s_get_money_01ce5c22[4];
  cStack_fb = s_get_money_01ce5c22[5];
  cStack_fa = s_get_money_01ce5c22[6];
  cStack_f9 = s_get_money_01ce5c22[7];
  uStack_c0 = 1;
  cStack_f8 = 'y';
  puVar2 = *(undefined8 **)(lVar3 + 8);
  if (puVar2 < *(undefined8 **)(lVar3 + 0x10)) {
    uVar8 = *(undefined8 *)(lVar3 + 0x18);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0104f57c;
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar2 = CONCAT17(cStack_f9,
                       CONCAT16(cStack_fa,CONCAT15(cStack_fb,CONCAT14(cStack_fc,local_100))));
    puVar2[1] = CONCAT17(uStack_f1,
                         CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT41(uStack_f7,cStack_f8))));
    puVar2[4] = CONCAT17(local_d9,CONCAT16(uStack_da,
                                           CONCAT15(uStack_db,CONCAT41(uStack_df,uStack_e0))));
    puVar2[5] = CONCAT17(local_d1,CONCAT16(uStack_d2,
                                           CONCAT15(uStack_d3,CONCAT41(uStack_d7,uStack_d8))));
    puVar2[2] = CONCAT17(local_e9,CONCAT16(uStack_ea,
                                           CONCAT15(uStack_eb,CONCAT41(uStack_ef,uStack_f0))));
    puVar2[3] = CONCAT17(local_e1,CONCAT16(uStack_e2,
                                           CONCAT15(uStack_e3,CONCAT41(uStack_e7,uStack_e8))));
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = CONCAT71(uStack_bf,uStack_c0);
    puVar2[9] = local_b8;
    puVar2[6] = CONCAT17(local_c9,CONCAT16(uStack_ca,
                                           CONCAT15(uStack_cb,CONCAT41(uStack_cf,uStack_d0))));
    puVar2[7] = CONCAT17(uStack_c1,
                         CONCAT16(uStack_c2,CONCAT15(uStack_c3,CONCAT41(uStack_c7,uStack_c8))));
    if (local_b0 != '\0') {
      *(undefined8 *)((long)puVar2 + 0x69) = local_97;
      *(undefined8 *)((long)puVar2 + 0x61) = local_9f;
      *(undefined8 *)((long)puVar2 + 0x59) = local_a7;
      *(undefined8 *)((long)puVar2 + 0x51) = local_af;
      *(undefined8 *)((long)puVar2 + 0x71) = local_8f;
      *(undefined8 *)((long)puVar2 + 0x89) = local_77;
      *(undefined8 *)((long)puVar2 + 0x81) = local_7f;
      *(undefined8 *)((long)puVar2 + 0x79) = local_87;
      *(undefined1 *)(puVar2 + 10) = 1;
    }
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 0x98;
  }
  else {
    FUN_01033e20(lVar3,&local_100);
  }
  return;
}


