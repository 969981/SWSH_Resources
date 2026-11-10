/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120fcb0; name: FUN_0120fcb0
 */


void FUN_0120fcb0(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  char local_110 [4];
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  char local_f0 [4];
  undefined1 local_ec;
  char local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined5 uStack_b0;
  undefined3 local_ab;
  undefined5 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c [3];
  
  if (*(char *)(param_4 + 0x120) == '\0') {
    puVar9 = (undefined4 *)0x0;
    goto LAB_0120fd8c;
  }
  local_98 = *(undefined8 *)(param_4 + 0x128);
  local_90 = *(undefined8 *)(param_4 + 0x130);
  uStack_88 = *(undefined8 *)(param_4 + 0x138);
  local_80 = *(undefined8 *)(param_4 + 0x140);
  uStack_78 = *(undefined8 *)(param_4 + 0x148);
  local_a0 = 1;
  local_6c[0] = param_3;
  if ((*(char *)(param_2 + 0x5a0) == '\0') &&
     (thunk_FUN_011f3570(local_f0), *(char *)(param_2 + 0x5a0) == '\0')) {
    *(undefined1 *)(param_2 + 0x5a0) = 1;
  }
  uVar3 = FUN_0121aff0(&local_98);
  uVar4 = FUN_011f4020(param_2 + 0x5a1,uVar3);
  if ((uVar4 & 1) == 0) {
    FUN_0121ae00(local_f0);
    uVar4 = FUN_0121b130(&local_98,local_f0);
    if ((uVar4 & 1) != 0) goto LAB_0120fd68;
    local_f0[0] = '\0';
    if (*(char *)(param_4 + 0x70) == '\0') {
LAB_0120fec4:
      bVar2 = false;
    }
    else {
      local_ec = *(undefined1 *)(param_4 + 0x74);
      local_e8 = *(char *)(param_4 + 0x78) != '\0';
      if ((bool)local_e8) {
        local_e4 = *(undefined8 *)(param_4 + 0x7c);
        local_dc = *(undefined8 *)(param_4 + 0x84);
        local_d4 = *(undefined8 *)(param_4 + 0x8c);
        local_cc = *(undefined4 *)(param_4 + 0x94);
      }
      local_c8 = *(undefined8 *)(param_4 + 0x98);
      local_c0 = *(undefined8 *)(param_4 + 0xa0);
      local_b8 = *(undefined8 *)(param_4 + 0xa8);
      uStack_a8 = (undefined5)((ulong)*(undefined8 *)(param_4 + 0xb5) >> 0x18);
      uStack_b0 = (undefined5)*(undefined8 *)(param_4 + 0xb0);
      local_ab = (undefined3)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x28);
      local_f0[0] = '\x01';
      pcVar5 = (char *)FUN_0121bb60((ulong)local_f0 | 4);
      local_110[0] = '\0';
      if (*pcVar5 == '\0') goto LAB_0120fec4;
      local_10c = *(undefined8 *)(pcVar5 + 4);
      local_104 = *(undefined8 *)(pcVar5 + 0xc);
      local_fc = *(undefined8 *)(pcVar5 + 0x14);
      local_f4 = *(undefined4 *)(pcVar5 + 0x1c);
      local_110[0] = '\x01';
      uVar4 = FUN_0121bca0((ulong)local_f0 | 4);
      if ((uVar4 & 1) == 0) {
LAB_0120fea0:
        bVar2 = false;
      }
      else {
        uVar4 = FUN_012229b0((ulong)local_110 | 4);
        if (((uVar4 & 1) == 0) || (uVar4 = FUN_01222a40((ulong)local_110 | 4), (uVar4 & 1) == 0))
        goto LAB_0120fea0;
        bVar2 = true;
        *param_1 = 0;
      }
      if (local_110[0] != '\0') {
        local_110[0] = '\0';
      }
      if (!bVar2) goto LAB_0120fec4;
      bVar2 = true;
    }
    if (local_f0[0] != '\0') {
      if (local_e8 != '\0') {
        local_e8 = '\0';
      }
      local_f0[0] = '\0';
    }
    if (bVar2) {
      puVar9 = (undefined4 *)0x0;
      bVar2 = true;
    }
    else {
      puVar9 = *(undefined4 **)(param_2 + 0xa0);
      if (*(long *)(param_2 + 0xa8) == 0) {
        uVar4 = 0;
        puVar10 = puVar9;
      }
      else {
        puVar10 = puVar9 + *(long *)(param_2 + 0xa8) * 0x98;
        do {
          uVar3 = FUN_01225e50(puVar9);
          uVar4 = FUN_0121b130(uVar3,&local_98);
          if ((uVar4 & 1) != 0) goto LAB_0120ff2c;
          puVar9 = puVar9 + 0x98;
        } while (puVar9 != puVar10);
        puVar9 = puVar10;
LAB_0120ff2c:
        uVar4 = *(ulong *)(param_2 + 0xa8);
        puVar10 = *(undefined4 **)(param_2 + 0xa0);
      }
      puVar1 = (undefined4 *)0x0;
      if (puVar10 + uVar4 * 0x98 != puVar9) {
        puVar1 = puVar9;
      }
      if (puVar1 == (undefined4 *)0x0) {
        if (*(ulong *)(param_2 + 0x50) <= uVar4) {
          if (uVar4 != 0) {
            lVar12 = uVar4 * 0x260;
            puVar9 = (undefined4 *)0x0;
            puVar11 = (undefined4 *)0x0;
            do {
              if (puVar11 == (undefined4 *)0x0) {
LAB_0120fffc:
                piVar8 = (int *)FUN_01225f00(puVar10);
                if (*piVar8 != 1) {
                  puVar11 = puVar10;
                  puVar9 = puVar10;
                }
              }
              else {
                plVar6 = (long *)FUN_01225ef0(puVar10);
                plVar7 = (long *)FUN_01225ef0(puVar11);
                if (*plVar6 < *plVar7) goto LAB_0120fffc;
              }
              puVar10 = puVar10 + 0x98;
              lVar12 = lVar12 + -0x260;
            } while (lVar12 != 0);
            if (puVar9 != (undefined4 *)0x0) {
              uVar3 = FUN_01225e50(puVar9);
              FUN_01218f90(param_2 + 0xc0,uVar3);
              FUN_01214af0(puVar9,local_6c[0],param_4);
              goto LAB_01210050;
            }
          }
          FUN_0121b1a0("not registered becaouse there is no delete target",&local_98);
          goto LAB_01210078;
        }
        FUN_01214860(param_2 + 0x60,local_6c,param_4);
        puVar9 = (undefined4 *)
                 (*(long *)(param_2 + 0xa0) + *(long *)(param_2 + 0xa8) * 0x260 + -0x260);
LAB_01210050:
        FUN_01218ec0(param_2 + 0xc0,&local_98);
        bVar2 = false;
      }
      else {
        *puVar1 = local_6c[0];
        uVar4 = FUN_01215040(puVar1 + 4,param_4);
        if ((uVar4 & 1) == 0) {
LAB_01210078:
          bVar2 = false;
          puVar9 = puVar1;
        }
        else {
          FUN_01225e20(puVar1);
          FUN_01218d90(param_2 + 0xc0,&local_98);
          bVar2 = false;
          puVar9 = puVar1;
        }
      }
    }
  }
  else {
LAB_0120fd68:
    *param_1 = 0;
    bVar2 = true;
    puVar9 = (undefined4 *)0x0;
  }
  if (bVar2) {
    return;
  }
LAB_0120fd8c:
  *param_1 = (long)puVar9;
  return;
}


