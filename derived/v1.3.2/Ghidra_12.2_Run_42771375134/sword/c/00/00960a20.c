/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00960a20; name: FUN_00960a20
 */


void FUN_00960a20(undefined8 param_1,int *param_2,ulong *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  byte bVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int *piVar23;
  byte bVar24;
  ulong uVar25;
  ulong uVar26;
  int local_1e8;
  undefined2 local_1d8;
  undefined1 auStack_188 [80];
  undefined2 local_138;
  undefined8 local_134;
  uint local_12c [17];
  undefined8 local_e8;
  ulong uStack_e0;
  undefined2 *local_d8;
  ulong uStack_d0;
  ulong local_c8;
  undefined1 local_c0;
  ulong local_b8;
  ulong local_98;
  undefined1 *local_90;
  ulong uStack_88;
  ulong local_80;
  undefined4 local_78;
  undefined8 local_70;
  
  *param_2 = 0;
  uVar12 = FUN_0093b2c0(param_3[4],0);
  uVar7 = FUN_0093b430(param_3[4]);
  if (1 < uVar7) {
    uVar8 = FUN_008e0a00(uVar12);
    uVar4 = FUN_00942580(param_1,uVar8);
    lVar13 = FUN_00942400(param_1);
    *(undefined1 *)(lVar13 + 0x15) = uVar4;
  }
  uVar12 = FUN_009423e0(param_1);
  bVar5 = FUN_0092f070(uVar12,*param_3);
  *(byte *)(param_3[6] + 8) = ~bVar5 & 1;
  *(byte *)(param_3[6] + 9) = ~bVar5 & 1;
  local_138 = 0;
  local_12c[0xe] = 0;
  local_12c[0xf] = 0;
  local_12c[0xc] = 0;
  local_12c[0xd] = 0;
  local_12c[10] = 0;
  local_12c[0xb] = 0;
  local_12c[8] = 0;
  local_12c[9] = 0;
  local_12c[6] = 0;
  local_12c[7] = 0;
  local_12c[4] = 0;
  local_12c[5] = 0;
  local_12c[2] = 0;
  local_12c[3] = 0;
  local_12c[0] = 0;
  local_12c[1] = 0;
  local_134 = 0;
  if (*(char *)param_3[6] != '\0') {
    puVar22 = (undefined8 *)((ulong)&local_1d8 | 4);
    bVar24 = 0;
    bVar20 = 0;
    uVar7 = 0;
    local_1e8 = 0;
    puVar21 = (undefined8 *)((ulong)&local_e8 | 4);
    do {
      iVar9 = FUN_008e19f0(*param_3);
      lVar13 = FUN_009610b0(param_1,param_3[4],uVar7);
      if (lVar13 != 0) {
        if (uVar7 == 0) {
          uVar12 = FUN_009423a0(param_1);
          FUN_0095ee20((long)param_2 + 6,uVar12);
        }
        else {
          pbVar18 = (byte *)param_3[6];
          if (pbVar18[2] != 0) {
            uVar12 = FUN_009423e0(param_1);
            uVar14 = FUN_0092a710(uVar12,*param_3,lVar13,param_3[2],0);
            if ((uVar14 & 1) == 0) break;
            pbVar18 = (byte *)param_3[6];
          }
          if ((pbVar18[3] != 0) || (*pbVar18 < 2)) {
            uVar12 = FUN_009423b0(param_1);
            lVar15 = FUN_00942400(param_1);
            uVar4 = *(undefined1 *)(lVar15 + 0x14);
            uVar10 = FUN_00942540(param_1,lVar13);
            uVar8 = *(undefined4 *)param_3[2];
            uVar2 = *(undefined1 *)((long)param_3[2] + 0xe);
            lVar15 = FUN_00942400(param_1);
            FUN_00938c00(uVar12,uVar4,uVar10,uVar8,uVar2,0,uVar7,1,*(undefined1 *)(lVar15 + 0x18),
                         *(undefined4 *)(param_3[2] + 0x18));
          }
        }
        FUN_0093b070(auStack_188);
        FUN_0093b090(auStack_188);
        FUN_0093b0b0(auStack_188,lVar13);
        local_1d8 = 0;
        puVar22[7] = 0;
        puVar22[8] = 0;
        *puVar22 = 0;
        puVar22[5] = 0;
        puVar22[6] = 0;
        puVar22[3] = 0;
        puVar22[4] = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        local_98 = *param_3;
        uStack_88 = param_3[2];
        local_80 = param_3[3];
        local_90 = auStack_188;
        if ((((byte *)param_3[6])[3] == 0) && (1 < *(byte *)param_3[6])) {
          bVar3 = 1;
        }
        else {
          bVar3 = 0;
        }
        local_78 = 0x400;
        if (!(bool)(uVar7 != 0 & bVar3)) {
          local_78 = 0x1000;
        }
        if (uVar7 == 0) {
          FUN_00942390(param_1);
          local_70 = FUN_009319d0();
        }
        else {
          local_70 = 0;
        }
        local_e8 = local_e8 & 0xffffffffffff0000;
        puVar21[7] = 0;
        puVar21[8] = 0;
        *puVar21 = 0;
        puVar21[5] = 0;
        puVar21[6] = 0;
        puVar21[3] = 0;
        puVar21[4] = 0;
        puVar21[1] = 0;
        puVar21[2] = 0;
        FUN_00942450(param_1);
        uVar12 = FUN_00925070();
        FUN_009612a0(uVar12,&local_e8,&local_98);
        local_1d8 = (undefined2)local_e8;
        uVar12 = puVar21[3];
        puVar22[2] = puVar21[2];
        puVar22[3] = uVar12;
        uVar12 = puVar21[1];
        *puVar22 = *puVar21;
        puVar22[1] = uVar12;
        uVar12 = puVar21[8];
        puVar22[7] = puVar21[7];
        puVar22[8] = uVar12;
        uVar12 = puVar21[6];
        puVar22[5] = puVar21[5];
        puVar22[6] = uVar12;
        puVar22[4] = puVar21[4];
        local_e8 = *param_3;
        uStack_e0 = param_3[1];
        uStack_d0 = param_3[2];
        local_b8 = param_3[5];
        local_c8 = param_3[6];
        local_d8 = &local_1d8;
        local_c0 = 0;
        FUN_00942450(param_1);
        uVar12 = FUN_00925460();
        FUN_00961e70(uVar12,&local_98,&local_e8);
        *param_2 = *param_2 + (int)local_98;
        if (((uint)local_1d8._1_1_ + (uint)(byte)local_1d8 != 0) &&
           ((uint)bVar24 + (uint)bVar20 + (uint)(byte)local_1d8 + (uint)local_1d8._1_1_ < 7)) {
          uVar14 = 0;
          puVar19 = puVar22;
          do {
            while( true ) {
              uVar12 = *puVar19;
              uVar1 = *(uint *)(puVar19 + 1);
              local_12c[((ulong)bVar20 + (ulong)bVar24) * 3] = uVar1;
              *(undefined8 *)(auStack_188 + ((ulong)bVar20 + (ulong)bVar24) * 0xc + 0x54) = uVar12;
              if (((uVar1 >> 8 & 0xff) >> 3 & 1) != 0) break;
              bVar20 = bVar20 + 1;
              uVar14 = uVar14 + 1;
              puVar19 = (undefined8 *)((long)puVar19 + 0xc);
              if ((ulong)local_1d8._1_1_ + (ulong)(byte)local_1d8 <= uVar14) goto LAB_00960e14;
            }
            bVar24 = bVar24 + 1;
            local_138 = CONCAT11(bVar24,(undefined1)local_138);
            uVar14 = uVar14 + 1;
            puVar19 = (undefined8 *)((long)puVar19 + 0xc);
          } while (uVar14 < (ulong)local_1d8._1_1_ + (ulong)(byte)local_1d8);
        }
LAB_00960e14:
        if (uVar7 == 0) {
          local_e8 = *param_3;
          uStack_e0 = param_3[5];
          local_d8 = (undefined2 *)param_3[2];
          local_98 = local_98 & 0xffffffffffff0000;
          FUN_00942450(param_1);
          uVar12 = FUN_00925ad0();
          FUN_009600b0(uVar12,&local_98,&local_e8);
          *(undefined2 *)(param_2 + 1) = (undefined2)local_98;
        }
        local_1e8 = local_1e8 + 1;
        FUN_009423a0(param_1);
        FUN_00917f70();
        uVar14 = FUN_008e1600(lVar13);
        if ((uVar14 & 1) == 0) {
          uVar4 = FUN_008e0a00(lVar13);
          local_e8._0_2_ = CONCAT11(1,uVar4);
          FUN_00942450(param_1);
          uVar12 = FUN_00925140();
          FUN_00944c20(uVar12,&local_98,&local_e8);
        }
        uVar25 = *param_3;
        uVar26 = param_3[4];
        uVar14 = FUN_008e1600(uVar25);
        if ((uVar14 & 1) != 0) break;
        FUN_00942390(param_1);
        uVar12 = FUN_009319a0();
        uVar8 = FUN_008e0a00(uVar25);
        uVar14 = FUN_00913dd0(uVar12,uVar8);
        if ((((uVar14 & 1) == 0) || (iVar11 = FUN_0093b440(uVar26), iVar11 == 0)) ||
           ((iVar9 != 2 && (iVar9 = FUN_008e19f0(uVar25), iVar9 == 2)))) break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)param_3[6]);
    local_138 = CONCAT11(local_138._1_1_,bVar20);
    if (local_1e8 != 0 && ((bVar5 ^ 0xff) & 1) == 0) {
      if (*(char *)(param_3[6] + 9) == '\0') {
        uVar12 = FUN_009423b0(param_1);
        FUN_00936160(uVar12,*(undefined4 *)(param_3[6] + 4));
      }
      uVar12 = FUN_009423b0(param_1);
      FUN_00936040(uVar12,0x22,local_1e8);
      if ((uint)bVar24 + (uint)bVar20 != 0) {
        uVar14 = 0;
        piVar23 = (int *)((long)&local_134 + 4);
        do {
          if (7 < *piVar23) {
            uVar4 = *(undefined1 *)((long)piVar23 + -2);
            uVar12 = FUN_00942380(param_1);
            uVar16 = FUN_00942390(param_1);
            uVar17 = FUN_009423b0(param_1);
            FUN_0092f930(uVar12,uVar16,uVar17,8,uVar4,0,0);
          }
          uVar14 = uVar14 + 1;
          piVar23 = piVar23 + 3;
        } while (uVar14 < (uint)bVar24 + (uint)bVar20);
      }
    }
  }
  uVar12 = FUN_009423b0(param_1);
  FUN_0093a160(uVar12,0x60);
  if (*(char *)(param_3[6] + 8) == '\0') {
    FUN_0093b2e0(param_3[4]);
    lVar13 = FUN_0093b2f0(param_3[4]);
    if (lVar13 != 0) {
      do {
        uVar14 = FUN_008e1600(lVar13);
        if ((((uVar14 & 1) != 0) && (uVar14 = FUN_008e0b50(lVar13), (uVar14 & 1) == 0)) &&
           ((uVar14 = FUN_00942670(param_1,0x400), (uVar14 & 1) == 0 ||
            (cVar6 = FUN_009425b0(param_1,lVar13), cVar6 != '\x01')))) {
          uVar12 = FUN_009423b0(param_1);
          FUN_00936080(uVar12,lVar13,0);
        }
        lVar13 = FUN_0093b2f0(param_3[4]);
      } while (lVar13 != 0);
    }
  }
  return;
}


