/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f5090; name: FUN_010f5090
 */


void FUN_010f5090(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  byte *pbVar6;
  code *pcVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 *local_140;
  undefined5 uStack_138;
  undefined3 local_133;
  undefined5 uStack_130;
  undefined3 local_12b;
  undefined5 uStack_128;
  undefined3 local_123;
  undefined5 uStack_120;
  undefined3 local_11b;
  undefined5 uStack_118;
  undefined8 local_113;
  undefined8 local_10b;
  undefined8 local_103;
  undefined8 local_fb;
  undefined8 local_f3;
  undefined7 uStack_eb;
  undefined1 local_e4;
  undefined7 uStack_e3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_48;
  
  uVar10 = *(undefined8 *)(param_1 + 8);
  uStack_e3 = 0;
  uStack_eb = 0;
  local_e4 = 0;
  local_f3 = 0;
  local_fb = 0;
  local_48 = 0xea19d11f23df1138;
  local_10b = 0;
  lVar1 = param_1 + 0x100;
  uStack_130 = s_L_mystery_top_btn_00_01d153e5._16_5_;
  local_103 = 0;
  local_113 = 0;
  local_11b = 0;
  uStack_118 = 0;
  uVar12 = 0xcbf29ce484222645;
  local_123 = 0;
  uStack_120 = 0;
  local_12b = 0;
  uStack_128 = 0;
  local_140 = (undefined1 *)s_L_mystery_top_btn_00_01d153e5._0_8_;
  uStack_138 = s_L_mystery_top_btn_00_01d153e5._8_5_;
  local_133 = s_L_mystery_top_btn_00_01d153e5._13_3_;
  *(undefined8 *)(param_1 + 0x5f8) = 0xea19d11f23df1138;
  uVar3 = FUN_00ffda40(lVar1,&local_48);
  *(undefined8 *)(param_1 + 0x600) = uVar3;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_140,"T_mystery_btn_heading_00");
  uVar9 = 0xcbf29ce484222645;
  if ((byte)local_b8 != 0) {
    uVar9 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_b8 | 1);
    bVar2 = (byte)local_b8;
    do {
      uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x608) = uVar9;
  uStack_130._0_1_ = s_L_mystery_top_btn_01_01d41d60[0x10];
  uStack_130._1_1_ = s_L_mystery_top_btn_01_01d41d60[0x11];
  uStack_130._2_1_ = s_L_mystery_top_btn_01_01d41d60[0x12];
  uStack_130._3_1_ = s_L_mystery_top_btn_01_01d41d60[0x13];
  uStack_130._4_1_ = s_L_mystery_top_btn_01_01d41d60[0x14];
  local_48 = 0xea19d21f23df12eb;
  uStack_e3 = 0;
  uStack_eb = 0;
  local_e4 = 0;
  local_f3 = 0;
  local_fb = 0;
  local_103 = 0;
  local_10b = 0;
  local_113 = 0;
  local_11b = 0;
  uStack_118 = 0;
  local_123 = 0;
  uStack_120 = 0;
  local_12b = 0;
  uStack_128 = 0;
  local_140 = (undefined1 *)s_L_mystery_top_btn_01_01d41d60._0_8_;
  uStack_138._0_1_ = s_L_mystery_top_btn_01_01d41d60[8];
  uStack_138._1_1_ = s_L_mystery_top_btn_01_01d41d60[9];
  uStack_138._2_1_ = s_L_mystery_top_btn_01_01d41d60[10];
  uStack_138._3_1_ = s_L_mystery_top_btn_01_01d41d60[0xb];
  uStack_138._4_1_ = s_L_mystery_top_btn_01_01d41d60[0xc];
  local_133._0_1_ = s_L_mystery_top_btn_01_01d41d60[0xd];
  local_133._1_1_ = s_L_mystery_top_btn_01_01d41d60[0xe];
  local_133._2_1_ = s_L_mystery_top_btn_01_01d41d60[0xf];
  *(undefined8 *)(param_1 + 0x610) = 0xea19d21f23df12eb;
  uVar3 = FUN_00ffda40(lVar1,&local_48);
  *(undefined8 *)(param_1 + 0x618) = uVar3;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if ((char)local_140 == '\0') {
    snprintf((char *)&local_b8,100,"pane_%s","T_mystery_btn_heading_00");
    bVar2 = (byte)local_b8;
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_140,"T_mystery_btn_heading_00");
    bVar2 = (byte)local_b8;
  }
  uVar9 = 0xcbf29ce484222645;
  if (bVar2 != 0) {
    uVar9 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x620) = uVar9;
  uStack_130._0_1_ = s_L_mystery_top_btn_02_01ce5c8b[0x10];
  uStack_130._1_1_ = s_L_mystery_top_btn_02_01ce5c8b[0x11];
  uStack_130._2_1_ = s_L_mystery_top_btn_02_01ce5c8b[0x12];
  uStack_130._3_1_ = s_L_mystery_top_btn_02_01ce5c8b[0x13];
  uStack_130._4_1_ = s_L_mystery_top_btn_02_01ce5c8b[0x14];
  local_48 = 0xea19d31f23df149e;
  uStack_e3 = 0;
  uStack_eb = 0;
  local_e4 = 0;
  local_f3 = 0;
  local_fb = 0;
  local_103 = 0;
  local_10b = 0;
  local_113 = 0;
  local_11b = 0;
  uStack_118 = 0;
  local_123 = 0;
  uStack_120 = 0;
  local_12b = 0;
  uStack_128 = 0;
  local_140 = (undefined1 *)s_L_mystery_top_btn_02_01ce5c8b._0_8_;
  uStack_138._0_1_ = s_L_mystery_top_btn_02_01ce5c8b[8];
  uStack_138._1_1_ = s_L_mystery_top_btn_02_01ce5c8b[9];
  uStack_138._2_1_ = s_L_mystery_top_btn_02_01ce5c8b[10];
  uStack_138._3_1_ = s_L_mystery_top_btn_02_01ce5c8b[0xb];
  uStack_138._4_1_ = s_L_mystery_top_btn_02_01ce5c8b[0xc];
  local_133._0_1_ = s_L_mystery_top_btn_02_01ce5c8b[0xd];
  local_133._1_1_ = s_L_mystery_top_btn_02_01ce5c8b[0xe];
  local_133._2_1_ = s_L_mystery_top_btn_02_01ce5c8b[0xf];
  *(undefined8 *)(param_1 + 0x628) = 0xea19d31f23df149e;
  uVar3 = FUN_00ffda40(lVar1,&local_48);
  *(undefined8 *)(param_1 + 0x630) = uVar3;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if ((char)local_140 == '\0') {
    snprintf((char *)&local_b8,100,"pane_%s","T_mystery_btn_heading_00");
    bVar2 = (byte)local_b8;
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_140,"T_mystery_btn_heading_00");
    bVar2 = (byte)local_b8;
  }
  uVar9 = 0xcbf29ce484222645;
  if (bVar2 != 0) {
    uVar9 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x638) = uVar9;
  uStack_130._0_1_ = s_L_mystery_top_btn_03_01d2d589[0x10];
  uStack_130._1_1_ = s_L_mystery_top_btn_03_01d2d589[0x11];
  uStack_130._2_1_ = s_L_mystery_top_btn_03_01d2d589[0x12];
  uStack_130._3_1_ = s_L_mystery_top_btn_03_01d2d589[0x13];
  uStack_130._4_1_ = s_L_mystery_top_btn_03_01d2d589[0x14];
  local_48 = 0xea19d41f23df1651;
  uStack_e3 = 0;
  uStack_eb = 0;
  local_e4 = 0;
  local_f3 = 0;
  local_fb = 0;
  local_103 = 0;
  local_10b = 0;
  local_113 = 0;
  local_11b = 0;
  uStack_118 = 0;
  local_123 = 0;
  uStack_120 = 0;
  local_12b = 0;
  uStack_128 = 0;
  local_140 = (undefined1 *)s_L_mystery_top_btn_03_01d2d589._0_8_;
  uStack_138._0_1_ = s_L_mystery_top_btn_03_01d2d589[8];
  uStack_138._1_1_ = s_L_mystery_top_btn_03_01d2d589[9];
  uStack_138._2_1_ = s_L_mystery_top_btn_03_01d2d589[10];
  uStack_138._3_1_ = s_L_mystery_top_btn_03_01d2d589[0xb];
  uStack_138._4_1_ = s_L_mystery_top_btn_03_01d2d589[0xc];
  local_133._0_1_ = s_L_mystery_top_btn_03_01d2d589[0xd];
  local_133._1_1_ = s_L_mystery_top_btn_03_01d2d589[0xe];
  local_133._2_1_ = s_L_mystery_top_btn_03_01d2d589[0xf];
  *(undefined8 *)(param_1 + 0x640) = 0xea19d41f23df1651;
  uVar3 = FUN_00ffda40(lVar1,&local_48);
  *(undefined8 *)(param_1 + 0x648) = uVar3;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_140,"T_mystery_btn_heading_00");
  uVar9 = 0xcbf29ce484222645;
  if ((byte)local_b8 != 0) {
    uVar9 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_b8 | 1);
    bVar2 = (byte)local_b8;
    do {
      uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x650) = uVar9;
  uStack_130._0_1_ = s_L_mystery_top_btn_04_01d076f6[0x10];
  uStack_130._1_1_ = s_L_mystery_top_btn_04_01d076f6[0x11];
  uStack_130._2_1_ = s_L_mystery_top_btn_04_01d076f6[0x12];
  uStack_130._3_1_ = s_L_mystery_top_btn_04_01d076f6[0x13];
  uStack_130._4_1_ = s_L_mystery_top_btn_04_01d076f6[0x14];
  local_48 = 0xea19d51f23df1804;
  uStack_e3 = 0;
  uStack_eb = 0;
  local_e4 = 0;
  local_f3 = 0;
  local_fb = 0;
  local_103 = 0;
  local_10b = 0;
  local_113 = 0;
  local_11b = 0;
  uStack_118 = 0;
  local_123 = 0;
  uStack_120 = 0;
  local_12b = 0;
  uStack_128 = 0;
  local_140 = (undefined1 *)s_L_mystery_top_btn_04_01d076f6._0_8_;
  uStack_138._0_1_ = s_L_mystery_top_btn_04_01d076f6[8];
  uStack_138._1_1_ = s_L_mystery_top_btn_04_01d076f6[9];
  uStack_138._2_1_ = s_L_mystery_top_btn_04_01d076f6[10];
  uStack_138._3_1_ = s_L_mystery_top_btn_04_01d076f6[0xb];
  uStack_138._4_1_ = s_L_mystery_top_btn_04_01d076f6[0xc];
  local_133._0_1_ = s_L_mystery_top_btn_04_01d076f6[0xd];
  local_133._1_1_ = s_L_mystery_top_btn_04_01d076f6[0xe];
  local_133._2_1_ = s_L_mystery_top_btn_04_01d076f6[0xf];
  *(undefined8 *)(param_1 + 0x658) = 0xea19d51f23df1804;
  uVar3 = FUN_00ffda40(lVar1,&local_48);
  *(undefined8 *)(param_1 + 0x660) = uVar3;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_140,"T_mystery_btn_heading_00");
  if ((byte)local_b8 != 0) {
    pbVar6 = (byte *)((ulong)&local_b8 | 1);
    bVar2 = (byte)local_b8;
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x668) = uVar12;
  uVar3 = FUN_00ffdd70(lVar1,&DAT_02164378);
  *(undefined8 *)(param_1 + 0x5e8) = uVar3;
  uVar3 = FUN_00ffdef0(lVar1,&DAT_02164380);
  *(undefined8 *)(param_1 + 0x5f0) = uVar3;
  plVar11 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x10))();
  }
  puVar4 = (undefined1 *)FUN_008c1820(&local_140,uVar10);
  if (puVar4 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar4 + 0x60) = 0xd18f2edd95ba265b;
  local_140 = puVar4;
  (**(code **)(*plVar11 + 0xd0))(plVar11,&local_140);
  if (local_140 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    local_140 = (undefined1 *)0x0;
  }
  *(undefined8 *)(puVar4 + 0xa8) = 0x2000000000000;
  FUN_006cf0a0(&local_140,&DAT_02674328);
  *(undefined1 **)(puVar4 + 0x2b0) = local_140;
  *(ulong *)(puVar4 + 0x2b8) = CONCAT35(local_133,uStack_138);
  lVar1 = CONCAT35(local_123,uStack_128);
  *(ulong *)(puVar4 + 0x2c0) = CONCAT35(local_12b,uStack_130);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(puVar4 + 0x2c8);
  *(long *)(puVar4 + 0x2c8) = lVar1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  if (CONCAT35(local_123,uStack_128) != 0) {
    (**(code **)(*(long *)(CONCAT35(local_123,uStack_128) + 0x48) + 0x18))();
  }
  local_140 = &LAB_010f5b10;
  uStack_138 = 0x10f5b20;
  local_133 = 0;
  pcVar7 = FUN_010f5b30;
  uStack_130 = 0x10f5b30;
  local_12b = 0;
  uStack_128 = 0x10f5b40;
  local_123 = 0;
  uStack_120 = (undefined5)param_1;
  local_11b = (undefined3)((ulong)param_1 >> 0x28);
  pcVar8 = *(code **)(puVar4 + 0x138);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(puVar4 + 0x140) = 0;
    *(undefined8 *)(puVar4 + 0x148) = 0;
    *(undefined8 *)(puVar4 + 0x130) = 0;
    *(undefined8 *)(puVar4 + 0x138) = 0;
    (*pcVar8)(puVar4 + 0x150);
    pcVar7 = (code *)CONCAT35(local_12b,uStack_130);
    if (pcVar7 == (code *)0x0) goto LAB_010f56fc;
  }
  (*pcVar7)(&uStack_120,puVar4 + 0x150);
  *(ulong *)(puVar4 + 0x148) = CONCAT35(local_123,uStack_128);
  *(ulong *)(puVar4 + 0x138) = CONCAT35(local_133,uStack_138);
  *(ulong *)(puVar4 + 0x140) = CONCAT35(local_12b,uStack_130);
  *(undefined1 **)(puVar4 + 0x130) = local_140;
LAB_010f56fc:
  pcVar7 = (code *)CONCAT35(local_133,uStack_138);
  if (pcVar7 != (code *)0x0) {
    uStack_130 = 0;
    local_12b = 0;
    uStack_128 = 0;
    local_123 = 0;
    local_140 = (undefined1 *)0x0;
    uStack_138 = 0;
    local_133 = 0;
    (*pcVar7)(&uStack_120);
  }
  (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
  return;
}


