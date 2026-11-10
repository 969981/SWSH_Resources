/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de7f80; name: FUN_00de7f80
 */


void FUN_00de7f80(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  FUN_00de84b0();
  FUN_00de8690(param_1);
  if ((*(uint *)(param_1 + 0x60) < 5 &&
       (1 << (ulong)(*(uint *)(param_1 + 0x60) & 0x1f) & 0x16U) != 0) &&
     (*(char *)(param_1 + 0xb1) != '\0')) {
    FUN_00e9e090(*(undefined8 *)(param_1 + 0x88));
    return;
  }
  plVar9 = (long *)(param_1 + 0x88);
  iVar1 = (**(code **)(*(long *)*plVar9 + 0x188))((long *)*plVar9,PTR_DAT_0271e8a0,0);
  if (*(int *)(param_1 + 0xb4) != iVar1) {
    if (iVar1 - 1U < 2) {
      *(undefined8 *)(param_1 + 0xbc) = 0x3dcccccd3dcccccd;
      if (((iVar1 == 2) && (*(int *)(param_1 + 0xb4) != -1)) && (*(char *)(param_1 + 0x1d0) == '\0')
         ) {
        *(undefined1 *)(param_1 + 0x1d0) = 1;
        *(undefined4 *)(param_1 + 0x1dc) = 0;
      }
    }
    else if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0xbc) = 0x3f0000003f000000;
    }
    *(int *)(param_1 + 0xb4) = iVar1;
  }
  switch(*(undefined4 *)(param_1 + 0x60)) {
  case 0:
    uVar2 = FUN_00debd20(param_1);
    local_50 = 0x7362ab288b82baf1;
    local_48 = "fi_spin";
    local_40 = 7;
    local_38 = 0;
    uVar3 = FUN_00dc0080(*(undefined8 *)(param_1 + 0x88),&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if ((uVar2 & (uVar3 ^ 1) & 1) == 0) {
      return;
    }
    goto LAB_00de81a4;
  case 1:
    uVar4 = FUN_00de8a80(param_1,5);
    if ((uVar4 & 1) == 0) {
LAB_00de810c:
      fVar10 = *(float *)(param_1 + 0xa0);
      fVar11 = *(float *)(param_1 + 0x78);
LAB_00de8114:
      if (fVar10 < fVar11) {
        return;
      }
      goto LAB_00de8480;
    }
LAB_00de8274:
    *(undefined4 *)(param_1 + 0x60) = 5;
    goto LAB_00de8488;
  case 2:
    if ((((*(float *)(param_1 + 0x198) < 30.0) || (*(int *)(param_1 + 0x1a8) == -1)) ||
        (uVar4 = thunk_FUN_00e46320(*plVar9), (uVar4 & 1) != 0)) ||
       (*(float *)(param_1 + 0x198) < (1.0 - *(float *)(param_1 + 0x1a0)) * 30.0 + 30.0)) {
      uVar4 = FUN_00de8a80(param_1,5);
      if ((uVar4 & 1) != 0) goto LAB_00de8274;
      if (*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0xa0)) {
LAB_00de83d8:
        if (*(char *)(param_1 + 0xc4) != '\0') goto LAB_00de83e0;
LAB_00de83ec:
        if (((*(char *)(param_1 + 0xb0) == '\0') ||
            (uVar4 = thunk_FUN_00e46320(*plVar9), (uVar4 & 1) == 0)) ||
           (uVar4 = FUN_00e9e440(*plVar9), (uVar4 & 1) == 0)) {
          uVar4 = FUN_00deb720(param_1);
          if ((uVar4 & 1) == 0) {
            return;
          }
          goto LAB_00de817c;
        }
      }
      else {
        if (*(char *)(param_1 + 0xc4) == '\0') {
          uVar4 = thunk_FUN_00e46320(*plVar9);
          if ((uVar4 & 1) != 0) {
            plVar5 = (long *)*plVar9;
            if (*(char *)((long)plVar5 + 0x44c) == '\0') {
              pcVar8 = *(code **)(*plVar5 + 0x178);
              puVar6 = PTR_DAT_0271e870;
            }
            else {
              pcVar8 = *(code **)(*plVar5 + 0x1c0);
              puVar6 = (undefined *)((long)plVar5 + 0x44c);
            }
            fVar10 = (float)(*pcVar8)(0,plVar5,puVar6);
            if (*(float *)PTR_DAT_0271ecc8 < fVar10) goto LAB_00de83d8;
          }
          break;
        }
LAB_00de83e0:
        uVar4 = thunk_FUN_00e46320(*plVar9);
        if ((uVar4 & 1) == 0) goto LAB_00de83ec;
      }
      goto LAB_00de840c;
    }
    uVar7 = 6;
    goto LAB_00de8484;
  case 3:
    uVar4 = FUN_00deb720(param_1);
    if ((uVar4 & 1) != 0) {
LAB_00de817c:
      uVar7 = 4;
      goto LAB_00de8484;
    }
    if (*(char *)(param_1 + 0xd0) != '\0') {
      return;
    }
    fVar10 = *(float *)(param_1 + 0xa0);
    fVar11 = *(float *)(param_1 + 0x78);
    if ((fVar11 <= fVar10) || (*(char *)(param_1 + 0xc4) != '\0')) goto LAB_00de8114;
    uVar4 = thunk_FUN_00e46320(*plVar9);
    if ((uVar4 & 1) != 0) {
      plVar9 = (long *)*plVar9;
      if (*(char *)((long)plVar9 + 0x44c) == '\0') {
        pcVar8 = *(code **)(*plVar9 + 0x178);
        puVar6 = PTR_DAT_0271e870;
      }
      else {
        pcVar8 = *(code **)(*plVar9 + 0x1c0);
        puVar6 = (undefined *)((long)plVar9 + 0x44c);
      }
      fVar10 = (float)(*pcVar8)(0,plVar9,puVar6);
      if (*(float *)PTR_DAT_0271ecc8 < fVar10) goto LAB_00de810c;
    }
    break;
  case 4:
    uVar4 = FUN_00de8d30(param_1);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar4 = FUN_00de8a80(param_1,5);
    if ((uVar4 & 1) != 0) goto LAB_00de8274;
LAB_00de81a4:
    if ((*(float *)(param_1 + 0xa0) < *(float *)(param_1 + 0x78)) &&
       (*(char *)(param_1 + 0xc4) == '\0')) {
      uVar4 = thunk_FUN_00e46320(*plVar9);
      if ((uVar4 & 1) != 0) {
        plVar5 = (long *)*plVar9;
        if (*(char *)((long)plVar5 + 0x44c) == '\0') {
          pcVar8 = *(code **)(*plVar5 + 0x178);
          puVar6 = PTR_DAT_0271e870;
        }
        else {
          pcVar8 = *(code **)(*plVar5 + 0x1c0);
          puVar6 = (undefined *)((long)plVar5 + 0x44c);
        }
        fVar10 = (float)(*pcVar8)(0,plVar5,puVar6);
        if (*(float *)PTR_DAT_0271ecc8 < fVar10) {
          if (*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0xa0)) goto LAB_00de8480;
          goto LAB_00de81c4;
        }
      }
      break;
    }
    if (*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0xa0)) {
LAB_00de8480:
      uVar7 = 2;
    }
    else {
LAB_00de81c4:
      if ((*(char *)(param_1 + 0xc4) == '\0') ||
         (uVar4 = thunk_FUN_00e46320(*plVar9), (uVar4 & 1) == 0)) {
        if (*(char *)(param_1 + 0xb0) == '\0') {
          return;
        }
        uVar4 = thunk_FUN_00e46320(*plVar9);
        if ((uVar4 & 1) == 0) {
          return;
        }
        uVar4 = FUN_00e9e440(*plVar9);
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
LAB_00de840c:
      uVar7 = 3;
    }
    goto LAB_00de8484;
  case 5:
    if (*(char *)(param_1 + 0x154) != '\0') {
      return;
    }
    uVar4 = FUN_00ea09f0(*plVar9);
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_00e45920(*plVar9), (uVar4 & 1) == 0)) {
      return;
    }
    uVar4 = FUN_00de8a80(param_1,5);
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = 5;
      *(undefined1 *)(param_1 + 0x6a) = 1;
      return;
    }
    if ((*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0xa0)) ||
       (*(char *)(param_1 + 0xc4) != '\0')) goto LAB_00de8480;
    uVar4 = thunk_FUN_00e46320(*plVar9);
    if ((uVar4 & 1) != 0) {
      plVar9 = (long *)*plVar9;
      if (*(char *)((long)plVar9 + 0x44c) == '\0') {
        pcVar8 = *(code **)(*plVar9 + 0x178);
        puVar6 = PTR_DAT_0271e870;
      }
      else {
        pcVar8 = *(code **)(*plVar9 + 0x1c0);
        puVar6 = (undefined *)((long)plVar9 + 0x44c);
      }
      fVar10 = (float)(*pcVar8)(0,plVar9,puVar6);
      if (*(float *)PTR_DAT_0271ecc8 < fVar10) goto LAB_00de8480;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x180) == '\0') {
      return;
    }
    if (*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0xa0)) goto LAB_00de8480;
    break;
  default:
    goto switchD_00de808c_default;
  }
  uVar7 = 1;
LAB_00de8484:
  *(undefined4 *)(param_1 + 0x60) = uVar7;
LAB_00de8488:
  *(undefined1 *)(param_1 + 0x6a) = 0;
switchD_00de808c_default:
  return;
}


