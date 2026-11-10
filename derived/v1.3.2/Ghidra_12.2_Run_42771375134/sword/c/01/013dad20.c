/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013dad20; name: FUN_013dad20
 */


void FUN_013dad20(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 *local_310;
  code *local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  undefined **appuStack_2f0 [12];
  long local_290;
  undefined *local_288;
  undefined1 *local_280;
  code *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  undefined8 *local_260;
  code **local_258;
  undefined8 **local_250;
  undefined8 *local_248;
  long lStack_240;
  undefined8 *local_238;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 *local_178;
  code *local_170;
  code *local_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined1 auStack_150 [96];
  undefined *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 **local_d0 [14];
  
  local_160 = (undefined *)0x0;
  puStack_158 = (undefined *)0x0;
  local_170 = (code *)0x0;
  local_168 = (code *)0x0;
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar10)(puVar10);
  lVar8 = FUN_0132d9a0();
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  uVar11 = *(uint *)((long)puVar10 + 0x184);
  if (uVar11 < 5) {
    local_170 = (code *)(&PTR_LAB_0269ad10)[(int)uVar11];
    local_168 = (code *)(&PTR_LAB_0269ad40)[(int)uVar11];
    local_160 = (&PTR_LAB_0269ad70)[(int)uVar11];
    puStack_158 = (&PTR_LAB_0269ada0)[(int)uVar11];
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar10 == (undefined8 *)0x0) goto LAB_013dae08;
    plVar7 = (long *)(**(code **)*puVar10)(puVar10);
    lVar8 = FUN_0132d9a0();
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)lVar8) {
        puVar10 = puVar10 + -10;
        goto LAB_013dae08;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_013dae08:
  local_178 = puVar10 + 0x12;
  local_180 = DAT_0216c868;
  local_190 = DAT_0216c858;
  uStack_188 = DAT_0216c860;
  local_1b8 = DAT_0216c86c;
  uStack_1b0 = DAT_0216c874;
  local_198 = DAT_0216c88c;
  local_1a8 = DAT_0216c87c;
  uStack_1a0 = DAT_0216c884;
  local_1f8 = puVar10[0x12];
  uStack_1f0 = puVar10[0x13];
  local_1e8 = puVar10[0x14];
  uStack_1e0 = puVar10[0x15];
  local_1d8 = puVar10[0x16];
  uStack_1d0 = puVar10[0x17];
  local_1c8 = puVar10[0x18];
  uStack_1c0 = puVar10[0x19];
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar12)(puVar12);
  lVar8 = FUN_0132d9a0();
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  lVar8 = puVar12[0x61];
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_260 = &local_1f8;
  local_258 = &local_170;
  local_250 = &local_178;
  local_248 = &local_190;
  local_238 = &local_1b8;
  local_280 = &LAB_013de350;
  local_278 = FUN_013de4b0;
  local_270 = &LAB_013de6c0;
  local_268 = &LAB_013de6e0;
  local_d0[0] = &local_280;
  local_f0 = PTR_LAB_02727728;
  local_e8 = (code *)PTR_FUN_02727730;
  local_e0 = PTR_LAB_02727738;
  local_d8 = PTR_LAB_02727740;
  lStack_240 = param_1;
  FUN_01306a00(lVar8,&local_f0);
  pcVar2 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined *)0x0;
    local_d8 = (undefined *)0x0;
    local_f0 = (undefined *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar2)(local_d0);
  }
  pcVar2 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined1 *)0x0;
    local_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar2)(&local_260);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  plVar7 = *(long **)(lVar8 + 0x58);
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  iVar5 = FUN_00884820(plVar7);
  puVar1 = PTR_LAB_02727800;
  if (iVar5 != 0) {
    uVar11 = 0;
    do {
      local_288 = (undefined *)(**(code **)(*plVar7 + 0x50))(plVar7,uVar11);
      uVar9 = FUN_0087d610(local_288,2);
      if ((uVar9 & 1) == 0) {
        lVar8 = puVar10[0x6b];
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        local_310 = &LAB_013de700;
        local_308 = FUN_013de750;
        local_300 = &LAB_013de760;
        local_d0[0] = &local_310;
        local_2f8 = &LAB_013de770;
        local_f0 = PTR_LAB_027277e8;
        local_e8 = (code *)PTR_FUN_027277f0;
        local_e0 = PTR_LAB_027277f8;
        local_d8 = puVar1;
        appuStack_2f0[0] = &local_288;
        FUN_01307150(&local_290,lVar8,&local_f0);
        pcVar2 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (undefined *)0x0;
          local_d8 = (undefined *)0x0;
          local_f0 = (undefined *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar2)(local_d0);
        }
        lVar3 = local_290;
        if (local_290 != 0) {
          (**(code **)(*(long *)(local_290 + 0x48) + 0x18))();
          local_290 = 0;
        }
        pcVar2 = local_308;
        if (local_308 != (code *)0x0) {
          local_300 = (undefined1 *)0x0;
          local_2f8 = (undefined1 *)0x0;
          local_310 = (undefined1 *)0x0;
          local_308 = (code *)0x0;
          (*pcVar2)(appuStack_2f0);
        }
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        }
        if (lVar3 == 0) {
          local_f0 = local_288;
          (*local_170)(auStack_150,&local_f0);
          FUN_00878ad0(local_288,0);
          puVar4 = local_288;
          uVar6 = FUN_0132aa10(local_178);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          FUN_0087d430(puVar4,uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
          uVar9 = FUN_0132aa40(local_178);
          if ((uVar9 & 1) != 0) {
            FUN_0087d560(local_288,
                         *(undefined4 *)
                          (auStack_150 + (ulong)*(uint *)((long)local_178 + 0x144) * 4 + -0x40));
          }
          uVar6 = FUN_0087a5f0(local_288);
          if (uVar6 < 100) {
            iVar5 = *(int *)(local_178 + 0x2a);
            uVar6 = FUN_0087a5f0(local_288);
            if (99 < uVar6) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            FUN_01330280(puVar10,uVar11,
                         *(int *)(auStack_150 +
                                 (((ulong)(uVar6 & 0xff) * 0xcccccccd >> 0x21 & 0x7c) - 0x68)) *
                         iVar5);
          }
        }
      }
      uVar11 = uVar11 + 1;
      uVar6 = FUN_00884820(plVar7);
    } while (uVar11 < uVar6);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  }
  pcVar2 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined *)0x0;
    puStack_158 = (undefined *)0x0;
    local_170 = (code *)0x0;
    local_168 = (code *)0x0;
    (*pcVar2)(auStack_150);
  }
  return;
}


