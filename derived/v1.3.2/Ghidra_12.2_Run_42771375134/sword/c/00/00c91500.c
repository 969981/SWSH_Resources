/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c91500; name: FUN_00c91500
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c91500(long *param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  byte *pbVar15;
  ushort *puVar16;
  undefined2 uVar17;
  char *pcVar18;
  long lVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  undefined4 uVar26;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar27;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  float fVar28;
  long *local_240;
  byte *pbStack_238;
  size_t local_230;
  long local_228;
  long local_220;
  long *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  long local_200;
  undefined8 uStack_1f8;
  uint local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  long local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  long local_140;
  undefined8 local_138;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 local_71;
  long local_70 [2];
  
  (**(code **)(*param_1 + 0xa8))(local_70);
  if (local_70[0] == 0) {
    return;
  }
  if (*(int *)(local_70[0] + 0x54) == 0) goto LAB_00c928ac;
  FUN_00ad2020(&local_1f0,local_70);
  lVar25 = CONCAT44(uStack_1ec,local_1f0);
  uVar21 = *(undefined8 *)(lVar25 + 0x4c8);
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))();
    local_1f0 = 0;
    uStack_1ec = 0;
  }
  FUN_00ad2020(&local_1f0,local_70);
  lVar25 = CONCAT44(uStack_1ec,local_1f0);
  uVar23 = *(undefined8 *)(lVar25 + 0x4d8);
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))();
    local_1f0 = 0;
    uStack_1ec = 0;
  }
  puVar5 = PTR_DAT_0271c488;
  lVar25 = param_1[0xbe];
  uVar24 = 0;
  do {
    if (param_1[0x4e] == 0) {
LAB_00c91784:
      local_240 = (long *)0x0;
    }
    else {
      FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + uVar24 * 0xc + 0x2e3));
      FUN_00c825a0(&local_240);
      plVar13 = local_240;
      if (local_240 != (long *)0x0) {
        bVar6 = (char)lVar25 != '\0';
        if (uVar24 != 0xf) {
          bVar6 = (char)lVar25 == '\0' || (0xff82UL >> (uVar24 & 0x3f) & 1) == 0;
        }
        plVar12 = (long *)(**(code **)local_240[10])(local_240 + 10);
        if (((*PTR_DAT_0271c490 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0271c490), iVar9 != 0)) {
          uVar11 = FUN_00c95940();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(PTR_DAT_0271c490);
        }
        for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          if (plVar12 == (long *)puVar5) {
            (**(code **)(plVar13[9] + 0x10))(plVar13 + 9);
            bVar20 = false;
            goto LAB_00c91690;
          }
        }
        plVar13 = (long *)0x0;
        bVar20 = true;
