/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0097a520; name: FUN_0097a520
 */


uint FUN_0097a520(undefined8 param_1,uint param_2,ulong param_3,uint param_4)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 local_100 [4];
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined7 uStack_e8;
  undefined1 local_e1;
  undefined6 uStack_e0;
  undefined1 uStack_da;
  undefined4 local_d8;
  undefined1 auStack_d4 [36];
  undefined1 local_b0 [32];
  undefined8 local_90 [6];
  
  uVar4 = FUN_0093eb90(param_1,3);
  if (uVar4 == (param_2 & 0xff)) {
    local_90[3] = 0;
    local_90[4] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[0] = 0;
    uVar1 = FUN_008f94e0(param_2);
    uVar7 = FUN_009415f0(param_1,0);
    uVar10 = 0;
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_00941600(param_1,uVar1,0);
      uVar10 = 0;
      if ((uVar7 & 1) != 0) {
        local_90[0] = FUN_00941610(param_1,0);
        uVar10 = 1;
      }
    }
    uVar7 = FUN_009415f0(param_1,1);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_00941600(param_1,uVar1,1), (uVar7 & 1) != 0)) {
      uVar8 = FUN_00941610(param_1,1);
      local_90[uVar10] = uVar8;
      uVar10 = (ulong)((int)uVar10 + 1);
    }
    uVar7 = FUN_009415f0(param_1,2);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_00941600(param_1,uVar1,2), (uVar7 & 1) != 0)) {
      uVar8 = FUN_00941610(param_1,2);
      local_90[uVar10] = uVar8;
      uVar10 = (ulong)((int)uVar10 + 1);
    }
    uVar7 = FUN_009415f0(param_1,3);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_00941600(param_1,uVar1,3), (uVar7 & 1) != 0)) {
      uVar8 = FUN_00941610(param_1,3);
      local_90[uVar10] = uVar8;
      uVar10 = (ulong)((int)uVar10 + 1);
    }
    uVar7 = FUN_009415f0(param_1,4);
    if (((uVar7 & 1) == 0) || (uVar7 = FUN_00941600(param_1,uVar1,4), (uVar7 & 1) == 0)) {
      if ((int)uVar10 != 0) goto joined_r0x0097a738;
    }
    else {
      uVar8 = FUN_00941610(param_1,4);
      local_90[uVar10] = uVar8;
      uVar10 = (ulong)((int)uVar10 + 1);
joined_r0x0097a738:
      if ((param_3 & 1) == 0) {
        uVar7 = 0;
        uVar11 = 0;
        do {
          uVar8 = local_90[uVar7];
          bVar2 = FUN_009141c0(uVar8);
          if (bVar2 != 0) {
            uVar4 = 0;
            do {
              FUN_00914330(uVar8,uVar4);
              uVar5 = FUN_008e0a00();
              iVar6 = FUN_00941290(param_1,uVar5);
              if (iVar6 != 0) {
                local_b0[uVar11] = (char)uVar5;
                uVar11 = (ulong)((int)uVar11 + 1);
              }
              uVar4 = uVar4 + 1;
            } while (bVar2 != uVar4);
          }
          uVar4 = (uint)uVar11;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar10);
      }
      else {
        uVar7 = 0;
        uVar11 = 0;
        do {
          uVar8 = local_90[uVar7];
          bVar2 = FUN_009141c0(uVar8);
          if (bVar2 != 0) {
            uVar4 = 0;
            do {
              FUN_00914330(uVar8,uVar4);
              uVar5 = FUN_008e0a00();
              cVar3 = FUN_009416b0(param_1,uVar5);
              if (((cVar3 == '\x05') || (uVar9 = FUN_009403a0(param_1,uVar5), (uVar9 & 1) != 0)) &&
                 (iVar6 = FUN_00941290(param_1,uVar5), iVar6 != 0)) {
                local_b0[uVar11] = (char)uVar5;
                uVar11 = (ulong)((int)uVar11 + 1);
              }
              uVar4 = uVar4 + 1;
            } while (bVar2 != uVar4);
          }
          uVar4 = (uint)uVar11;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar10);
      }
      if (uVar4 != 0) {
        local_100[0] = 0x1f;
        local_fc = 0x2d;
        local_d8 = 0;
        uStack_e0 = 0;
        uStack_da = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_e1 = 0;
        local_f8 = 0;
        FUN_00943e60(auStack_d4);
        local_100[0] = (undefined1)param_2;
        local_fc = 0x2d;
        uStack_da = (undefined1)uVar4;
        memcpy(&local_f8,local_b0,(ulong)uVar4);
        uVar4 = FUN_0093f290(param_1,local_100);
        goto LAB_0097a84c;
      }
    }
    if ((param_4 & 1) != 0) {
      FUN_0093ebd0(param_1,0x59,1);
    }
  }
  uVar4 = 0;
LAB_0097a84c:
  return uVar4 & 1;
}


