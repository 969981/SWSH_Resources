/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c61d0; name: FUN_008c61d0
 */


void FUN_008c61d0(long param_1,ulong param_2)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long local_90;
  undefined1 auStack_84 [4];
  ulong local_80 [2];
  undefined4 local_70;
  uint uStack_6c;
  ulong local_68;
  
  lVar17 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  uVar5 = *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x640) * 4 + 0x64c);
  uVar7 = FUN_015200a0(lVar17,uVar5,auStack_84);
  *(undefined8 *)(param_1 + 0x828) = uVar7;
  uVar5 = FUN_01520330(lVar17,uVar5);
  *(undefined4 *)(param_1 + 0x824) = uVar5;
  FUN_008c6ab0(param_1,0);
  *(undefined1 *)(param_1 + 0x70c) = 1;
  lVar9 = *(long *)(param_1 + 0x5d8);
  uVar10 = *(ulong *)(lVar9 + 0xe8);
  if ((int)uVar10 != 0) {
    if ((uVar10 & 0xffffffff) == 1) {
      lVar12 = 0;
    }
    else {
      lVar8 = 0;
      lVar12 = 0;
      do {
        *(undefined1 *)(*(long *)(lVar9 + 0xe0) + lVar8 + 4) = 1;
        lVar9 = *(long *)(*(long *)(param_1 + 0x5d8) + 0xe0) + lVar8;
        lVar8 = lVar8 + 0x10;
        *(undefined1 *)(lVar9 + 0xc) = 1;
        lVar9 = *(long *)(param_1 + 0x5d8);
        lVar12 = lVar12 + 2;
      } while ((uVar10 & 0xffffffff) - (uVar10 & 1) != lVar12);
    }
    if ((uVar10 & 1) != 0) {
      *(undefined1 *)(*(long *)(lVar9 + 0xe0) + lVar12 * 8 + 4) = 1;
      lVar9 = *(long *)(param_1 + 0x5d8);
    }
    puVar13 = *(ulong **)(lVar9 + 0xe0);
    lVar8 = *(long *)(lVar9 + 0xe8);
    puVar11 = puVar13 + lVar8;
    if ((lVar8 != 0) && ((*puVar13 & 0x100000000) == 0)) {
      lVar12 = lVar8 * 8;
      do {
        lVar12 = lVar12 + -8;
        if (lVar12 == 0) goto LAB_008c63f4;
        pbVar1 = (byte *)((long)puVar13 + 0xc);
        puVar13 = puVar13 + 1;
      } while ((*pbVar1 & 1) == 0);
    }
    if (puVar11 != puVar13) {
      puVar14 = puVar13 + 1;
      if (puVar14 == puVar11) {
        if (puVar11 != puVar13) goto LAB_008c63e8;
      }
      else {
        uVar10 = (long)(puVar11 + -2) - (long)puVar13;
        puVar15 = puVar11 + -2;
        puVar16 = puVar13;
        if (((uint)uVar10 >> 3 & 1) == 0) {
          puVar15 = puVar13;
          if ((puVar13[1] >> 0x20 & 1) == 0) {
            puVar15 = puVar13 + 1;
            *puVar13 = puVar13[1];
          }
          puVar14 = puVar13 + 2;
          puVar16 = puVar15;
        }
        puVar13 = puVar15;
        if (7 < uVar10) {
          puVar13 = puVar16;
          do {
            while ((*puVar14 >> 0x20 & 1) == 0) {
              puVar13 = puVar13 + 1;
              *puVar16 = *puVar14;
              uVar10 = puVar14[1];
              puVar16 = puVar13;
              if ((uVar10 >> 0x20 & 1) == 0) goto LAB_008c63bc;
LAB_008c6398:
              puVar14 = puVar14 + 2;
              if (puVar14 == puVar11) goto LAB_008c63d4;
            }
            uVar10 = puVar14[1];
            if ((uVar10 >> 0x20 & 1) != 0) goto LAB_008c6398;
LAB_008c63bc:
            puVar13 = puVar13 + 1;
            *puVar16 = uVar10;
            puVar14 = puVar14 + 2;
            puVar16 = puVar13;
          } while (puVar14 != puVar11);
        }
LAB_008c63d4:
        lVar8 = *(long *)(lVar9 + 0xe8);
        puVar11 = (ulong *)(*(long *)(lVar9 + 0xe0) + lVar8 * 8);
        if (puVar11 != puVar13) {
LAB_008c63e8:
          *(long *)(lVar9 + 0xe8) = lVar8 - ((long)puVar11 - (long)puVar13 >> 3);
        }
      }
    }
  }