LAB_00c91690:
        (**(code **)(*plVar13 + 0xa8))(&local_b0,plVar13);
        FUN_00ad2020(&local_80,&local_b0);
        local_1f0 = 0;
        uStack_1ec = 0;
        FUN_007273c0(CONCAT17(uStack_79,local_80),(uint)uVar21 & (uint)bVar6,&local_1f0);
        if (CONCAT17(uStack_79,local_80) != 0) {
          (**(code **)(*(long *)(CONCAT17(uStack_79,local_80) + 0x48) + 0x18))();
          local_80 = 0;
          uStack_79 = 0;
        }
        if (local_b0 != 0) {
          (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
          local_b0 = 0;
        }
        (**(code **)(*plVar13 + 0xa8))(&local_b0,plVar13);
        FUN_00ad2020(&local_80,&local_b0);
        local_1f0 = 2;
        uStack_1ec = 0;
        FUN_00727520(CONCAT17(uStack_79,local_80),(uint)bVar6 & (uint)uVar23 >> 1,&local_1f0);
        if (CONCAT17(uStack_79,local_80) != 0) {
          (**(code **)(*(long *)(CONCAT17(uStack_79,local_80) + 0x48) + 0x18))();
          local_80 = 0;
          uStack_79 = 0;
        }
        if (local_b0 != 0) {
          (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
          local_b0 = 0;
        }
        if (!bVar20) {
          (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
        }
        if (local_240 != (long *)0x0) {
          (**(code **)(local_240[9] + 0x18))();
          goto LAB_00c91784;
        }
      }
    }
    uVar24 = uVar24 + 1;
  } while (uVar24 != 0x10);
  lVar25 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_79 = 0;
  local_71 = 1;
  *(undefined1 *)((long)param_1 + 0x5f9) = 1;
  *(undefined8 *)((long)param_1 + 0x5f1) = 0x101010101010101;
  do {
    if (param_1[0x4e] == 0) goto LAB_00c91d64;
    FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + lVar25 * 0xc + 0x2e3));
    FUN_00c825a0(&local_1f0);
    lVar19 = CONCAT44(uStack_1ec,local_1f0);
    if (lVar19 == 0) goto LAB_00c91d68;
    plVar13 = (long *)(*(code *)**(undefined8 **)(lVar19 + 0x50))((undefined8 *)(lVar19 + 0x50));
    if (((*PTR_DAT_0271c490 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0271c490), iVar9 != 0)) {
      uVar21 = FUN_00c95940();
      *(undefined8 *)puVar5 = uVar21;
      __cxa_guard_release(PTR_DAT_0271c490);
    }
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (plVar13 == (long *)puVar5) {
        (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))((long *)(lVar19 + 0x48));
        bVar6 = false;
        bVar1 = *(byte *)(lVar19 + 0x2d0);
        goto joined_r0x00c9193c;
      }
    }
    lVar19 = 0;
    bVar6 = true;
    bVar1 = DAT_000002d0;
joined_r0x00c9193c:
    if (bVar1 - 1 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x00c91904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0215d6dc + *(int *)(&DAT_0215d6dc + (ulong)(bVar1 - 1) * 4)))();
      return;
    }
    switch(*(undefined1 *)(lVar19 + 0x2d1)) {
    case 1:
      *(undefined2 *)((long)param_1 + 0x5f1) = 0x101;
      goto LAB_00c91a88;
    case 2:
      *(undefined2 *)((long)param_1 + 0x5f1) = 0;
LAB_00c91a88:
      *(undefined1 *)((long)param_1 + 0x5f3) = 1;
      bVar1 = *(byte *)(lVar19 + 0x2d2);
joined_r0x00c91ad0:
      uVar7 = bVar1 - 1;
      if (uVar7 < 0xd) goto LAB_00c91a9c;
      goto LAB_00c91c30;
    case 3:
      *(undefined2 *)((long)param_1 + 0x5f1) = 1;
      *(undefined1 *)((long)param_1 + 0x5f3) = 0;
      bVar1 = *(byte *)(lVar19 + 0x2d2);
      goto joined_r0x00c91ad0;
    case 4:
      uVar17 = 0x101;
      goto LAB_00c91ae4;
    case 5:
      uVar17 = 0x100;
LAB_00c91ae4:
      *(undefined2 *)((long)param_1 + 0x5f4) = uVar17;
      *(undefined1 *)((long)param_1 + 0x5f6) = 0;
switchD_00c91968_default:
      bVar1 = *(byte *)(lVar19 + 0x2d2);
      break;
    case 6:
      *(undefined2 *)((long)param_1 + 0x5f4) = 0;
      *(undefined1 *)((long)param_1 + 0x5f6) = 0;
      bVar1 = *(byte *)(lVar19 + 0x2d2);
      break;
    case 7:
      *(undefined1 *)((long)param_1 + 0x5f7) = 1;
      bVar1 = *(byte *)(lVar19 + 0x2d2);
      break;
    case 8:
      *(undefined1 *)((long)param_1 + 0x5f7) = 0;
      bVar1 = *(byte *)(lVar19 + 0x2d2);
      break;
    case 9:
      uVar17 = 0x101;
      goto LAB_00c91b70;
    case 10:
      *(undefined2 *)(param_1 + 0xbf) = 1;
      bVar1 = *(byte *)(lVar19 + 0x2d2);
      break;
    case 0xb:
      uVar17 = 0x100;
LAB_00c91b70:
      *(undefined2 *)(param_1 + 0xbf) = uVar17;
      bVar1 = *(byte *)(lVar19 + 0x2d2);
      break;
    case 0xc:
      *(undefined2 *)(param_1 + 0xbf) = 0;
      bVar1 = *(byte *)(lVar19 + 0x2d2);
      break;
    case 0xd:
      *(undefined1 *)((long)local_70 + lVar25 + -0x10) = 1;
      bVar1 = *(byte *)(lVar19 + 0x2d2);
      break;
    default:
      goto switchD_00c91968_default;
    }
    uVar7 = bVar1 - 1;
    if (0xc < uVar7) goto LAB_00c91c30;
