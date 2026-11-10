/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121d510; name: FUN_0121d510
 */


void FUN_0121d510(undefined2 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined2 uVar3;
  byte bVar4;
  undefined2 uVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 local_90;
  undefined2 local_8c;
  undefined2 local_88;
  undefined2 local_84;
  undefined2 local_80;
  undefined2 local_7c;
  undefined2 local_78;
  undefined2 local_74;
  undefined2 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  
  local_68 = 0;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    local_6c = 0;
LAB_0121d724:
    local_70 = 0;
LAB_0121d734:
    local_74 = 0;
LAB_0121d740:
    local_78 = 0;
LAB_0121d74c:
    local_7c = 0;
LAB_0121d758:
    local_80 = 0;
LAB_0121d764:
    local_84 = 0;
LAB_0121d770:
    local_88 = 0;
LAB_0121d77c:
    local_8c = 0;
LAB_0121d788:
    local_90 = 0;
LAB_0121d794:
    uVar7 = 0;
LAB_0121d7a0:
    uVar8 = 0;
LAB_0121d7ac:
    uVar9 = 0;
LAB_0121d7b8:
    uVar10 = 0;
LAB_0121d7c4:
    uVar11 = 0;
LAB_0121d7d0:
    uVar12 = 0;
LAB_0121d7dc:
    uVar5 = 0;
LAB_0121d7e0:
    bVar4 = 0;
  }
  else {
    if ((ulong)(param_2[1] * 8) < 10) {
      local_6c = 0;
      if ((ulong)(param_2[1] * 8) < 0x14) goto LAB_0121d880;
LAB_0121d58c:
      local_68 = 10;
      uVar2 = FUN_0121eba0(lVar1,&local_68);
      lVar1 = *param_2;
      local_70 = 0;
      if ((uVar2 & 0xff) != 0) {
        local_70 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 == 0) goto LAB_0121d734;
      if ((ulong)(param_2[1] * 8) < 0x1e) goto LAB_0121d89c;
LAB_0121d5c4:
      local_68 = 0x14;
      uVar2 = FUN_0121ed00(lVar1,&local_68);
      lVar1 = *param_2;
      local_74 = 0;
      if ((uVar2 & 0xff) != 0) {
        local_74 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 == 0) goto LAB_0121d740;
      if ((ulong)(param_2[1] * 8) < 0x28) goto LAB_0121d8b8;
LAB_0121d5fc:
      local_68 = 0x1e;
      uVar2 = FUN_0121ee60(lVar1,&local_68);
      lVar1 = *param_2;
      local_78 = 0;
      if ((uVar2 & 0xff) != 0) {
        local_78 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) {
        if ((ulong)(param_2[1] * 8) < 0x32) goto LAB_0121d8d4;
        goto LAB_0121d634;
      }
      goto LAB_0121d74c;
    }
    uVar2 = FUN_0121ea40(lVar1,&local_68);
    lVar1 = *param_2;
    local_6c = 0;
    if ((uVar2 & 0xff) != 0) {
      local_6c = (short)(uVar2 >> 0x10);
    }
    if (lVar1 == 0) goto LAB_0121d724;
    if (0x13 < (ulong)(param_2[1] * 8)) goto LAB_0121d58c;
LAB_0121d880:
    local_70 = 0;
    if (0x1d < (ulong)(param_2[1] * 8)) goto LAB_0121d5c4;
LAB_0121d89c:
    local_74 = 0;
    if (0x27 < (ulong)(param_2[1] * 8)) goto LAB_0121d5fc;
LAB_0121d8b8:
    local_78 = 0;
    if ((ulong)(param_2[1] * 8) < 0x32) {
LAB_0121d8d4:
      local_7c = 0;
      if ((ulong)(param_2[1] * 8) < 0x3c) goto LAB_0121d8f0;
LAB_0121d66c:
      local_68 = 0x32;
      uVar2 = FUN_0121f120(lVar1,&local_68);
      lVar1 = *param_2;
      local_80 = 0;
      if ((uVar2 & 0xff) != 0) {
        local_80 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) {
        if ((ulong)(param_2[1] * 8) < 0x46) goto LAB_0121d90c;
        goto LAB_0121d6a4;
      }
      goto LAB_0121d764;
    }
LAB_0121d634:
    local_68 = 0x28;
    uVar2 = FUN_0121efc0(lVar1,&local_68);
    lVar1 = *param_2;
    local_7c = 0;
    if ((uVar2 & 0xff) != 0) {
      local_7c = (short)(uVar2 >> 0x10);
    }
    if (lVar1 == 0) goto LAB_0121d758;
    if (0x3b < (ulong)(param_2[1] * 8)) goto LAB_0121d66c;
LAB_0121d8f0:
    local_80 = 0;
    if ((ulong)(param_2[1] * 8) < 0x46) {
LAB_0121d90c:
      local_84 = 0;
      if ((ulong)(param_2[1] * 8) < 0x50) goto LAB_0121d928;
LAB_0121d6dc:
      local_68 = 0x46;
      uVar2 = FUN_0121f3e0(lVar1,&local_68);
      lVar1 = *param_2;
      local_88 = 0;
      if ((uVar2 & 0xff) != 0) {
        local_88 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) goto LAB_0121d934;
      goto LAB_0121d77c;
    }
LAB_0121d6a4:
    local_68 = 0x3c;
    uVar2 = FUN_0121f280(lVar1,&local_68);
    lVar1 = *param_2;
    local_84 = 0;
    if ((uVar2 & 0xff) != 0) {
      local_84 = (short)(uVar2 >> 0x10);
    }
    if (lVar1 == 0) goto LAB_0121d770;
    if (0x4f < (ulong)(param_2[1] * 8)) goto LAB_0121d6dc;
LAB_0121d928:
    local_88 = 0;
LAB_0121d934:
    local_68 = 0x50;
    if (0x59 < (ulong)(param_2[1] * 8)) {
      uVar2 = FUN_0121f540(lVar1,&local_68);
      lVar1 = *param_2;
      local_8c = 0;
      if ((uVar2 & 0xff) != 0) {
        local_8c = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) goto LAB_0121d9b0;
      goto LAB_0121d788;
    }
    local_8c = 0;
LAB_0121d9b0:
    local_68 = 0x5a;
    if (99 < (ulong)(param_2[1] * 8)) {
      uVar2 = FUN_0121f6a0(lVar1,&local_68);
      lVar1 = *param_2;
      local_90 = 0;
      if ((uVar2 & 0xff) != 0) {
        local_90 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) goto LAB_0121da1c;
      goto LAB_0121d794;
    }
    local_90 = 0;
LAB_0121da1c:
    local_68 = 100;
    if (0x6d < (ulong)(param_2[1] * 8)) {
      uVar2 = FUN_0121f800(lVar1,&local_68);
      lVar1 = *param_2;
      uVar7 = 0;
      if ((uVar2 & 0xff) != 0) {
        uVar7 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) goto LAB_0121da84;
      goto LAB_0121d7a0;
    }
    uVar7 = 0;
LAB_0121da84:
    local_68 = 0x6e;
    if (0x77 < (ulong)(param_2[1] * 8)) {
      uVar2 = FUN_0121f960(lVar1,&local_68);
      lVar1 = *param_2;
      uVar8 = 0;
      if ((uVar2 & 0xff) != 0) {
        uVar8 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) goto LAB_0121daf0;
      goto LAB_0121d7ac;
    }
    uVar8 = 0;
LAB_0121daf0:
    local_68 = 0x78;
    if (0x81 < (ulong)(param_2[1] * 8)) {
      uVar2 = FUN_0121fac0(lVar1,&local_68);
      lVar1 = *param_2;
      uVar9 = 0;
      if ((uVar2 & 0xff) != 0) {
        uVar9 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) goto LAB_0121db48;
      goto LAB_0121d7b8;
    }
    uVar9 = 0;
LAB_0121db48:
    local_68 = 0x82;
    if (0x8b < (ulong)(param_2[1] * 8)) {
      uVar2 = FUN_0121fc20(lVar1,&local_68);
      lVar1 = *param_2;
      uVar10 = 0;
      if ((uVar2 & 0xff) != 0) {
        uVar10 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) goto LAB_0121dba0;
      goto LAB_0121d7c4;
    }
    uVar10 = 0;
LAB_0121dba0:
    local_68 = 0x8c;
    if (0x95 < (ulong)(param_2[1] * 8)) {
      uVar2 = FUN_0121fd80(lVar1,&local_68);
      lVar1 = *param_2;
      uVar11 = 0;
      if ((uVar2 & 0xff) != 0) {
        uVar11 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) goto LAB_0121dbf8;
      goto LAB_0121d7d0;
    }
    uVar11 = 0;
LAB_0121dbf8:
    local_68 = 0x96;
    if (0x9f < (ulong)(param_2[1] * 8)) {
      uVar2 = FUN_0121fee0(lVar1,&local_68);
      lVar1 = *param_2;
      uVar12 = 0;
      if ((uVar2 & 0xff) != 0) {
        uVar12 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) goto LAB_0121dc50;
      goto LAB_0121d7dc;
    }
    uVar12 = 0;
LAB_0121dc50:
    local_68 = 0xa0;
    if (0xa9 < (ulong)(param_2[1] * 8)) {
      uVar2 = FUN_01220040(lVar1,&local_68);
      lVar1 = *param_2;
      uVar5 = 0;
      if ((uVar2 & 0xff) != 0) {
        uVar5 = (short)(uVar2 >> 0x10);
      }
      if (lVar1 != 0) goto LAB_0121dc98;
      goto LAB_0121d7e0;
    }
    uVar5 = 0;
LAB_0121dc98:
    uVar2 = param_2[1] * 8;
    if (uVar2 < 0xac) {
      bVar4 = 0;
    }
    else {
      bVar4 = *(byte *)(lVar1 + 0x15) >> 2 & 3;
      if (0xad < uVar2) {
        bVar6 = *(byte *)(lVar1 + 0x15) >> 4 & 3;
        local_68 = 0xae;
        if (uVar2 < 0xb8) {
          uVar3 = 0;
        }
        else {
          uVar2 = FUN_012201a0(lVar1,&local_68);
          uVar3 = 0;
          if ((uVar2 & 0xff) != 0) {
            uVar3 = (short)(uVar2 >> 0x10);
          }
        }
        goto LAB_0121d7f4;
      }
    }
  }
  bVar6 = 0;
  uVar3 = 0;
LAB_0121d7f4:
  *param_1 = local_6c;
  param_1[1] = local_70;
  param_1[2] = local_74;
  param_1[3] = local_78;
  param_1[4] = local_7c;
  param_1[5] = local_80;
  param_1[6] = local_84;
  param_1[7] = local_88;
  param_1[8] = local_8c;
  param_1[9] = local_90;
  param_1[10] = uVar7;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar10;
  param_1[0xe] = uVar11;
  param_1[0xf] = uVar12;
  param_1[0x10] = uVar5;
  *(byte *)(param_1 + 0x11) = bVar4;
  *(byte *)((long)param_1 + 0x23) = bVar6;
  param_1[0x12] = uVar3;
  return;
}


