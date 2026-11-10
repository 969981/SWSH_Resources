/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01160910; name: FUN_01160910
 */


void FUN_01160910(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  switch(*(undefined4 *)(param_1 + 0x6f8)) {
  case 0:
    goto switchD_01160940_caseD_0;
  case 1:
    if (*(char *)(param_1 + 0x930) == '\0') {
      return;
    }
    *(undefined8 *)(param_1 + 0x938) = *(undefined8 *)(param_1 + 0x8f0);
    *(undefined1 *)(param_1 + 0x930) = 0;
    if (*(long *)(param_1 + 0x950) == 0) {
      FUN_01038170(param_1,param_1 + 0x938);
      if (*(char *)(param_1 + 0xb68) == '\0') goto LAB_01160afc;
      nn::os::GetSystemTick();
      uVar4 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0xb70) = uVar4;
      uVar5 = 3;
    }
    else {
      FUN_01037730(param_1,param_1 + 0x938,(undefined8 *)(param_1 + 0x950));
      *(undefined8 *)(param_1 + 0x978) = 0;
      *(undefined8 *)(param_1 + 0x980) = 0;
      *(undefined8 *)(param_1 + 0x968) = 0;
      *(undefined8 *)(param_1 + 0x970) = 0;
      *(undefined8 *)(param_1 + 0x950) = 0;
      *(undefined8 *)(param_1 + 0x958) = 0;
      *(undefined8 *)(param_1 + 0x960) = 0;
      *(undefined1 *)(param_1 + 0x988) = 1;
      uVar5 = 5;
    }
    break;
  case 2:
    uVar3 = FUN_010386c0(param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
    plVar2 = *(long **)(param_1 + 0x9b0);
    if (plVar2 != (long *)0x0) {
      local_24 = 999;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_24);
    }
    goto LAB_011609d0;
  case 3:
    if (*(char *)(param_1 + 0xb68) == '\0') {
LAB_01160ab0:
      uVar3 = FUN_010384a0(param_1);
    }
    else {
      nn::os::GetSystemTick();
      lVar1 = nn::os::ConvertToTimeSpan();
      lVar1 = lVar1 - *(long *)(param_1 + 0xb70);
      *(long *)(param_1 + 0xb78) = lVar1;
      if ((double)lVar1 / DAT_01cd50a0 <= *(double *)(param_1 + 0xb80)) {
        if (*(char *)(param_1 + 0xb68) != '\0') {
          return;
        }
        goto LAB_01160ab0;
      }
      if (*(char *)(param_1 + 0xb68) != '\0') {
        *(undefined1 *)(param_1 + 0xb68) = 0;
      }
      *(undefined8 *)(param_1 + 0xb80) = 0;
      uVar3 = FUN_010384a0(param_1);
    }
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0xb89) != '\0') {
      FUN_01038270(param_1,1);
      *(undefined1 *)(param_1 + 0xb89) = 0;
    }
LAB_01160afc:
    uVar5 = 2;
    break;
  case 4:
    uVar3 = FUN_010386c0(param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
LAB_011609d0:
    *(undefined1 *)(param_1 + 0xb89) = 0;
    goto switchD_01160940_caseD_0;
  case 5:
    uVar3 = FUN_010384a0(param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x9b0) != 0) {
      local_28 = FUN_010386e0(param_1);
      plVar2 = *(long **)(param_1 + 0x9b0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
    }
    if (*(char *)(param_1 + 0xb89) != '\0') {
      FUN_01038270(param_1,1);
      *(undefined1 *)(param_1 + 0xb89) = 0;
    }
    uVar5 = 6;
    break;
  case 6:
    uVar3 = FUN_010386c0(param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
switchD_01160940_caseD_0:
    uVar5 = 1;
    break;
  default:
    goto switchD_01160940_default;
  }
  *(undefined4 *)(param_1 + 0x6f8) = uVar5;
switchD_01160940_default:
  return;
}


