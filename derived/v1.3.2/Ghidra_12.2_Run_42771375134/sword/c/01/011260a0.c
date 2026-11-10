/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011260a0; name: FUN_011260a0
 */


void FUN_011260a0(long param_1)

{
  void *__dest;
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 auStack_840 [176];
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  char local_6d0 [16];
  undefined4 local_6c0 [4];
  char local_6b0;
  char local_6a8;
  char local_698;
  char local_674;
  char local_660;
  char local_624;
  undefined1 local_620;
  char local_61c;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined4 local_600;
  char local_5d0;
  undefined1 auStack_5c0 [176];
  char local_510;
  char local_4c0;
  undefined1 local_460 [4];
  char local_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined4 local_440;
  undefined8 local_43c;
  undefined8 uStack_434;
  undefined8 local_42c;
  long *local_410 [2];
  long alStack_400 [4];
  long *local_3e0;
  long *local_3d0;
  long local_3c8;
  long local_3c0;
  char local_3b0 [16];
  long *local_3a0 [2];
  long alStack_390 [4];
  long *local_370;
  undefined8 local_360;
  long local_350;
  char local_340 [4];
  char local_33c;
  undefined1 local_338;
  undefined8 local_334;
  undefined8 local_32c;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined5 uStack_300;
  undefined3 local_2fb;
  undefined5 uStack_2f8;
  long local_2f0 [2];
  undefined1 auStack_2e0 [616];
  long local_78 [3];
  
  if (*(int *)(param_1 + 0xfe4) == 1) {
    if (*(char *)(*(long *)(param_1 + 0x88) + 0x3ac) == '\0') {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))(local_2f0);
    local_78[0] = local_2f0[0];
    local_2f0[0] = 0;
    FUN_01127c80(uVar2,local_78,0x1d01);
    if (local_78[0] != 0) {
      (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
      local_78[0] = 0;
    }
    if (local_2f0[0] == 0) {
      return;
    }
    (**(code **)(*(long *)(local_2f0[0] + 0x48) + 0x18))();
    return;
  }
  if (*(long *)PTR_DAT_02716a30 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_027185f8;
  if (lVar8 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_02710958;
  if (lVar7 == 0) {
    return;
  }
  FUN_011ffd20(local_2f0,*(undefined8 *)PTR_DAT_02718f20,
               *(undefined8 *)(*(long *)PTR_DAT_02716a30 + 0xf8));
  if ((char)local_2f0[0] == '\0') {
    return;
  }
  pcVar5 = (char *)FUN_01225e80(auStack_2e0);
  if (*pcVar5 == '\0') {
    return;
  }
  local_33c = pcVar5[4];
  local_338 = pcVar5[8] != '\0';
  if ((bool)local_338) {
    local_334 = *(undefined8 *)(pcVar5 + 0xc);
    local_32c = *(undefined8 *)(pcVar5 + 0x14);
    local_324 = *(undefined8 *)(pcVar5 + 0x1c);
    local_31c = *(undefined4 *)(pcVar5 + 0x24);
  }
  local_318 = *(undefined8 *)(pcVar5 + 0x28);
  local_310 = *(undefined8 *)(pcVar5 + 0x30);
  local_308 = *(undefined8 *)(pcVar5 + 0x38);
  uStack_2f8 = (undefined5)((ulong)*(undefined8 *)(pcVar5 + 0x45) >> 0x18);
  uStack_300 = (undefined5)*(undefined8 *)(pcVar5 + 0x40);
  local_2fb = (undefined3)((ulong)*(undefined8 *)(pcVar5 + 0x40) >> 0x28);
  local_340[0] = '\x01';
  uVar3 = FUN_0121bc20((ulong)local_340 | 4);
  uVar4 = FUN_0121bc40((ulong)local_340 | 4);
  FUN_0120e660(local_3b0,lVar8);
  if (local_3b0[0] == '\0') {
    return;
  }
  FUN_007a2d60(local_410,local_3a0);
  FUN_0121b630(local_460,0x1d);
  FUN_0121bc30(local_460,uVar3);
  FUN_0121bc50(local_460,uVar4 & 1);
  lVar8 = FUN_0120e640(lVar8);
  if (local_3c8 != 0) {
    puVar10 = (undefined8 *)((ulong)auStack_840 | 3);
    lVar9 = local_3c8 << 3;
    __dest = (void *)((long)&uStack_788 + 7);
    plVar11 = local_3d0;
    do {
      while (lVar8 == *plVar11) {
        FUN_01211350(lVar7,local_460);
        FUN_01223630(local_6d0);
        FUN_01211270(lVar7,local_6d0);
        plVar11 = plVar11 + 1;
        lVar9 = lVar9 + -8;
        if (lVar9 == 0) goto LAB_01126548;
      }
      FUN_011ffd20(local_6d0,*(undefined8 *)PTR_DAT_02718f20);
      if (local_6d0[0] != '\0') {
        bVar1 = local_45c != '\0';
        if (bVar1) {
          *(undefined4 *)(puVar10 + 3) = local_440;
          *puVar10 = local_458;
          puVar10[1] = uStack_450;
          puVar10[2] = local_448;
        }
        local_6c0[0] = 0;
        local_790 = local_43c;
        uStack_788 = uStack_434;
        local_620 = local_460[0];
        local_780 = local_42c;
        if (local_624 == '\0') {
          if (bVar1) {
            local_600 = *(undefined4 *)(puVar10 + 3);
            local_618 = *puVar10;
            local_610 = puVar10[1];
            uStack_608 = puVar10[2];
          }
          local_624 = '\x01';
          local_61c = bVar1;
        }
        else {
          if (local_61c == '\0') {
            if (bVar1) {
              local_600 = *(undefined4 *)(puVar10 + 3);
              local_618 = *puVar10;
              local_610 = puVar10[1];
              uStack_608 = puVar10[2];
              local_61c = '\x01';
            }
          }
          else if (bVar1) {
            local_600 = CONCAT31(local_600._1_3_,*(undefined1 *)(puVar10 + 3));
            local_618 = *puVar10;
            local_610 = puVar10[1];
            uStack_608 = puVar10[2];
          }
          else {
            local_61c = '\0';
          }
        }
        FUN_01223630(auStack_840);
        memcpy(__dest,auStack_840,0xb0);
        local_6c0[0] = 0;
        if (local_5d0 == '\0') {
          memcpy(auStack_5c0,__dest,0xb0);
          local_5d0 = '\x01';
        }
        else {
          memcpy(auStack_5c0,__dest,0xa1);
        }
        FUN_01210d60(lVar7,0,local_6c0);
        if (local_6d0[0] != '\0') {
          if (local_4c0 != '\0') {
            local_4c0 = '\0';
          }
          if (local_510 != '\0') {
            local_510 = '\0';
          }
          if (local_5d0 != '\0') {
            local_5d0 = '\0';
          }
          if (local_624 != '\0') {
            if (local_61c != '\0') {
              local_61c = '\0';
            }
            local_624 = '\0';
          }
          if (local_660 != '\0') {
            local_660 = '\0';
          }
          if (local_674 != '\0') {
            local_674 = '\0';
          }
          if (local_698 != '\0') {
            local_698 = '\0';
          }
          if (local_6a8 != '\0') {
            local_6a8 = '\0';
          }
          if (local_6b0 != '\0') {
            local_6b0 = '\0';
          }
          local_6d0[0] = '\0';
        }
      }
      plVar11 = plVar11 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
LAB_01126548:
  if (local_45c != '\0') {
    local_45c = '\0';
  }
  if (local_3c0 != 0) {
    (**(code **)(*local_410[0] + 0x18))(local_410[0],local_3d0,local_3c0 << 3,8);
  }
  if (alStack_400 == local_3e0) {
    pcVar6 = *(code **)(*local_3e0 + 0x20);
  }
  else {
    if (local_3e0 == (long *)0x0) goto LAB_011265a8;
    pcVar6 = *(code **)(*local_3e0 + 0x28);
  }
  (*pcVar6)();
LAB_011265a8:
  if (local_3b0[0] != '\0') {
    if (local_350 != 0) {
      (**(code **)(*local_3a0[0] + 0x18))(local_3a0[0],local_360,local_350 << 3,8);
    }
    if (alStack_390 == local_370) {
      pcVar6 = *(code **)(*local_370 + 0x20);
    }
    else {
      if (local_370 == (long *)0x0) {
        return;
      }
      pcVar6 = *(code **)(*local_370 + 0x28);
    }
    (*pcVar6)();
  }
  return;
}


