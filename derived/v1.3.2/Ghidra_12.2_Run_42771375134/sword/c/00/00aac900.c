/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aac900; name: FUN_00aac900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aac900(long param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  long local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  lVar8 = FUN_00aad1c0();
  if (lVar8 != 0) {
    FUN_007733c0(lVar8,0);
    uVar15 = FUN_00773540(lVar8,1);
    *(undefined4 *)(param_1 + 0x4c8) = uVar15;
    fVar16 = (float)FUN_00773540(lVar8,0);
    fVar16 = *(float *)(param_1 + 0x4c8) / fVar16;
    *(ulong *)(param_1 + 0x418) = (ulong)(uint)fVar16;
    *(ulong *)(param_1 + 0x410) = CONCAT44(fVar16,fVar16);
    uVar6 = FUN_007738b0(lVar8);
    *(undefined1 *)(param_1 + 0x4c4) = uVar6;
  }
  FUN_00aacf90(&local_90,param_1);
  lVar8 = local_90;
  FUN_007270a0(local_90,0x40);
  if (lVar8 != 0) {
    plVar13 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    local_90 = 0;
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_00aacf90(&local_38,param_1);
  FUN_01066f60(lVar8,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if ((*(int *)(param_1 + 0x4ec) == 0) ||
     ((*(int *)(param_1 + 0x4ec) == 2 && (*(int *)(param_1 + 0x4d8) == 0x37a)))) {
    *(undefined4 *)(param_1 + 0x4d0) = 0x3f800000;
    FUN_00aadd30(&local_90,param_1);
    lVar8 = local_90;
    if (local_90 != 0) {
      FUN_0069c550(*(undefined4 *)(param_1 + 0x4d0),local_90);
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      local_90 = 0;
    }
    cVar3 = *(char *)(param_1 + 0x4c4);
    goto joined_r0x00aace38;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_48 = *(long *)(param_1 + 0x4b8);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_00c7a5c0(&local_90,lVar8,&local_48);
  lVar2 = local_90;
  puVar5 = PTR_DAT_02719788;
  if (local_90 == 0) {
LAB_00aacbf0:
    lVar9 = *(long *)(param_1 + 0x4f8);
  }
  else {
    if (*(int *)(local_90 + 0x54) != 0) {
      piVar1 = (int *)(local_90 + 0x54);
      pbVar11 = PTR_DAT_02719780;
      iVar12 = *(int *)(local_90 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar2 + 0x58);
          if (((*pbVar11 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_02719780), pbVar11 = PTR_DAT_02719780, iVar7 != 0)
             ) {
            uVar14 = FUN_00706e40();
            *(undefined8 *)puVar5 = uVar14;
            __cxa_guard_release(PTR_DAT_02719780);
            pbVar11 = PTR_DAT_02719780;
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_00aacbdc;
            if (plVar13 == (long *)puVar5) break;
            plVar13 = (long *)*plVar13;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar12) break;
          ClearExclusiveLocal();
          iVar12 = iVar7;
          if (iVar7 == 0) goto LAB_00aacbf0;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = *(long *)(lVar2 + 0x60);
          lVar2 = 0;
          if (lVar9 != 0) {
            lVar2 = lVar9 + -0x50;
          }
          lVar9 = *(long *)(param_1 + 0x4f8);
          goto joined_r0x00aacf80;
        }
        iVar12 = iVar7;
      } while (iVar7 != 0);
      goto LAB_00aacbf0;
    }
LAB_00aacbdc:
    lVar9 = *(long *)(param_1 + 0x4f8);
  }
  lVar2 = 0;
joined_r0x00aacf80:
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x4f8) = 0;
  }
  *(long *)(param_1 + 0x4f8) = lVar2;
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  uVar14 = *(undefined8 *)(param_1 + 0x4f8);
  lVar8 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x3f8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_50 = lVar8;
  FUN_014a5d90(uVar14,&local_50,0x4f);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x4f8);
  local_58 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x400);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_014a5e40(uVar14,&local_58,0x4f);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x4f8) + 0x390) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x4f8) + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0x3f000000;
  FUN_00aadd30(&local_90,param_1);
  lVar8 = local_90;
  if (local_90 != 0) {
    FUN_0069c550(*(undefined4 *)(param_1 + 0x4d0),local_90);
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    local_90 = 0;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x4f8) + 0x270);
  if (lVar8 == 0) {
    fVar16 = (float)*(undefined8 *)(param_1 + 0x410) * _DAT_00000070;
    fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20) * _DAT_00000070;
    plVar13 = (long *)(*(long *)(param_1 + 0x4f8) + 0x270);
    *(ulong *)(param_1 + 0x418) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x418) >> 0x20) * _DAT_00000070,
                  (float)*(undefined8 *)(param_1 + 0x418) * _DAT_00000070);
    *(ulong *)(param_1 + 0x410) = CONCAT44(fVar18,fVar16);
    lVar8 = *plVar13;
    if (lVar8 != 0) goto LAB_00aacd7c;