LAB_00c91a9c:
    switch((long)&switchD_00c91aa4::switchdataD_0215d744 +
           (long)(int)(&switchD_00c91aa4::switchdataD_0215d744)[uVar7]) {
    case 0xc91aa8:
      *(undefined2 *)((long)param_1 + 0x5f1) = 0x101;
      goto LAB_00c91bc4;
    case 0xc91bbc:
      *(undefined2 *)((long)param_1 + 0x5f1) = 0;
LAB_00c91bc4:
      *(undefined1 *)((long)param_1 + 0x5f3) = 1;
      bVar1 = *(byte *)(lVar19 + 0x2d3);
joined_r0x00c91c14:
      uVar7 = bVar1 - 1;
      if (uVar7 < 0xd) goto LAB_00c91bd8;
      goto joined_r0x00c91828;
    case 0xc91bfc:
      *(undefined2 *)((long)param_1 + 0x5f1) = 1;
      *(undefined1 *)((long)param_1 + 0x5f3) = 0;
      bVar1 = *(byte *)(lVar19 + 0x2d3);
      goto joined_r0x00c91c14;
    case 0xc91c1c:
      uVar17 = 0x101;
      goto LAB_00c91c28;
    case 0xc91c24:
      uVar17 = 0x100;
LAB_00c91c28:
      *(undefined2 *)((long)param_1 + 0x5f4) = uVar17;
      *(undefined1 *)((long)param_1 + 0x5f6) = 0;
LAB_00c91c30:
      bVar1 = *(byte *)(lVar19 + 0x2d3);
      break;
    case 0xc91c44:
      *(undefined2 *)((long)param_1 + 0x5f4) = 0;
      *(undefined1 *)((long)param_1 + 0x5f6) = 0;
      bVar1 = *(byte *)(lVar19 + 0x2d3);
      break;
    case 0xc91c60:
      *(undefined1 *)((long)param_1 + 0x5f7) = 1;
      bVar1 = *(byte *)(lVar19 + 0x2d3);
      break;
    case 0xc91c78:
      *(undefined1 *)((long)param_1 + 0x5f7) = 0;
      bVar1 = *(byte *)(lVar19 + 0x2d3);
      break;
    case 0xc91c90:
      uVar17 = 0x101;
      goto LAB_00c91cb4;
    case 0xc91c98:
      *(undefined2 *)(param_1 + 0xbf) = 1;
      bVar1 = *(byte *)(lVar19 + 0x2d3);
      break;
    case 0xc91cb0:
      uVar17 = 0x100;
LAB_00c91cb4:
      *(undefined2 *)(param_1 + 0xbf) = uVar17;
      bVar1 = *(byte *)(lVar19 + 0x2d3);
      break;
    case 0xc91ccc:
      *(undefined2 *)(param_1 + 0xbf) = 0;
      bVar1 = *(byte *)(lVar19 + 0x2d3);
      break;
    case 0xc91ce4:
      *(undefined1 *)((long)local_70 + lVar25 + -0x10) = 1;
      bVar1 = *(byte *)(lVar19 + 0x2d3);
    }
    uVar7 = bVar1 - 1;
    if (0xc < uVar7) goto joined_r0x00c91828;
