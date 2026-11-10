/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a4c80; name: FUN_012a4c80
 */


void FUN_012a4c80(long param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_430;
  undefined8 uStack_428;
  ulong local_420;
  ulong local_418;
  undefined8 local_410;
  ulong local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined1 auStack_3e8 [8];
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  ulong local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined6 uStack_3a8;
  undefined2 local_3a2;
  undefined6 uStack_3a0;
  char local_394;
  char local_38c;
  char local_340;
  undefined1 auStack_330 [176];
  char local_280;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 local_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 local_244;
  undefined8 local_23c;
  undefined4 local_234;
  char local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  char local_1d0;
  undefined1 auStack_1c0 [176];
  char local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  char local_c0;
  undefined8 local_bc;
  char local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 *local_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    return;
  }
  lVar6 = *(long *)PTR_DAT_02727290;
  if (lVar6 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_02710958;
  if (lVar7 == 0) {
    return;
  }
  FUN_01210ee0(lVar7);
  local_78 = FUN_01211c30(lVar7);
  FUN_01211940(&local_430,lVar7);
  cVar2 = local_340;
  local_1d0 = 0;
  bVar3 = local_340 != '\0';
  if (bVar3) {
    memcpy(auStack_1c0,auStack_330,0xb0);
  }
  local_110 = local_280 != '\0';
  if ((bool)local_110) {
    local_cc = local_23c;
    local_10c = local_27c;
    local_104 = local_274;
    local_f4 = local_264;
    local_c4 = local_234;
    local_e4 = local_254;
    local_ec = local_25c;
    local_fc = local_26c;
    local_dc = local_24c;
    local_d4 = local_244;
  }
  local_c0 = '\0';
  local_b0 = local_230 != '\0';
  if ((bool)local_b0) {
    local_a8 = local_228;
    local_88 = local_208;
    local_90 = local_210;
    local_98 = local_218;
    local_a0 = local_220;
    local_230 = '\0';
  }
  if (local_280 != '\0') {
    local_280 = '\0';
  }
  if (cVar2 != '\0') {
    local_340 = '\0';
  }
  if (local_394 != '\0') {
    if (local_38c != '\0') {
      local_38c = '\0';
    }
    local_394 = '\0';
  }
  if ((char)local_3d0 != '\0') {
    local_3d0 = local_3d0 & 0xffffffffffffff00;
  }
  if (auStack_3e8[4] != '\0') {
    auStack_3e8[4] = 0;
  }
  if ((char)local_408 != '\0') {
    local_408 = local_408 & 0xffffffffffffff00;
  }
  if ((char)local_418 != '\0') {
    local_418 = local_418 & 0xffffffffffffff00;
  }
  if ((char)local_420 != '\0') {
    local_420 = local_420 & 0xffffffffffffff00;
  }
  local_1d0 = bVar3;
  uVar4 = FUN_01218830();
  if (local_c0 == '\0') {
    local_c0 = '\x01';
    local_bc = uVar4;
    uVar5 = FUN_012aa3d0(lVar6);
  }
  else {
    local_bc._0_6_ = (undefined6)uVar4;
    uVar5 = FUN_012aa3d0(lVar6);
  }
  if (((((uVar5 & 1) == 0) || (local_b0 == '\0')) || (local_c0 == '\0')) ||
     ((local_110 == '\0' || (local_1d0 == '\0')))) goto LAB_012a5264;
  pcVar1 = (char *)(param_1 + 0x1e0);
  if (*(char *)(param_1 + 0x300) != '\0') {
    uVar5 = FUN_0121ae60(&local_a8,param_1 + 0x308);
    if ((uVar5 & 1) != 0) {
      if (local_c0 == '\0') {
        if (*(char *)(param_1 + 0x2f0) == '\0') {
LAB_012a4f0c:
          if (local_110 == '\0') {
            if (*(char *)(param_1 + 0x2a0) == '\0') {
LAB_012a4f38:
              if (local_1d0 == '\0') {
                bVar3 = *pcVar1 != '\0';
              }
              else {
                bVar3 = false;
                if (*pcVar1 != '\0') {
                  uVar5 = FUN_01223930(auStack_1c0,param_1 + 0x1f0);
                  if ((uVar5 & 1) != 0) goto LAB_012a5264;
                  goto LAB_012a4f7c;
                }
              }
              if (!(bool)(local_1d0 != '\0' ^ bVar3)) goto LAB_012a5264;
            }
          }
          else if (*(char *)(param_1 + 0x2a0) != '\0') {
            uVar5 = FUN_0121d130(&local_10c,param_1 + 0x2a4);
            if ((uVar5 & 1) != 0) goto LAB_012a4f38;
          }
        }
      }
      else if (*(char *)(param_1 + 0x2f0) != '\0') {
        uVar5 = FUN_01218890(&local_bc,param_1 + 0x2f4);
        if ((uVar5 & 1) != 0) goto LAB_012a4f0c;
      }
    }
  }
LAB_012a4f7c:
  if (*pcVar1 == '\0') {
    if (local_1d0 == '\0') goto LAB_012a4fe4;
    memcpy((void *)(param_1 + 0x1f0),auStack_1c0,0xb0);
    *(undefined1 *)(param_1 + 0x1e0) = 1;
    if (*(char *)(param_1 + 0x2a0) == '\0') goto LAB_012a5080;
LAB_012a4ff0:
    if (local_110 == '\0') {
      *(undefined1 *)(param_1 + 0x2a0) = 0;
LAB_012a511c:
      cVar2 = *(char *)(param_1 + 0x2f0);
      goto joined_r0x012a5110;
    }
    *(undefined8 *)(param_1 + 0x2ac) = local_104;
    *(undefined8 *)(param_1 + 0x2a4) = local_10c;
    *(undefined8 *)(param_1 + 0x2cc) = local_e4;
    *(undefined8 *)(param_1 + 0x2c4) = local_ec;
    *(undefined8 *)(param_1 + 700) = local_f4;
    *(undefined8 *)(param_1 + 0x2b4) = local_fc;
    *(undefined4 *)(param_1 + 0x2ec) = local_c4;
    *(undefined8 *)(param_1 + 0x2dc) = local_d4;
    *(undefined8 *)(param_1 + 0x2e4) = local_cc;
    *(undefined8 *)(param_1 + 0x2d4) = local_dc;
    if (*(char *)(param_1 + 0x2f0) == '\0') goto LAB_012a514c;
LAB_012a5128:
    if (local_c0 == '\0') {
      *(undefined1 *)(param_1 + 0x2f0) = 0;
LAB_012a5180:
      cVar2 = *(char *)(param_1 + 0x300);
      goto joined_r0x012a5188;
    }
    *(undefined2 *)(param_1 + 0x2f8) = local_bc._4_2_;
    *(undefined4 *)(param_1 + 0x2f4) = (undefined4)local_bc;
    if (*(char *)(param_1 + 0x300) == '\0') goto LAB_012a51bc;
LAB_012a518c:
    if (local_b0 == '\0') {
      *(undefined1 *)(param_1 + 0x300) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x308) = local_a8;
      *(undefined8 *)(param_1 + 0x328) = local_88;
      *(undefined8 *)(param_1 + 800) = local_90;
      *(undefined8 *)(param_1 + 0x318) = local_98;
      *(undefined8 *)(param_1 + 0x310) = local_a0;
    }
  }
  else {
    if (local_1d0 == '\0') {
      *pcVar1 = '\0';
LAB_012a4fe4:
      cVar2 = *(char *)(param_1 + 0x2a0);
    }
    else {
      memcpy((void *)(param_1 + 0x1f0),auStack_1c0,0xa1);
      cVar2 = *(char *)(param_1 + 0x2a0);
    }
    if (cVar2 != '\0') goto LAB_012a4ff0;
LAB_012a5080:
    if (local_110 == '\0') goto LAB_012a511c;
    *(undefined8 *)(param_1 + 0x2ac) = local_104;
    *(undefined8 *)(param_1 + 0x2a4) = local_10c;
    *(undefined8 *)(param_1 + 0x2cc) = local_e4;
    *(undefined8 *)(param_1 + 0x2c4) = local_ec;
    *(undefined8 *)(param_1 + 700) = local_f4;
    *(undefined8 *)(param_1 + 0x2b4) = local_fc;
    *(undefined4 *)(param_1 + 0x2ec) = local_c4;
    *(undefined8 *)(param_1 + 0x2e4) = local_cc;
    *(undefined8 *)(param_1 + 0x2dc) = local_d4;
    *(undefined8 *)(param_1 + 0x2d4) = local_dc;
    *(undefined1 *)(param_1 + 0x2a0) = 1;
    cVar2 = *(char *)(param_1 + 0x2f0);
joined_r0x012a5110:
    if (cVar2 != '\0') goto LAB_012a5128;
LAB_012a514c:
    if (local_c0 == '\0') goto LAB_012a5180;
    *(undefined8 *)(param_1 + 0x2f4) = local_bc;
    *(undefined1 *)(param_1 + 0x2f0) = 1;
    cVar2 = *(char *)(param_1 + 0x300);
joined_r0x012a5188:
    if (cVar2 != '\0') goto LAB_012a518c;
LAB_012a51bc:
    if (local_b0 != '\0') {
      *(undefined8 *)(param_1 + 0x308) = local_a8;
      *(undefined8 *)(param_1 + 0x310) = local_a0;
      *(undefined8 *)(param_1 + 0x328) = local_88;
      *(undefined8 *)(param_1 + 800) = local_90;
      *(undefined8 *)(param_1 + 0x318) = local_98;
      *(undefined1 *)(param_1 + 0x300) = 1;
    }
  }
  uStack_60 = 0x96;
  local_50 = &local_58;
  uStack_3a0 = 0;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_3a2 = 0;
  local_52 = 0;
  local_54 = 0;
  local_58 = 0;
  local_3c0 = 0;
  uStack_3b8 = 0;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  local_3f0 = 0;
  auStack_3e8 = (undefined1  [8])0x0;
  local_400 = 0;
  uStack_3f8 = 0;
  local_410 = 0;
  local_408 = 0;
  local_420 = 0;
  local_418 = 0;
  local_430 = 0;
  uStack_428 = 0;
  uStack_48 = 0;
  local_68 = (undefined1 *)&local_430;
  FUN_012a5c30(pcVar1,&local_68);
  FUN_012aa440(lVar6,local_78,&local_430,0x96);