LAB_00aace10:
    *(undefined1 *)(param_1 + 0x4c4) = DAT_00000074;
    lVar8 = *plVar13;
  }
  else {
    plVar13 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    fVar16 = *(float *)(lVar8 + 0x70);
    *(ulong *)(param_1 + 0x418) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x418) >> 0x20) * fVar16,
                  (float)*(undefined8 *)(param_1 + 0x418) * fVar16);
    *(ulong *)(param_1 + 0x410) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20) * fVar16,
                  (float)*(undefined8 *)(param_1 + 0x410) * fVar16);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar13 = (long *)(*(long *)(param_1 + 0x4f8) + 0x270);
    lVar8 = *plVar13;
    if (lVar8 == 0) goto LAB_00aace10;
LAB_00aacd7c:
    plVar13 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    *(undefined1 *)(param_1 + 0x4c4) = *(undefined1 *)(lVar8 + 0x74);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    lVar8 = *(long *)(*(long *)(param_1 + 0x4f8) + 0x270);
  }
  if (lVar8 == 0) {
    uVar10 = (ulong)_DAT_00000080;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(ulong *)(param_1 + 0x3f0) = uVar10 << 0x20;
    cVar3 = *(char *)(param_1 + 0x4c4);
  }
  else {
    plVar13 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    uVar17 = *(uint *)(lVar8 + 0x80);
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(ulong *)(param_1 + 0x3f0) = (ulong)uVar17 << 0x20;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    cVar3 = *(char *)(param_1 + 0x4c4);
  }
joined_r0x00aace38:
  if (cVar3 == '\0') {
    FUN_00aacf90(&local_90,param_1);
    lVar8 = local_90;
    FUN_007271d0(0xc1f00000,local_90);
    if (lVar8 != 0) {
      plVar13 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      local_90 = 0;
    }
  }
  FUN_00aad540(param_1);
  FUN_012b4040(auStack_68);
  FUN_00a76260(*(undefined8 *)(param_1 + 0x3c0),param_1 + 0x4d8,auStack_68);
  uVar10 = FUN_012b4090(auStack_68);
  if ((uVar10 & 1) != 0) {
    local_80 = 0xb;
    local_90 = -0x1e509bf122e5a84;
    pcStack_88 = "adjustScale";
    FUN_012b4250(auStack_78,auStack_68,&local_90);
    fVar16 = (float)FUN_012b4630(0,auStack_78);
    if (fVar16 != -1.0) {
      local_80 = 0xb;
      local_90 = -0x1e509bf122e5a84;
      pcStack_88 = "adjustScale";
      FUN_012b4250(auStack_78,auStack_68,&local_90);
      uVar15 = FUN_012b4630(0,auStack_78);
      *(undefined4 *)(param_1 + 0x4c8) = uVar15;
    }
    local_80 = 0xe;
    local_90 = -0x32b8672bdce855d5;
    pcStack_88 = "camAdjustScale";
    FUN_012b4250(auStack_78,auStack_68,&local_90);
    fVar16 = (float)FUN_012b4630(0,auStack_78);
    if (fVar16 != -1.0) {
      local_80 = 0xe;
      local_90 = -0x32b8672bdce855d5;
      pcStack_88 = "camAdjustScale";
      FUN_012b4250(auStack_78,auStack_68,&local_90);
      uVar15 = FUN_012b4630(0,auStack_78);
      *(undefined4 *)(param_1 + 0x4cc) = uVar15;
    }
  }
  return;
}


