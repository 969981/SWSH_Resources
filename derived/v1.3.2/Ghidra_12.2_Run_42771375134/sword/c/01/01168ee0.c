/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01168ee0; name: FUN_01168ee0
 */


void FUN_01168ee0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  char *pcVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 local_4a4;
  undefined1 auStack_470 [32];
  undefined1 local_450 [4];
  char local_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined4 local_430;
  char local_400 [4];
  char local_3fc;
  char local_3f8;
  undefined8 local_3f4;
  undefined8 local_3ec;
  undefined8 uStack_3e4;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined5 uStack_3c0;
  undefined3 local_3bb;
  undefined5 uStack_3b8;
  char local_3b0 [16];
  undefined4 local_3a0 [4];
  char local_390;
  char local_388;
  char local_378;
  char local_354;
  char local_340;
  char local_304;
  undefined1 local_300;
  char local_2fc;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  char local_2b0;
  char local_1f0;
  char local_1a0;
  long *local_140 [2];
  long alStack_130 [4];
  long *local_110;
  long *local_100;
  long local_f8;
  long local_f0;
  char local_e0 [16];
  long *local_d0 [2];
  long alStack_c0 [4];
  long *local_a0;
  undefined8 local_90;
  long local_80;
  
  lVar9 = *(long *)PTR_DAT_027185f8;
  if (lVar9 == 0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x98) + 0x68) == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_02710958;
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_02718f20;
  if (lVar8 == 0) {
    return;
  }
  FUN_0120e660(local_e0,lVar9);
  if (local_e0[0] == '\0') {
    return;
  }
  lVar9 = FUN_0120e640(lVar9);
  FUN_007a2d60(local_140,local_d0);
  uVar4 = FUN_01164670(*(undefined8 *)(param_1 + 0x98));
  if ((uVar4 & 1) == 0) {
    iVar2 = FUN_01164690(*(undefined8 *)(param_1 + 0x98));
    if (iVar2 == 0) {
      local_4a4 = 3;
      plVar12 = local_100;
      goto joined_r0x01168fb8;
    }
    iVar2 = FUN_01164690(*(undefined8 *)(param_1 + 0x98));
    if (iVar2 == 1) {
      local_4a4 = 4;
      plVar12 = local_100;
      goto joined_r0x01168fb8;
    }
  }
  else {
    local_4a4 = 5;
    plVar12 = local_100;
joined_r0x01168fb8:
    local_100 = plVar12;
    if (local_f8 != 0) {
      puVar11 = (undefined8 *)((ulong)auStack_470 | 3);
      lVar10 = local_f8 << 3;
      do {
        FUN_011ffd20(local_3b0,lVar8,*plVar12);
        if (local_3b0[0] != '\0') {
          pcVar5 = (char *)FUN_01225e80(local_3a0);
          local_400[0] = '\0';
          if (*pcVar5 != '\0') {
            local_3fc = pcVar5[4];
            local_3f8 = pcVar5[8] != '\0';
            if ((bool)local_3f8) {
              local_3f4 = *(undefined8 *)(pcVar5 + 0xc);
              local_3ec = *(undefined8 *)(pcVar5 + 0x14);
              uStack_3e4 = *(undefined8 *)(pcVar5 + 0x1c);
              local_3dc = *(undefined4 *)(pcVar5 + 0x24);
            }
            local_3d8 = *(undefined8 *)(pcVar5 + 0x28);
            local_3d0 = *(undefined8 *)(pcVar5 + 0x30);
            local_3c8 = *(undefined8 *)(pcVar5 + 0x38);
            uStack_3b8 = (undefined5)((ulong)*(undefined8 *)(pcVar5 + 0x45) >> 0x18);
            uStack_3c0 = (undefined5)*(undefined8 *)(pcVar5 + 0x40);
            local_3bb = (undefined3)((ulong)*(undefined8 *)(pcVar5 + 0x40) >> 0x28);
            local_400[0] = '\x01';
            FUN_0121b630(local_450,local_4a4);
            uVar3 = FUN_0121bc20((ulong)local_400 | 4);
            FUN_0121bc30(local_450,uVar3);
            if (*plVar12 == lVar9) {
              FUN_01211350(lVar7,local_450);
            }
            else {
              bVar1 = local_44c != '\0';
              if (bVar1) {
                *(undefined4 *)(puVar11 + 3) = local_430;
                *puVar11 = local_448;
                puVar11[1] = uStack_440;
                puVar11[2] = local_438;
              }
              local_3a0[0] = 0;
              local_300 = local_450[0];
              if (local_304 == '\0') {
                if (bVar1) {
                  local_2e0 = *(undefined4 *)(puVar11 + 3);
                  local_2f8 = *puVar11;
                  local_2f0 = puVar11[1];
                  uStack_2e8 = puVar11[2];
                }
                local_304 = '\x01';
                local_2fc = bVar1;
              }
              else {
                if (local_2fc == '\0') {
                  if (bVar1) {
                    local_2e0 = *(undefined4 *)(puVar11 + 3);
                    local_2f8 = *puVar11;
                    local_2f0 = puVar11[1];
                    uStack_2e8 = puVar11[2];
                    local_2fc = '\x01';
                  }
                }
                else if (bVar1) {
                  local_2e0 = CONCAT31(local_2e0._1_3_,*(undefined1 *)(puVar11 + 3));
                  local_2f8 = *puVar11;
                  local_2f0 = puVar11[1];
                  uStack_2e8 = puVar11[2];
                }
                else {
                  local_2fc = '\0';
                }
              }
              FUN_01210d60(lVar7,0,local_3a0);
            }
            if (local_44c != '\0') {
              local_44c = '\0';
            }
            if (local_400[0] != '\0') {
              if (local_3f8 != '\0') {
                local_3f8 = '\0';
              }
              local_400[0] = '\0';
            }
          }
          if (local_3b0[0] != '\0') {
            if (local_1a0 != '\0') {
              local_1a0 = '\0';
            }
            if (local_1f0 != '\0') {
              local_1f0 = '\0';
            }
            if (local_2b0 != '\0') {
              local_2b0 = '\0';
            }
            if (local_304 != '\0') {
              if (local_2fc != '\0') {
                local_2fc = '\0';
              }
              local_304 = '\0';
            }
            if (local_340 != '\0') {
              local_340 = '\0';
            }
            if (local_354 != '\0') {
              local_354 = '\0';
            }
            if (local_378 != '\0') {
              local_378 = '\0';
            }
            if (local_388 != '\0') {
              local_388 = '\0';
            }
            if (local_390 != '\0') {
              local_390 = '\0';
            }
            local_3b0[0] = '\0';
          }
        }
        plVar12 = plVar12 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
  }
  if (local_f0 != 0) {
    (**(code **)(*local_140[0] + 0x18))(local_140[0],local_100,local_f0 << 3,8);
  }
  if (alStack_130 == local_110) {
    pcVar6 = *(code **)(*local_110 + 0x20);
  }
  else {
    if (local_110 == (long *)0x0) goto LAB_01169310;
    pcVar6 = *(code **)(*local_110 + 0x28);
  }
  (*pcVar6)();
LAB_01169310:
  if (local_e0[0] != '\0') {
    if (local_80 != 0) {
      (**(code **)(*local_d0[0] + 0x18))(local_d0[0],local_90,local_80 << 3,8);
    }
    if (alStack_c0 == local_a0) {
      pcVar6 = *(code **)(*local_a0 + 0x20);
    }
    else {
      if (local_a0 == (long *)0x0) {
        return;
      }
      pcVar6 = *(code **)(*local_a0 + 0x28);
    }
    (*pcVar6)();
  }
  return;
}


