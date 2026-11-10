/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c3a00; name: FUN_009c3a00
 */


void FUN_009c3a00(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  code *pcVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  long local_130;
  long lStack_128;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  long lStack_a8;
  long local_48;
  
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  lVar16 = *(long *)PTR_DAT_02716a30;
  if ((((lVar16 != 0) && (*(long *)(param_1 + 0xb0) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0xb0) + 0x54) != 0)) &&
     ((plVar17 = *(long **)(param_1 + 0xb8), plVar17 != (long *)0x0 &&
      (*(int *)(param_1 + 0x70) != 8)))) {
    for (lVar18 = *(long *)(lVar16 + 0x1a0); lVar18 != lVar16 + 0x198;
        lVar18 = *(long *)(lVar18 + 8)) {
      while ((bVar12 = (**(code **)(*plVar17 + 0x30))(plVar17,*(undefined8 *)(lVar18 + 0x10)),
             bVar12 == 5 || (*(char *)(param_1 + (ulong)bVar12 + 0xa5) != '\0'))) {
        lVar18 = *(long *)(lVar18 + 8);
        if (lVar18 == lVar16 + 0x198) goto LAB_009c3ac0;
      }
      *(undefined1 *)(param_1 + (ulong)bVar12 + 0xa0) = 1;
    }
  }
LAB_009c3ac0:
  switch(*(undefined4 *)(param_1 + 0x70)) {
  case 1:
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(&local_48);
    lVar16 = local_48;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    local_c0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    lStack_a8 = lVar16;
    local_b0 = param_1;
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    }
    lVar18 = local_48;
    local_d0 = &LAB_009c49f0;
    local_c8 = FUN_009c4bb0;
    local_c0 = &LAB_009c4bf0;
    puStack_b8 = &LAB_009c4c20;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    local_140 = (undefined1 *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    lStack_128 = lVar18;
    local_130 = param_1;
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
    }
    local_150 = &LAB_009c4c50;
    local_148 = FUN_009c4cd0;
    local_140 = &LAB_009c4d10;
    puStack_138 = &LAB_009c4d40;
    uVar13 = FUN_0127c080(DAT_01cd5138,&local_d0,&local_150);
    pcVar11 = local_148;
    if (local_148 != (code *)0x0) {
      local_140 = (undefined1 *)0x0;
      puStack_138 = (undefined1 *)0x0;
      local_150 = (undefined1 *)0x0;
      local_148 = (code *)0x0;
      (*pcVar11)(&local_130);
    }
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
    }
    pcVar11 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar11)(&local_b0);
    }
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
    }
    if ((uVar13 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = 2;
    }
    if (local_48 == 0) {
      return;
    }
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    return;
  default:
    goto switchD_009c3ae0_caseD_2;
  case 3:
    if (*(long *)(param_1 + 0xb0) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0xb0) + 0x54) == 0) {
      return;
    }
    if (*(undefined8 **)(param_1 + 0xb8) == (undefined8 *)0x0) {
      return;
    }
    uVar13 = (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    if ((uVar13 & 1) == 0) {
      return;
    }
    nn::os::GetSystemTick();
    uVar14 = nn::os::ConvertToTimeSpan();
    uVar13 = ((long)uVar14 >> 0x20) * 0xd7b634db + ((uVar14 & 0xffffffff) * 0xd7b634db >> 0x20);
    *(int *)(param_1 + 0x7c) =
         (int)((ulong)(((long)uVar14 >> 0x20) * 0x431bde82 + ((long)uVar13 >> 0x20) +
                      ((long)((uVar14 & 0xffffffff) * 0x431bde82 + (uVar13 & 0xffffffff)) >> 0x20))
              >> 0x12) - (int)((long)uVar14 >> 0x3f);
    uVar15 = 4;
    break;
  case 4:
    nn::os::GetSystemTick();
    uVar14 = nn::os::ConvertToTimeSpan();
    uVar13 = ((long)uVar14 >> 0x20) * 0xd7b634db + ((uVar14 & 0xffffffff) * 0xd7b634db >> 0x20);
    if ((long)((-(ulong)*(uint *)(param_1 + 0x7c) - ((long)uVar14 >> 0x3f)) +
              (((long)uVar14 >> 0x20) * 0x431bde82 + ((long)uVar13 >> 0x20) +
               ((long)((uVar14 & 0xffffffff) * 0x431bde82 + (uVar13 & 0xffffffff)) >> 0x20) >> 0x12)
              ) < 15000) {
      if (*(long *)(param_1 + 0xb0) == 0) {
        return;
      }
      if (*(int *)(*(long *)(param_1 + 0xb0) + 0x54) == 0) {
        return;
      }
      plVar17 = *(long **)(param_1 + 0xb8);
      if (plVar17 == (long *)0x0) {
        return;
      }
      uVar13 = (**(code **)(*plVar17 + 8))(plVar17);
      if ((uVar13 & 1) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x70) = 5;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x009c3d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar17 + 0x10))(plVar17);
      return;
    }
