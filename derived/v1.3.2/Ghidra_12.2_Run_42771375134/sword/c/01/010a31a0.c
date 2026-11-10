/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a31a0; name: FUN_010a31a0
 */


byte FUN_010a31a0(long param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uStack_244;
  undefined1 auStack_232 [26];
  undefined2 local_218;
  int local_214;
  short local_210;
  int local_20c;
  undefined2 local_208;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [32];
  char local_1a8 [4];
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined4 local_15c;
  char local_158 [4];
  char local_154;
  undefined1 local_150;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined5 uStack_118;
  undefined3 local_113;
  undefined5 uStack_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  int local_cc;
  short local_c8;
  int local_c4;
  char local_c0;
  char local_bf;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  
  lVar9 = 0;
  if (*(int *)(param_1 + 0x11af0) != 8) {
    lVar9 = 16000;
  }
  lVar9 = param_1 + lVar9 + (long)param_2 * 0xa0;
  local_100 = *(undefined8 *)(lVar9 + 0x108);
  local_f8 = *(undefined8 *)(lVar9 + 0x110);
  uStack_f0 = *(undefined8 *)(lVar9 + 0x118);
  local_e8 = *(undefined8 *)(lVar9 + 0x120);
  local_e0 = *(undefined8 *)(lVar9 + 0x128);
  uStack_d8 = *(undefined8 *)(lVar9 + 0x130);
  local_d0 = *(undefined2 *)(lVar9 + 0x138);
  local_cc = *(int *)(lVar9 + 0x13c);
  local_c8 = *(short *)(lVar9 + 0x140);
  local_c4 = *(int *)(lVar9 + 0x144);
  local_c0 = *(char *)(lVar9 + 0x148);
  local_bf = *(char *)(lVar9 + 0x149);
  local_bc = *(undefined4 *)(lVar9 + 0x14c);
  local_b8 = *(undefined4 *)(lVar9 + 0x150);
  local_b4 = *(undefined4 *)(lVar9 + 0x154);
  local_b0 = *(undefined8 *)(lVar9 + 0x158);
  uStack_a8 = *(undefined8 *)(lVar9 + 0x160);
  local_a0 = *(undefined8 *)(lVar9 + 0x168);
  uStack_98 = *(undefined8 *)(lVar9 + 0x170);
  local_90 = *(undefined8 *)(lVar9 + 0x178);
  uStack_88 = *(undefined8 *)(lVar9 + 0x180);
  uStack_70 = *(undefined8 *)(lVar9 + 0x198);
  local_80 = *(undefined8 *)(lVar9 + 0x188);
  local_78 = *(undefined8 *)(lVar9 + 400);
  local_68 = *(undefined2 *)(lVar9 + 0x1a0);
  FUN_01211890(&local_108,*(undefined8 *)PTR_DAT_02710958,&uStack_a8);
  if ((local_108 == 0) ||
     (((pcVar5 = (char *)FUN_01225ec0(), *pcVar5 != '\0' && (*(int *)(pcVar5 + 4) == 0)) ||
      (pcVar5 = (char *)FUN_01225e80(local_108), *pcVar5 == '\0')))) {
    bVar3 = 1;
    goto LAB_010a3608;
  }
  local_154 = pcVar5[4];
  local_150 = pcVar5[8] != '\0';
  if ((bool)local_150) {
    local_14c = *(undefined8 *)(pcVar5 + 0xc);
    local_144 = *(undefined8 *)(pcVar5 + 0x14);
    local_13c = *(undefined8 *)(pcVar5 + 0x1c);
    local_134 = *(undefined4 *)(pcVar5 + 0x24);
  }
  local_130 = *(undefined8 *)(pcVar5 + 0x28);
  local_128 = *(undefined8 *)(pcVar5 + 0x30);
  local_120 = *(undefined8 *)(pcVar5 + 0x38);
  uStack_110 = (undefined5)((ulong)*(undefined8 *)(pcVar5 + 0x45) >> 0x18);
  uStack_118 = (undefined5)*(undefined8 *)(pcVar5 + 0x40);
  local_113 = (undefined3)((ulong)*(undefined8 *)(pcVar5 + 0x40) >> 0x28);
  uVar11 = (ulong)local_158 | 4;
  bVar3 = 1;
  local_158[0] = '\x01';
  uVar6 = FUN_0121bb40(uVar11);
  if ((uVar6 & 1) == 0) goto LAB_010a3608;
  FUN_0121bb50(uVar11);
  pcVar5 = (char *)FUN_01225e60(local_108);
  bVar3 = 1;
  if (*pcVar5 == '\0') goto LAB_010a3608;
  local_1a4 = *(undefined8 *)(pcVar5 + 4);
  local_19c = *(undefined8 *)(pcVar5 + 0xc);
  local_194 = *(undefined8 *)(pcVar5 + 0x14);
  local_18c = *(undefined8 *)(pcVar5 + 0x1c);
  local_184 = *(undefined8 *)(pcVar5 + 0x24);
  local_17c = *(undefined8 *)(pcVar5 + 0x2c);
  local_174 = *(undefined8 *)(pcVar5 + 0x34);
  local_16c = *(undefined8 *)(pcVar5 + 0x3c);
  local_164 = *(undefined8 *)(pcVar5 + 0x44);
  local_15c = *(undefined4 *)(pcVar5 + 0x4c);
  uVar6 = (ulong)local_1a8 | 4;
  local_1a8[0] = '\x01';
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_20c = 0;
  local_208 = 0;
  local_204 = 0;
  local_1fc = 0xffffffff;
  FUN_0121ad80(&local_1f0);
  puVar7 = (undefined8 *)FUN_01225e50(local_108);
  local_1f0 = *puVar7;
  local_1e8 = puVar7[1];
  uStack_1e0 = puVar7[2];
  local_1d8 = puVar7[3];
  uStack_1d0 = puVar7[4];
  FUN_0121bc20(uVar11);
  FUN_0121d200(uVar6);
  local_1fc._0_6_ = CONCAT15(1,(undefined5)local_1fc);
  uStack_244 = FUN_0121bb50(uVar11);
  uStack_244 = uStack_244 & 0xff;
  cVar1 = FUN_0121bc00(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x11b18);
  uVar8 = FUN_0121d1b0(uVar6);
  FUN_0077d520(uVar12,uVar8);
  FUN_0077d4a0(*(undefined8 *)(param_1 + 0x11b18),auStack_1c8,0xd);
  uVar12 = *(undefined8 *)(param_1 + 0x11b18);
  uVar8 = FUN_0121bb70(uVar11);
  FUN_0077d520(uVar12,uVar8);
  FUN_0077d4a0(*(undefined8 *)(param_1 + 0x11b18),auStack_232,0xd);
  uVar2 = FUN_0121d1f0(uVar6);
  local_1fc._0_7_ = CONCAT16(uVar2,(undefined6)local_1fc);
  uVar2 = FUN_0121d1c0(uVar6);
  local_1fc = CONCAT17(uVar2,(undefined7)local_1fc);
  uVar2 = FUN_0121bb90(uVar11);
  local_218 = CONCAT11(local_218._1_1_,uVar2);
  uVar2 = FUN_0121bb80(uVar11);
  local_218 = CONCAT11(uVar2,(undefined1)local_218);
  uVar2 = FUN_01225f10(local_108);
  local_1fc = CONCAT35(local_1fc._5_3_,CONCAT14(uVar2,(undefined4)local_1fc)) & 0xffffff01ffffffff;
  FUN_0121bc40(uVar11);
  pcVar5 = (char *)FUN_0121bb60(uVar11);
  if (*pcVar5 == '\0') {
LAB_010a362c:
    bVar10 = true;
    uVar8 = uStack_f0;
  }
  else {
    lVar9 = FUN_0121bb60(uVar11);
    uVar6 = FUN_012229b0(lVar9 + 4);
    if ((uVar6 & 1) == 0) goto LAB_010a362c;
    lVar9 = FUN_0121bb60(uVar11);
    local_210 = FUN_012229d0(lVar9 + 4);
    lVar9 = FUN_0121bb60(uVar11);
    local_20c = FUN_012229e0(lVar9 + 4);
    lVar9 = FUN_0121bb60(uVar11);
    uVar2 = FUN_012229f0(lVar9 + 4);
    local_208 = CONCAT11(local_208._1_1_,uVar2) & 0xff01;
    lVar9 = FUN_0121bb60(uVar11);
    uVar2 = FUN_01222a00(lVar9 + 4);
    local_208 = CONCAT11(uVar2,(char)local_208) & 0x1ff;
    lVar9 = FUN_0121bb60(uVar11);
    local_214 = FUN_012229c0(lVar9 + 4);
    lVar9 = FUN_0121bb60(uVar11);
    uVar4 = FUN_01222a10(lVar9 + 4);
    bVar10 = false;
    local_204 = CONCAT44(uVar4,(undefined4)local_204);
    uVar8 = uStack_f0;
  }
  if (local_100._4_4_ != uStack_244) {
    bVar3 = 1;
    goto LAB_010a3608;
  }
  uStack_f0._4_1_ = (char)((ulong)uVar8 >> 0x20);
  if ((uStack_f0._4_1_ == cVar1) &&
     (uStack_f0 = uVar8, uVar6 = FUN_0077d930(&local_80,auStack_1c8), (uVar6 & 1) != 0)) {
    bVar3 = FUN_0077d930((long)&uStack_f0 + 6,auStack_232);
    bVar3 = bVar3 ^ 1;
    if (bVar10 || (bVar3 & 1) != 0) goto LAB_010a3608;
    if (((local_c8 == local_210) && (local_c4 == local_20c)) &&
       ((local_c0 == (char)local_208 && (local_bf == local_208._1_1_)))) {
      bVar3 = local_cc != local_214;
      goto LAB_010a3608;
    }
  }
  bVar3 = 1;
LAB_010a3608:
  return bVar3 & 1;
}


