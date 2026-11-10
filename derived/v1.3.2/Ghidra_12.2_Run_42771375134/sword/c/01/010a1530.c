/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a1530; name: FUN_010a1530
 */


void FUN_010a1530(long param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  void *__dest;
  ulong uVar16;
  bool bVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  ulong local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined1 local_184 [5];
  undefined1 uStack_17f;
  undefined2 uStack_17e;
  undefined8 local_17c;
  int local_174;
  undefined2 local_170;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [36];
  uint local_10c;
  char local_108 [4];
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  char local_b8 [4];
  char local_b4;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  
  pcVar10 = (char *)FUN_01225e80(param_2);
  if (*pcVar10 == '\0') {
    return;
  }
  local_b4 = pcVar10[4];
  local_b0 = pcVar10[8] != '\0';
  if ((bool)local_b0) {
    local_ac = *(undefined8 *)(pcVar10 + 0xc);
    local_a4 = *(undefined8 *)(pcVar10 + 0x14);
    local_9c = *(undefined8 *)(pcVar10 + 0x1c);
    local_94 = *(undefined4 *)(pcVar10 + 0x24);
  }
  local_90 = *(undefined8 *)(pcVar10 + 0x28);
  local_88 = *(undefined8 *)(pcVar10 + 0x30);
  local_80 = *(undefined8 *)(pcVar10 + 0x38);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(pcVar10 + 0x45) >> 0x18);
  uVar16 = (ulong)local_b8 | 4;
  uStack_78 = (undefined5)*(undefined8 *)(pcVar10 + 0x40);
  local_73 = (undefined3)((ulong)*(undefined8 *)(pcVar10 + 0x40) >> 0x28);
  local_b8[0] = '\x01';
  uVar11 = FUN_0121bb40(uVar16);
  if ((uVar11 & 1) == 0) {
    return;
  }
  uVar6 = FUN_0121bb50(uVar16);
  pcVar10 = (char *)FUN_01225e60(param_2);
  if (*pcVar10 == '\0') {
    return;
  }
  local_104 = *(undefined8 *)(pcVar10 + 4);
  local_fc = *(undefined8 *)(pcVar10 + 0xc);
  local_f4 = *(undefined8 *)(pcVar10 + 0x14);
  local_ec = *(undefined8 *)(pcVar10 + 0x1c);
  local_e4 = *(undefined8 *)(pcVar10 + 0x24);
  local_dc = *(undefined8 *)(pcVar10 + 0x2c);
  local_d4 = *(undefined8 *)(pcVar10 + 0x34);
  local_cc = *(undefined8 *)(pcVar10 + 0x3c);
  local_c4 = *(undefined8 *)(pcVar10 + 0x44);
  local_bc = *(undefined4 *)(pcVar10 + 0x4c);
  local_108[0] = '\x01';
  pcVar10 = (char *)FUN_01225e90(param_2);
  if (*pcVar10 == '\0') goto LAB_010a19d4;
  local_1a4 = *(ulong *)(pcVar10 + 0xc);
  local_19c = *(undefined8 *)(pcVar10 + 0x14);
  uStack_1ac = (uint)*(undefined8 *)(pcVar10 + 4);
  uStack_1a8 = (uint)((ulong)*(undefined8 *)(pcVar10 + 4) >> 0x20);
  _local_184 = *(undefined8 *)(pcVar10 + 0x2c);
  local_194 = *(undefined8 *)(pcVar10 + 0x1c);
  local_18c = *(undefined8 *)(pcVar10 + 0x24);
  local_17c = *(long *)(pcVar10 + 0x34);
  uVar18 = (ulong)&local_1b0 | 4;
  local_1b0 = CONCAT31((int3)(local_1b0 >> 8),1);
  uVar11 = thunk_FUN_012229b0(uVar18);
  puVar1 = PTR_DAT_02710798;
  if ((uVar11 & 1) == 0) goto LAB_010a19d4;
  lVar19 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar19 == 0) {
    uVar7 = FUN_01538f80(0);
    lVar19 = *(long *)(*(long *)puVar1 + 0x248);
  }
  else {
    plVar22 = (long *)(lVar19 + 0x48);
    (**(code **)(*plVar22 + 0x10))(plVar22);
    uVar7 = FUN_01538f80(lVar19);
    (**(code **)(*plVar22 + 0x18))(plVar22);
    lVar19 = *(long *)(*(long *)puVar1 + 0x248);
  }
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  local_10c = uVar7 & 0xff;
  iVar8 = FUN_015260b0(lVar19,&local_10c);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  }
  uVar11 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
  uVar12 = FUN_01225f10(param_2);
  if ((((uVar11 & 1) != 0) && ((uVar12 & 1) == 0)) &&
     (uVar7 = FUN_0121c680(uVar18), iVar8 < (int)(uVar7 & 0xff))) {
LAB_010a194c:
    bVar17 = true;
    uVar13 = _local_184;
    goto code_r0x010a1944;
  }
  bVar2 = FUN_0121c6c0(uVar18);
  if (3 < bVar2 - 1) {
    if (bVar2 != 0) goto LAB_010a194c;
    lVar19 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 2000);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
    uVar11 = FUN_00fa4ff0(lVar20,uVar18);
    if ((uVar11 & 1) == 0) {
      uVar11 = 0;
    }
    else {
      cVar3 = FUN_0121d1d0((ulong)local_108 | 4);
      uVar9 = 1;
      if (cVar3 != ',') {
        uVar9 = 2;
      }
      uVar11 = FUN_00fa5130(lVar20,uVar9,uVar18);
      uVar11 = uVar11 & 0xffffffff;
    }
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
    }
    if ((uVar11 & 1) != 0) goto LAB_010a19d4;
    goto LAB_010a193c;
  }
  lVar19 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  lVar20 = *(long *)(lVar19 + 2000);
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  lVar19 = *(long *)(lVar20 + 0x80);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  uVar13 = FUN_00fa7e30(lVar19);
  uVar11 = FUN_011b8720(uVar13,uVar18);
  if ((uVar11 & 1) == 0) {
    uVar11 = 0;
    goto joined_r0x010a1964;
  }
  cVar3 = FUN_0121d1d0((ulong)local_108 | 4);
  uVar11 = 1;
  uVar9 = 1;
  if (cVar3 != ',') {
    uVar9 = 2;
  }
  switch(bVar2) {
  case 1:
    uVar11 = FUN_00fa7530(lVar19,uVar9,uVar18,0);
    break;
  case 2:
    uVar13 = 1;
    goto LAB_010a1988;
  case 3:
    uVar13 = 2;
LAB_010a1988:
    uVar11 = FUN_00fa7530(lVar19,uVar9,uVar18,uVar13);
    break;
  case 4:
    uVar11 = FUN_00fa7750(lVar19,uVar9,uVar18);
    break;
  default:
    goto switchD_010a1860_default;
  }
  uVar11 = uVar11 & 0xffffffff;
