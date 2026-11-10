/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120f500; name: FUN_0120f500
 */


void FUN_0120f500(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
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
  
  if (*(char *)(param_4 + 0x1e0) == '\0') {
    puVar11 = (undefined4 *)0x0;
    goto LAB_0120f5ec;
  }
  local_98 = *(undefined8 *)(param_4 + 0x1e8);
  local_80 = *(undefined8 *)(param_4 + 0x200);
  local_90 = *(undefined8 *)(param_4 + 0x1f0);
  uStack_88 = *(undefined8 *)(param_4 + 0x1f8);
  uStack_78 = *(undefined8 *)(param_4 + 0x208);
  local_a0 = 1;
  local_6c[0] = param_3;
  FUN_01212ad0(param_2 + 0x2a0,param_4);
  if ((*(char *)(param_2 + 0x5a0) == '\0') &&
     (thunk_FUN_011f3570(local_f0), *(char *)(param_2 + 0x5a0) == '\0')) {
    *(undefined1 *)(param_2 + 0x5a0) = 1;
  }
  uVar5 = FUN_0121aff0(&local_98);
  uVar6 = FUN_011f4020(param_2 + 0x5a1,uVar5);
  if ((uVar6 & 1) == 0) {
    FUN_0121ae00(local_f0);
    uVar6 = FUN_0121b130(&local_98,local_f0);
    if ((uVar6 & 1) != 0) goto LAB_0120f5c8;
    local_f0[0] = '\0';
    if (*(char *)(param_4 + 0x74) == '\0') {
LAB_0120f724:
      bVar4 = false;
    }
    else {
      local_ec = *(undefined1 *)(param_4 + 0x78);
      local_e8 = *(char *)(param_4 + 0x7c) != '\0';
      if ((bool)local_e8) {
        local_e4 = *(undefined8 *)(param_4 + 0x80);
        local_dc = *(undefined8 *)(param_4 + 0x88);
        local_d4 = *(undefined8 *)(param_4 + 0x90);
        local_cc = *(undefined4 *)(param_4 + 0x98);
      }
      local_c8 = *(undefined8 *)(param_4 + 0x9c);
      local_b8 = *(undefined8 *)(param_4 + 0xac);
      local_c0 = *(undefined8 *)(param_4 + 0xa4);
      uStack_a8 = (undefined5)((ulong)*(undefined8 *)(param_4 + 0xb9) >> 0x18);
      uStack_b0 = (undefined5)*(undefined8 *)(param_4 + 0xb4);
      local_ab = (undefined3)((ulong)*(undefined8 *)(param_4 + 0xb4) >> 0x28);
      local_f0[0] = '\x01';
      pcVar7 = (char *)FUN_0121bb60((ulong)local_f0 | 4);
      local_110[0] = '\0';
      if (*pcVar7 == '\0') goto LAB_0120f724;
      local_10c = *(undefined8 *)(pcVar7 + 4);
      local_104 = *(undefined8 *)(pcVar7 + 0xc);
      local_fc = *(undefined8 *)(pcVar7 + 0x14);
      local_f4 = *(undefined4 *)(pcVar7 + 0x1c);
      local_110[0] = '\x01';
      uVar6 = FUN_0121bca0((ulong)local_f0 | 4);
      if ((uVar6 & 1) == 0) {
LAB_0120f700:
        bVar4 = false;
      }
      else {
        uVar6 = FUN_012229b0((ulong)local_110 | 4);
        if (((uVar6 & 1) == 0) || (uVar6 = FUN_01222a40((ulong)local_110 | 4), (uVar6 & 1) == 0))
        goto LAB_0120f700;
        bVar4 = true;
        *param_1 = 0;
      }
      if (local_110[0] != '\0') {
        local_110[0] = '\0';
      }
      if (!bVar4) goto LAB_0120f724;
      bVar4 = true;
    }
    if (local_f0[0] != '\0') {
      if (local_e8 != '\0') {
        local_e8 = '\0';
      }
      local_f0[0] = '\0';
    }
    if (bVar4) {
      bVar4 = true;
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = *(undefined4 **)(param_2 + 0xa0);
      if (*(long *)(param_2 + 0xa8) == 0) {
        uVar6 = 0;
        puVar12 = puVar11;
      }
      else {
        puVar12 = puVar11 + *(long *)(param_2 + 0xa8) * 0x98;
        do {
          uVar5 = FUN_01225e50(puVar11);
          uVar6 = FUN_0121b130(uVar5,&local_98);
          if ((uVar6 & 1) != 0) goto LAB_0120f78c;
          puVar11 = puVar11 + 0x98;
        } while (puVar11 != puVar12);
        puVar11 = puVar12;
LAB_0120f78c:
        uVar6 = *(ulong *)(param_2 + 0xa8);
        puVar12 = *(undefined4 **)(param_2 + 0xa0);
      }
      puVar1 = (undefined4 *)0x0;
      if (puVar12 + uVar6 * 0x98 != puVar11) {
        puVar1 = puVar11;
      }
      if (puVar1 == (undefined4 *)0x0) {
        if (uVar6 < *(ulong *)(param_2 + 0x50)) {
          FUN_01212dd0(param_2 + 0x60,local_6c,param_4);
          puVar11 = (undefined4 *)
                    (*(long *)(param_2 + 0xa0) + *(long *)(param_2 + 0xa8) * 0x260 + -0x260);
LAB_0120f918:
          FUN_01218ec0(param_2 + 0xc0,&local_98);
          bVar4 = false;
        }
        else {
          if (uVar6 != 0) {
            lVar14 = uVar6 * 0x260;
            puVar11 = (undefined4 *)0x0;
            puVar13 = (undefined4 *)0x0;
            do {
              if (puVar13 == (undefined4 *)0x0) {
LAB_0120f8c4:
                piVar10 = (int *)FUN_01225f00(puVar12);
                if (*piVar10 != 1) {
                  puVar13 = puVar12;
                  puVar11 = puVar12;
                }
              }
              else {
                plVar8 = (long *)FUN_01225ef0(puVar12);
                plVar9 = (long *)FUN_01225ef0(puVar13);
                if (*plVar8 < *plVar9) goto LAB_0120f8c4;
              }
              puVar12 = puVar12 + 0x98;
              lVar14 = lVar14 + -0x260;
            } while (lVar14 != 0);
            if (puVar11 != (undefined4 *)0x0) {
              uVar5 = FUN_01225e50(puVar11);
              FUN_01218f90(param_2 + 0xc0,uVar5);
              FUN_012130c0(puVar11,local_6c[0],param_4);
              goto LAB_0120f918;
            }
          }
          FUN_0121b1a0("not registered becaouse there is no delete target",&local_98);
          bVar4 = false;
          puVar11 = puVar1;
        }
      }
      else {
        *puVar1 = local_6c[0];
        if (*(char *)(puVar1 + 0x80) == '\0') {
          if (*(char *)(param_4 + 0x1e0) != '\0') {
LAB_0120f848:
            *(undefined8 *)(puVar1 + 0x82) = *(undefined8 *)(param_4 + 0x1e8);
            uVar2 = *(undefined8 *)(param_4 + 0x1f8);
            uVar5 = *(undefined8 *)(param_4 + 0x200);
            uVar3 = *(undefined8 *)(param_4 + 0x208);
            *(undefined8 *)(puVar1 + 0x84) = *(undefined8 *)(param_4 + 0x1f0);
            *(undefined8 *)(puVar1 + 0x8a) = uVar3;
            *(undefined8 *)(puVar1 + 0x88) = uVar5;
            *(undefined8 *)(puVar1 + 0x86) = uVar2;
            *(undefined1 *)(puVar1 + 0x80) = 1;
            goto LAB_0120f934;
          }
LAB_0120f874:
          uVar6 = FUN_01213860(puVar1 + 4,param_4);
          if ((uVar6 & 1) != 0) goto LAB_0120f940;
        }
        else {
          if (*(char *)(param_4 + 0x1e0) == '\0') {
LAB_0120f930:
            *(undefined1 *)(puVar1 + 0x80) = 0;
          }
          else {
            uVar6 = FUN_0121ae60(puVar1 + 0x82,param_4 + 0x1e8);
            if ((uVar6 & 1) != 0) goto LAB_0120f874;
            if (*(char *)(puVar1 + 0x80) == '\0') {
              if (*(char *)(param_4 + 0x1e0) != '\0') goto LAB_0120f848;
            }
            else {
              if (*(char *)(param_4 + 0x1e0) == '\0') goto LAB_0120f930;
              *(undefined8 *)(puVar1 + 0x82) = *(undefined8 *)(param_4 + 0x1e8);
              uVar5 = *(undefined8 *)(param_4 + 0x1f0);
              uVar3 = *(undefined8 *)(param_4 + 0x1f8);
              uVar2 = *(undefined8 *)(param_4 + 0x200);
              *(undefined8 *)(puVar1 + 0x8a) = *(undefined8 *)(param_4 + 0x208);
              *(undefined8 *)(puVar1 + 0x88) = uVar2;
              *(undefined8 *)(puVar1 + 0x86) = uVar3;
              *(undefined8 *)(puVar1 + 0x84) = uVar5;
            }
          }
LAB_0120f934:
          FUN_01213860(puVar1 + 4,param_4);
LAB_0120f940:
          FUN_01225e20(puVar1);
          FUN_01218d90(param_2 + 0xc0,&local_98);
        }
        bVar4 = false;
        puVar11 = puVar1;
      }
    }
  }
  else {
LAB_0120f5c8:
    *param_1 = 0;
    bVar4 = true;
    puVar11 = (undefined4 *)0x0;
  }
  if (bVar4) {
    return;
  }
LAB_0120f5ec:
  *param_1 = (long)puVar11;
  return;
}


