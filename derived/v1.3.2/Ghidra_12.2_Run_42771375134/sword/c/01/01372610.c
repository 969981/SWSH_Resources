/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01372610; name: FUN_01372610
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01372610(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  long *plVar30;
  int local_72c;
  code *local_710;
  code *local_708;
  undefined1 *local_700;
  undefined1 *puStack_6f8;
  undefined1 auStack_6f0 [104];
  undefined8 local_688;
  long local_680;
  long local_678;
  long local_670;
  long local_668;
  undefined *local_660;
  code *local_658;
  code *local_650;
  undefined *local_648;
  long lStack_640;
  undefined *local_638;
  undefined8 uStack_630;
  long local_5d8;
  long local_5d0;
  long local_5c8;
  long local_5c0;
  long local_5b8;
  long local_5b0;
  long local_5a8;
  long local_5a0;
  long *local_598;
  long local_590;
  long local_588;
  long local_580;
  long local_578;
  long local_570;
  long local_568;
  long local_560;
  long local_558;
  long local_550;
  long local_548;
  long local_540;
  long local_538;
  long local_530;
  long local_528;
  long local_520;
  long local_518;
  long local_510;
  long local_508;
  long local_500;
  long local_4f8;
  long local_4f0;
  long local_4e8;
  long *local_4e0;
  code *local_4d8;
  undefined *local_4d0;
  code *local_4c8;
  long local_4c0;
  undefined *local_4b8;
  undefined8 local_4b0 [12];
  undefined8 local_450;
  code *local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined1 auStack_430 [96];
  long local_3d0;
  long *local_3c8;
  undefined1 *local_3c0;
  code *local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  long local_3a0 [13];
  long local_338;
  undefined1 auStack_330 [344];
  undefined1 auStack_1d8 [4];
  byte abStack_1d4 [324];
  int local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar23 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar23 != (undefined8 *)0x0)) {
    plVar11 = (long *)(**(code **)*puVar23)(puVar23);
    lVar12 = FUN_0132d9a0();
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)lVar12) {
        puVar26 = puVar23 + -10;
        lVar12 = puVar23[0x6e];
        goto joined_r0x0137299c;
      }
    }
  }
  puVar26 = (undefined8 *)0x0;
  lVar12 = _DAT_000003c0;
joined_r0x0137299c:
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  uVar20 = *(undefined8 *)(lVar12 + 0x188);
  lVar3 = *(long *)(lVar12 + 400);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar24 = *(long *)(lVar12 + 0x198);
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  lVar29 = puVar26[0x78];
  if (lVar29 == 0) {
    local_78 = _DAT_000000b8;
    local_80 = _DAT_000000b0;
  }
  else {
    plVar11 = (long *)(lVar29 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    local_78 = *(undefined8 *)(lVar29 + 0xb8);
    local_80 = *(undefined8 *)(lVar29 + 0xb0);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  memcpy(auStack_330,puVar26 + 0x12,0x2b0);
  lVar29 = FUN_00ad95d0(&local_4e0,uVar20);
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x108) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(long *)(param_1 + 0x108) = lVar29;
  *(undefined8 *)(lVar29 + 0xb8) = local_78;
  *(undefined8 *)(lVar29 + 0xb0) = local_80;
  *(undefined1 *)(lVar29 + 0xc0) = 1;
  iVar9 = FUN_0132a1f0(auStack_330);
  lVar29 = *(long *)(param_1 + 0x108);
  if (iVar9 < 2) {
    plVar11 = (long *)FUN_01379270(&local_4e0,*(undefined8 *)(lVar29 + 8));
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    local_4e0 = plVar11;
    FUN_006d9640(lVar29,&local_4e0);
    plVar13 = (long *)0x0;
    lVar29 = local_338;
    if (local_4e0 != (long *)0x0) {
      (**(code **)(local_4e0[9] + 0x18))();
      local_4e0 = (long *)0x0;
      plVar13 = local_4e0;
      lVar29 = local_338;
    }
  }
  else {
    plVar11 = (long *)FUN_01379190(&local_4e0);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    local_4e0 = plVar11;
    FUN_006d9640(lVar29,&local_4e0);
    if (local_4e0 != (long *)0x0) {
      (**(code **)(local_4e0[9] + 0x18))();
      local_4e0 = (long *)0x0;
    }
    puVar23 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar13 = (long *)(**(code **)*puVar23)(puVar23);
    lVar29 = FUN_0132d9a0();
    for (; plVar13 != (long *)lVar29; plVar13 = (long *)*plVar13) {
    }
    local_338 = puVar23[0x71];
    if (local_338 != 0) {
      (**(code **)(*(long *)(local_338 + 0x48) + 0x10))();
    }
    FUN_013a6d00(plVar11,&local_338);
    plVar13 = local_4e0;
    lVar29 = 0;
    if (local_338 != 0) {
      (**(code **)(*(long *)(local_338 + 0x48) + 0x18))();
      local_338 = 0;
      plVar13 = local_4e0;
      lVar29 = local_338;
    }
  }
  local_338 = lVar29;
  local_4e0 = plVar13;
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x10))();
  }
  (**(code **)(*plVar11 + 0xa0))(plVar11,auStack_330);
  iVar9 = FUN_0132a1f0(auStack_330);
  if (iVar9 < 2) {
    local_72c = 0;
    iVar9 = FUN_0132a1f0(auStack_330);
  }
  else {
    uVar14 = FUN_0120e640(*(undefined8 *)PTR_DAT_027185f8);
    local_72c = FUN_0132a4a0(auStack_330,uVar14);
    iVar9 = FUN_0132a1f0(auStack_330);
  }
  if (iVar9 != 1) {
    lVar29 = *(long *)PTR_DAT_02727748;
    if ((lVar29 != 0) && (*(int *)(lVar29 + 0x54) != 0)) {
      piVar1 = (int *)(lVar29 + 0x54);
      iVar9 = *(int *)(lVar29 + 0x54);
      do {
        while( true ) {
          uVar19 = FUN_012eac20(*(undefined8 *)(lVar29 + 0x58));
          if ((uVar19 & 1) == 0) goto LAB_013729d8;
          iVar10 = *piVar1;
          if (iVar10 != iVar9) break;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar29 = *(long *)(lVar29 + 0x60);
            if (lVar29 != 0) {
              uVar19 = FUN_0130a600(lVar29 + -0x50);
              (**(code **)(*(long *)(lVar29 + -8) + 0x18))((long *)(lVar29 + -8));
              goto joined_r0x013729cc;
            }
            goto LAB_013729d8;
          }
          iVar9 = iVar10;
          if (iVar10 == 0) goto LAB_013729d8;
        }
        ClearExclusiveLocal();
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_013729d8:
    uVar19 = FUN_0130a600(0);
joined_r0x013729cc:
    if ((uVar19 & 1) == 0) {
      bVar7 = false;
      goto LAB_01372a3c;
    }
  }
  lVar29 = *(long *)(param_1 + 0x108);
  plVar13 = (long *)FUN_01379350(&local_4e0,*(undefined8 *)(lVar29 + 8));
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x10))();
  }
  local_4e0 = plVar13;
  FUN_006d9640(lVar29,&local_4e0);
  if (local_4e0 != (long *)0x0) {
    (**(code **)(local_4e0[9] + 0x18))();
    local_4e0 = (long *)0x0;
  }
  bVar7 = true;