switchD_010a1860_default:
joined_r0x010a1964:
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  }
  (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
  if ((uVar11 & 1) == 0) {
LAB_010a193c:
    bVar17 = true;
    uVar13 = _local_184;
  }
  else {
LAB_010a19d4:
    bVar17 = false;
    uVar13 = _local_184;
  }
code_r0x010a1944:
  if (bVar17) {
    return;
  }
  local_1b0 = 0xffffffff;
  uStack_1ac = 0xffffffff;
  uStack_1a8 = 0;
  local_19c._1_7_ = (undefined7)((ulong)local_19c >> 8);
  local_19c._0_1_ = 0xff;
  local_1a4 = (local_1a4 >> 8 & 0xffffff) << 8;
  uStack_17e = (undefined2)((ulong)uVar13 >> 0x30);
  local_184._0_4_ = SUB84(uVar13,0);
  _local_184 = (uint6)(uint)local_184._0_4_;
  local_17c = (ulong)local_17c._6_2_ << 0x30;
  local_174 = 0;
  local_170 = 0;
  local_164 = 0xffffffff;
  local_16c = 0;
  FUN_0121ad80(&local_158);
  puVar14 = (undefined8 *)FUN_01225e50(param_2);
  local_158 = *puVar14;
  local_150 = puVar14[1];
  uStack_148 = puVar14[2];
  local_140 = puVar14[3];
  uStack_138 = puVar14[4];
  uVar9 = FUN_0121bc20(uVar16);
  local_1a4 = CONCAT44(uVar9,(undefined4)local_1a4) & 0xffffffffffff;
  uVar11 = (ulong)local_108 | 4;
  uStack_1a8 = FUN_0121d200(uVar11);
  uStack_1a8 = uStack_1a8 & 0xff;
  bVar17 = true;
  local_164._0_6_ = CONCAT15(1,(undefined5)local_164);
  uStack_1ac = FUN_0121bb50(uVar16);
  uStack_1ac = uStack_1ac & 0xff;
  uVar4 = FUN_0121bc00(uVar16);
  local_19c = CONCAT71(local_19c._1_7_,uVar4);
  puVar14 = (undefined8 *)(param_1 + 0x11b18);
  uVar21 = *puVar14;
  uVar13 = FUN_0121d1b0(uVar11);
  FUN_0077d520(uVar21,uVar13);
  FUN_0077d4a0(*puVar14,auStack_130,0xd);
  uVar21 = *puVar14;
  uVar13 = FUN_0121bb70(uVar16);
  FUN_0077d520(uVar21,uVar13);
  lVar19 = (long)&local_19c + 2;
  FUN_0077d4a0(*puVar14,lVar19,0xd);
  uVar4 = FUN_01225f10(param_2);
  local_164 = CONCAT35(local_164._5_3_,CONCAT14(uVar4,(undefined4)local_164)) & 0xffffff01ffffffff;
  uVar4 = FUN_0121bc40(uVar16);
  local_1a4 = CONCAT71(local_1a4._1_7_,uVar4) & 0xffffffffffffff01;
  uVar4 = FUN_0121d1f0(uVar11);
  local_164._0_7_ = CONCAT16(uVar4,(undefined6)local_164);
  uVar4 = FUN_0121d1c0(uVar11);
  local_164 = CONCAT17(uVar4,(undefined7)local_164);
  uVar4 = FUN_0121bb90(uVar16);
  local_184 = (undefined1  [5])CONCAT14(uVar4,local_184._0_4_);
  uVar4 = FUN_0121bb80(uVar16);
  _local_184 = CONCAT15(uVar4,local_184);
  pcVar10 = (char *)FUN_0121bb60(uVar16);
  if (*pcVar10 != '\0') {
    lVar20 = FUN_0121bb60(uVar16);
    uVar18 = FUN_012229b0(lVar20 + 4);
    if ((uVar18 & 1) == 0) {
      bVar17 = true;
    }
    else {
      lVar20 = FUN_0121bb60(uVar16);
      uVar5 = FUN_012229d0(lVar20 + 4);
      local_17c._0_6_ = CONCAT24(uVar5,(int)local_17c);
      lVar20 = FUN_0121bb60(uVar16);
      local_174 = FUN_012229e0(lVar20 + 4);
      lVar20 = FUN_0121bb60(uVar16);
      uVar4 = FUN_012229f0(lVar20 + 4);
      local_170 = CONCAT11(local_170._1_1_,uVar4) & 0xff01;
      lVar20 = FUN_0121bb60(uVar16);
      uVar4 = FUN_01222a00(lVar20 + 4);
      local_170 = CONCAT11(uVar4,(char)local_170) & 0x1ff;
      lVar20 = FUN_0121bb60(uVar16);
      uVar9 = FUN_012229c0(lVar20 + 4);
      local_17c = CONCAT44(local_17c._4_4_,uVar9);
      lVar20 = FUN_0121bb60(uVar16);
      uVar9 = FUN_01222a10(lVar20 + 4);
      bVar17 = false;
      local_16c = CONCAT44(uVar9,(undefined4)local_16c);
    }
  }
  if ((param_3 & 1) == 0) {
    puVar15 = (undefined8 *)FUN_01225e50(param_2);
    local_1d8 = *puVar15;
    uVar18 = 0;
    local_1d0 = puVar15[1];
    uStack_1c8 = puVar15[2];
    local_1c0 = puVar15[3];
    uStack_1b8 = puVar15[4];
    lVar20 = param_1 + 0xdc48;
    do {
      uVar12 = FUN_0121af80(lVar20 + -0x28);
      if (((uVar12 & 1) != 0) &&
         (uVar12 = FUN_0121b130(lVar20 + -0x28,&local_1d8), (uVar12 & 1) != 0)) {
        if ((*(uint *)(lVar20 + -0x7c) == uStack_1ac) &&
           ((*(char *)(lVar20 + -0x6c) == (char)local_19c &&
            (uVar18 = FUN_0077d930(lVar20,auStack_130), (uVar18 & 1) != 0)))) {
          uVar7 = FUN_0077d930(lVar20 + -0x6a,lVar19);
          if (bVar17 || ((uVar7 ^ 0xffffffff) & 1) != 0) {
            if ((uVar7 & 1) != 0) {
              return;
            }
          }
          else if ((((*(short *)(lVar20 + -0x48) == local_17c._4_2_) &&
                    (*(int *)(lVar20 + -0x44) == local_174)) &&
                   (*(char *)(lVar20 + -0x40) == (char)local_170)) &&
                  ((*(char *)(lVar20 + -0x3f) == local_170._1_1_ &&
                   (*(int *)(lVar20 + -0x4c) == (int)local_17c)))) {
            return;
          }
        }
        break;
      }
      uVar18 = uVar18 + 1;
      lVar20 = lVar20 + 0xa0;
    } while (uVar18 < 100);
    puVar15 = (undefined8 *)FUN_01225e50(param_2);
    local_200 = *puVar15;
    uVar18 = 0;
    local_1f8 = puVar15[1];
    uStack_1f0 = puVar15[2];
    local_1e8 = puVar15[3];
    uStack_1e0 = puVar15[4];
    lVar19 = param_1 + 0xdc20;
    do {
      uVar12 = FUN_0121af80(lVar19);
      if (((uVar12 & 1) != 0) && (uVar12 = FUN_0121b130(lVar19,&local_200), (uVar12 & 1) != 0))
      goto LAB_010a1e94;
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + 0xa0;
    } while (uVar18 < 100);
    uVar18 = 0;
    lVar19 = param_1 + 0xdc20;
    do {
      uVar12 = FUN_0121af80(lVar19);
      if ((uVar12 & 1) == 0) goto LAB_010a1e94;
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + 0xa0;
    } while (uVar18 < 100);
  }
  else {
    uVar18 = FUN_0121af80(param_1 + 0x11aa0);
    if (((((uVar18 & 1) != 0) && (*(uint *)(param_1 + 0x11a4c) == uStack_1ac)) &&
        (*(char *)(param_1 + 0x11a5c) == (char)local_19c)) &&
       (uVar18 = FUN_0077d930(param_1 + 0x11ac8,auStack_130), (uVar18 & 1) != 0)) {
      uVar7 = FUN_0077d930(param_1 + 0x11a5e,lVar19);
      if (bVar17 || ((uVar7 ^ 0xffffffff) & 1) != 0) {
        if ((uVar7 & 1) != 0) {
          return;
        }
      }
      else if (((*(short *)(param_1 + 0x11a80) == local_17c._4_2_) &&
               (*(int *)(param_1 + 0x11a84) == local_174)) &&
              ((*(char *)(param_1 + 0x11a88) == (char)local_170 &&
               ((*(char *)(param_1 + 0x11a89) == local_170._1_1_ &&
                (*(int *)(param_1 + 0x11a7c) == (int)local_17c)))))) {
        return;
      }
    }
    __dest = (void *)(param_1 + 0x11a48);
LAB_010a1e98:
    memcpy(__dest,&local_1b0,0x9a);
  }
  *(undefined2 *)(param_1 + 0x11b20) = 1;
  *(uint *)(param_1 + 0xc0) = uVar6 & 0xff;
  uVar21 = *puVar14;
  uVar13 = FUN_0121d1b0(uVar11);
  FUN_0077d520(uVar21,uVar13);
  FUN_0077d4a0(*puVar14,param_1 + 0xca,0xd);
  *(byte *)(param_1 + 200) = param_3 & 1;
  bVar2 = FUN_0121bc40(uVar16);
  *(byte *)(param_1 + 0xc9) = bVar2 & 1;
  bVar2 = FUN_01225f10(param_2);
  *(byte *)(param_1 + 0x100) = bVar2 & 1;
  uVar4 = FUN_0121d1f0(uVar11);
  *(undefined1 *)(param_1 + 0x101) = uVar4;
  uVar4 = FUN_0121d1c0(uVar11);
  *(undefined1 *)(param_1 + 0x102) = uVar4;
  pcVar10 = (char *)FUN_0121bb60(uVar16);
  if (*pcVar10 != '\0') {
    lVar19 = FUN_0121bb60(uVar16);
    uVar11 = FUN_012229b0(lVar19 + 4);
    if ((uVar11 & 1) != 0) {
      lVar19 = FUN_0121bb60(uVar16);
      uVar5 = FUN_012229d0(lVar19 + 4);
      *(undefined2 *)(param_1 + 0xe8) = uVar5;
      lVar19 = FUN_0121bb60(uVar16);
      uVar9 = FUN_012229e0(lVar19 + 4);
      *(undefined4 *)(param_1 + 0xec) = uVar9;
      lVar19 = FUN_0121bb60(uVar16);
      bVar2 = FUN_012229f0(lVar19 + 4);
      *(byte *)(param_1 + 0xf0) = bVar2 & 1;
      lVar19 = FUN_0121bb60(uVar16);
      bVar2 = FUN_01222a00(lVar19 + 4);
      *(byte *)(param_1 + 0xf1) = bVar2 & 1;
      lVar19 = FUN_0121bb60(uVar16);
      uVar9 = FUN_012229c0(lVar19 + 4);
      *(undefined4 *)(param_1 + 0xe4) = uVar9;
      lVar19 = FUN_0121bb60(uVar16);
      uVar9 = FUN_01222a10(lVar19 + 4);
      *(undefined4 *)(param_1 + 0xf8) = uVar9;
    }
  }
  local_1b0 = FUN_010a25e0(param_1 + 0x108);
  memcpy((void *)(param_1 + (ulong)local_1b0 * 0xa0 + 0xbc88),&local_1b0,0x9a);
  iVar8 = 0x32;
  if (*(int *)(param_1 + 0x11af4) + 1U < 0x32) {
    iVar8 = *(int *)(param_1 + 0x11af4) + 1;
  }
  *(int *)(param_1 + 0x11af4) = iVar8;
  return;
LAB_010a1e94:
  __dest = (void *)(lVar19 + -0x58);
  goto LAB_010a1e98;
}


