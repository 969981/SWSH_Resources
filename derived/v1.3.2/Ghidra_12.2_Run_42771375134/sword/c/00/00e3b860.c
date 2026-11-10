/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3b860; name: FUN_00e3b860
 */


void FUN_00e3b860(long param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined4 uVar17;
  float extraout_var;
  float fVar18;
  undefined4 extraout_var_00;
  float extraout_var_01;
  float fVar19;
  float fVar20;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  float local_34;
  
  uVar8 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  uVar9 = FUN_0150e0a0(lVar14);
  if (((((uVar9 & 1) == 0) && (uVar9 = FUN_01020290(uVar8,0x40), (uVar9 & 1) != 0)) &&
      (*(char *)(param_1 + 0x600) == '\0')) && (lVar16 = *(long *)(param_1 + 0x3a8), lVar16 != 0)) {
    plVar15 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    piVar1 = (int *)(lVar16 + 0x54);
    if (*piVar1 != 0) {
      if (*piVar1 != 0) {
        puVar10 = PTR_DAT_02719500;
        pbVar12 = PTR_DAT_027194f8;
        iVar11 = *piVar1;
        do {
          plVar13 = *(long **)(lVar16 + 0x58);
          if (((*pbVar12 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_027194f8), pbVar12 = PTR_DAT_027194f8,
             puVar10 = PTR_DAT_02719500, iVar7 != 0)) {
            if (((*PTR_DAT_02715078 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_02715078), iVar7 != 0)) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar8;
              __cxa_guard_release(PTR_DAT_02715078);
            }
            puVar10 = PTR_DAT_02719500;
            *(undefined **)PTR_DAT_02719500 = PTR_DAT_02715080;
            pbVar12 = PTR_DAT_027194f8;
            __cxa_guard_release(PTR_DAT_027194f8);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_00e3ba2c;
            if (plVar13 == (long *)puVar10) break;
            plVar13 = (long *)*plVar13;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar11) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar4 = 0;
              if (*(long *)(lVar16 + 0x60) != 0) {
                lVar4 = *(long *)(lVar16 + 0x60) + -0x50;
              }
              FUN_00ac7ad0(lVar4 + 0xa0);
              fVar18 = extraout_var_01;
              if (lVar4 != 0) {
                (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
              }
              goto LAB_00e3ba54;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar7;
        } while (iVar7 != 0);
      }
LAB_00e3ba2c:
      FUN_00ac7ad0(0xa0);
      fVar18 = extraout_var;
LAB_00e3ba54:
      fVar20 = *(float *)PTR_FloatPi_02715160;
      fVar19 = *(float *)PTR_FloatDegree180_027194f0;
      *(undefined4 *)(param_1 + 0x60c) = 0;
      fVar19 = (fVar20 / fVar19) * DAT_01d4c284;
      *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(param_1 + 0x3d0);
      *(undefined1 *)(param_1 + 0x600) = 1;
      *(float *)(param_1 + 0x608) = fVar18 + fVar19;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if (*(char *)(param_1 + 0x600) == '\0') goto LAB_00e3bba8;
  local_34 = 1.0;
  iVar11 = *(int *)(param_1 + 0x60c) + 1;
  *(int *)(param_1 + 0x60c) = iVar11;
  if (0 < *(int *)(param_1 + 0x5f8)) {
    local_34 = (float)iVar11 / (float)*(int *)(param_1 + 0x5f8);
  }
  pfVar2 = (float *)local_70;
  if (local_34 <= 1.0) {
    pfVar2 = &local_34;
  }
  local_60._0_8_ = local_60._0_8_ & 0xffffffff00000000;
  local_70._0_4_ = 0x3f800000;
  pfVar3 = (float *)local_60;
  if (0.0 <= local_34) {
    pfVar3 = pfVar2;
  }
  local_34 = *pfVar3;
  if (*(uint *)(param_1 + 0x5fc) == 0xffffffff) {
    local_34 = 1.0;
LAB_00e3bb9c:
    uVar17 = *(undefined4 *)(param_1 + 0x608);
    *(undefined1 *)(param_1 + 0x600) = 0;
  }
  else {
    uVar8 = (**(code **)(PTR_PTR_02718e90 + (ulong)*(uint *)(param_1 + 0x5fc) * 8))(local_34);
    local_34 = (float)uVar8;
    if (1.0 <= local_34) goto LAB_00e3bb9c;
    local_60 = FUN_00a92cd0(*(undefined4 *)(param_1 + 0x604),0,0);
    local_70 = FUN_00a92cd0(*(undefined4 *)(param_1 + 0x608),0,0);
    local_80 = FUN_0075e7d0(uVar8,local_60,local_70);
    FUN_00ac7ad0(local_80);
    uVar17 = extraout_var_00;
  }
  *(undefined4 *)(param_1 + 0x3d0) = uVar17;
LAB_00e3bba8:
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  return;
}