LAB_00c91bd8:
    switch((long)&switchD_00c91be0::switchdataD_0215d778 +
           (long)(int)(&switchD_00c91be0::switchdataD_0215d778)[uVar7]) {
    case 0xc917ec:
      *(undefined2 *)((long)param_1 + 0x5f4) = 0;
      *(undefined1 *)((long)param_1 + 0x5f6) = 0;
      break;
    case 0xc917fc:
      *(undefined1 *)((long)param_1 + 0x5f7) = 1;
      break;
    case 0xc91808:
      *(undefined1 *)((long)param_1 + 0x5f7) = 0;
      break;
    case 0xc91814:
      *(undefined2 *)(param_1 + 0xbf) = 0x101;
      break;
    case 0xc91824:
      *(undefined2 *)(param_1 + 0xbf) = 1;
      break;
    case 0xc91830:
      *(undefined2 *)(param_1 + 0xbf) = 0x100;
      break;
    case 0xc91840:
      *(undefined2 *)(param_1 + 0xbf) = 0;
      break;
    case 0xc9184c:
      *(undefined1 *)((long)local_70 + lVar25 + -0x10) = 1;
      break;
    case 0xc91be4:
      *(undefined2 *)((long)param_1 + 0x5f1) = 0x101;
      *(undefined1 *)((long)param_1 + 0x5f3) = 1;
      break;
    case 0xc91d00:
      *(undefined2 *)((long)param_1 + 0x5f1) = 0;
      *(undefined1 *)((long)param_1 + 0x5f3) = 1;
      break;
    case 0xc91d14:
      *(undefined2 *)((long)param_1 + 0x5f1) = 1;
      *(undefined1 *)((long)param_1 + 0x5f3) = 0;
      break;
    case 0xc91d28:
      uVar17 = 0x101;
      goto LAB_00c91d34;
    case 0xc91d30:
      uVar17 = 0x100;
LAB_00c91d34:
      *(undefined2 *)((long)param_1 + 0x5f4) = uVar17;
      *(undefined1 *)((long)param_1 + 0x5f6) = 0;
    }
joined_r0x00c91828:
    if (!bVar6) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
    }
    if (CONCAT44(uStack_1ec,local_1f0) != 0) {
      (**(code **)(*(long *)(CONCAT44(uStack_1ec,local_1f0) + 0x48) + 0x18))();
LAB_00c91d64:
      local_1f0 = 0;
      uStack_1ec = 0;
    }
LAB_00c91d68:
    lVar25 = lVar25 + 1;
  } while (lVar25 != 0x10);
  if (param_1[0x4e] == 0) {
    local_88 = 0;
  }
  else {
    FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + 0x2ef));
    FUN_00c825a0(&local_88);
  }
  FUN_00c930f0(param_1,&local_88,(undefined8 *)((long)param_1 + 0x5f1));
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (param_1[0x4e] == 0) {
    local_90 = 0;
  }
  else {
    FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + 0x34f));
    FUN_00c825a0(&local_90);
  }
  FUN_00c930f0(param_1,&local_90,(long)param_1 + 0x5f4);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (param_1[0x4e] == 0) {
    local_98 = 0;
  }
  else {
    FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + 0x373));
    FUN_00c825a0(&local_98);
  }
  FUN_00c930f0(param_1,&local_98,(long)param_1 + 0x5f4);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (param_1[0x4e] == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + 0x37f));
    FUN_00c825a0(&local_a0);
  }
  FUN_00c930f0(param_1,&local_a0,(long)param_1 + 0x5f7);
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (param_1[0x4e] == 0) {
    local_240 = (long *)0x0;
  }
  else {
    FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + 0x2ef));
    FUN_00c825a0(&local_240);
  }
  plVar12 = local_240;
  plVar13 = (long *)(**(code **)local_240[10])(local_240 + 10);
  if (((*PTR_DAT_0271c490 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0271c490), iVar9 != 0))
  {
    uVar21 = FUN_00c95940();
    *(undefined8 *)puVar5 = uVar21;
    __cxa_guard_release(PTR_DAT_0271c490);
  }
  for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    if (plVar13 == (long *)puVar5) goto LAB_00c91f00;
  }
  plVar12 = (long *)0x0;