LAB_01372a3c:
  local_3c0 = &LAB_01379430;
  local_3b0 = &LAB_01379570;
  local_3b8 = FUN_01379560;
  local_3a8 = &LAB_01379580;
  local_3a0[0] = param_1;
  FUN_01390050(plVar11,&local_3c0);
  pcVar21 = local_3b8;
  if (local_3b8 != (code *)0x0) {
    local_3a8 = (undefined1 *)0x0;
    local_3b0 = (undefined1 *)0x0;
    local_3b8 = (code *)0x0;
    local_3c0 = (undefined1 *)0x0;
    (*pcVar21)(local_3a0);
  }
  lVar29 = *(long *)(param_1 + 0x108);
  plVar13 = (long *)puVar26[0x6b];
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x10))();
  }
  plVar30 = *(long **)(lVar29 + 8);
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar30;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar16 = (long *)(**(code **)(*plVar30 + 0x10))(plVar30,0x3f0,0x10);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*plVar30 + 0xb8))(plVar30);
  }
  local_4e0 = plVar13;
  FUN_01394c90(plVar16,auStack_330,&local_4e0);
  if (local_4e0 != (long *)0x0) {
    (**(code **)(local_4e0[9] + 0x18))();
    local_4e0 = (long *)0x0;
  }
  plVar16[1] = (long)plVar30;
  plVar16[2] = (long)plVar16;
  plVar16[3] = 0x3f0;
  plVar16[4] = 0x10;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  if (plVar16 != (long *)0x0) {
    (**(code **)(plVar16[9] + 0x10))();
  }
  local_4e0 = plVar16;
  FUN_006d9640(lVar29,&local_4e0);
  if (local_4e0 != (long *)0x0) {
    (**(code **)(local_4e0[9] + 0x18))();
    local_4e0 = (long *)0x0;
  }
  plVar13 = (long *)puVar26[0x6a];
  if (plVar13 == (long *)0x0) {
    local_3c8 = (long *)0x0;
  }
  else {
    lVar29 = plVar13[0xb];
    if (*(long *)(lVar29 + 0x58) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar29 + 0x60))();
      *(undefined8 *)(lVar29 + 0x58) = uVar14;
    }
    piVar1 = (int *)(lVar29 + 0x54);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar29 = plVar13[0xb];
    local_3c8 = plVar13;
    if (*(long *)(lVar29 + 0x58) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar29 + 0x60))();
      *(undefined8 *)(lVar29 + 0x58) = uVar14;
    }
    piVar1 = (int *)(lVar29 + 0x54);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  (**(code **)(*plVar11 + 0xd8))(plVar11,&local_3c8);
  if (local_3c8 != (long *)0x0) {
    lVar29 = local_3c8[0xb];
    piVar1 = (int *)(lVar29 + 0x54);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x60) = 0;
      (**(code **)(*local_3c8 + 0x18))();
    }
    local_3c8 = (long *)0x0;
  }
  lVar29 = FUN_00ad95d0(&local_4e0,uVar20);
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(long *)(param_1 + 0x80) = lVar29;
  *(undefined8 *)(lVar29 + 0xb8) = local_78;
  *(undefined8 *)(lVar29 + 0xb0) = local_80;
  *(undefined1 *)(lVar29 + 0xc0) = 1;
  lVar29 = *(long *)(param_1 + 0x80);
  plVar30 = (long *)FUN_01379590(&local_4e0,*(undefined8 *)(lVar29 + 8));
  if (plVar30 != (long *)0x0) {
    (**(code **)(plVar30[9] + 0x10))();
  }
  local_4e0 = plVar30;
  FUN_006d9640(lVar29,&local_4e0);
  if (local_4e0 != (long *)0x0) {
    (**(code **)(local_4e0[9] + 0x18))();
    local_4e0 = (long *)0x0;
  }
  lVar29 = *(long *)(lVar12 + 0x418);
  local_3d0 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(lVar12 + 0x438);
  local_4e0 = (long *)(PTR_DAT_02715090 + 0x10);
  local_4d8 = *(code **)(lVar15 + 0x18);
  if (local_4d8 != (code *)0x0) {
    (**(code **)(*(long *)((long)local_4d8 + 0x48) + 0x10))();
  }
  local_4c0 = 0;
  local_4d0 = (undefined *)0x0;
  local_4b8 = (undefined *)0x0;
  local_4c8 = (code *)0x0;
  if (*(code **)(lVar15 + 0x30) != (code *)0x0) {
    (**(code **)(lVar15 + 0x30))(lVar15 + 0x40,local_4b0);
    local_4d0 = *(undefined **)(lVar15 + 0x20);
    local_4c8 = *(code **)(lVar15 + 0x28);
    local_4c0 = *(long *)(lVar15 + 0x30);
    local_4b8 = *(undefined **)(lVar15 + 0x38);
  }
  local_440 = 0;
  local_450 = 0;
  local_438 = 0;
  local_448 = (code *)0x0;
  if (*(code **)(lVar15 + 0xb0) != (code *)0x0) {
    (**(code **)(lVar15 + 0xb0))(lVar15 + 0xc0,auStack_430);
    local_450 = *(undefined8 *)(lVar15 + 0xa0);
    local_448 = *(code **)(lVar15 + 0xa8);
    local_440 = *(undefined8 *)(lVar15 + 0xb0);
    local_438 = *(undefined8 *)(lVar15 + 0xb8);
  }
  local_4e0 = (long *)(PTR_DAT_02715070 + 0x10);
  FUN_013965d0(plVar30,lVar29 + 0x120,&local_3d0,&local_4e0);
  local_4e0 = (long *)(PTR_DAT_02715090 + 0x10);
  if (local_4d8 == (code *)0x0) {
    local_4d8 = (code *)0x0;
    pcVar21 = local_448;
  }
  else {
    FUN_006e2100(local_4d8,&local_4e0);
    pcVar8 = local_4d8;
    local_4d8 = (code *)0x0;
    pcVar21 = local_448;
    if (pcVar8 != (code *)0x0) {
      (**(code **)(*(long *)((long)pcVar8 + 0x48) + 0x18))();
      pcVar21 = local_448;
    }
  }
  local_448 = pcVar21;
  if (pcVar21 != (code *)0x0) {
    local_440 = 0;
    local_438 = 0;
    local_450 = 0;
    local_448 = (code *)0x0;
    (*pcVar21)(auStack_430);
  }
  pcVar21 = local_4c8;
  if (local_4c8 != (code *)0x0) {
    local_4c0 = 0;
    local_4b8 = (undefined *)0x0;
    local_4d0 = (undefined *)0x0;
    local_4c8 = (code *)0x0;
    (*pcVar21)(local_4b0);
  }
  if (local_4d8 != (code *)0x0) {
    (**(code **)(*(long *)((long)local_4d8 + 0x48) + 0x18))();
    local_4d8 = (code *)0x0;
  }
  if (local_3d0 != 0) {
    (**(code **)(*(long *)(local_3d0 + 0x48) + 0x18))();
    local_3d0 = 0;
  }
  lVar29 = *(long *)(param_1 + 0x80);
  plVar16 = (long *)FUN_01379670(&local_4e0,*(undefined8 *)(lVar29 + 8));
  if (plVar16 != (long *)0x0) {
    (**(code **)(plVar16[9] + 0x10))();
  }
  local_4e0 = plVar16;
  FUN_006d9640(lVar29,&local_4e0);
  if (local_4e0 != (long *)0x0) {
    (**(code **)(local_4e0[9] + 0x18))();
    local_4e0 = (long *)0x0;
  }
  lVar29 = *(long *)(lVar12 + 0x458);
  local_4e8 = lVar24;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  FUN_013993b0(plVar16,1,lVar29 + 0x340,&local_4e8);
  if (local_4e8 != 0) {
    (**(code **)(*(long *)(local_4e8 + 0x48) + 0x18))();
    local_4e8 = 0;
  }
  lVar29 = *(long *)(lVar12 + 0x458);
  local_4f0 = lVar24;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  FUN_013993b0(plVar16,2,lVar29 + 0x450,&local_4f0);
  if (local_4f0 != 0) {
    (**(code **)(*(long *)(local_4f0 + 0x48) + 0x18))();
    local_4f0 = 0;
  }
  lVar29 = *(long *)(lVar12 + 0x458);
  local_4f8 = lVar24;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  FUN_013993b0(plVar16,3,lVar29 + 0x450,&local_4f8);
  if (local_4f8 != 0) {
    (**(code **)(*(long *)(local_4f8 + 0x48) + 0x18))();
    local_4f8 = 0;
  }
  lVar29 = *(long *)(lVar12 + 0x458);
  local_500 = lVar24;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  FUN_01399450(plVar16,lVar29 + 0x670,&local_500);
  if (local_500 != 0) {
    (**(code **)(*(long *)(local_500 + 0x48) + 0x18))();
    local_500 = 0;
  }
  lVar29 = *(long *)(lVar12 + 0x458);
  local_508 = lVar24;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  FUN_013994f0(plVar16,lVar29 + 0x1660,&local_508);
  if (local_508 != 0) {
    (**(code **)(*(long *)(local_508 + 0x48) + 0x18))();
    local_508 = 0;
  }
  lVar29 = *(long *)(param_1 + 0x80);
  plVar16 = (long *)FUN_01379790(&local_4e0,*(undefined8 *)(lVar29 + 8));
  if (plVar16 != (long *)0x0) {
    (**(code **)(plVar16[9] + 0x10))();
  }
  local_4e0 = plVar16;
  FUN_006d9640(lVar29,&local_4e0);
  if (local_4e0 != (long *)0x0) {
    (**(code **)(local_4e0[9] + 0x18))();
    local_4e0 = (long *)0x0;
  }
  iVar9 = FUN_0132a1f0(auStack_330);
  FUN_0137d540(plVar16,local_90 + iVar9);
  lVar29 = *(long *)(lVar12 + 0x458);
  local_510 = lVar24;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  FUN_0137c840(plVar16,lVar29 + 0x120,&local_510);
  if (local_510 != 0) {
    (**(code **)(*(long *)(local_510 + 0x48) + 0x18))();
    local_510 = 0;
  }
  local_518 = *(long *)(param_1 + 0x80);
  if (local_518 != 0) {
    (**(code **)(*(long *)(local_518 + 0x48) + 0x10))();
  }
  (**(code **)(*plVar11 + 0x98))(plVar11,&local_518);
  if (local_518 != 0) {
    (**(code **)(*(long *)(local_518 + 0x48) + 0x18))();
    local_518 = 0;
  }
  FUN_01376f30(param_1);
  local_4e0 = (long *)((ulong)local_4e0 & 0xffffffff00000000);
  iVar9 = FUN_0132a1f0(auStack_330);
  if (0 < local_90 + iVar9) {
    do {
      lVar29 = FUN_00ad95d0(&local_688,uVar20);
      if (lVar29 != 0) {
        (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
      }
      lVar15 = (long)(int)local_4e0;
      plVar16 = (long *)(param_1 + lVar15 * 8 + 0x98);
      if (*plVar16 != 0) {
        (**(code **)(*(long *)(*plVar16 + 0x48) + 0x18))();
        *plVar16 = 0;
        lVar15 = (long)(int)local_4e0;
      }
      *plVar16 = lVar29;
      lVar29 = *(long *)(param_1 + lVar15 * 8 + 0x98);
      uVar14 = FUN_01379870(lVar29,*(undefined8 *)(lVar29 + 8),&local_4e0);
      FUN_01381990(uVar14,&local_80);
      lVar29 = (long)(int)local_4e0;
      bVar4 = abStack_1d4[lVar29 * 8];
      lVar15 = *(long *)(lVar12 + 0x3f8);
      local_520 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
        lVar29 = (long)(int)local_4e0;
      }
      FUN_01381a50(uVar14,lVar15 + (ulong)bVar4 * 0x110 + 0x10,&local_520,auStack_1d8 + lVar29 * 8);
      if (local_520 != 0) {
        (**(code **)(*(long *)(local_520 + 0x48) + 0x18))();
        local_520 = 0;
      }
      local_528 = *(long *)(param_1 + (long)(int)local_4e0 * 8 + 0x98);
      if (local_528 != 0) {
        (**(code **)(*(long *)(local_528 + 0x48) + 0x10))();
      }
      (**(code **)(*plVar11 + 0x98))(plVar11,&local_528);
      if (local_528 != 0) {
        (**(code **)(*(long *)(local_528 + 0x48) + 0x18))();
        local_528 = 0;
      }
      iVar9 = (int)local_4e0;
      iVar10 = FUN_0132a1f0(auStack_330);
      if (iVar10 <= iVar9) {
        FUN_01383c30(uVar14,1);
      }
      FUN_012dc480(uVar14,0);
      FUN_01383c20(uVar14,(int)local_4e0 == local_72c);
      iVar9 = (int)local_4e0 + 1;
      local_4e0 = (long *)CONCAT44(local_4e0._4_4_,iVar9);
      iVar10 = FUN_0132a1f0(auStack_330);
    } while (iVar9 < local_90 + iVar10);
  }
  local_688 = (ulong)local_688._4_4_ << 0x20;
  iVar9 = FUN_0132a1f0(auStack_330);
  if (0 < local_90 + iVar9) {
    do {
      lVar29 = FUN_00ad95d0(&local_4e0,uVar20);
      if (lVar29 != 0) {
        (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
      }
      lVar15 = (long)(int)local_688;
      plVar16 = (long *)(param_1 + lVar15 * 8 + 0xb8);
      if (*plVar16 != 0) {
        (**(code **)(*(long *)(*plVar16 + 0x48) + 0x18))();
        *plVar16 = 0;
        lVar15 = (long)(int)local_688;
      }
      *plVar16 = lVar29;
      lVar29 = *(long *)(param_1 + lVar15 * 8 + 0xb8);
      uVar14 = FUN_01379970(lVar29,*(undefined8 *)(lVar29 + 8),&local_688);
      FUN_013842f0(uVar14,*(long *)(param_1 + 0x80) + 0xb0);
      lVar15 = (long)(int)local_688;
      lVar22 = *(long *)(lVar12 + 0x418);
      lVar29 = 0x220;
      if (abStack_1d4[lVar15 * 8] != 0) {
        lVar29 = 0x330;
      }
      local_530 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
        lVar15 = (long)(int)local_688;
      }
      FUN_01384480(uVar14,lVar22 + lVar29 + 0x10,&local_530,auStack_1d8 + lVar15 * 8);
      if (local_530 != 0) {
        (**(code **)(*(long *)(local_530 + 0x48) + 0x18))();
        local_530 = 0;
      }
      lVar29 = *(long *)(param_1 + (long)(int)local_688 * 8 + 0xb8);
      plVar16 = (long *)FUN_01379a70(&local_4e0,*(undefined8 *)(lVar29 + 8));
      if (plVar16 != (long *)0x0) {
        (**(code **)(plVar16[9] + 0x10))();
      }
      local_4e0 = plVar16;
      FUN_006d9640(lVar29,&local_4e0);
      if (local_4e0 != (long *)0x0) {
        (**(code **)(local_4e0[9] + 0x18))();
        local_4e0 = (long *)0x0;
      }
      lVar29 = *(long *)(lVar12 + 0x458);
      local_538 = lVar24;
      if (lVar24 != 0) {
        (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))((long *)(lVar24 + 0x48));
      }
      FUN_0138bcd0(plVar16,lVar29 + 0x1110,&local_538);
      if (local_538 != 0) {
        (**(code **)(*(long *)(local_538 + 0x48) + 0x18))();
        local_538 = 0;
      }
      local_540 = *(long *)(param_1 + (long)(int)local_688 * 8 + 0xb8);
      if (local_540 != 0) {
        (**(code **)(*(long *)(local_540 + 0x48) + 0x10))();
      }
      (**(code **)(*plVar11 + 0x98))(plVar11,&local_540);
      if (local_540 != 0) {
        (**(code **)(*(long *)(local_540 + 0x48) + 0x18))();
        local_540 = 0;
      }
      iVar9 = (int)local_688;
      iVar10 = FUN_0132a1f0(auStack_330);
      if (iVar10 <= iVar9) {
        FUN_01383c30(uVar14,1);
      }
      FUN_012dc480(uVar14,0);
      FUN_01383c20(uVar14,(int)local_688 == local_72c);
      iVar9 = (int)local_688 + 1;
      local_688 = CONCAT44(local_688._4_4_,iVar9);
      iVar10 = FUN_0132a1f0(auStack_330);
    } while (iVar9 < local_90 + iVar10);
  }
  lVar29 = FUN_00ad95d0(&local_4e0,uVar20);
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x88) = lVar29;
  *(undefined8 *)(lVar29 + 0xb8) = local_78;
  *(undefined8 *)(lVar29 + 0xb0) = local_80;
  *(undefined1 *)(lVar29 + 0xc0) = 1;
  lVar29 = *(long *)(param_1 + 0x88);
  plVar16 = (long *)FUN_01379b50(&local_4e0,*(undefined8 *)(lVar29 + 8));
  if (plVar16 != (long *)0x0) {
    (**(code **)(plVar16[9] + 0x10))();
  }
  local_4e0 = plVar16;
  FUN_006d9640(lVar29,&local_4e0);
  if (local_4e0 != (long *)0x0) {
    (**(code **)(local_4e0[9] + 0x18))();
    local_4e0 = (long *)0x0;
  }
  iVar9 = FUN_0132a1f0(auStack_330);
  FUN_0137e550(plVar16,local_90 + iVar9);
  lVar29 = *(long *)(param_1 + 0x88);
  plVar17 = (long *)FUN_01379c30(&local_4e0,*(undefined8 *)(lVar29 + 8));
  if (plVar17 != (long *)0x0) {
    (**(code **)(plVar17[9] + 0x10))();
  }
  local_4e0 = plVar17;
  FUN_006d9640(lVar29,&local_4e0);
  if (local_4e0 != (long *)0x0) {
    (**(code **)(local_4e0[9] + 0x18))();
    local_4e0 = (long *)0x0;
  }
  lVar29 = *(long *)(lVar12 + 0x458);
  local_548 = lVar24;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  FUN_0137f150(plVar17,lVar29 + 0x1220,&local_548);
  if (local_548 != 0) {
    (**(code **)(*(long *)(local_548 + 0x48) + 0x18))();
    local_548 = 0;
  }
  lVar29 = *(long *)(lVar12 + 0x458);
  local_550 = lVar24;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  FUN_0137f940(plVar17,lVar29 + 0x560,&local_550);
  if (local_550 != 0) {
    (**(code **)(*(long *)(local_550 + 0x48) + 0x18))();
    local_550 = 0;
  }
  local_558 = *(long *)(param_1 + 0x88);
  if (local_558 != 0) {
    (**(code **)(*(long *)(local_558 + 0x48) + 0x10))();
  }
  FUN_01396850(plVar30,&local_558);
  if (local_558 != 0) {
    (**(code **)(*(long *)(local_558 + 0x48) + 0x18))();
    local_558 = 0;
  }
  local_560 = *(long *)(param_1 + 0x88);
  if (local_560 != 0) {
    (**(code **)(*(long *)(local_560 + 0x48) + 0x10))();
  }
  (**(code **)(*plVar11 + 0x98))(plVar11,&local_560);
  if (local_560 != 0) {
    (**(code **)(*(long *)(local_560 + 0x48) + 0x18))();
    local_560 = 0;
  }
  lVar29 = FUN_00ad95d0(&local_4e0,uVar20);
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar29;
  uVar14 = FUN_00adc640(lVar29,*(undefined8 *)(lVar29 + 8),*(long *)(lVar12 + 0x418) + 0x10);
  local_4e0 = (long *)0x8;
  FUN_00727220(uVar14,lVar3,&local_4e0);
  lVar29 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(lVar29 + 0xb8) = local_78;
  *(undefined8 *)(lVar29 + 0xb0) = local_80;
  *(undefined1 *)(lVar29 + 0xc0) = 1;
  lVar29 = *(long *)(param_1 + 0x90);
  plVar30 = (long *)FUN_01379d10(&local_4e0,*(undefined8 *)(lVar29 + 8));
  if (plVar30 != (long *)0x0) {
    (**(code **)(plVar30[9] + 0x10))();
  }
  local_4e0 = plVar30;
  FUN_006d9640(lVar29,&local_4e0);
  if (local_4e0 != (long *)0x0) {
    (**(code **)(local_4e0[9] + 0x18))();
    local_4e0 = (long *)0x0;
  }
  local_568 = *(long *)(param_1 + 0x90);
  if (local_568 != 0) {
    (**(code **)(*(long *)(local_568 + 0x48) + 0x10))();
  }
  (**(code **)(*plVar11 + 0x98))(plVar11,&local_568);
  if (local_568 != 0) {
    (**(code **)(*(long *)(local_568 + 0x48) + 0x18))();
    local_568 = 0;
  }
  plVar30 = (long *)(param_1 + 0x110);
  plVar17 = (long *)(lVar3 + 0x48);
  plVar25 = (long *)(PTR_DAT_02715090 + 0x10);
  iVar9 = 0;
  plVar2 = (long *)(PTR_DAT_02715070 + 0x10);
  do {
    lVar29 = FUN_00ad95d0(&local_4e0,uVar20);
    if (lVar29 != 0) {
      (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
    }
    if (*plVar30 != 0) {
      (**(code **)(*(long *)(*plVar30 + 0x48) + 0x18))();
      *plVar30 = 0;
    }
    *plVar30 = lVar29;
    plVar18 = (long *)FUN_01379df0(&local_4e0,*(undefined8 *)(lVar29 + 8));
    if (plVar18 != (long *)0x0) {
      (**(code **)(plVar18[9] + 0x10))();
    }
    local_4e0 = plVar18;
    FUN_006d9640(lVar29,&local_4e0);
    if (local_4e0 != (long *)0x0) {
      (**(code **)(local_4e0[9] + 0x18))();
      local_4e0 = (long *)0x0;
    }
    FUN_0138a470(plVar18,*(long *)(param_1 + 0x80) + 0xb0);
    lVar29 = *(long *)(lVar12 + 0x498);
    lVar15 = (long)iVar9;
    local_570 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
    lVar22 = *(long *)(lVar12 + 0x4b8);
    local_4d8 = *(code **)(lVar22 + lVar15 * 0x110 + 0x18);
    local_4e0 = plVar25;
    if (local_4d8 != (code *)0x0) {
      (**(code **)(*(long *)((long)local_4d8 + 0x48) + 0x10))();
    }
    local_4c0 = 0;
    local_4b8 = (undefined *)0x0;
    local_4d0 = (undefined *)0x0;
    local_4c8 = (code *)0x0;
    pcVar21 = *(code **)(lVar22 + lVar15 * 0x110 + 0x30);
    if (pcVar21 != (code *)0x0) {
      lVar27 = lVar22 + lVar15 * 0x110;
      (*pcVar21)(lVar27 + 0x40,local_4b0);
      local_4d0 = *(undefined **)(lVar27 + 0x20);
      local_4c8 = *(code **)(lVar27 + 0x28);
      local_4c0 = *(long *)(lVar27 + 0x30);
      local_4b8 = *(undefined **)(lVar27 + 0x38);
    }
    local_440 = 0;
    local_438 = 0;
    local_450 = 0;
    local_448 = (code *)0x0;
    pcVar21 = *(code **)(lVar22 + lVar15 * 0x110 + 0xb0);
    if (pcVar21 != (code *)0x0) {
      lVar22 = lVar22 + lVar15 * 0x110;
      (*pcVar21)(lVar22 + 0xc0,auStack_430);
      local_450 = *(undefined8 *)(lVar22 + 0xa0);
      local_448 = *(code **)(lVar22 + 0xa8);
      local_440 = *(undefined8 *)(lVar22 + 0xb0);
      local_438 = *(undefined8 *)(lVar22 + 0xb8);
    }
    local_4e0 = plVar2;
    FUN_0138a6b0(plVar18,lVar29 + (long)iVar9 * 0x110 + 0x10,&local_570,&local_4e0);
    local_4e0 = (long *)(PTR_DAT_02715090 + 0x10);
    if (local_4d8 == (code *)0x0) {
      local_4d8 = (code *)0x0;
      pcVar21 = local_448;
    }
    else {
      FUN_006e2100(local_4d8,&local_4e0);
      pcVar8 = local_4d8;
      local_4d8 = (code *)0x0;
      pcVar21 = local_448;
      if (pcVar8 != (code *)0x0) {
        (**(code **)(*(long *)((long)pcVar8 + 0x48) + 0x18))();
        pcVar21 = local_448;
      }
    }
    local_448 = pcVar21;
    if (pcVar21 != (code *)0x0) {
      local_440 = 0;
      local_438 = 0;
      local_450 = 0;
      local_448 = (code *)0x0;
      (*pcVar21)(auStack_430);
    }
    pcVar21 = local_4c8;
    if (local_4c8 != (code *)0x0) {
      local_4c0 = 0;
      local_4b8 = (undefined *)0x0;
      local_4d0 = (undefined *)0x0;
      local_4c8 = (code *)0x0;
      (*pcVar21)(local_4b0);
    }
    if (local_4d8 != (code *)0x0) {
      (**(code **)(*(long *)((long)local_4d8 + 0x48) + 0x18))();
      local_4d8 = (code *)0x0;
    }
    if (local_570 != 0) {
      (**(code **)(*(long *)(local_570 + 0x48) + 0x18))();
      local_570 = 0;
    }
    iVar10 = FUN_0132a1f0(auStack_330);
    if (0 < local_90 + iVar10) {
      lVar29 = 0;
      do {
        local_578 = *(long *)(param_1 + 0xb8 + lVar29 * 8);
        if (local_578 != 0) {
          (**(code **)(*(long *)(local_578 + 0x48) + 0x10))();
        }
        FUN_0138aae0(plVar18,&local_578);
        if (local_578 != 0) {
          (**(code **)(*(long *)(local_578 + 0x48) + 0x18))();
          local_578 = 0;
        }
        lVar29 = lVar29 + 1;
        iVar10 = FUN_0132a1f0(auStack_330);
      } while (lVar29 < (long)local_90 + (long)iVar10);
    }
    local_580 = *plVar30;
    if (local_580 != 0) {
      (**(code **)(*(long *)(local_580 + 0x48) + 0x10))();
    }
    iVar9 = (iVar9 + 1) % 9;
    (**(code **)(*plVar11 + 0x98))(plVar11,&local_580);
    if (local_580 != 0) {
      (**(code **)(*(long *)(local_580 + 0x48) + 0x18))();
      local_580 = 0;
    }
    plVar30 = plVar30 + 1;
  } while (plVar30 != (long *)(param_1 + 0x290));
  lVar29 = FUN_00ad95d0(&local_4e0,uVar20);
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xf8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(long *)(param_1 + 0xf8) = lVar29;
  plVar30 = (long *)FUN_01379ed0(&local_4e0,*(undefined8 *)(lVar29 + 8));
  if (plVar30 != (long *)0x0) {
    (**(code **)(plVar30[9] + 0x10))();
  }
  local_4e0 = plVar30;
  FUN_006d9640(lVar29,&local_4e0);
  if (local_4e0 != (long *)0x0) {
    (**(code **)(local_4e0[9] + 0x18))();
    local_4e0 = (long *)0x0;
  }
  lVar29 = *(long *)(lVar12 + 0x458);
  local_588 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
  FUN_01389490(plVar30,lVar29 + 0x780,lVar29 + 0x890,&local_588);
  if (local_588 != 0) {
    (**(code **)(*(long *)(local_588 + 0x48) + 0x18))();
    local_588 = 0;
  }
  lVar29 = *(long *)(lVar12 + 0x458);
  local_590 = lVar24;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  FUN_01389420(plVar30,lVar29 + 0x9a0,&local_590);
  if (local_590 != 0) {
    (**(code **)(*(long *)(local_590 + 0x48) + 0x18))();
    local_590 = 0;
  }
  local_598 = plVar13;
  if (plVar13 != (long *)0x0) {
    lVar29 = plVar13[0xb];
    if (*(long *)(lVar29 + 0x58) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar29 + 0x60))();
      *(undefined8 *)(lVar29 + 0x58) = uVar14;
    }
    piVar1 = (int *)(lVar29 + 0x54);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_013895b0(plVar30,&local_80,&local_598);
  if (local_598 != (long *)0x0) {
    lVar29 = local_598[0xb];
    piVar1 = (int *)(lVar29 + 0x54);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x60) = 0;
      (**(code **)(*local_598 + 0x18))();
    }
    local_598 = (long *)0x0;
  }
  local_5a0 = *(long *)(param_1 + 0xf8);
  if (local_5a0 != 0) {
    (**(code **)(*(long *)(local_5a0 + 0x48) + 0x10))();
  }
  (**(code **)(*plVar11 + 0x98))(plVar11,&local_5a0);
  if (local_5a0 != 0) {
    (**(code **)(*(long *)(local_5a0 + 0x48) + 0x18))();
    local_5a0 = 0;
  }
  local_4e0 = (long *)((ulong)local_4e0 & 0xffffffff00000000);
  iVar9 = FUN_0132a1f0(auStack_330);
  if (0 < local_90 + iVar9) {
    plVar30 = (long *)(lVar24 + 0x48);
    do {
      lVar29 = FUN_00ad95d0(&local_688,uVar20);
      if (lVar29 != 0) {
        (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
      }
      lVar15 = (long)(int)local_4e0;
      plVar25 = (long *)(param_1 + lVar15 * 8 + 0xd8);
      if (*plVar25 != 0) {
        (**(code **)(*(long *)(*plVar25 + 0x48) + 0x18))();
        *plVar25 = 0;
        lVar15 = (long)(int)local_4e0;
      }
      *plVar25 = lVar29;
      lVar29 = *(long *)(param_1 + lVar15 * 8 + 0xd8);
      lVar29 = FUN_01379fb0(lVar29,*(undefined8 *)(lVar29 + 8),&local_4e0);
      lVar15 = *(long *)(param_1 + 0x80);
      if (lVar15 != 0) {
        plVar25 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar25 + 0x10))(plVar25);
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
      lVar22 = *(long *)(lVar29 + 0xc0);
      *(long *)(lVar29 + 0xc0) = lVar15;
      if (lVar22 != 0) {
        (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))();
      }
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      lVar15 = *(long *)(param_1 + 0xf8);
      if (lVar15 != 0) {
        plVar25 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar25 + 0x10))(plVar25);
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
      lVar22 = *(long *)(lVar29 + 200);
      *(long *)(lVar29 + 200) = lVar15;
      if (lVar22 != 0) {
        (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))();
      }
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      FUN_01387fe0(lVar29,&local_80);
      lVar15 = *(long *)(lVar12 + 0x458);
      local_5a8 = lVar24;
      if (lVar24 != 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
      FUN_01388aa0(lVar29,lVar15 + 0xab0,&local_5a8);
      if (local_5a8 != 0) {
        (**(code **)(*(long *)(local_5a8 + 0x48) + 0x18))();
        local_5a8 = 0;
      }
      lVar15 = *(long *)(lVar12 + 0x458);
      local_5b0 = lVar24;
      if (lVar24 != 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
      FUN_01388b10(lVar29,0,lVar15 + 0xbc0,&local_5b0);
      if (local_5b0 != 0) {
        (**(code **)(*(long *)(local_5b0 + 0x48) + 0x18))();
        local_5b0 = 0;
      }
      lVar15 = *(long *)(lVar12 + 0x458);
      local_5b8 = lVar24;
      if (lVar24 != 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
      FUN_01388b10(lVar29,1,lVar15 + 0xcd0,&local_5b8);
      if (local_5b8 != 0) {
        (**(code **)(*(long *)(local_5b8 + 0x48) + 0x18))();
        local_5b8 = 0;
      }
      lVar15 = *(long *)(lVar12 + 0x458);
      local_5c0 = lVar24;
      if (lVar24 != 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
      FUN_01388b10(lVar29,2,lVar15 + 0xde0,&local_5c0);
      if (local_5c0 != 0) {
        (**(code **)(*(long *)(local_5c0 + 0x48) + 0x18))();
        local_5c0 = 0;
      }
      lVar15 = *(long *)(lVar12 + 0x458);
      local_5c8 = lVar24;
      if (lVar24 != 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
      FUN_01388b10(lVar29,3,lVar15 + 0xef0,&local_5c8);
      if (local_5c8 != 0) {
        (**(code **)(*(long *)(local_5c8 + 0x48) + 0x18))();
        local_5c8 = 0;
      }
      lVar15 = *(long *)(lVar12 + 0x458);
      local_5d0 = lVar24;
      if (lVar24 != 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
      FUN_01388b90(lVar29,lVar15 + 0x1000,&local_5d0);
      if (local_5d0 != 0) {
        (**(code **)(*(long *)(local_5d0 + 0x48) + 0x18))();
        local_5d0 = 0;
      }
      FUN_01383c20(lVar29,(int)local_4e0 == local_72c);
      lVar29 = *(long *)(param_1 + (long)(int)local_4e0 * 8 + 0xd8);
      lVar29 = FUN_0137a0b0(lVar29,*(undefined8 *)(lVar29 + 8),&local_4e0);
      lVar15 = *(long *)(param_1 + 0xf8);
      if (lVar15 != 0) {
        plVar25 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar25 + 0x10))(plVar25);
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
      lVar22 = *(long *)(lVar29 + 0x230);
      *(long *)(lVar29 + 0x230) = lVar15;
      if (lVar22 != 0) {
        (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))();
      }
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      local_5d8 = *(long *)(param_1 + (long)(int)local_4e0 * 8 + 0xd8);
      if (local_5d8 != 0) {
        (**(code **)(*(long *)(local_5d8 + 0x48) + 0x10))();
      }
      (**(code **)(*plVar11 + 0x98))(plVar11,&local_5d8);
      if (local_5d8 != 0) {
        (**(code **)(*(long *)(local_5d8 + 0x48) + 0x18))();
        local_5d8 = 0;
      }
      iVar9 = (int)local_4e0;
      iVar10 = FUN_0132a1f0(auStack_330);
      if (iVar10 <= iVar9) {
        FUN_01383c30(lVar29,1);
      }
      FUN_012dc480(lVar29,0);
      FUN_01383c20(lVar29,(int)local_4e0 == local_72c);
      iVar9 = (int)local_4e0 + 1;
      local_4e0 = (long *)CONCAT44(local_4e0._4_4_,iVar9);
      iVar10 = FUN_0132a1f0(auStack_330);
    } while (iVar9 < local_90 + iVar10);
  }
  local_4b8 = PTR_LAB_02728a00;
  local_4b0[0] = 0;
  local_4e0 = (long *)PTR_LAB_02728a08;
  local_4d8 = (code *)PTR_FUN_02728a10;
  local_4d0 = PTR_FUN_02728a18;
  local_4c8 = (code *)PTR_LAB_02728a20;
  local_660 = PTR_LAB_02728a08;
  local_638 = PTR_LAB_02728a00;
  uStack_630 = 0;
  local_648 = PTR_LAB_02728a20;
  local_658 = (code *)PTR_FUN_02728a10;
  local_650 = (code *)PTR_FUN_02728a18;
  pcVar21 = (code *)plVar11[0x91];
  lStack_640 = param_1;
  local_4c0 = param_1;
  if (pcVar21 != (code *)0x0) {
    plVar11[0x92] = 0;
    plVar11[0x93] = 0;
    plVar11[0x90] = 0;
    plVar11[0x91] = 0;
    (*pcVar21)(plVar11 + 0x94);
  }
  if (local_650 != (code *)0x0) {
    (*local_650)(&lStack_640,plVar11 + 0x94);
    plVar11[0x93] = (long)local_648;
    plVar11[0x91] = (long)local_658;
    plVar11[0x92] = (long)local_650;
    plVar11[0x90] = (long)local_660;
  }
  pcVar21 = local_658;
  if (local_658 != (code *)0x0) {
    local_650 = (code *)0x0;
    local_648 = (undefined *)0x0;
    local_660 = (undefined *)0x0;
    local_658 = (code *)0x0;
    (*pcVar21)(&lStack_640);
  }
  if ((bVar7) && (iVar9 = FUN_0132a1f0(auStack_330), 0 < local_90 + iVar9)) {
    lVar29 = 0;
    do {
      local_668 = *(long *)(param_1 + 0x98 + lVar29 * 8);
      if (local_668 != 0) {
        (**(code **)(*(long *)(local_668 + 0x48) + 0x10))();
      }
      FUN_0137dbc0(plVar16,&local_668);
      if (local_668 != 0) {
        (**(code **)(*(long *)(local_668 + 0x48) + 0x18))();
        local_668 = 0;
      }
      lVar29 = lVar29 + 1;
      iVar9 = FUN_0132a1f0(auStack_330);
    } while (lVar29 < (long)local_90 + (long)iVar9);
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (puVar23 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60), puVar23 != (undefined8 *)0x0)) {
    plVar30 = (long *)(**(code **)*puVar23)(puVar23);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_02717528), iVar9 != 0)) {
      uVar20 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar20;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
      if (plVar30 == (long *)PTR_DAT_02717530) {
        puVar28 = puVar23 + -10;
        lVar29 = puVar23[4];
        goto joined_r0x013747ec;
      }
    }
  }
  puVar28 = (undefined8 *)0x0;
  lVar29 = _DAT_00000070;
