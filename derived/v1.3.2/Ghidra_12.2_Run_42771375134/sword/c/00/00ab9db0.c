/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab9db0; name: FUN_00ab9db0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ab9db0(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  long local_c0;
  undefined1 auStack_b8 [24];
  long local_a0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  long local_78;
  long local_70 [2];
  undefined1 *local_60;
  long local_58;
  long local_50;
  
  FUN_00a74a70(local_70,"bin/battle/waza/particle/eg_cmn/eg_cmn_land_smoke_g.ptcl");
  puVar6 = PTR_DAT_02719550;
  puVar5 = PTR_DAT_02719548;
  lVar12 = *(long *)(param_1 + 0xa0);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x54) == 0)) {
    lVar9 = 0;
  }
  else {
    piVar1 = (int *)(lVar12 + 0x54);
    iVar14 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        puVar10 = *(undefined8 **)(lVar12 + 0x58);
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar8 = FUN_00a8c390();
          *(undefined8 *)puVar6 = uVar8;
          __cxa_guard_release(puVar5);
        }
        lVar9 = 0;
        if (puVar10 == (undefined8 *)0x0) goto LAB_00ab9e94;
        while (puVar10 != (undefined8 *)puVar6) {
          puVar10 = (undefined8 *)*puVar10;
          if (puVar10 == (undefined8 *)0x0) {
            lVar9 = 0;
            goto LAB_00ab9e94;
          }
        }
        iVar7 = *piVar1;
        if (iVar7 != iVar14) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = 0;
          if (*(long *)(lVar12 + 0x60) != 0) {
            lVar9 = *(long *)(lVar12 + 0x60) + -0x50;
          }
          goto LAB_00ab9e94;
        }
        lVar9 = 0;
        iVar14 = iVar7;
        if (iVar7 == 0) goto LAB_00ab9e94;
      }
      ClearExclusiveLocal();
      lVar9 = 0;
      iVar14 = iVar7;
    } while (iVar7 != 0);
  }
LAB_00ab9e94:
  FUN_0010d170(&local_98,"Play_eg_poke_land");
  FUN_006cf0c0(&local_90,&local_98);
  FUN_0010d170(&local_c0,"Waist");
  FUN_006cf0c0(auStack_b8,&local_c0);
  FUN_00ad5e70(lVar9,&local_90,auStack_b8);
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  local_90 = 0x3d7389f7fe3d3139;
  FUN_00a82270(*(undefined8 *)(param_1 + 0x88),&local_90);
  if (local_58 != 0) {
    uVar8 = FUN_00d6efe0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x508),local_70);
    local_90 = 0;
    uStack_88 = 0;
    FUN_00a66750(*(undefined8 *)(param_1 + 0x88),&local_90);
    plVar13 = *(long **)(param_1 + 0x90);
    puVar11 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
    uVar2 = *puVar11;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar13 + 0x10))(plVar13,0x4d0,0x10);
    if (lVar9 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_00adc840(lVar9,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),&local_90,
                 (long)puVar11 + (ulong)uVar2);
    *(long **)(lVar9 + 8) = plVar13;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x4d0;
    *(undefined8 *)(lVar9 + 0x20) = 0x10;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    *(long *)(param_1 + 0xa8) = lVar9;
    FUN_00adc890(lVar9,uVar8,0,1,0);
    puVar6 = PTR_DAT_02719550;
    puVar5 = PTR_DAT_02719548;
    lVar12 = *(long *)(param_1 + 0xa0);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
      piVar1 = (int *)(lVar12 + 0x54);
      iVar14 = *(int *)(lVar12 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar12 + 0x58);
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar8 = FUN_00a8c390();
            *(undefined8 *)puVar6 = uVar8;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_00aba17c;
            if (plVar13 == (long *)puVar6) break;
            plVar13 = (long *)*plVar13;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar14) break;
          ClearExclusiveLocal();
          iVar14 = iVar7;
          if (iVar7 == 0) goto LAB_00aba17c;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x60);
          if (lVar12 != 0) {
            uVar15 = *(undefined8 *)(lVar12 + 0x388);
            uVar8 = *(undefined8 *)(lVar12 + 0x380);
            (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
            goto LAB_00aba184;
          }
          break;
        }
        iVar14 = iVar7;
      } while (iVar7 != 0);
    }
LAB_00aba17c:
    uVar8 = _DAT_000003d0;
    uVar15 = _DAT_000003d8;
LAB_00aba184:
    lVar12 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(lVar12 + 0x3d8) = uVar15;
    *(undefined8 *)(lVar12 + 0x3d0) = uVar8;
    uVar8 = _DAT_01d4aec0;
    lVar12 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(lVar12 + 0x408) = _UNK_01d4aec8;
    *(undefined8 *)(lVar12 + 0x400) = uVar8;
    *(undefined4 *)(param_1 + 200) = 0;
    if ((local_58 != 0) && (local_70[0] != 0)) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    }
  }
  local_70[0] = 0;
  local_70[1] = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return;
}