LAB_009c3ea8:
    uVar15 = 7;
    break;
  case 5:
    if (*(long *)(param_1 + 0xb0) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0xb0) + 0x54) == 0) {
      return;
    }
    if (*(long **)(param_1 + 0xb8) == (long *)0x0) {
      return;
    }
    uVar13 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
    if ((uVar13 & 1) == 0) {
      return;
    }
    goto LAB_009c3f00;
  case 6:
    if (((*(long *)(param_1 + 0xb0) == 0) || (*(int *)(*(long *)(param_1 + 0xb0) + 0x54) == 0)) ||
       ((*(long **)(param_1 + 0xb8) == (long *)0x0 ||
        (cVar1 = *(char *)(param_1 + 0xa0), cVar2 = *(char *)(param_1 + 0xa1),
        cVar3 = *(char *)(param_1 + 0xa2), cVar4 = *(char *)(param_1 + 0xa3),
        cVar5 = *(char *)(param_1 + 0xa4), cVar6 = *(char *)(param_1 + 0xa5),
        cVar7 = *(char *)(param_1 + 0xa6), cVar8 = *(char *)(param_1 + 0xa7),
        cVar9 = *(char *)(param_1 + 0xa8), cVar10 = *(char *)(param_1 + 0xa9),
        bVar12 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x38))(),
        (byte)(cVar2 + cVar1 + cVar3 + cVar4 + cVar5 + cVar6 + cVar7 + cVar8 + cVar9 + cVar10) <
        bVar12)))) {
      nn::os::GetSystemTick();
      uVar14 = nn::os::ConvertToTimeSpan();
      uVar13 = ((long)uVar14 >> 0x20) * 0xd7b634db + ((uVar14 & 0xffffffff) * 0xd7b634db >> 0x20);
      if ((long)((-(ulong)*(uint *)(param_1 + 0x78) - ((long)uVar14 >> 0x3f)) +
                (((long)uVar14 >> 0x20) * 0x431bde82 + ((long)uVar13 >> 0x20) +
                 ((long)((uVar14 & 0xffffffff) * 0x431bde82 + (uVar13 & 0xffffffff)) >> 0x20) >>
                0x12)) < 30000) {
        return;
      }
      goto LAB_009c3ea8;
    }
    uVar15 = 3;
    break;
  case 7:
    plVar17 = (long *)(param_1 + 0x88);
    if (*plVar17 == 0) {
      if (((*(long *)(param_1 + 0xb0) != 0) && (*(int *)(*(long *)(param_1 + 0xb0) + 0x54) != 0)) &&
         (*(long **)(param_1 + 0xb8) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *plVar17 = 0;
      FUN_007b5c70(*(undefined8 *)PTR_DAT_027104b0);
      uVar15 = 8;
    }
    else {
      FUN_009c3f70(param_1,plVar17);
      FUN_007b5c80(*(undefined8 *)PTR_DAT_027104b0,param_1 + 0x90);
      uVar15 = 5;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *plVar17 = 0;
    }
    break;
  case 10:
    if (*(long *)PTR_DAT_02710490 != 0) {
      FUN_011f8e00();
    }
LAB_009c3f00:
    *(undefined4 *)(param_1 + 0x70) = 0;
    goto switchD_009c3ae0_caseD_2;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar15;
switchD_009c3ae0_caseD_2:
  return;
}