LAB_008c63f4:
  puVar4 = PTR_DAT_02710860;
  if (*(int *)(param_1 + 0x824) == 0) {
    *(undefined4 *)(param_1 + 0x824) = 0;
  }
  else {
    uVar10 = 0;
    uVar20 = 0;
    do {
      if (**(int **)(param_1 + 0x5f0) - 1U < 2) {
        FUN_008885c0(local_80,*(uint *)(*(long *)(param_1 + 0x828) + uVar10 * 4) & 0x7fff);
        iVar6 = FUN_00888630(local_80,0x19);
        FUN_00888620(local_80);
        if (iVar6 != 0) goto LAB_008c64a0;
      }
      else {
LAB_008c64a0:
        lVar9 = *(long *)(param_1 + 0x5d8);
        local_70 = (undefined4)uVar10;
        uStack_6c = uStack_6c & 0xffffff00;
        uVar2 = *(ulong *)(lVar9 + 0xe8);
        if (uVar2 < *(ulong *)(lVar9 + 0xf0)) {
          lVar12 = *(long *)(lVar9 + 0xe0);
          uVar7 = *(undefined8 *)(lVar9 + 0xa0);
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar7;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *(ulong *)(lVar12 + uVar2 * 8) = CONCAT44(uStack_6c,local_70);
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          *(long *)(lVar9 + 0xe8) = *(long *)(lVar9 + 0xe8) + 1;
        }
        else {
          local_80[0] = *(long *)(lVar9 + 0xe0) + uVar2 * 8;
          FUN_008caa00(&local_68,lVar9 + 0xa0,local_80,1,&local_70);
        }
        uVar20 = uVar20 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x824));
    *(uint *)(param_1 + 0x824) = uVar20;
    if (uVar20 != 0) goto LAB_008c66ac;
  }
  FUN_0146c130(*(undefined8 *)(param_1 + 0x718),0,0);
  FUN_0146c290(*(undefined8 *)(param_1 + 0x718),0,0);
  lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145da8);
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
  FUN_0146c130(*(long *)(param_1 + 0x718) + 0x218,0,0);
  FUN_0146c290(*(long *)(param_1 + 0x718) + 0x218,0,0);
  lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145db0);
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
  FUN_0146c130(*(long *)(param_1 + 0x718) + 0x430,0,0);
  FUN_0146c290(*(long *)(param_1 + 0x718) + 0x430,0,0);
  lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145db8);
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
  FUN_0146c130(*(long *)(param_1 + 0x718) + 0x648,0,0);
  FUN_0146c290(*(long *)(param_1 + 0x718) + 0x648,0,0);
  lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145dc0);
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
  FUN_0146c130(*(long *)(param_1 + 0x718) + 0x860,0,0);
  FUN_0146c290(*(long *)(param_1 + 0x718) + 0x860,0,0);
  lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145dc8);
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
  FUN_0146c130(*(long *)(param_1 + 0x718) + 0xa78,0,0);
  FUN_0146c290(*(long *)(param_1 + 0x718) + 0xa78,0,0);
  lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145dd0);
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
  uVar20 = *(uint *)(param_1 + 0x824);
