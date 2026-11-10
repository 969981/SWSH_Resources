/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00785ed0; name: FUN_00785ed0
 */


void FUN_00785ed0(long param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long local_1c0;
  undefined8 uStack_1b8;
  undefined1 *local_1b0;
  long local_1a8;
  long local_1a0;
  undefined *local_190;
  long local_188;
  long local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  long local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [16];
  long local_70 [2];
  
  FUN_00782ca0(&local_190,*(undefined8 *)PTR_DAT_02710470);
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  plVar15 = *(long **)(param_1 + 8);
  *(undefined **)(param_1 + 0xb0) = local_190;
  uVar8 = (**(code **)(*plVar15 + 0x10))(plVar15,0x60,8);
  puVar6 = PTR_DAT_02710860;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_007864cc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  FUN_019b1980(uVar8);
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  plVar18 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))(plVar18);
    (**(code **)(**(long **)(param_1 + 200) + 0x18))
              (*(long **)(param_1 + 200),plVar18,*(undefined8 *)(param_1 + 0xd0),
               *(undefined8 *)(param_1 + 0xd8));
  }
  *(long **)(param_1 + 200) = plVar15;
  *(undefined8 *)(param_1 + 0xd0) = 0x60;
  *(undefined8 *)(param_1 + 0xd8) = 8;
  FUN_019aeb90(auStack_80);
  local_180 = 0;
  local_178 = (code *)0x0;
  local_190 = (undefined *)0x0;
  local_188 = 0;
  uVar16 = *(undefined8 *)(param_1 + 0xc0);
  uVar8 = FUN_00789160(*param_2);
  uVar10 = FUN_007890a0(*param_2,param_4);
  FUN_019b1bb0(uVar16,auStack_80,PTR_DAT_027155e8,uVar8,param_6,param_5,uVar10,&local_190,0);
  FUN_007864d0(param_1);
  FUN_00786650(param_1,auStack_80);
  lVar9 = *(long *)(param_1 + 0xb0);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar7 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        uVar11 = FUN_007880a0(*(undefined8 *)(lVar9 + 0x58));
        if ((uVar11 & 1) == 0) goto LAB_007860c4;
        iVar2 = *piVar1;
        if (iVar2 != iVar7) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            *(long *)(param_1 + 0x198) = lVar9 + 0x10;
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
            goto LAB_007860cc;
          }
          goto LAB_007860c4;
        }
        iVar7 = iVar2;
        if (iVar2 == 0) goto LAB_007860c4;
      }
      ClearExclusiveLocal();
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_007860c4:
  *(undefined8 *)(param_1 + 0x198) = 0x60;
LAB_007860cc:
  *(long *)(param_1 + 0x1a8) = param_1 + 0x2c0;
  *(long *)(param_1 + 0x1b0) = param_1 + 0x2c0;
  iVar7 = FUN_00785e10(*(undefined8 *)(param_1 + 0xc0));
  if (0 < iVar7) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    local_190 = PTR_DAT_02710810 + 0x10;
    local_188 = 0;
    FUN_0010f560(&local_1c0,PTR_DAT_02710908,"shader/gamma_correction.bnsh",&DAT_01d38550);
    lVar9 = *(long *)PTR_DAT_02710788;
    lVar13 = *(long *)(lVar9 + 0x1e8);
    if (lVar13 == 0) {
      lVar13 = *(long *)(lVar9 + 8);
    }
    FUN_0010d7b0(local_70,lVar9,0,&local_1c0,0,lVar13,0);
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    }
    local_188 = local_70[0];
    if (local_70[0] != 0) {
      plVar15 = (long *)(local_70[0] + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      if ((local_180 != 0) || (local_100 != 0)) {
        FUN_006e1e70(local_70[0],&local_190,1);
      }
      FUN_006e1be0(local_70[0]);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    if ((local_1a8 != 0) && (local_1c0 != 0)) {
      (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
    }
    local_1c0 = 0;
    uStack_1b8 = 0xcbf29ce484222645;
    local_1b0 = &DAT_01d38550;
    local_1a8 = 0;
    if (local_1a0 != 0) {
      (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
      local_1a0 = 0;
    }
    plVar15 = *(long **)(param_1 + 8);
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_007864cc;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar13 = (**(code **)(*plVar15 + 0x10))(plVar15,0x68,8);
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    FUN_00789f60(lVar13,plVar15,&local_190);
    *(long **)(lVar13 + 8) = plVar15;
    *(long *)(lVar13 + 0x10) = lVar13;
    *(undefined8 *)(lVar13 + 0x18) = 0x68;
    *(undefined8 *)(lVar13 + 0x20) = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x330) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x330) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x330) = 0;
    }
    *(long *)(param_1 + 0x330) = lVar13;
    FUN_0078a390(lVar13,param_1 + 0xe0);
    local_190 = PTR_DAT_02710800 + 0x10;
    if (local_188 == 0) {
      local_188 = 0;
      pcVar5 = local_f8;
    }
    else {
      FUN_006e2100(local_188,&local_190);
      lVar9 = local_188;
      local_188 = 0;
      pcVar5 = local_f8;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
        pcVar5 = local_f8;
      }
    }
    local_f8 = pcVar5;
    if (pcVar5 != (code *)0x0) {
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      (*pcVar5)(auStack_e0);
    }
    pcVar5 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      (*pcVar5)(auStack_160);
    }
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
      local_188 = 0;
    }
  }
  if (param_3 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    lVar14 = (ulong)param_3 * 0x40;
    lVar9 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar14,8);
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_007864cc;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar15;
    lVar17 = 0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    do {
      FUN_007884d0(lVar9 + lVar17);
      lVar17 = lVar17 + 0x40;
    } while (lVar14 != lVar17);
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    lVar13 = *(long *)(param_1 + 0x288);
    *(long *)(param_1 + 0x288) = lVar9;
    if (lVar13 != 0) {
      uVar12 = *(ulong *)(param_1 + 0x298);
      uVar11 = uVar12 >> 6;
      if (uVar11 != 0) {
        lVar9 = lVar13;
        do {
          FUN_00788510(lVar9);
          uVar11 = uVar11 - 1;
          lVar9 = lVar9 + 0x40;
        } while (uVar11 != 0);
        uVar12 = *(ulong *)(param_1 + 0x298);
      }
      (**(code **)(**(long **)(param_1 + 0x290) + 0x18))
                (*(long **)(param_1 + 0x290),lVar13,uVar12,*(undefined8 *)(param_1 + 0x2a0));
    }
    *(long **)(param_1 + 0x290) = plVar15;
    *(long *)(param_1 + 0x298) = lVar14;
    *(undefined8 *)(param_1 + 0x2a0) = 8;
  }
  *(uint *)(param_1 + 0x2a8) = param_3;
  lVar9 = *param_2;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(param_1 + 0x2b0);
  *(long *)(param_1 + 0x2b0) = lVar9;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  *(undefined2 *)(param_1 + 0xb8) = 0x101;
  return;
}


