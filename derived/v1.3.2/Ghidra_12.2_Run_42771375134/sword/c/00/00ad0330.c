/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad0330; name: FUN_00ad0330
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ad0330(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined1 auStack_50 [16];
  long local_38;
  
  FUN_012b4040(auStack_50);
  FUN_012b4070(param_1 + 0x530,auStack_50);
  FUN_012b4070(param_1 + 0x540,auStack_50);
  lVar8 = FUN_00ad1430(param_1);
  if (lVar8 == 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  }
  else {
    FUN_007733c0(lVar8,0);
    uVar17 = FUN_00773540(lVar8,1);
    *(undefined4 *)(param_1 + 0x4d8) = uVar17;
    fVar18 = (float)FUN_00773540(lVar8,0);
    fVar18 = *(float *)(param_1 + 0x4d8) / fVar18;
    lVar9 = FUN_009c5ff0(*(undefined8 *)(param_1 + 0x3c0));
    fVar19 = fVar18;
    if ((((lVar9 != 0) && (uVar10 = FUN_008f35c0(lVar9,0x400), (uVar10 & 1) != 0)) &&
        (uVar10 = (**(code **)(**(long **)(param_1 + 0x3c0) + 0x748))
                            (*(long **)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3c8)),
        (uVar10 & 1) == 0)) &&
       ((*(int *)(param_1 + 0x4f0) == 0x37a &&
        (fVar19 = fVar18 * DAT_01d4bccc, *(short *)(param_1 + 0x4f4) != 0)))) {
      fVar19 = fVar18;
    }
    *(ulong *)(param_1 + 0x418) = (ulong)(uint)fVar19;
    *(ulong *)(param_1 + 0x410) = CONCAT44(fVar19,fVar19);
    uVar6 = FUN_007738b0(lVar8);
    *(undefined1 *)(param_1 + 0x4d4) = uVar6;
    lVar8 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  plVar16 = (long *)(param_1 + 0x3c0);
  local_38 = *(long *)(param_1 + 0x510);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a1d0(&local_98,lVar8,&local_38);
  FUN_00ad2020(&local_58,&local_98);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  FUN_007270a0(local_58,0x40);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(*plVar16 + 0x528);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  local_38 = *(long *)(param_1 + 0x510);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a1d0(&local_98,lVar9,&local_38);
  FUN_00ad2020(&local_60,&local_98);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  FUN_01066f60(lVar8,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if ((*(int *)(param_1 + 0x504) == 0) ||
     ((*(int *)(param_1 + 0x504) == 2 && (*(int *)(param_1 + 0x4f0) == 0x37a)))) {
    *(undefined4 *)(param_1 + 0x4e8) = 0x3f800000;
    FUN_00acda00(param_1);
    uVar15 = 0;
    goto LAB_00ad0958;
  }
  lVar8 = *(long *)(*plVar16 + 0x528);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_68 = *(long *)(param_1 + 0x510);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_00c7a5c0(&local_98,lVar8,&local_68);
  lVar9 = local_98;
  puVar5 = PTR_DAT_02719788;
  puVar4 = PTR_DAT_02719780;
  if (local_98 == 0) {
LAB_00ad0720:
    lVar11 = *(long *)(param_1 + 0x560);
  }
  else {
    if (*(int *)(local_98 + 0x54) != 0) {
      piVar1 = (int *)(local_98 + 0x54);
      iVar13 = *(int *)(local_98 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar9 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            uVar15 = FUN_00706e40();
            *(undefined8 *)puVar5 = uVar15;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_00ad070c;
            if (plVar14 == (long *)puVar5) break;
            plVar14 = (long *)*plVar14;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar13) break;
          ClearExclusiveLocal();
          iVar13 = iVar7;
          if (iVar7 == 0) goto LAB_00ad0720;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar9 + 0x60);
          lVar9 = 0;
          if (lVar11 != 0) {
            lVar9 = lVar11 + -0x50;
          }
          lVar11 = *(long *)(param_1 + 0x560);
          goto joined_r0x00ad0b60;
        }
        iVar13 = iVar7;
      } while (iVar7 != 0);
      goto LAB_00ad0720;
    }
LAB_00ad070c:
    lVar11 = *(long *)(param_1 + 0x560);
  }
  lVar9 = 0;