LAB_00c91f00:
  memcpy(&local_1f0,plVar12 + 0x36,0xe0);
  local_a8 = local_138;
  local_b0 = local_140;
  if (local_240 != (long *)0x0) {
    (**(code **)(local_240[9] + 0x18))();
    local_240 = (long *)0x0;
  }
  puVar4 = PTR_DAT_02710848;
  lVar25 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
  }
  FUN_00c58c20(&local_1f0,lVar25);
  lVar19 = CONCAT44(uStack_1ec,local_1f0);
  if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
    piVar14 = (int *)(lVar19 + 0x54);
    iVar9 = *(int *)(lVar19 + 0x54);
    do {
      while( true ) {
        uVar24 = FUN_00c953c0(*(undefined8 *)(lVar19 + 0x58));
        if ((uVar24 & 1) == 0) goto LAB_00c91fe0;
        iVar10 = *piVar14;
        if (iVar10 != iVar9) break;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar19 = *(long *)(lVar19 + 0x60);
          if (lVar19 != 0) {
            uVar21 = *(undefined8 *)(lVar19 + 0x1538);
            (**(code **)(*(long *)(lVar19 + -8) + 0x18))();
            lVar19 = CONCAT44(uStack_1ec,local_1f0);
            goto joined_r0x00c91fd8;
          }
          goto LAB_00c91fe0;
        }
        iVar9 = iVar10;
        if (iVar10 == 0) goto LAB_00c91fe0;
      }
      ClearExclusiveLocal();
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_00c91fe0:
  lVar19 = CONCAT44(uStack_1ec,local_1f0);
  uVar21 = _DAT_00001588;
