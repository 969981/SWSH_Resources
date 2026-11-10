/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014eb570; name: FUN_014eb570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_014eb570(long param_1)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined1 *local_12f0;
  code *local_12e8;
  undefined1 *local_12e0;
  undefined1 *local_12d8;
  long alStack_12d0 [302];
  undefined1 *local_960;
  code *local_958;
  undefined1 *local_950;
  undefined1 *local_948;
  undefined1 auStack_940 [2160];
  undefined8 local_d0 [16];
  
  lVar1 = param_1 + 0xb0;
  FUN_014e21a0(lVar1);
  FUN_014ec170(param_1);
  uVar5 = 0;
  alStack_12d0[0] = param_1;
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    if (*(long *)(param_1 + 0x98) == 0) {
      local_12f0 = (undefined1 *)0x0;
      uVar6 = FUN_014dee10();
    }
    else {
      FUN_014dde40(&local_12f0);
      uVar6 = FUN_014dee10(local_12f0);
    }
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_01036fd0(*(undefined8 *)(param_1 + 0x2d0));
      if (local_12f0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_12f0 + 0x48) + 0x18))();
        local_12f0 = (undefined1 *)0x0;
      }
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x90) == 0) {
          local_12f0 = (undefined1 *)0x0;
          uVar5 = FUN_014e73d0();
        }
        else {
          FUN_014dd710(&local_12f0);
          uVar5 = FUN_014e73d0(local_12f0);
        }
        if (local_12f0 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_12f0 + 0x48) + 0x18))();
          local_12f0 = (undefined1 *)0x0;
        }
        if (*(long *)(param_1 + 0x90) == 0) {
          local_12f0 = (undefined1 *)0x0;
        }
        else {
          FUN_014dd710(&local_12f0);
        }
        iVar4 = FUN_014e7400(local_12f0,uVar5);
        if (local_12f0 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_12f0 + 0x48) + 0x18))();
        }
        if (iVar4 == 0) {
          uVar7 = 1;
        }
        else {
          local_12f0 = (undefined1 *)0xa26b6ba1b556e46;
          FUN_014e2240(lVar1,&local_12f0);
          FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa0),0);
          uVar7 = 2;
        }
        goto LAB_014eb85c;
      }
    }
    else {
LAB_014ebde0:
      if (local_12f0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_12f0 + 0x48) + 0x18))();
      }
    }
    break;
  case 1:
    local_d0[0] = 0x722eb6186a576452;
    local_12f0 = &LAB_014ecb90;
    local_12e8 = FUN_014ecc00;
    local_12e0 = &LAB_014ecc10;
    local_12d8 = &LAB_014ecc20;
    local_960 = &LAB_014ecc30;
    local_958 = FUN_014ecc40;
    local_950 = &LAB_014ecc50;
    local_948 = &LAB_014ecc60;
    FUN_014e2330(lVar1,0,local_d0,&local_12f0,&local_960);
    pcVar3 = local_958;
    goto joined_r0x014eb824;
  case 2:
    FUN_014ec2d0(param_1);
    return 0;
  case 3:
    uVar6 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(&local_12f0,0,0x87f);
    }
    uVar7 = 4;
    goto LAB_014eb85c;
  case 4:
    uVar2 = _DAT_00000078;
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_014ddc70(&local_12f0);
      uVar2 = *(uint *)(local_12f0 + 0x78);
      if (local_12f0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_12f0 + 0x48) + 0x18))();
      }
    }
    local_12f0 = (undefined1 *)0x0;
    if ((uVar2 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(&local_960,0,0x87f);
    }
    break;
  case 5:
    local_d0[0] = 0x5bc324fa6f7527ba;
    local_12f0 = &LAB_014ed320;
    local_12e8 = (code *)&LAB_014ed390;
    local_12e0 = &LAB_014ed3a0;
    local_12d8 = &LAB_014ed3b0;
    local_960 = &LAB_014ed3c0;
    local_958 = (code *)&LAB_014ed3d0;
    local_950 = &LAB_014ed3e0;
    local_948 = &LAB_014ed3f0;
    goto LAB_014eb800;
  case 6:
    local_d0[0] = 0x722eb7186a576605;
    local_12f0 = &LAB_014ed400;
    local_12e8 = (code *)&LAB_014ed450;
    local_12e0 = &LAB_014ed460;
    local_12d8 = &LAB_014ed470;
    local_960 = &LAB_014ed480;
    local_958 = (code *)&LAB_014ed490;
    local_950 = &LAB_014ed4a0;
    local_948 = &LAB_014ed4b0;
    goto LAB_014eb800;
  case 7:
    if (*(char *)(param_1 + 0x2e0) == '\0') {
      if (*(long *)(param_1 + 0x88) == 0) {
        local_12f0 = (undefined1 *)0x0;
        FUN_014e12c0(0,3);
      }
      else {
        FUN_014ddc70(&local_12f0);
        FUN_014e12c0(local_12f0,3);
      }
      if (local_12f0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_12f0 + 0x48) + 0x18))();
      }
LAB_014ec0d8:
      uVar7 = 0xb;
      goto LAB_014eb85c;
    }
    local_d0[0] = FUN_014e4050(*(undefined4 *)(param_1 + 0x2e4));
    local_12f0 = &LAB_014ed4c0;
    local_12e8 = FUN_014ed530;
    local_12e0 = &LAB_014ed540;
    local_12d8 = &LAB_014ed550;
    local_960 = &LAB_014ed560;
    local_958 = FUN_014ed570;
    local_950 = &LAB_014ed580;
    local_948 = &LAB_014ed590;
LAB_014eb800:
    FUN_014e2510(lVar1,0,local_d0,&local_12f0,&local_960);
    pcVar3 = local_958;
joined_r0x014eb824:
    local_958 = pcVar3;
    if (pcVar3 != (code *)0x0) {
      local_948 = (undefined1 *)0x0;
      local_950 = (undefined1 *)0x0;
      local_958 = (code *)0x0;
      local_960 = (undefined1 *)0x0;
      (*pcVar3)(auStack_940);
    }
    pcVar3 = local_12e8;
    if (local_12e8 != (code *)0x0) {
      local_12e0 = (undefined1 *)0x0;
      local_12d8 = (undefined1 *)0x0;
      local_12f0 = (undefined1 *)0x0;
      local_12e8 = (code *)0x0;
      (*pcVar3)(alStack_12d0);
    }
    uVar7 = 8;
LAB_014eb85c:
    *(undefined4 *)(param_1 + 0x80) = uVar7;
    return 0;
  default:
    goto switchD_014eb5c8_caseD_8;
  case 10:
    if (*(long *)(param_1 + 0x98) == 0) {
      local_12f0 = (undefined1 *)0x0;
      uVar6 = FUN_014dee10();
    }
    else {
      FUN_014dde40(&local_12f0);
      uVar6 = FUN_014dee10(local_12f0);
    }
    if ((uVar6 & 1) != 0) goto LAB_014ebde0;
    uVar6 = FUN_01037070(*(undefined8 *)(param_1 + 0x2d0));
    if (local_12f0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_12f0 + 0x48) + 0x18))();
    }
    if ((uVar6 & 1) != 0) goto LAB_014ec0d8;
    break;
  case 0xb:
    FUN_014e2320(lVar1);
    uVar5 = 1;
    goto switchD_014eb5c8_caseD_8;
  }
  uVar5 = 0;
switchD_014eb5c8_caseD_8:
  return uVar5;
}


