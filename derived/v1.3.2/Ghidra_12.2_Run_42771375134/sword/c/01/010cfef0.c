/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cfef0; name: FUN_010cfef0
 */


undefined8 FUN_010cfef0(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long local_48;
  long *local_40;
  undefined8 local_28;
  
  if (param_1[0x1d] != 0) {
    FUN_00d02280();
  }
  uVar1 = 1;
  switch((int)param_1[0x1c]) {
  case 0:
    uVar2 = FUN_010d0420(param_1);
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      *(undefined1 *)(param_1 + 0x1b) = 1;
    }
    break;
  case 1:
    if ((char)param_1[0x1b] == '\0') {
      lVar4 = FUN_00d05200(&local_48,param_1[1]);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (param_1[0x22] != 0) {
        (**(code **)(*(long *)(param_1[0x22] + 0x48) + 0x18))();
        param_1[0x22] = 0;
      }
      param_1[0x22] = lVar4;
      FUN_0117f030(lVar4,1);
      local_28 = (ulong)local_28._4_4_ << 0x20;
      FUN_0121b280(&local_48,&local_28,0x3ea,0,0);
      FUN_01211760(*(undefined8 *)PTR_DAT_02710958,&local_48);
      lVar4 = *(long *)PTR_DAT_027104b0;
      if (lVar4 != 0) {
        plVar5 = param_1 + 0x12;
        (**(code **)(*param_1 + 0x10))(&local_28,param_1);
        local_48 = local_28;
        local_40 = plVar5;
        if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0))
        {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
          local_28 = 0;
        }
        FUN_007b58c0(lVar4,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        }
      }
      uVar3 = 2;
LAB_010d02d0:
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
    }
    break;
  case 2:
    if (param_1[0x22] == 0) {
      uVar3 = 7;
    }
    else {
      uVar2 = FUN_01180000();
      if ((uVar2 & 1) == 0) break;
      uVar3 = 3;
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    break;
  case 3:
    uVar2 = FUN_010d05b0(param_1);
    if ((uVar2 & 1) != 0) {
      uVar3 = 4;
      goto LAB_010d02d0;
    }
    goto LAB_010d0230;
  case 4:
    if ((char)param_1[0x1f] != '\0') {
      uVar3 = 5;
      goto LAB_010d02d0;
    }
    break;
  case 5:
    if ((param_1[0x1d] != 0) && (uVar2 = FUN_007d4b30(param_1[0x1d] + 0xd0), (uVar2 & 1) != 0)) {
      lVar4 = param_1[0x1d];
      FUN_00d094b0(&local_48);
      uVar2 = FUN_010d0cd0(lVar4,&local_48,1);
      FUN_00d09500(&local_48);
      if ((uVar2 & 1) != 0) {
        uVar3 = 6;
        goto LAB_010d02d0;
      }
    }
    break;
  case 6:
    if (*(short *)(param_1[0x1d] + 0x84) == 1) {
      lVar4 = *(long *)PTR_DAT_027104b0;
      if (lVar4 != 0) {
        plVar5 = param_1 + 0x12;
        (**(code **)(*param_1 + 0x10))(&local_28,param_1);
        local_48 = local_28;
        local_40 = plVar5;
        if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0))
        {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
          local_28 = 0;
        }
        FUN_007b59f0(lVar4,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        }
      }
      uVar3 = 7;
      goto LAB_010d02d0;
    }
    break;
  case 7:
    lVar4 = *(long *)PTR_DAT_02718f20;
    if (lVar4 != 0) {
      plVar5 = param_1 + 0xf;
      (**(code **)(*param_1 + 0x10))(&local_28,param_1);
      local_48 = local_28;
      local_40 = plVar5;
      if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0)) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      FUN_011fcf30(lVar4,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      uVar2 = FUN_011fca80(lVar4);
      if ((uVar2 & 1) != 0) {
        lVar4 = *(long *)PTR_DAT_027104b0;
        if (lVar4 != 0) {
          plVar5 = param_1 + 0x12;
          (**(code **)(*param_1 + 0x10))(&local_28,param_1);
          local_48 = local_28;
          if (local_28 == 0) {
            local_40 = plVar5;
          }
          else {
            (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
            local_40 = plVar5;
            if (local_28 != 0) {
              (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
              local_28 = 0;
            }
          }
          FUN_007b59f0(lVar4,&local_48);
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          }
        }
        uVar3 = 8;
        goto LAB_010d02d0;
      }
    }
LAB_010d0230:
    FUN_011f8e00(*(undefined8 *)PTR_DAT_02710490);
    break;
  case 9:
    goto switchD_010cff34_caseD_9;
  }
  uVar1 = 0;
switchD_010cff34_caseD_9:
  return uVar1;
}


