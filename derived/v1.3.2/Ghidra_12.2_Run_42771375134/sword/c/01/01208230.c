/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01208230; name: FUN_01208230
 */


void FUN_01208230(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined1 auStack_70 [16];
  
  puVar5 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  puVar6 = PTR_DAT_02710860;
  param_1[2] = 0;
  param_1[3] = 0;
  local_78 = param_2;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (lVar8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar11;
  puVar7 = PTR_DAT_02725f40;
  puVar1 = PTR_DAT_02710528;
  *PTR_DAT_02725f38 = 1;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[9] = (long)(puVar7 + 0x40);
  plVar9 = param_1 + 10;
  *plVar9 = (long)(puVar1 + 0x10);
  lVar8 = FUN_007606c0();
  lVar11 = nn::os::GetCurrentThread();
  plVar13 = (long *)(lVar8 + 0x10);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 4));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0120833c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0120833c:
  puVar1 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) goto LAB_01208e9c;
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = plVar9;
  *(long *)(puVar1 + 0x800) = *(long *)(puVar1 + 0x800) + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 4));
  plVar13 = local_78;
  puVar1 = PTR_DAT_02725f48 + 0x10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[10] = (long)puVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar1 = PTR_DAT_02725f50;
  *(long **)PTR_DAT_02725f50 = plVar9;
  param_1[0xf] = 0;
  FUN_01208ea0(param_1 + 0x10,local_78);
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_a8 = 0x100abf008968000;
  local_a0 = 0x25b8e100;
  local_98 = "d6eee09e";
  local_90 = *param_3;
  local_88 = param_3[1];
  uStack_80 = param_3[2];
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,8,8);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01208e9c;
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
  puVar7 = PTR_DAT_02725f58;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  *plVar9 = (long)(puVar7 + 0x10);
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  local_c0 = plVar13;
  local_b8 = 8;
  local_b0 = 8;
  local_c8 = plVar9;
  FUN_007a9500(local_78,&local_a8,&local_c8);
  plVar13 = local_c8;
  local_c8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)*plVar13)(plVar13);
    (**(code **)(*local_c0 + 0x18))(local_c0,plVar13,local_b8,local_b0);
  }
  FUN_007a9e40(7);
  plVar13 = local_78;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01208e9c;
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,0x990,0x10);
  if (lVar11 == 0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  FUN_0120b8b0(lVar11,local_78);
  *(long **)(lVar11 + 0x10) = plVar13;
  *(long *)(lVar11 + 0x18) = lVar11;
  *(undefined8 *)(lVar11 + 0x20) = 0x990;
  *(undefined8 *)(lVar11 + 0x28) = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x50) + 0x10))();
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x50) + 0x18))();
    param_1[0xf] = 0;
  }
  plVar13 = local_78;
  param_1[0xf] = lVar11;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01208e9c;
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,0x90,8);
  if (lVar11 == 0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  FUN_01195a00(lVar11,local_78);
  *(long **)(lVar11 + 8) = plVar13;
  *(long *)(lVar11 + 0x10) = lVar11;
  *(undefined8 *)(lVar11 + 0x18) = 0x90;
  *(undefined8 *)(lVar11 + 0x20) = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (param_1[0x18] != 0) {
    (**(code **)(*(long *)(param_1[0x18] + 0x48) + 0x18))();
    param_1[0x18] = 0;
  }
  param_1[0x18] = lVar11;
  if (lVar11 == 0) {
    local_d0 = 0;
    local_e0 = param_1[0xf];
joined_r0x012086b8:
    local_d8 = 0;
    if (local_e0 != 0) goto LAB_01208668;
LAB_012086bc:
    local_e8 = 0;
    local_e0 = 0;
  }
  else {
    lVar8 = *(long *)(lVar11 + 0x58);
    if (lVar8 == 0) {
      local_d0 = lVar11 + 0x60;
      local_e0 = param_1[0xf];
      goto joined_r0x012086b8;
    }
    plVar13 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    local_d8 = lVar8;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    local_d0 = lVar11 + 0x60;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    local_e0 = param_1[0xf];
    if (local_e0 == 0) goto LAB_012086bc;
LAB_01208668:
    lVar8 = *(long *)(local_e0 + 0x60);
    if (lVar8 == 0) {
      local_e8 = 0;
    }
    else {
      plVar13 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      local_e8 = lVar8;
      (**(code **)(*plVar13 + 0x10))(plVar13);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  plVar13 = local_78;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (*(ulong *)(lVar8 + 0x80) < 0x10) {
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,0x170,0x10);
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_011fa7f0(lVar11,&local_e8,local_78);
    *(long **)(lVar11 + 8) = plVar13;
    *(long *)(lVar11 + 0x10) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 0x170;
    *(undefined8 *)(lVar11 + 0x20) = 0x10;
    puVar7 = PTR_DAT_02710940;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    puVar10 = *(undefined8 **)puVar7;
    *(long *)puVar7 = lVar11;
    if (puVar10 != (undefined8 *)0x0) {
      plVar13 = (long *)puVar10[1];
      uVar12 = puVar10[2];
      uVar2 = puVar10[3];
      uVar14 = puVar10[4];
      (**(code **)*puVar10)();
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar12,uVar2,uVar14);
      lVar11 = *(long *)puVar7;
    }
    lVar8 = 0;
    if (lVar11 != 0) {
      lVar8 = lVar11 + 0x48;
    }
    FUN_006cef90(lVar8);
    plVar13 = local_78;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (*(ulong *)(lVar8 + 0x80) < 0x10) {
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x50,8);
      if (plVar9 == (long *)0x0) {
        (**(code **)(*plVar13 + 0xb8))(plVar13);
      }
      *plVar9 = (long)(puVar5 + 0x10);
      plVar9[7] = 0;
      *(undefined4 *)(plVar9 + 8) = 0;
      *(undefined4 *)(plVar9 + 6) = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[2] = 0;
      plVar9[3] = 0;
      nn::os::GetTlsValue(*(undefined4 *)puVar6);
      puVar5 = PTR_DAT_02725f68;
      *PTR_DAT_02725f60 = 1;
      *plVar9 = (long)(puVar5 + 0x10);
      plVar9[1] = (long)plVar13;
      plVar9[9] = (long)(puVar5 + 0x40);
      plVar9[2] = (long)plVar9;
      plVar9[3] = 0x50;
      plVar9[4] = 8;
      puVar5 = PTR_DAT_02710490;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      puVar10 = *(undefined8 **)puVar5;
      *(long **)puVar5 = plVar9;
      if (puVar10 != (undefined8 *)0x0) {
        plVar13 = (long *)puVar10[1];
        uVar12 = puVar10[2];
        uVar2 = puVar10[3];
        uVar14 = puVar10[4];
        (**(code **)*puVar10)();
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar12,uVar2,uVar14);
        plVar9 = *(long **)puVar5;
      }
      plVar13 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar13 = plVar9 + 9;
      }
      FUN_006cef90(plVar13);
      FUN_011f3380(local_78);
      lVar8 = FUN_0120b3a0(auStack_70,local_78);
      puVar5 = PTR_DAT_0271cba8;
      puVar10 = *(undefined8 **)PTR_DAT_0271cba8;
      *(long *)PTR_DAT_0271cba8 = lVar8;
      if (puVar10 != (undefined8 *)0x0) {
        plVar13 = (long *)puVar10[1];
        uVar14 = puVar10[4];
        uVar12 = puVar10[2];
        uVar2 = puVar10[3];
        (**(code **)*puVar10)(puVar10);
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar12,uVar2,uVar14);
        lVar8 = *(long *)puVar5;
      }
      lVar11 = 0;
      if (lVar8 != 0) {
        lVar11 = lVar8 + 0x48;
      }
      FUN_006cef90(lVar11);
      lVar8 = FUN_0120b480(auStack_70,local_78);
      puVar7 = PTR_DAT_02720700;
      puVar10 = *(undefined8 **)PTR_DAT_02720700;
      *(long *)PTR_DAT_02720700 = lVar8;
      if (puVar10 != (undefined8 *)0x0) {
        plVar13 = (long *)puVar10[1];
        uVar14 = puVar10[4];
        uVar12 = puVar10[2];
        uVar2 = puVar10[3];
        (**(code **)*puVar10)(puVar10);
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar12,uVar2,uVar14);
        lVar8 = *(long *)puVar7;
      }
      lVar11 = 0;
      if (lVar8 != 0) {
        lVar11 = lVar8 + 0x48;
      }
      FUN_006cef90(lVar11);
      lVar8 = FUN_0120b560(auStack_70,local_78);
      puVar7 = PTR_DAT_02710958;
      puVar10 = *(undefined8 **)PTR_DAT_02710958;
      *(long *)PTR_DAT_02710958 = lVar8;
      if (puVar10 != (undefined8 *)0x0) {
        plVar13 = (long *)puVar10[1];
        uVar14 = puVar10[4];
        uVar12 = puVar10[2];
        uVar2 = puVar10[3];
        (**(code **)*puVar10)(puVar10);
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar12,uVar2,uVar14);
        lVar8 = *(long *)puVar7;
      }
      lVar11 = 0;
      if (lVar8 != 0) {
        lVar11 = lVar8 + 0x48;
      }
      FUN_006cef90(lVar11);
      plVar13 = local_78;
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (*(ulong *)(lVar8 + 0x80) < 0x10) {
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,0xf0,0x10);
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 0xb8))(plVar13);
        }
        FUN_0120e220(lVar11,local_78);
        *(long **)(lVar11 + 8) = plVar13;
        *(long *)(lVar11 + 0x10) = lVar11;
        *(undefined8 *)(lVar11 + 0x18) = 0xf0;
        *(undefined8 *)(lVar11 + 0x20) = 0x10;
        puVar6 = PTR_DAT_027185f8;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        puVar10 = *(undefined8 **)puVar6;
        *(long *)puVar6 = lVar11;
        if (puVar10 != (undefined8 *)0x0) {
          plVar13 = (long *)puVar10[1];
          uVar12 = puVar10[2];
          uVar2 = puVar10[3];
          uVar14 = puVar10[4];
          (**(code **)*puVar10)();
          (**(code **)(*plVar13 + 0x18))(plVar13,uVar12,uVar2,uVar14);
          lVar11 = *(long *)puVar6;
        }
        lVar8 = 0;
        if (lVar11 != 0) {
          lVar8 = lVar11 + 0x48;
        }
        FUN_006cef90(lVar8);
        lVar8 = FUN_0120b640(auStack_70,local_78,&local_78,&local_d8);
        puVar6 = PTR_DAT_02718f20;
        puVar10 = *(undefined8 **)PTR_DAT_02718f20;
        *(long *)PTR_DAT_02718f20 = lVar8;
        if (puVar10 != (undefined8 *)0x0) {
          plVar13 = (long *)puVar10[1];
          uVar14 = puVar10[4];
          uVar12 = puVar10[2];
          uVar2 = puVar10[3];
          (**(code **)*puVar10)(puVar10);
          (**(code **)(*plVar13 + 0x18))(plVar13,uVar12,uVar2,uVar14);
          lVar8 = *(long *)puVar6;
        }
        lVar11 = 0;
        if (lVar8 != 0) {
          lVar11 = lVar8 + 0x48;
        }
        FUN_006cef90(lVar11);
        local_f0 = param_1[0x11];
        if (local_f0 == 0) {
          local_f8 = 0;
          local_f0 = 0;
          FUN_007a9d10(&local_f8);
        }
        else {
          lVar8 = *(long *)(local_f0 + 0x60);
          if (lVar8 == 0) {
            local_f8 = 0;
            FUN_007a9d10(&local_f8);
          }
          else {
            plVar13 = (long *)(lVar8 + 0x48);
            (**(code **)(*plVar13 + 0x10))(plVar13);
            local_f8 = lVar8;
            (**(code **)(*plVar13 + 0x10))(plVar13);
            (**(code **)(*plVar13 + 0x18))(plVar13);
            FUN_007a9d10(&local_f8);
          }
        }
        if (local_f8 != 0) {
          (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
          local_f8 = 0;
        }
        puVar6 = PTR_DAT_02716748;
        uVar12 = *(undefined8 *)PTR_DAT_02716748;
        local_100 = param_1[0x13];
        if (local_100 == 0) {
          local_108 = 0;
          local_100 = 0;
        }
        else {
          lVar8 = *(long *)(local_100 + 0x60);
          if (lVar8 == 0) {
            local_108 = 0;
          }
          else {
            plVar13 = (long *)(lVar8 + 0x48);
            (**(code **)(*plVar13 + 0x10))(plVar13);
            local_108 = lVar8;
            (**(code **)(*plVar13 + 0x10))(plVar13);
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
        }
        FUN_007ad090(uVar12,&local_108);
        if (local_108 != 0) {
          (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
          local_108 = 0;
        }
        uVar12 = *(undefined8 *)puVar6;
        lVar8 = param_1[0x15];
        if (lVar8 == 0) {
          local_118 = 0;
          local_110 = 0;
        }
        else {
          lVar11 = *(long *)(lVar8 + 0x58);
          if (lVar11 == 0) {
            local_110 = lVar8 + 0x60;
            local_118 = 0;
          }
          else {
            plVar13 = (long *)(lVar11 + 0x48);
            (**(code **)(*plVar13 + 0x10))(plVar13);
            local_118 = lVar11;
            (**(code **)(*plVar13 + 0x10))(plVar13);
            local_110 = lVar8 + 0x60;
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
        }
        FUN_007ad030(uVar12,&local_118);
        if (local_118 != 0) {
          (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
          local_118 = 0;
        }
        FUN_007a9dc0(param_1[0x12]);
        uVar12 = *(undefined8 *)puVar5;
        local_120 = param_1[0x14];
        if (local_120 == 0) {
          local_128 = 0;
          local_120 = 0;
        }
        else {
          lVar8 = *(long *)(local_120 + 0x60);
          if (lVar8 == 0) {
            local_128 = 0;
          }
          else {
            plVar13 = (long *)(lVar8 + 0x48);
            (**(code **)(*plVar13 + 0x10))(plVar13);
            local_128 = lVar8;
            (**(code **)(*plVar13 + 0x10))(plVar13);
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
        }
        FUN_011f6b30(uVar12,&local_128);
        if (local_128 != 0) {
          (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
          local_128 = 0;
        }
        lVar11 = *(long *)puVar1;
        *(long **)(lVar11 + 0x10) = local_78;
        *(undefined8 *)(lVar11 + 0x20) = 0x200000;
        lVar8 = (**(code **)(*local_78 + 0x10))(local_78,0x200000,8);
        *(long *)(lVar11 + 0x18) = lVar8;
        if (lVar8 == 0) {
          (**(code **)(**(long **)(lVar11 + 0x10) + 0xb8))();
          lVar8 = *(long *)(lVar11 + 0x18);
        }
        FUN_00760770(lVar8,lVar8 + 0xb8,0x1fff48,0);
        *(long *)(lVar11 + 8) = lVar8;
        param_1[0x16] = lVar8;
        lVar8 = FUN_0120b750(auStack_70,local_78);
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        if (param_1[0x17] != 0) {
          (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
          param_1[0x17] = 0;
        }
        param_1[0x17] = lVar8;
        if (local_e8 != 0) {
          (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
          local_e8 = 0;
        }
        if (local_d8 != 0) {
          (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
        }
        return;
      }
    }
  }
LAB_01208e9c:
                    /* WARNING: Subroutine does not return */
  abort();
}