joined_r0x013747ec:
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  lVar15 = puVar28[0xf];
  if (lVar15 != 0) {
    plVar30 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar30 + 0x10))(plVar30);
    (**(code **)(*plVar30 + 0x18))(plVar30);
  }
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))();
  }
  local_688 = lVar29;
  local_680 = lVar15;
  FUN_0138f230(plVar11,&local_688);
  FUN_0132f7f0(&local_688,puVar26);
  uVar19 = FUN_01329830(local_688);
  if (local_688 != 0) {
    (**(code **)(*(long *)(local_688 + 0x48) + 0x18))();
    local_688 = 0;
  }
  if ((uVar19 & 1) != 0) {
    FUN_0132a620(&local_688,auStack_330);
    if ((local_688 != 0) && (iVar9 = FUN_0132a4a0(auStack_330), -1 < iVar9)) {
      lVar29 = param_1 + (long)iVar9 * 8;
      uVar20 = FUN_0137a220(*(undefined8 *)(lVar29 + 0x98),auStack_70);
      FUN_01383c30(uVar20,1);
      uVar20 = FUN_0137a500(*(undefined8 *)(lVar29 + 0xb8),auStack_70);
      FUN_01383c30(uVar20,1);
      uVar20 = FUN_0137a7e0(*(undefined8 *)(lVar29 + 0xd8),auStack_70);
      FUN_01383c30(uVar20,1);
    }
    if ((local_680 != 0) && (iVar9 = FUN_0132a4a0(auStack_330), -1 < iVar9)) {
      lVar29 = param_1 + (long)iVar9 * 8;
      uVar20 = FUN_0137a220(*(undefined8 *)(lVar29 + 0x98),auStack_70);
      FUN_01383c30(uVar20,1);
      uVar20 = FUN_0137a500(*(undefined8 *)(lVar29 + 0xb8),auStack_70);
      FUN_01383c30(uVar20,1);
      uVar20 = FUN_0137a7e0(*(undefined8 *)(lVar29 + 0xd8),auStack_70);
      FUN_01383c30(uVar20,1);
    }
    if ((local_678 != 0) && (iVar9 = FUN_0132a4a0(auStack_330), -1 < iVar9)) {
      lVar29 = param_1 + (long)iVar9 * 8;
      uVar20 = FUN_0137a220(*(undefined8 *)(lVar29 + 0x98),auStack_70);
      FUN_01383c30(uVar20,1);
      uVar20 = FUN_0137a500(*(undefined8 *)(lVar29 + 0xb8),auStack_70);
      FUN_01383c30(uVar20,1);
      uVar20 = FUN_0137a7e0(*(undefined8 *)(lVar29 + 0xd8),auStack_70);
      FUN_01383c30(uVar20,1);
    }
    if ((local_670 != 0) && (iVar9 = FUN_0132a4a0(auStack_330), -1 < iVar9)) {
      param_1 = param_1 + (long)iVar9 * 8;
      uVar20 = FUN_0137a220(*(undefined8 *)(param_1 + 0x98),auStack_70);
      FUN_01383c30(uVar20,1);
      uVar20 = FUN_0137a500(*(undefined8 *)(param_1 + 0xb8),auStack_70);
      FUN_01383c30(uVar20,1);
      uVar20 = FUN_0137a7e0(*(undefined8 *)(param_1 + 0xd8),auStack_70);
      FUN_01383c30(uVar20,1);
    }
  }
  lVar29 = puVar26[0x6c];
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  local_710 = FUN_0137a950;
  local_708 = FUN_0137a970;
  local_700 = &LAB_0137a980;
  puStack_6f8 = &LAB_0137a990;
  FUN_01323050(lVar29,&local_710);
  pcVar21 = local_708;
  if (local_708 != (code *)0x0) {
    local_700 = (undefined1 *)0x0;
    puStack_6f8 = (undefined1 *)0x0;
    local_710 = (code *)0x0;
    local_708 = (code *)0x0;
    (*pcVar21)(auStack_6f0);
  }
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
  }
  pcVar21 = local_4d8;
  if (local_4d8 != (code *)0x0) {
    local_4c8 = (code *)0x0;
    local_4d0 = (undefined *)0x0;
    local_4d8 = (code *)0x0;
    local_4e0 = (long *)0x0;
    (*pcVar21)(&local_4c0);
  }
  if (plVar13 != (long *)0x0) {
    lVar29 = plVar13[0xb];
    piVar1 = (int *)(lVar29 + 0x54);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x60) = 0;
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
  }
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*plVar17 + 0x18))();
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