joined_r0x00ad0b60:
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x560) = 0;
  }
  *(long *)(param_1 + 0x560) = lVar9;
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  uVar15 = *(undefined8 *)(param_1 + 0x560);
  lVar8 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x3f8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_70 = lVar8;
  FUN_014a5d90(uVar15,&local_70,0x4f);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x560);
  local_78 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x400);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  FUN_014a5e40(uVar15,&local_78,0x4f);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x560) + 0x390) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x560) + 0x3b0) = 0;
  if (*(int *)(param_1 + 0x4f0) == 0x37a) {
    uVar17 = 0x3f800000;
    if (*(int *)(param_1 + 0x504) != 2) {
      uVar17 = 0x3f000000;
    }
  }
  else {
    uVar17 = 0x3f000000;
  }
  *(undefined4 *)(param_1 + 0x4e8) = uVar17;
  FUN_00acda00(param_1);
  lVar8 = *(long *)(*(long *)(param_1 + 0x560) + 0x270);
  if (lVar8 == 0) {
    fVar19 = (float)*(undefined8 *)(param_1 + 0x410) * _DAT_00000070;
    fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20) * _DAT_00000070;
    plVar14 = (long *)(*(long *)(param_1 + 0x560) + 0x270);
    *(ulong *)(param_1 + 0x418) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x418) >> 0x20) * _DAT_00000070,
                  (float)*(undefined8 *)(param_1 + 0x418) * _DAT_00000070);
    *(ulong *)(param_1 + 0x410) = CONCAT44(fVar18,fVar19);
    lVar8 = *plVar14;
    if (lVar8 == 0) goto LAB_00ad0930;
LAB_00ad08a4:
    plVar14 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    *(undefined1 *)(param_1 + 0x4d4) = *(undefined1 *)(lVar8 + 0x74);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    lVar8 = *(long *)(*(long *)(param_1 + 0x560) + 0x270);
    if (lVar8 != 0) goto LAB_00ad08dc;
LAB_00ad0944:
    uVar10 = (ulong)_DAT_00000080;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(ulong *)(param_1 + 0x3f0) = uVar10 << 0x20;
  }
  else {
    plVar14 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    fVar19 = *(float *)(lVar8 + 0x70);
    *(ulong *)(param_1 + 0x418) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x418) >> 0x20) * fVar19,
                  (float)*(undefined8 *)(param_1 + 0x418) * fVar19);
    *(ulong *)(param_1 + 0x410) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20) * fVar19,
                  (float)*(undefined8 *)(param_1 + 0x410) * fVar19);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    plVar14 = (long *)(*(long *)(param_1 + 0x560) + 0x270);
    lVar8 = *plVar14;
    if (lVar8 != 0) goto LAB_00ad08a4;
LAB_00ad0930:
    *(undefined1 *)(param_1 + 0x4d4) = DAT_00000074;
    lVar8 = *plVar14;
    if (lVar8 == 0) goto LAB_00ad0944;
LAB_00ad08dc:
    plVar14 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    uVar20 = *(uint *)(lVar8 + 0x80);
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(ulong *)(param_1 + 0x3f0) = (ulong)uVar20 << 0x20;
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  uVar15 = 0x3f800000;
LAB_00ad0958:
  local_98 = -0x7a35d022930314c;
  local_90 = &DAT_01d0a936;
  local_88 = 4;
  local_80 = 0;
  FUN_00ad17f0(uVar15,param_1,&local_98,0);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (*(char *)(param_1 + 0x4d4) == '\0') {
    lVar8 = *(long *)(*plVar16 + 0x528);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_38 = *(long *)(param_1 + 0x510);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_00c7a1d0(&local_98,lVar8,&local_38);
    FUN_00ad2020(&local_58,&local_98);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    FUN_007271d0(0xc1f00000,local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
  }
  FUN_00ad18c0(param_1);
  FUN_00ad1a60(param_1);
  uVar17 = FUN_00ad1bd0(param_1);
  *(undefined4 *)(param_1 + 0x4c4) = uVar17;
  FUN_00ad1e50(&local_98,param_1);
  lVar8 = local_98;
  if (local_98 != 0) {
    pcVar12 = *(code **)(local_98 + 0x288);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(local_98 + 0x290) = 0;
      *(undefined8 *)(local_98 + 0x298) = 0;
      *(undefined8 *)(local_98 + 0x280) = 0;
      *(undefined8 *)(local_98 + 0x288) = 0;
      (*pcVar12)(local_98 + 0x2a0);
    }
    *(long *)(lVar8 + 0x2a0) = param_1;
    *(undefined1 **)(lVar8 + 0x280) = &LAB_00ad9510;
    *(undefined1 **)(lVar8 + 0x288) = &LAB_00ad95a0;
    *(undefined1 **)(lVar8 + 0x290) = &LAB_00ad95b0;
    *(undefined1 **)(lVar8 + 0x298) = &LAB_00ad95c0;
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