joined_r0x00c91fd8:
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))();
    local_1f0 = 0;
    uStack_1ec = 0;
  }
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
  }
  uVar23 = FUN_00cbf670(uVar21);
  plVar13 = param_1 + 0x3b;
  local_1f0 = (uint)param_1[0x3c];
  uStack_1ec = (undefined4)((ulong)param_1[0x3c] >> 0x20);
  piVar14 = (int *)FUN_00cbd130(uVar23,&local_1f0);
  uVar23 = FUN_00cbf690(uVar21);
  uVar7 = FUN_00cc1360(plVar13);
  uVar8 = FUN_00cc08a0(uVar23);
  if (uVar8 <= uVar7) {
    uVar7 = 0;
  }
  bVar6 = (char)param_1[0x3b] != '\0';
  lVar25 = *(long *)(*(long *)puVar4 + 0x78);
  if (lVar25 == 0) {
    FUN_00c58c10(&local_240,0);
    if (local_240 != (long *)0x0) goto LAB_00c920b4;
LAB_00c92128:
    uVar26 = 0;
  }
  else {
    plVar12 = (long *)(lVar25 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_00c58c10(&local_240,lVar25);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    if (local_240 == (long *)0x0) goto LAB_00c92128;
LAB_00c920b4:
    local_200 = param_1[0x4b];
    local_1f0 = local_1f0 & 0xffffff00;
    uStack_1ec = 0;
    local_1e8 = 0x3ff;
    local_1b8 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    uVar24 = FUN_00cc4490(local_240,(char)param_1[0x3b],0xf,&local_200,&local_1f0);
    uVar26 = local_1e8;
    if ((uVar24 & 1) == 0) {
      uVar26 = 0;
    }
    if (local_240 != (long *)0x0) {
      (**(code **)(local_240[9] + 0x18))();
      local_240 = (long *)0x0;
    }
  }
  FUN_00cc08d0(uVar23,uVar7,bVar6,uVar26);
  local_200 = CONCAT44(extraout_var,extraout_s0);
  uStack_1f8 = extraout_var_01;
  uVar7 = FUN_00cc1380(plVar13);
  uVar8 = FUN_00cc08a0(uVar23);
  if (uVar8 <= uVar7) {
    uVar7 = 0;
  }
  uVar8 = FUN_00cc2af0(plVar13);
  FUN_00cc08d0(uVar23,uVar7,bVar6,0);
  local_210 = CONCAT44(extraout_var_00,extraout_s0_00);
  uStack_208 = extraout_var_02;
  if (piVar14 != (int *)0x0) {
    puVar16 = (ushort *)((long)piVar14 - (long)*piVar14);
    uVar2 = *puVar16;
    fVar27 = 0.0;
    if (uVar2 < 7) {
      uVar7 = 0;
      fVar28 = 0.0;
    }
    else {
      uVar7 = 0;
      if ((ulong)puVar16[3] != 0) {
        uVar7 = *(uint *)((long)piVar14 + (ulong)puVar16[3]);
      }
      fVar28 = (float)uVar7 / DAT_01d4c154;
      if (8 < uVar2) {
        uVar7 = 0;
        if ((ulong)puVar16[4] != 0) {
          uVar7 = *(uint *)((long)piVar14 + (ulong)puVar16[4]);
        }
        fVar27 = (float)uVar7 / DAT_01d4c154;
        if (10 < uVar2) {
          uVar7 = 0;
          if ((ulong)puVar16[5] != 0) {
            uVar7 = *(uint *)((long)piVar14 + (ulong)puVar16[5]);
          }
          goto LAB_00c92204;
        }
      }
      uVar7 = 0;
    }
LAB_00c92204:
    local_240 = (long *)CONCAT44(fVar27,fVar28);
    lVar25 = 0;
    pbStack_238 = (byte *)(ulong)(uint)((float)uVar7 / DAT_01d4c154);
    do {
      if (param_1[0x4e] == 0) {
LAB_00c924b0:
        local_218 = (long *)0x0;
      }
      else {
        FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + lVar25 * 0xc + 0x2e3));
        FUN_00c825a0(&local_218);
        plVar13 = local_218;
        if (local_218 != (long *)0x0) {
          plVar12 = (long *)(**(code **)local_218[10])(local_218 + 10);
          if (((*PTR_DAT_0271c490 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_0271c490), iVar9 != 0)) {
            uVar23 = FUN_00c95940();
            *(undefined8 *)puVar5 = uVar23;
            __cxa_guard_release(PTR_DAT_0271c490);
          }
          for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            if (plVar12 == (long *)puVar5) {
              (**(code **)(plVar13[9] + 0x10))(plVar13 + 9);
              bVar6 = false;
              goto LAB_00c922fc;
            }
          }
          plVar13 = (long *)0x0;
          bVar6 = true;
LAB_00c922fc:
          (**(code **)(*plVar13 + 0xa8))(&local_1f0,plVar13);
          FUN_00ad2020(&local_220,&local_1f0);
          if (CONCAT44(uStack_1ec,local_1f0) != 0) {
            (**(code **)(*(long *)(CONCAT44(uStack_1ec,local_1f0) + 0x48) + 0x18))();
            local_1f0 = 0;
            uStack_1ec = 0;
          }
          if (local_220 != 0) {
            local_1f0 = 0xf916e605;
            uStack_1ec = 0xd7a84925;
            local_1e8 = 0x1cfd801;
            uStack_1e4 = 0;
            local_1e0 = 0xd;
            local_1d8 = 0;
            FUN_00ca44f0(local_220,&local_240,&local_1f0);
            if (local_1d8 != 0) {
              (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
              local_1d8 = 0;
            }
            if (lVar25 == 0xf) {
              local_1f0 = 0xfc9d0a6;
              uStack_1ec = 0x1e84c97e;
              local_1e8 = 0x1d18089;
              uStack_1e4 = 0;
              local_1e0 = 0x12;
              local_1d8 = 0;
              FUN_00ca44f0(local_220,&local_200,&local_1f0);
joined_r0x00c92404:
              if (local_1d8 != 0) {
                (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
                local_1d8 = 0;
              }
            }
            else if (lVar25 == 8 && ((uVar8 ^ 0xffffffff) & 1) == 0) {
              local_1f0 = 0xa48210d2;
              uStack_1ec = 0xadc08ff9;
              local_1e8 = 0x1d1b444;
              uStack_1e4 = 0;
              local_1e0 = 0x10;
              local_1d8 = 0;
              FUN_00ca44f0(local_220,&local_210,&local_1f0);
              goto joined_r0x00c92404;
            }
            if (*(char *)((long)local_70 + lVar25 + -0x10) != '\0') {
              local_1f0 = 0xa48210d2;
              uStack_1ec = 0xadc08ff9;
              local_1e8 = 0x1d1b444;
              uStack_1e4 = 0;
              local_1e0 = 0x10;
              local_1d8 = 0;
              FUN_00ca44f0(local_220,&local_b0,&local_1f0);
              if (local_1d8 != 0) {
                (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
                local_1d8 = 0;
              }
            }
            if (local_220 != 0) {
              (**(code **)(*(long *)(local_220 + 0x48) + 0x18))();
              local_220 = 0;
            }
          }
          if (!bVar6) {
            (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
          }
          if (local_218 != (long *)0x0) {
            (**(code **)(local_218[9] + 0x18))();
            goto LAB_00c924b0;
          }
        }
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 != 0x10);
  }
  local_218 = (long *)param_1[0x4a];
  uVar23 = FUN_00cbf620(uVar21,(char)param_1[0x3b]);
  lVar25 = FUN_00c97270(uVar23,&local_218);
  pcVar18 = "Barefoot";
  if (lVar25 != 0) {
    pbVar15 = (byte *)FUN_00c97560(uVar23,lVar25);
    pcVar18 = "Barefoot";
    if (pbVar15 != (byte *)0x0) {
      pcVar18 = (char *)pbVar15;
    }
  }
  (**(code **)(*param_1 + 0x98))(&local_1f0,param_1);
  puVar4 = PTR_DAT_02715080;
  puVar5 = PTR_DAT_02715078;
  lVar25 = CONCAT44(uStack_1ec,local_1f0);
  if ((lVar25 == 0) || (*(int *)(lVar25 + 0x54) == 0)) {
    lVar19 = 0;
  }
  else {
    piVar14 = (int *)(lVar25 + 0x54);
    iVar9 = *(int *)(lVar25 + 0x54);
    do {
      while( true ) {
        puVar22 = *(undefined8 **)(lVar25 + 0x58);
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar23 = FUN_00a87090();
          *(undefined8 *)puVar4 = uVar23;
          __cxa_guard_release(puVar5);
        }
        lVar19 = 0;
        if (puVar22 == (undefined8 *)0x0) goto LAB_00c925c4;
        while (puVar22 != (undefined8 *)puVar4) {
          puVar22 = (undefined8 *)*puVar22;
          if (puVar22 == (undefined8 *)0x0) {
            lVar19 = 0;
            goto LAB_00c925c4;
          }
        }
        iVar10 = *piVar14;
        if (iVar10 != iVar9) break;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar19 = 0;
          if (*(long *)(lVar25 + 0x60) != 0) {
            lVar19 = *(long *)(lVar25 + 0x60) + -0x50;
          }
          goto LAB_00c925c4;
        }
        lVar19 = 0;
        iVar9 = iVar10;
        if (iVar10 == 0) goto LAB_00c925c4;
      }
      ClearExclusiveLocal();
      lVar19 = 0;
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_00c925c4:
  lVar25 = FUN_00ad9f80(lVar19,&local_240);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  }
  if (CONCAT44(uStack_1ec,local_1f0) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_1ec,local_1f0) + 0x48) + 0x18))();
    local_1f0 = 0;
    uStack_1ec = 0;
  }
  if (lVar25 != 0) {
    uVar23 = *(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x78);
    local_1f0 = 0x1772973;
    uStack_1ec = 0x8395fef4;
    local_1e8 = 0x1d308bc;
    uStack_1e4 = 0;
    local_1e0 = 5;
    local_1d8 = 0;
    local_230 = strlen(pcVar18);
    bVar1 = *pcVar18;
    local_240 = (long *)0xcbf29ce484222645;
    if (bVar1 != 0) {
      local_240 = (long *)0xcbf29ce484222645;
      pbVar15 = (byte *)pcVar18;
      do {
        pbVar15 = pbVar15 + 1;
        local_240 = (long *)(((ulong)local_240 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar15;
      } while (bVar1 != 0);
    }
    local_228 = 0;
    pbStack_238 = (byte *)pcVar18;
    FUN_00895ec0(uVar23,&local_1f0,&local_240);
    if (local_228 != 0) {
      (**(code **)(*(long *)(local_228 + 0x48) + 0x18))();
      local_228 = 0;
    }
    if (local_1d8 != 0) {
      (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
      local_1d8 = 0;
    }
  }
  local_218 = (long *)param_1[0x46];
  uVar21 = FUN_00cbf620(uVar21,(char)param_1[0x3b]);
  lVar25 = FUN_00c97270(uVar21,&local_218);
  pcVar18 = "NoBag";
  if (lVar25 != 0) {
    pbVar15 = (byte *)FUN_00c97560(uVar21,lVar25);
    pcVar18 = "NoBag";
    if (pbVar15 != (byte *)0x0) {
      pcVar18 = (char *)pbVar15;
    }
  }
  (**(code **)(*param_1 + 0x98))(&local_1f0,param_1);
  puVar4 = PTR_DAT_02715080;
  puVar5 = PTR_DAT_02715078;
  lVar25 = CONCAT44(uStack_1ec,local_1f0);
  if ((lVar25 == 0) || (*(int *)(lVar25 + 0x54) == 0)) {
    lVar19 = 0;
  }
  else {
    piVar14 = (int *)(lVar25 + 0x54);
    iVar9 = *(int *)(lVar25 + 0x54);
    do {
      while( true ) {
        puVar22 = *(undefined8 **)(lVar25 + 0x58);
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar21 = FUN_00a87090();
          *(undefined8 *)puVar4 = uVar21;
          __cxa_guard_release(puVar5);
        }
        lVar19 = 0;
        if (puVar22 == (undefined8 *)0x0) goto LAB_00c927c4;
        while (puVar22 != (undefined8 *)puVar4) {
          puVar22 = (undefined8 *)*puVar22;
          if (puVar22 == (undefined8 *)0x0) {
            lVar19 = 0;
            goto LAB_00c927c4;
          }
        }
        iVar10 = *piVar14;
        if (iVar10 != iVar9) break;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar19 = 0;
          if (*(long *)(lVar25 + 0x60) != 0) {
            lVar19 = *(long *)(lVar25 + 0x60) + -0x50;
          }
          goto LAB_00c927c4;
        }
        lVar19 = 0;
        iVar9 = iVar10;
        if (iVar10 == 0) goto LAB_00c927c4;
      }
      ClearExclusiveLocal();
      lVar19 = 0;
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_00c927c4:
  lVar25 = FUN_00ad9f80(lVar19,&local_240);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  }
  if (CONCAT44(uStack_1ec,local_1f0) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_1ec,local_1f0) + 0x48) + 0x18))();
    local_1f0 = 0;
    uStack_1ec = 0;
  }
  if (lVar25 != 0) {
    uVar21 = *(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x78);
    local_1f0 = 0x8fc30e11;
    uStack_1ec = 0xd097e126;
    local_1e8 = 0x1d44d54;
    uStack_1e4 = 0;
    local_1e0 = 3;
    local_1d8 = 0;
    local_230 = strlen(pcVar18);
    bVar1 = *pcVar18;
    local_240 = (long *)0xcbf29ce484222645;
    pbVar15 = (byte *)pcVar18;
    while (bVar1 != 0) {
      pbVar15 = pbVar15 + 1;
      local_240 = (long *)(((ulong)local_240 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar15;
    }
    local_228 = 0;
    pbStack_238 = (byte *)pcVar18;
    FUN_00895ec0(uVar21,&local_1f0,&local_240);
    if (local_228 != 0) {
      (**(code **)(*(long *)(local_228 + 0x48) + 0x18))();
      local_228 = 0;
    }
    if (local_1d8 != 0) {
      (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
      local_1d8 = 0;
    }
  }
LAB_00c928ac:
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return;
}


