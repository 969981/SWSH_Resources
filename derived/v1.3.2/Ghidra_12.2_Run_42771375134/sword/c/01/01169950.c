/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01169950; name: FUN_01169950
 */


bool FUN_01169950(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long local_168;
  long local_160;
  long local_158;
  long *local_150 [2];
  long alStack_140 [4];
  long *local_120;
  long *local_110;
  long local_108;
  long local_100;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  char local_c0 [16];
  long *local_b0 [2];
  long alStack_a0 [4];
  long *local_80;
  undefined8 local_70;
  long local_60;
  
  lVar4 = FUN_011537b0(param_1 + 0x88);
  if (lVar4 == 0) {
    return false;
  }
  lVar10 = *(long *)PTR_DAT_02718f20;
  if (*(long *)PTR_DAT_027185f8 == 0 || lVar10 == 0) {
    return false;
  }
  FUN_0120e660(local_c0);
  if (local_c0[0] == '\0') {
    return false;
  }
  local_d8 = *(long **)(param_1 + 8);
  local_e8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_f0 = (long *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  FUN_007a2d60(local_150,local_b0);
  puVar1 = PTR_DAT_02710860;
  if (local_108 != 0) {
    lVar12 = local_108 << 3;
    plVar9 = local_110;
    do {
      FUN_011ffbe0(&local_158,lVar10,*plVar9);
      if ((local_158 == 0) || (lVar5 = *(long *)(local_158 + 0x10), lVar5 == 0)) goto LAB_01169af4;
      local_168 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      plVar11 = local_d8;
      plVar13 = local_e8;
      local_160 = *plVar9;
      if (local_e8 < local_e0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        lVar5 = local_168;
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        local_168 = 0;
        *plVar13 = lVar5;
        plVar13[1] = local_160;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        local_e8 = local_e8 + 2;
      }
      else {
        FUN_0116a120(&local_f0,&local_168);
        if (local_168 != 0) {
          (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
          local_168 = 0;
        }
      }
      plVar9 = plVar9 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  uVar7 = FUN_011f2730(lVar4,&local_f0);
  if ((uVar7 & 1) == 0) {
LAB_01169af4:
    bVar2 = false;
  }
  else {
    iVar3 = FUN_011f2680(lVar4);
    bVar2 = iVar3 == 0;
  }
  if (local_100 != 0) {
    (**(code **)(*local_150[0] + 0x18))(local_150[0],local_110,local_100 << 3,8);
  }
  if (alStack_140 == local_120) {
    pcVar8 = *(code **)(*local_120 + 0x20);
  }
  else {
    if (local_120 == (long *)0x0) goto LAB_01169b54;
    pcVar8 = *(code **)(*local_120 + 0x28);
  }
  (*pcVar8)();
LAB_01169b54:
  plVar9 = local_f0;
  if (local_f0 != (long *)0x0) {
    if (local_e8 != local_f0) {
      plVar13 = local_e8;
      do {
        plVar11 = plVar13 + -2;
        if (*plVar11 != 0) {
          (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
          plVar13[-2] = 0;
        }
        plVar13 = plVar11;
      } while (plVar9 != plVar11);
    }
    local_e8 = plVar9;
    (**(code **)(*local_d8 + 0x18))(local_d8,local_f0,(long)local_e0 - (long)local_f0,8);
  }
  if (local_c0[0] != '\0') {
    if (local_60 != 0) {
      (**(code **)(*local_b0[0] + 0x18))(local_b0[0],local_70,local_60 << 3,8);
    }
    if (alStack_a0 == local_80) {
      pcVar8 = *(code **)(*local_80 + 0x20);
    }
    else {
      if (local_80 == (long *)0x0) {
        return bVar2;
      }
      pcVar8 = *(code **)(*local_80 + 0x28);
    }
    (*pcVar8)();
  }
  return bVar2;
}


