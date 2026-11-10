/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01190ac0; name: FUN_01190ac0
 */


void FUN_01190ac0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 local_9c68;
  long lStack_9c60;
  char *local_9c58;
  undefined8 uStack_9c50;
  undefined2 local_9c48;
  undefined8 local_34a0;
  code *local_3498;
  undefined1 *local_3490;
  undefined1 *local_3488;
  long local_3480;
  long local_3478;
  undefined8 local_3470;
  undefined1 auStack_3468 [13208];
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long local_b0;
  long local_a8;
  
  lVar8 = param_1 + 0x80;
  FUN_01194ee0(lVar8);
  if (*(char *)(param_1 + 0x248) == '\0') {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x24c)) {
  case 0:
    lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar5 = FUN_01524d60(lVar8);
    if (((uVar5 & 1) == 0) || (uVar5 = FUN_01524d70(lVar8), (uVar5 & 1) == 0)) {
      uVar2 = 3;
    }
    else {
      uVar5 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
      if ((uVar5 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x24c) = 0x12;
        *(undefined1 *)(param_1 + 0x248) = 1;
        if (lVar8 == 0) {
          return;
        }
        goto LAB_011914c4;
      }
      uVar2 = 4;
    }
    uVar1 = 4;
    if (*(char *)(param_1 + 0x68) != '\0') {
      uVar1 = uVar2;
    }
    *(undefined4 *)(param_1 + 0x24c) = uVar1;
    *(undefined1 *)(param_1 + 0x248) = 1;
    if (lVar8 == 0) {
      return;
    }
LAB_011914c4:
                    /* WARNING: Could not recover jumptable at 0x011914ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    return;
  default:
    goto switchD_01190b1c_caseD_1;
  case 3:
    local_34a0 = &LAB_01192460;
    local_3490 = &LAB_011924a0;
    local_3498 = (code *)&LAB_01192490;
    local_3488 = &LAB_011924b0;
    local_3480 = param_1;
    FUN_01195170(lVar8,param_1 + 0x220,param_1 + 0x210,param_1 + 0x218,&local_34a0);
    pcVar7 = local_3498;
    if (local_3498 == (code *)0x0) goto LAB_011913d4;
    goto LAB_011913c0;
  case 4:
    puVar11 = (undefined8 *)(ulong)*(byte *)(param_1 + 0x68);
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 != 0) {
      plVar10 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    goto LAB_011916b4;
  case 5:
    goto switchD_01190b1c_caseD_5;
  case 6:
    lVar8 = *(long *)(param_1 + 0x2f0);
    if (lVar8 == 0) {
      lVar8 = FUN_01192940(&local_34a0,*(undefined8 *)(param_1 + 8));
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x2f0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x2f0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x2f0) = 0;
      }
      *(long *)(param_1 + 0x2f0) = lVar8;
      FUN_011952c0(lVar8);
      lVar8 = *(long *)(param_1 + 0x2f0);
    }
    FUN_01195470(lVar8);
    lVar8 = *(long *)(param_1 + 0x2f0);
    if (*(long *)(lVar8 + 0x60) != 0) {
      return;
    }
    if (*(int *)(lVar8 + 0x68) == 0) {
      uVar2 = 8;
LAB_0119213c:
      *(undefined4 *)(param_1 + 0x24c) = uVar2;
      *(undefined1 *)(param_1 + 0x248) = 1;
    }
    else if (*(int *)(lVar8 + 0x68) == 1) {
      uVar2 = 7;
      goto LAB_0119213c;
    }
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    plVar10 = (long *)(lVar8 + 0x48);
    pcVar7 = *(code **)(*plVar10 + 0x18);
    goto LAB_01191f3c;
  case 7:
    local_34a0 = (undefined1 *)((ulong)local_34a0 & 0xffffffff00000000);
    local_3478 = 0;
    local_3480 = 0;
    local_3488 = (undefined1 *)0x0;
    local_3490 = (undefined1 *)0x0;
    local_3498 = (code *)0x0;
    local_3470 = 0x100000001;
                    /* WARNING: Subroutine does not return */
    memset(auStack_3468,0,0x2b28);
  case 8:
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    local_3490 = (undefined1 *)0x0;
    local_3488 = (undefined1 *)0x0;
    local_34a0 = (undefined1 *)0x0;
    local_3498 = (code *)0x0;
    local_3480 = param_1;
    local_3478 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_34a0 = &LAB_01192f20;
    local_3498 = FUN_01192f50;
    local_3490 = &LAB_01192f90;
    local_3488 = &LAB_01192fc0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_b8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_b0 = param_1;
    local_a8 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_d0 = &LAB_01192ff0;
    local_c8 = FUN_01193030;
    local_c0 = &LAB_01193070;
    local_b8 = &LAB_011930a0;
    uVar5 = FUN_0125b090(1,&local_34a0,&local_d0,1,0);
    pcVar7 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_b8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_d0 = (undefined1 *)0x0;
      (*pcVar7)(&local_b0);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar7 = local_3498;
    if (local_3498 != (code *)0x0) {
      local_3490 = (undefined1 *)0x0;
      local_3488 = (undefined1 *)0x0;
      local_34a0 = (undefined1 *)0x0;
      local_3498 = (code *)0x0;
      (*pcVar7)(&local_3480);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    if ((uVar5 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
    uVar9 = 0;
    if (lVar4 == 0) goto LAB_01191a80;
    goto LAB_01191ec4;
  case 9:
    uVar9 = *(undefined1 *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
LAB_01191a80:
    local_3490 = (undefined1 *)0x0;
    local_3488 = (undefined1 *)0x0;
    local_34a0 = (undefined1 *)0x0;
    local_3498 = (code *)0x0;
    local_3480 = param_1;
    local_3478 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_34a0 = &LAB_011930d0;
    local_3498 = FUN_01193100;
    local_3490 = &LAB_01193140;
    local_3488 = &LAB_01193170;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_b8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_b0 = param_1;
    local_a8 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_d0 = &LAB_011931a0;
    local_c8 = FUN_011931e0;
    local_c0 = &LAB_01193220;
    local_b8 = &LAB_01193250;
    uVar5 = FUN_01259e40(uVar9,&local_34a0,&local_d0);
    pcVar7 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_b8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_d0 = (undefined1 *)0x0;
      (*pcVar7)(&local_b0);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar7 = local_3498;
    if (local_3498 != (code *)0x0) {
      local_3490 = (undefined1 *)0x0;
      local_3488 = (undefined1 *)0x0;
      local_34a0 = (undefined1 *)0x0;
      local_3498 = (code *)0x0;
      (*pcVar7)(&local_3480);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
      if (lVar4 != 0) goto LAB_01191ec4;
      goto LAB_01191bec;
    }
    break;
  case 10:
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
LAB_01191d58:
    local_3490 = (undefined1 *)0x0;
    local_3488 = (undefined1 *)0x0;
    local_34a0 = (undefined1 *)0x0;
    local_3498 = (code *)0x0;
    local_3480 = param_1;
    local_3478 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_34a0 = &LAB_01193280;
    local_3498 = FUN_011932c0;
    local_3490 = &LAB_01193300;
    local_3488 = &LAB_01193330;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_b8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_b0 = param_1;
    local_a8 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_d0 = &LAB_01193360;
    local_c8 = FUN_011933a0;
    local_c0 = &LAB_011933e0;
    local_b8 = &LAB_01193410;
    uVar5 = FUN_0125b090(1,&local_34a0,&local_d0,1,0);
    pcVar7 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_b8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_d0 = (undefined1 *)0x0;
      (*pcVar7)(&local_b0);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar7 = local_3498;
    if (local_3498 != (code *)0x0) {
      local_3490 = (undefined1 *)0x0;
      local_3488 = (undefined1 *)0x0;
      local_34a0 = (undefined1 *)0x0;
      local_3498 = (code *)0x0;
      (*pcVar7)(&local_3480);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
      if (lVar4 == 0) goto LAB_01192164;
      goto LAB_01191ec4;
    }
    break;
  case 0xb:
    local_9c68 = *(undefined8 *)(param_1 + 8);
    lStack_9c60 = param_1 + 0x60;
    local_9c58 = "gpoke";
    uStack_9c50 = 0;
    local_9c48 = 0x101;
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
LAB_01191bec:
    local_3490 = (undefined1 *)0x0;
    local_3488 = (undefined1 *)0x0;
    local_34a0 = (undefined1 *)0x0;
    local_3498 = (code *)0x0;
    local_3480 = param_1;
    local_3478 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_34a0 = &LAB_01193440;
    local_3498 = FUN_011935d0;
    local_3490 = &LAB_01193610;
    local_3488 = &LAB_01193640;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_b8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_b0 = param_1;
    local_a8 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_d0 = &LAB_01193670;
    local_c8 = FUN_011936a0;
    local_c0 = &LAB_011936e0;
    local_b8 = &LAB_01193710;
    uVar5 = FUN_01273c90(&local_9c68,&local_34a0,&local_d0);
    pcVar7 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_b8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_d0 = (undefined1 *)0x0;
      (*pcVar7)(&local_b0);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar7 = local_3498;
    if (local_3498 != (code *)0x0) {
      local_3490 = (undefined1 *)0x0;
      local_3488 = (undefined1 *)0x0;
      local_34a0 = (undefined1 *)0x0;
      local_3498 = (code *)0x0;
      (*pcVar7)(&local_3480);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
      if (lVar4 == 0) goto LAB_01191d58;
      goto LAB_01191ec4;
    }
    break;
  case 0xc:
    lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar5 = FUN_01524d60(lVar8);
    if ((uVar5 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x58);
      if (lVar4 != 0) {
        plVar10 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      local_3490 = (undefined1 *)0x0;
      local_3488 = (undefined1 *)0x0;
      local_34a0 = (undefined1 *)0x0;
      local_3498 = (code *)0x0;
      local_3480 = param_1;
      local_3478 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_34a0 = &LAB_01193740;
      local_3498 = FUN_01193780;
      local_3490 = &LAB_011937c0;
      local_3488 = &LAB_011937f0;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_b8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_b0 = param_1;
      local_a8 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_d0 = &LAB_01193820;
      local_c8 = FUN_01193850;
      local_c0 = &LAB_01193890;
      local_b8 = &LAB_011938c0;
      uVar5 = FUN_01269a90(&local_34a0,&local_d0);
      pcVar7 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_b8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        local_d0 = (undefined1 *)0x0;
        (*pcVar7)(&local_b0);
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      pcVar7 = local_3498;
      if (local_3498 != (code *)0x0) {
        local_3490 = (undefined1 *)0x0;
        local_3488 = (undefined1 *)0x0;
        local_34a0 = (undefined1 *)0x0;
        local_3498 = (code *)0x0;
        (*pcVar7)(&local_3480);
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
        if (lVar6 == 0) goto LAB_01192164;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        FUN_01127680(&local_34a0,lVar6);
        FUN_012ae720(*(undefined8 *)(local_34a0 + 0x80));
        if (local_34a0 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_34a0 + 0x48) + 0x18))();
          local_34a0 = (undefined1 *)0x0;
        }
        *(undefined4 *)(param_1 + 0x24c) = 2;
        *(undefined1 *)(param_1 + 0x248) = 1;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
      }
      if (lVar4 == 0) break;
      goto LAB_01191f1c;
    }
    uVar3 = FUN_01524d50(lVar8);
    *(undefined4 *)(param_1 + 0x24c) = 0xd;
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    *(undefined1 *)(param_1 + 0x248) = 1;
    if (lVar8 == 0) {
      return;
    }
    goto LAB_01191f30;
  case 0xd:
    if (*(char *)(param_1 + 0x68) == '\0') {
      FUN_01195280(lVar8);
      *(undefined4 *)(param_1 + 0x24c) = 2;
      *(undefined1 *)(param_1 + 0x248) = 1;
      return;
    }
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar2 = FUN_008d4270();
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_3488 = (undefined1 *)0x0;
    local_3490 = (undefined1 *)0x0;
    local_3498 = (code *)0x0;
    local_34a0 = (undefined1 *)0x0;
    local_3480 = param_1;
    local_3478 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_34a0 = &LAB_011938f0;
    local_3498 = FUN_01193920;
    local_3490 = &LAB_01193960;
    local_3488 = &LAB_01193990;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_b8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_b0 = param_1;
    local_a8 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_d0 = &LAB_011939c0;
    local_c8 = FUN_011939f0;
    local_c0 = &LAB_01193a30;
    local_b8 = &LAB_01193a60;
    uVar5 = FUN_01267df0(uVar2,&local_34a0,&local_d0);
    pcVar7 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_b8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_d0 = (undefined1 *)0x0;
      (*pcVar7)(&local_b0);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar7 = local_3498;
    if (local_3498 != (code *)0x0) {
      local_3488 = (undefined1 *)0x0;
      local_3490 = (undefined1 *)0x0;
      local_3498 = (code *)0x0;
      local_34a0 = (undefined1 *)0x0;
      (*pcVar7)(&local_3480);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    if ((uVar5 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
    if (lVar4 != 0) goto LAB_01191ec4;
switchD_01190b1c_caseD_5:
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    puVar11 = &local_34a0;
    local_3490 = (undefined1 *)0x0;
    local_3488 = (undefined1 *)0x0;
    local_34a0 = (undefined1 *)0x0;
    local_3498 = (code *)0x0;
    local_3480 = param_1;
    local_3478 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_34a0 = &LAB_01192780;
    local_3498 = FUN_011927d0;
    local_3490 = &LAB_01192810;
    local_3488 = &LAB_01192840;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_b8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_b0 = param_1;
    local_a8 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_d0 = &LAB_01192870;
    local_c8 = FUN_011928a0;
    local_c0 = &LAB_011928e0;
    local_b8 = &LAB_01192910;
    uVar5 = FUN_01269110(&local_34a0,&local_d0);
    pcVar7 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_b8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_d0 = (undefined1 *)0x0;
      (*pcVar7)(&local_b0);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar7 = local_3498;
    if (local_3498 != (code *)0x0) {
      local_3490 = (undefined1 *)0x0;
      local_3488 = (undefined1 *)0x0;
      local_34a0 = (undefined1 *)0x0;
      local_3498 = (code *)0x0;
      (*pcVar7)(&local_3480);
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    if ((uVar5 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
    lVar6 = 0;
    if (lVar4 != 0) {
LAB_01191ec4:
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      FUN_01127680(&local_34a0,lVar4);
      FUN_012ae720(*(undefined8 *)(local_34a0 + 0x80));
      if (local_34a0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_34a0 + 0x48) + 0x18))();
        local_34a0 = (undefined1 *)0x0;
      }
      *(undefined4 *)(param_1 + 0x24c) = 2;
      *(undefined1 *)(param_1 + 0x248) = 1;
      if (lVar4 != 0) {
LAB_01191f1c:
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      break;
    }
LAB_011916b4:
    local_3490 = (undefined1 *)0x0;
    local_3488 = (undefined1 *)0x0;
    local_34a0 = (undefined1 *)0x0;
    local_3498 = (code *)0x0;
    local_3480 = param_1;
    local_3478 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    local_34a0 = &LAB_011924c0;
    local_3498 = FUN_01192500;
    local_3490 = &LAB_01192540;
    local_3488 = &LAB_01192570;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    local_b8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_b0 = param_1;
    local_a8 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    local_d0 = &LAB_011925a0;
    local_c8 = FUN_011925d0;
    local_c0 = &LAB_01192610;
    local_b8 = &LAB_01192640;
    uVar5 = FUN_01259e40((ulong)puVar11 & 0xffffffff,&local_34a0,&local_d0);
    pcVar7 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_b8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_d0 = (undefined1 *)0x0;
      (*pcVar7)(&local_b0);
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    pcVar7 = local_3498;
    if (local_3498 != (code *)0x0) {
      local_3490 = (undefined1 *)0x0;
      local_3488 = (undefined1 *)0x0;
      local_34a0 = (undefined1 *)0x0;
      local_3498 = (code *)0x0;
      (*pcVar7)(&local_3480);
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
      if (lVar4 == 0) {
LAB_01192164:
                    /* WARNING: Does not return */
        pcVar7 = (code *)UndefinedInstructionException(0,0x1192164);
        (*pcVar7)();
      }
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      FUN_01127680(&local_34a0,lVar4);
      FUN_012ae720(*(undefined8 *)(local_34a0 + 0x80));
      if (local_34a0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_34a0 + 0x48) + 0x18))();
      }
      local_34a0 = &LAB_01192670;
      local_3490 = &LAB_01192760;
      local_3498 = FUN_01192750;
      local_3488 = &LAB_01192770;
      local_3480 = param_1;
      FUN_011951a0(lVar8,param_1 + 0x228,&local_34a0);
      pcVar7 = local_3498;
      if (local_3498 != (code *)0x0) {
        local_3488 = (undefined1 *)0x0;
        local_3490 = (undefined1 *)0x0;
        local_3498 = (code *)0x0;
        local_34a0 = (undefined1 *)0x0;
        (*pcVar7)(&local_3480);
      }
      *(undefined4 *)(param_1 + 0x24c) = 2;
      *(undefined1 *)(param_1 + 0x248) = 1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
joined_r0x01190cf0:
    if (lVar6 == 0) {
      return;
    }
    plVar10 = (long *)(lVar6 + 0x48);
    pcVar7 = *(code **)(*plVar10 + 0x18);
    goto LAB_01191f3c;
  case 0xe:
    local_34a0 = &LAB_01193a90;
    local_3490 = &LAB_01193ac0;
    local_3498 = FUN_01193ab0;
    local_3488 = &LAB_01193ad0;
    local_3480 = param_1;
    FUN_01194f60(lVar8,param_1 + 0x230,&local_34a0);
    goto joined_r0x011913b8;
  case 0xf:
    lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN_01524d90(lVar6,*(undefined8 *)(param_1 + 0x78));
    FUN_01524d40(lVar6,*(undefined8 *)(param_1 + 0x70));
    plVar10 = *(long **)(param_1 + 8);
    uVar3 = (**(code **)(*plVar10 + 0x10))(plVar10,0xc,4);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_01562e10(uVar3,1);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    lVar4 = *(long *)(param_1 + 0x2d0);
    *(undefined8 *)(param_1 + 0x2d0) = uVar3;
    if (lVar4 != 0) {
      FUN_01562e20(lVar4);
      (**(code **)(**(long **)(param_1 + 0x2d8) + 0x18))
                (*(long **)(param_1 + 0x2d8),lVar4,*(undefined8 *)(param_1 + 0x2e0),
                 *(undefined8 *)(param_1 + 0x2e8));
    }
    *(undefined8 *)(param_1 + 0x2e8) = 4;
    *(undefined8 *)(param_1 + 0x2e0) = 0xc;
    *(long **)(param_1 + 0x2d8) = plVar10;
    local_34a0 = &LAB_01193ae0;
    local_3498 = FUN_01193b00;
    local_3490 = &LAB_01193b10;
    local_3488 = &LAB_01193b20;
    local_3480 = param_1;
    FUN_011951a0(lVar8,param_1 + 0x238,&local_34a0);
    pcVar7 = local_3498;
    if (local_3498 != (code *)0x0) {
      local_3488 = (undefined1 *)0x0;
      local_3490 = (undefined1 *)0x0;
      local_3498 = (code *)0x0;
      local_34a0 = (undefined1 *)0x0;
      (*pcVar7)(&local_3480);
    }
    *(undefined4 *)(param_1 + 0x24c) = 0x10;
    *(undefined1 *)(param_1 + 0x248) = 1;
    goto joined_r0x01190cf0;
  case 0x10:
    FUN_01562e70(*(undefined8 *)(param_1 + 0x2d0));
    uVar5 = FUN_01562f10(*(undefined8 *)(param_1 + 0x2d0));
    if ((uVar5 & 1) == 0) {
      return;
    }
    FUN_01195280(lVar8);
    goto LAB_011913d4;
  case 0x11:
    lVar6 = *(long *)PTR_DAT_027107a8;
    local_d0 = (undefined1 *)0x81428fd97dfc4999;
    local_c8 = (code *)0x1d1b6f8;
    local_c0 = (undefined1 *)0x15;
    FUN_006cf0a0(&local_34a0,&local_d0);
    FUN_008962c0(lVar6 + 0x108,&local_34a0);
    if (local_3488 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_3488 + 0x48) + 0x18))();
    }
    local_34a0 = &LAB_01193b30;
    local_3490 = &LAB_01193b60;
    local_3498 = FUN_01193b50;
    local_3488 = &LAB_01193b70;
    local_3480 = param_1;
    FUN_01194f60(lVar8,param_1 + 0x240,&local_34a0);
joined_r0x011913b8:
    pcVar7 = local_3498;
    if (local_3498 != (code *)0x0) {
LAB_011913c0:
      local_3488 = (undefined1 *)0x0;
      local_3490 = (undefined1 *)0x0;
      local_3498 = (code *)0x0;
      local_34a0 = (undefined1 *)0x0;
      (*pcVar7)(&local_3480);
    }
LAB_011913d4:
    *(undefined4 *)(param_1 + 0x24c) = 1;
    *(undefined1 *)(param_1 + 0x248) = 1;
    return;
  case 0x12:
    local_34a0 = (undefined1 *)((ulong)local_34a0._4_4_ << 0x20);
    goto LAB_01191484;
  case 0x13:
    local_34a0 = (undefined1 *)CONCAT44(local_34a0._4_4_,1);
LAB_01191484:
    (**(code **)(param_1 + 0x250))(param_1 + 0x270,&local_34a0);
    *(undefined1 *)(param_1 + 0x248) = 0;
    goto switchD_01190b1c_caseD_1;
  }
  if (lVar8 != 0) {
LAB_01191f30:
    plVar10 = (long *)(lVar8 + 0x48);
    pcVar7 = *(code **)(*plVar10 + 0x18);
LAB_01191f3c:
    (*pcVar7)(plVar10);
  }
switchD_01190b1c_caseD_1:
  return;
}


