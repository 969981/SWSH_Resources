/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011707f0; name: FUN_011707f0
 */


void FUN_011707f0(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  long local_120;
  long lStack_118;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0;
  long lStack_98;
  
  if (*(long *)(param_1 + 200) != 0) {
    FUN_0117f130();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_01170d20();
  }
  FUN_01171180(param_1);
  switch(*(undefined4 *)(param_1 + 0x88)) {
  case 1:
    uVar2 = FUN_0117f120(*(undefined8 *)(param_1 + 200));
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_01180000(*(undefined8 *)(param_1 + 200));
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x90) == '\0') goto LAB_01170afc;
      FUN_01171500(param_1);
      uVar4 = 2;
    }
    else {
LAB_01170cc4:
      uVar4 = 0x10;
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x91) == '\0') {
      return;
    }
    uVar2 = FUN_01171740(param_1,1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar4 = 3;
    break;
  case 3:
    if (*(short *)(*(long *)(param_1 + 0xa8) + 0x84) != 1) {
      return;
    }
    uVar2 = FUN_011719c0(param_1);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_01171d40(param_1);
      if ((uVar2 & 1) == 0) goto LAB_01170c54;
      *(undefined1 *)(param_1 + 0x94) = 1;
      lVar3 = *(long *)(param_1 + 200);
joined_r0x01170c5c:
      if (lVar3 != 0) {
        FUN_0117f110();
        if (*(long *)(param_1 + 0xd0) != 0) {
          FUN_00bdff30();
        }
        if (*(long *)(param_1 + 0xa8) != 0) {
          FUN_01172660();
          lVar3 = *(long *)(param_1 + 0xa8);
          *(undefined8 *)(param_1 + 0xa8) = 0;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          }
        }
      }
      uVar4 = 0xf;
    }
    else {
      uVar4 = 4;
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x90) == '\0') {
      return;
    }
    lVar3 = *(long *)PTR_DAT_02718f20;
    if (lVar3 == 0) {
      return;
    }
    FUN_011ffb90(&local_c0,lVar3,0);
    FUN_011ffb90(&local_140,lVar3,1);
    if (local_c0 == (undefined1 *)0x0) {
      return;
    }
    if (local_140 == (undefined1 *)0x0) {
      return;
    }
    uVar2 = FUN_01171f90(param_1);
    if ((uVar2 & 1) == 0) {
LAB_01170c54:
      *(undefined1 *)(param_1 + 0x93) = 1;
      lVar3 = *(long *)(param_1 + 200);
      goto joined_r0x01170c5c;
    }
    uVar4 = 5;
    break;
  default:
    goto switchD_0117084c_caseD_5;
  case 6:
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    FUN_01178ec0(&local_c0);
    uVar2 = FUN_01174090(uVar5,&local_c0,2);
    FUN_01178f10(&local_c0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar4 = 7;
    break;
  case 7:
    if (*(short *)(*(long *)(param_1 + 0xa8) + 0x84) != 2) {
      return;
    }
    uVar2 = FUN_0120e5f0(*(undefined8 *)PTR_DAT_027185f8);
    uVar4 = 8;
    if ((uVar2 & 1) == 0) {
      uVar4 = 0xb;
    }
    break;
  case 8:
    lVar3 = *(long *)(param_1 + 0x58);
    local_a0 = param_1;
    lStack_98 = lVar3;
    if (lVar3 != 0) {
      plVar6 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      if (lVar3 != 0) {
        puStack_a8 = (undefined1 *)0x0;
        local_b0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        local_c0 = (undefined1 *)0x0;
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
    }
    local_c0 = &LAB_011753b0;
    local_b8 = FUN_011753e0;
    local_b0 = &LAB_01175420;
    puStack_a8 = &LAB_01175450;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_130 = (undefined1 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    local_120 = param_1;
    lStack_118 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_140 = &LAB_01175480;
    local_138 = FUN_011754b0;
    local_130 = &LAB_011754f0;
    puStack_128 = &LAB_01175520;
    uVar2 = FUN_0127b980(&local_c0,&local_140);
    pcVar1 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (undefined1 *)0x0;
      puStack_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar1)(&local_120);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar1 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      puStack_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar1)(&local_a0);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x88) = 9;
    }
    if (lVar3 == 0) {
      return;
    }
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    return;
  case 10:
    uVar2 = FUN_011721a0(param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
LAB_01170afc:
    uVar4 = 0xb;
    break;
  case 0xb:
    if (*(char *)(param_1 + 0x92) == '\0') {
      return;
    }
    FUN_011722a0(param_1);
    uVar4 = 0xc;
    break;
  case 0xc:
    if (*(long *)(param_1 + 0xd8) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0xe0) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0xd0) == 0) {
      return;
    }
    uVar2 = FUN_00bdff50();
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x91) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x90) == '\0') {
      uVar5 = *(undefined8 *)(param_1 + 0xa8);
      FUN_01178ec0(&local_c0);
      uVar2 = FUN_01174090(uVar5,&local_c0,3);
      FUN_01178f10(&local_c0);
    }
    else {
      uVar2 = FUN_01171740(param_1,3);
    }
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar4 = 0xd;
    break;
  case 0xd:
    if (*(short *)(*(long *)(param_1 + 0xa8) + 0x84) != 3) {
      return;
    }
    uVar2 = FUN_011724b0(param_1);
    uVar4 = 0xe;
    if ((uVar2 & 1) == 0) {
      uVar4 = 0x14;
    }
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    if (*(long *)(param_1 + 0xa8) == 0) {
      return;
    }
    FUN_01172660();
    lVar3 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (lVar3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01170bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    return;
  case 0xf:
    if (*(long *)(param_1 + 200) == 0) goto LAB_01170cc4;
    uVar2 = FUN_0117f120();
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x93) == '\0') {
      if (*(char *)(param_1 + 0x94) == '\0') {
        if (*(long *)(param_1 + 0xd0) != 0) {
          uVar2 = FUN_00bdff50();
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *(long *)(param_1 + 0xd0);
          *(undefined8 *)(param_1 + 0xd0) = 0;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          }
        }
        goto LAB_01170cc4;
      }
      uVar4 = 0x12;
    }
    else {
      uVar4 = 0x11;
    }
    break;
  case 0x14:
    FUN_011f8e00(*(undefined8 *)PTR_DAT_02710490);
    return;
  }
  *(undefined4 *)(param_1 + 0x88) = uVar4;
switchD_0117084c_caseD_5:
  return;
}