LAB_012a5264:
  uVar5 = FUN_012aa920(lVar6);
  if ((((uVar5 & 1) != 0) && (local_b0 != '\0')) &&
     ((local_c0 != '\0' && ((local_110 != '\0' && (local_1d0 != '\0')))))) {
    uStack_60 = 0x96;
    local_50 = &local_58;
    uStack_3a0 = 0;
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_3a2 = 0;
    local_52 = 0;
    local_54 = 0;
    local_58 = 0;
    local_3c0 = 0;
    uStack_3b8 = 0;
    local_3d0 = 0;
    uStack_3c8 = 0;
    local_3e0 = 0;
    uStack_3d8 = 0;
    local_3f0 = 0;
    auStack_3e8 = (undefined1  [8])0x0;
    local_400 = 0;
    uStack_3f8 = 0;
    local_410 = 0;
    local_408 = 0;
    local_420 = 0;
    local_418 = 0;
    local_430 = 0;
    uStack_428 = 0;
    uStack_48 = 0;
    local_68 = (undefined1 *)&local_430;
    FUN_012a5c30(param_1 + 0x1e0,&local_68);
    FUN_012aa990(lVar6,local_78,&local_430,0x96,0x32);
  }
  uVar5 = FUN_012aad30(lVar6);
  if (((uVar5 & 1) != 0) && (*(long *)(param_1 + 0x338) != *(long *)(param_1 + 0x340))) {
    FUN_012aada0(lVar6,param_1 + 0x338);
  }
  return;
}