LAB_008c66ac:
  lVar9 = param_1 + (long)*(int *)(param_1 + 0x640) * 4;
  lVar12 = *(long *)(param_1 + 0x5e8);
  lVar8 = param_1 + (ulong)*(uint *)(lVar9 + 0x64c) * 4;
  if (uVar20 == 0) {
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar12 + 0x65c);
    uVar18 = *(uint *)(lVar8 + 0x740);
    if (uVar20 < uVar3 || uVar20 - uVar3 == 0) {
      uVar19 = 0;
      if (uVar20 <= uVar18) {
        uVar18 = uVar20 - 1;
      }
    }
    else {
      uVar19 = uVar20 - uVar3;
      if (uVar3 + (int)*(float *)(lVar8 + 0x764) <= uVar20) {
        uVar19 = (int)*(float *)(lVar8 + 0x764);
      }
    }
  }
  *(uint *)(lVar8 + 0x740) = uVar18;
  *(float *)(param_1 + (ulong)*(uint *)(lVar9 + 0x64c) * 4 + 0x764) = (float)uVar19;
  local_90 = *(long *)(param_1 + 0x5d8);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(lVar12,&local_90);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  FUN_016c2c80(*(undefined8 *)(param_1 + 0x5e8),uVar18,0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x5e8),uVar19);
  FUN_016bef00(*(undefined8 *)(param_1 + 0x5e8));
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5e8),1);
  FUN_016bfe70(*(undefined8 *)(param_1 + 0x5e8));
  if ((param_2 & 1) == 0) {
    FUN_016b2eb0(*(undefined8 *)(param_1 + 0x5e8));
    puVar4 = PTR_DAT_02717ad0;
    local_80[0] = *(ulong *)(PTR_DAT_02717ad0 + 0x60);
    lVar9 = param_1 + 0x100;
    local_68 = local_80[0];
    FUN_00ffd600(lVar9,&local_68);
    FUN_00ffd510(lVar9,local_80);
    local_80[0] = *(ulong *)(puVar4 + 0xe8);
    local_68 = local_80[0];
    FUN_00ffd600(lVar9,&local_68);
    FUN_00ffd510(lVar9,local_80);
    local_80[0] = *(ulong *)(puVar4 + 0x170);
    local_68 = local_80[0];
    FUN_00ffd600(lVar9,&local_68);
    FUN_00ffd510(lVar9,local_80);
    local_80[0] = *(ulong *)(puVar4 + 0x1f8);
    local_68 = local_80[0];
    FUN_00ffd600(lVar9,&local_68);
    FUN_00ffd510(lVar9,local_80);
    local_80[0] = *(ulong *)(puVar4 + 0x280);
    local_68 = local_80[0];
    FUN_00ffd600(lVar9,&local_68);
    FUN_00ffd510(lVar9,local_80);
    local_80[0] = *(ulong *)(puVar4 + 0x308);
    local_68 = local_80[0];
    FUN_00ffd600(lVar9,&local_68);
    FUN_00ffd510(lVar9,local_80);
    local_80[0] = *(ulong *)(puVar4 + 0x390);
    local_68 = local_80[0];
    FUN_00ffd600(lVar9,&local_68);
    FUN_00ffd510(lVar9,local_80);
    local_80[0] = *(ulong *)(puVar4 + 0x418);
    local_68 = local_80[0];
    FUN_00ffd600(lVar9,&local_68);
    FUN_00ffd510(lVar9,local_80);
    local_80[0] = *(ulong *)(puVar4 + 0x4a0);
    local_68 = local_80[0];
    FUN_00ffd600(lVar9,&local_68);
    FUN_00ffd510(lVar9,local_80);
    local_80[0] = *(ulong *)(puVar4 + 0x528);
    local_68 = local_80[0];
    FUN_00ffd600(lVar9,&local_68);
    FUN_00ffd510(lVar9,local_80);
  }
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x688),1);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x690),1);
  local_80[0] = 0x7f6dc6e7c8786b52;
  lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),local_80);
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe | *(int *)(param_1 + 0x824) == 0;
  local_80[0] = 0x3e7089c8514b45e5;
  lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),local_80);
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe | *(int *)(param_1 + 0x824) != 0;
  *(byte *)(*(long *)(param_1 + 0x670) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x670) + 0x58) & 0xfe | *(int *)(param_1 + 0x824) != 0;
  FUN_008c6d20(param_1,*(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x640) * 4 + 0x64c));
  if (*(int *)(param_1 + 0x824) == 0) {
    FUN_008c6e90(param_1);
    *(undefined4 *)(param_1 + 0x894) = 0;
    iVar6 = **(int **)(param_1 + 0x5f0);
  }
  else if (**(int **)(param_1 + 0x5f0) == 10) {
    FUN_008c6fc0();
    iVar6 = **(int **)(param_1 + 0x5f0);
  }
  else {
    FUN_008c7160(param_1);
    iVar6 = **(int **)(param_1 + 0x5f0);
  }
  if (((iVar6 == 10) && (*(int *)(param_1 + 0x824) == 0)) &&
     (*(code **)(param_1 + 0x790) != (code *)0x0)) {
    local_80[0] = local_80[0] & 0xffffffff00000000;
    local_68 = local_68 & 0xffffffff00000000;
    (**(code **)(param_1 + 0x790))(param_1 + 0x7b0,local_80,&local_68);
  }
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  }
  return;
}


