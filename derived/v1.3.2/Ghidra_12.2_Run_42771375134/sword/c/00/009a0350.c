/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a0350; name: FUN_009a0350
 */


void FUN_009a0350(undefined8 param_1,undefined4 *param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined1 local_188;
  uint local_170;
  byte local_16c;
  undefined1 auStack_168 [80];
  char local_118 [40];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined7 local_a0;
  undefined1 uStack_99;
  undefined6 uStack_98;
  undefined1 local_92;
  undefined4 local_90;
  undefined1 auStack_8c [44];
  
  FUN_0093b070(auStack_168);
  uVar11 = FUN_00946da0(*(undefined4 *)(*param_3 + 0x54));
  uVar12 = FUN_00946db0(*(undefined4 *)(*param_3 + 0x54));
  puVar21 = (undefined8 *)*param_3;
  uVar22 = *puVar21;
  local_170 = 0;
  local_16c = 5;
  uVar16 = FUN_008e0a10(uVar22);
  if (((uVar16 & 1) == 0) && (iVar13 = FUN_00942810(param_1,puVar21), iVar13 != 0)) {
    uVar2 = *(undefined4 *)(puVar21 + 2);
    uVar17 = FUN_009423e0(param_1);
    FUN_00929900(uVar17,uVar22,uVar2,iVar13);
    uVar17 = FUN_00942380(param_1);
    FUN_00942390(param_1);
    uVar18 = FUN_00931920();
    uVar6 = FUN_008eca00(uVar17,uVar18,uVar22,iVar13,0);
    *(int *)(puVar21 + 2) = iVar13;
    *(undefined1 *)((long)puVar21 + 0xc) = uVar6;
  }
  uVar2 = *(undefined4 *)(puVar21 + 2);
  uVar14 = FUN_00946b90(*param_3);
  bVar10 = *(byte *)((long)puVar21 + 0xc);
  uVar20 = (uint)bVar10;
  local_188 = *(undefined1 *)((long)puVar21 + 0xd);
  uVar3 = *(undefined2 *)((long)puVar21 + 0xc);
  bVar7 = FUN_008e1810(uVar22,0x1a);
  bVar8 = FUN_008e1810(uVar22,0x1b);
  uVar16 = thunk_FUN_008dd3c0(uVar14);
  if ((uVar16 & 1) != 0) {
    uVar17 = FUN_009423b0(param_1);
    uVar15 = FUN_008e0a00(uVar22);
    FUN_0093a550(uVar17,uVar15,uVar2,uVar11);
    uVar17 = FUN_009423e0(param_1);
    uVar14 = FUN_00926180(uVar17,uVar22,uVar14,uVar2);
    uVar17 = FUN_009423b0(param_1);
    uVar15 = FUN_008e0a00(uVar22);
    FUN_0093a5c0(uVar17,uVar15,uVar2);
  }
  uVar17 = FUN_009423b0(param_1);
  uVar15 = FUN_008e0a00(uVar22);
  FUN_0093a550(uVar17,uVar15,uVar14,uVar11);
  uVar17 = FUN_009423e0(param_1);
  FUN_00929ca0(uVar17,uVar22,uVar14);
  uVar17 = FUN_009423e0(param_1);
  FUN_00926280(uVar17,uVar14,uVar2,uVar2,uVar12,uVar22,&local_f0);
  local_a0 = (undefined7)((long)puVar21 + 0x24);
  uStack_99 = (undefined1)((ulong)((long)puVar21 + 0x24) >> 0x38);
  local_b8 = uVar22;
  local_b0 = (char *)&local_f0;
  local_a8._0_1_ = (bVar7 | bVar8) & 1;
  FUN_00942450(param_1);
  uVar17 = FUN_00925d70();
  FUN_009a1600(uVar17,local_118,&local_b8);
  if (local_118[0] != '\0') {
    *(ulong *)(param_2 + 2) = CONCAT44(uStack_ec,local_f0);
    uVar11 = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    *(ulong *)(param_2 + 8) = CONCAT44(uStack_d4,local_d8);
    *(undefined8 *)(param_2 + 10) = uStack_d0;
    *(undefined8 *)(param_2 + 4) = local_e8;
    *(undefined8 *)(param_2 + 6) = uStack_e0;
    *(byte *)(param_2 + 0xc) = bVar10;
    goto LAB_009a0b3c;
  }
  uVar17 = FUN_009423e0(param_1);
  uVar16 = FUN_0092ce40(uVar17,uVar22,uVar2,uVar20,&local_170);
  bVar5 = local_16c;
  uVar4 = local_170;
  if ((uVar16 & 1) == 0) {
    uVar17 = FUN_009423b0(param_1);
    uVar11 = FUN_008e0a00(uVar22);
    FUN_00936100(uVar17,uVar11,uVar2,uVar20,0);
    uVar17 = FUN_009423e0(param_1);
    FUN_00926280(uVar17,uVar2,uVar2,uVar2,uVar12,uVar22,local_118);
    local_a0 = SUB87(auStack_168,0);
    uStack_99 = (undefined1)((ulong)auStack_168 >> 0x38);
    local_a8 = (undefined4 *)CONCAT62(local_a8._2_6_,uVar3);
    local_b8 = uVar22;
    local_b0 = local_118;
    FUN_00942450(param_1);
    uVar17 = FUN_00925b60();
    FUN_0099ed70(uVar17,&local_c8,&local_b8);
    bVar7 = FUN_009a0d30(param_1,uVar22,uVar2,uVar14,auStack_168);
    bVar7 = bVar7 & 1;
    local_b0._0_5_ = CONCAT14(0x27,uVar2);
    local_b8 = uVar22;
    FUN_00942450(param_1);
    uVar22 = FUN_00925dd0();
    FUN_009a1090(uVar22,&local_c8,&local_b8);
    *(ulong *)(param_2 + 2) = CONCAT44(uStack_ec,local_f0);
    uVar22 = CONCAT44(uStack_d4,local_d8);
    *(byte *)(param_2 + 0xc) = bVar10;
LAB_009a0b2c:
    *(undefined8 *)(param_2 + 8) = uVar22;
    *(undefined8 *)(param_2 + 10) = uStack_d0;
    *(undefined8 *)(param_2 + 4) = local_e8;
    *(undefined8 *)(param_2 + 6) = uStack_e0;
    *(byte *)((long)param_2 + 5) = bVar7;
  }
  else {
    if (local_170 == 0) {
      uVar17 = FUN_009423e0(param_1);
      FUN_00926280(uVar17,uVar2,uVar2,uVar2,uVar12,uVar22,local_118);
      uVar17 = FUN_009423e0(param_1);
      FUN_00926280(uVar17,uVar14,uVar2,uVar2,uVar12,uVar22,&local_f0);
LAB_009a08b8:
      puVar1 = param_2 + 0xe;
      local_a0 = SUB87(puVar1,0);
      uStack_99 = (undefined1)((ulong)puVar1 >> 0x38);
      local_a8._0_2_ = CONCAT11(local_188,bVar10);
      local_b8 = uVar22;
      local_b0 = (char *)&local_f0;
      FUN_00942450(param_1);
      uVar17 = FUN_00925b60();
      FUN_0099ed70(uVar17,&local_c8,&local_b8);
      uVar17 = FUN_009423e0(param_1);
      FUN_00926560(uVar17,uVar14,uVar2,uVar2,uVar12,uVar22,puVar1,&local_f0);
      if ((((bVar7 | bVar8) & 1) == 0) && ((*(byte *)(puVar21 + 5) >> 3 & 1) == 0)) {
        bVar7 = FUN_009a0d30(param_1,uVar22,uVar2,uVar14,puVar1);
        bVar7 = bVar7 & 1;
      }
      else {
        bVar7 = 0;
      }
      uVar17 = FUN_009423e0(param_1);
      FUN_00929a30(uVar17,uVar22,local_118,&local_f0);
      uVar17 = FUN_009423e0(param_1);
      FUN_00929990(uVar17,uVar22,&local_f0);
      uVar11 = FUN_008e0a00(uVar22);
      uVar17 = FUN_00942380(param_1);
      uVar18 = FUN_00942390(param_1);
      uVar19 = FUN_009423b0(param_1);
      FUN_0092f930(uVar17,uVar18,uVar19,6,uVar11,uVar14,0);
      FUN_009a0f40(param_1,uVar22,uVar2,uVar14);
      local_b8 = uVar22;
      local_b0 = (char *)&local_f0;
      local_a8 = puVar1;
      FUN_00942450(param_1);
      uVar17 = FUN_00925d80();
      FUN_009a2330(uVar17,&local_c8,&local_b8);
      if ((char)local_c8 == '\0') {
        local_b0 = (char *)&local_f0;
        local_b8 = uVar22;
        FUN_00942450(param_1);
        uVar17 = FUN_00925da0();
        FUN_009a2b80(uVar17,&local_c8,&local_b8);
        if ((char)local_c8 == '\0') {
          uVar17 = FUN_00942390(param_1);
          FUN_00931ad0(uVar17,&local_f0);
          uVar17 = FUN_00942380(param_1);
          FUN_0094dbb0(uVar17,uVar22);
          uVar16 = FUN_008e1810(uVar22,0x23);
          if ((uVar16 & 1) != 0) {
            local_b8 = CONCAT71(local_b8._1_7_,0x1f);
            local_b8 = CONCAT44(0x2d,(undefined4)local_b8);
            local_90 = 0;
            uStack_98 = 0;
            local_92 = 0;
            local_b0 = (char *)0x0;
            local_a8 = (undefined4 *)0x0;
            local_a0 = 0;
            uStack_99 = 0;
            FUN_00943e60(auStack_8c);
            uVar6 = FUN_008e0a00(uVar22);
            local_b8 = CONCAT71(local_b8._1_7_,uVar6);
            local_b8 = CONCAT44(0x23,(undefined4)local_b8);
            uVar6 = FUN_008e0a00(uVar22);
            local_b0 = (char *)CONCAT71(local_b0._1_7_,uVar6);
            local_92 = 1;
            local_90 = CONCAT13(1,(undefined3)local_90);
            FUN_00942450(param_1);
            uVar17 = FUN_00925570();
            FUN_00948290(uVar17,&local_c8,&local_b8);
            FUN_008e3830(uVar22,0xe);
          }
          local_b8 = uVar22;
          local_b0 = (char *)&local_f0;
          local_a8 = puVar1;
          FUN_00942450(param_1);
          uVar17 = FUN_00925d90();
          FUN_009a24a0(uVar17,&local_c8,&local_b8);
          if ((char)local_c8 == '\0') {
            local_b0 = (char *)&local_f0;
            local_a8 = (undefined4 *)CONCAT71(local_a8._1_7_,bVar10);
            local_c8 = 0;
            local_b8 = uVar22;
            FUN_00942450(param_1);
            uVar17 = FUN_00925dc0();
            FUN_009a2990(uVar17,&local_c8,&local_b8);
            *(undefined1 *)(param_2 + 1) = local_c8._1_1_;
            if ((char)local_c8 == '\0') {
              local_b0._0_5_ = CONCAT14(bVar10,uVar14);
              local_b8 = uVar22;
              FUN_00942450(param_1);
              uVar17 = FUN_00925db0();
              FUN_009a2610(uVar17,&local_c8,&local_b8);
              if ((char)local_c8 == '\0') {
                FUN_00942390(param_1);
                uVar17 = FUN_009319c0();
                uVar11 = FUN_00942820(param_1,0);
                uVar12 = FUN_008e0a00(uVar22);
                FUN_00935980(uVar17,uVar14,uVar11,uVar12);
                uVar17 = FUN_009423e0(param_1);
                FUN_00929ac0(uVar17,uVar22,&local_f0,0x25);
                local_b8 = CONCAT71(local_b8._1_7_,0x1f);
                local_c8 = CONCAT11(local_c8._1_1_,0x1f);
                uVar17 = FUN_009423e0(param_1);
                FUN_00929f10(uVar17,uVar22,uVar14,puVar1,&local_b8,&local_c8);
                if ((char)local_b8 == '\x1f') {
                  *(ulong *)(param_2 + 2) = CONCAT44(uStack_ec,local_f0);
                  *(byte *)(param_2 + 0xc) = bVar10;
                  *(undefined8 *)(param_2 + 4) = local_e8;
                  *(undefined8 *)(param_2 + 6) = uStack_e0;
                  *(ulong *)(param_2 + 8) = CONCAT44(uStack_d4,local_d8);
                  *(undefined8 *)(param_2 + 10) = uStack_d0;
                  *(byte *)((long)param_2 + 5) = bVar7;
                  uVar11 = 1;
                  *(undefined1 *)(param_2 + 1) = 1;
                }
                else {
                  if ((char)local_c8 == '\x1f') {
                    uVar6 = 5;
                  }
                  else {
                    uVar6 = FUN_00942580(param_1);
                  }
                  *(char *)((long)param_2 + 0x89) = (char)local_b8;
                  *(undefined1 *)((long)param_2 + 0x8e) = uVar6;
                  *(undefined1 *)(param_2 + 0x22) = 1;
                  *(ulong *)(param_2 + 2) = CONCAT44(uStack_ec,local_f0);
                  *(byte *)(param_2 + 0xc) = bVar10;
                  *(ulong *)(param_2 + 8) = CONCAT44(uStack_d4,local_d8);
                  *(undefined8 *)(param_2 + 10) = uStack_d0;
                  *(byte *)((long)param_2 + 5) = bVar7;
                  *(undefined8 *)(param_2 + 4) = local_e8;
                  *(undefined8 *)(param_2 + 6) = uStack_e0;
                  *(undefined1 *)(param_2 + 1) = 0;
                  uVar11 = 4;
                }
              }
              else {
                *(ulong *)(param_2 + 2) = CONCAT44(uStack_ec,local_f0);
                *(byte *)(param_2 + 0xc) = bVar10;
                *(ulong *)(param_2 + 8) = CONCAT44(uStack_d4,local_d8);
                *(undefined8 *)(param_2 + 10) = uStack_d0;
                *(byte *)((long)param_2 + 5) = bVar7;
                *(undefined8 *)(param_2 + 4) = local_e8;
                *(undefined8 *)(param_2 + 6) = uStack_e0;
                *(undefined1 *)(param_2 + 1) = 0;
                uVar11 = 3;
              }
            }
            else {
              *(ulong *)(param_2 + 2) = CONCAT44(uStack_ec,local_f0);
              *(byte *)(param_2 + 0xc) = bVar10;
              *(ulong *)(param_2 + 8) = CONCAT44(uStack_d4,local_d8);
              *(undefined8 *)(param_2 + 10) = uStack_d0;
              *(byte *)((long)param_2 + 5) = bVar7;
              *(undefined8 *)(param_2 + 4) = local_e8;
              *(undefined8 *)(param_2 + 6) = uStack_e0;
              uVar11 = 2;
            }
            goto LAB_009a0b3c;
          }
        }
        uVar22 = CONCAT44(uStack_ec,local_f0);
      }
      else {
        uVar22 = CONCAT44(uStack_ec,local_f0);
      }
      *(undefined8 *)(param_2 + 2) = uVar22;
      uVar22 = CONCAT44(uStack_d4,local_d8);
      *(byte *)(param_2 + 0xc) = bVar10;
      goto LAB_009a0b2c;
    }
    local_188 = FUN_00942460(param_1,local_16c);
    uVar17 = FUN_009423b0(param_1);
    uVar15 = FUN_008e0a00(uVar22);
    FUN_0093a550(uVar17,uVar15,uVar4,uVar11);
    iVar13 = FUN_00880f80(uVar2);
    uVar14 = uVar20;
    if ((uVar20 == 5) && (iVar13 == 3)) {
      uVar17 = FUN_00942380(param_1);
      uVar14 = FUN_008f9400(uVar17,5,0);
    }
    uVar17 = FUN_009423b0(param_1);
    uVar11 = FUN_008e0a00(uVar22);
    FUN_00936100(uVar17,uVar11,uVar2,uVar20,0);
    uVar17 = FUN_009423b0(param_1);
    FUN_00938c70(uVar17,uVar22,uVar2,uVar14,local_d8);
    uVar17 = FUN_009423e0(param_1);
    FUN_00926280(uVar17,uVar2,uVar2,uVar2,uVar12,uVar22,local_118);
    uVar17 = FUN_009423e0(param_1);
    FUN_00926280(uVar17,uVar4,uVar2,uVar2,uVar12,uVar22,&local_f0);
    cVar9 = FUN_009a0e30(param_1,uVar22,&local_f0);
    if (cVar9 == '\0') {
      bVar10 = bVar5;
      uVar14 = uVar4;
      goto LAB_009a08b8;
    }
    local_b0 = (char *)CONCAT44(CONCAT31(local_b0._5_3_,cVar9),local_f0);
    local_b8 = uVar22;
    FUN_00942450(param_1);
    uVar17 = FUN_00925dd0();
    FUN_009a1090(uVar17,&local_c8,&local_b8);
    bVar10 = FUN_009a0d30(param_1,uVar22,uVar2,uVar4,auStack_168);
    *(ulong *)(param_2 + 8) = CONCAT44(uStack_d4,local_d8);
    *(undefined8 *)(param_2 + 10) = uStack_d0;
    *(undefined8 *)(param_2 + 4) = local_e8;
    *(undefined8 *)(param_2 + 6) = uStack_e0;
    *(ulong *)(param_2 + 2) = CONCAT44(uStack_ec,local_f0);
    *(byte *)(param_2 + 0xc) = bVar5;
    *(byte *)((long)param_2 + 5) = bVar10 & 1;
  }
  uVar11 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
LAB_009a0b3c:
  *param_2 = uVar11;
  return;
}


