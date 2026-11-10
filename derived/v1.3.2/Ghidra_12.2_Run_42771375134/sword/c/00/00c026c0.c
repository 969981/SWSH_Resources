/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c026c0; name: FUN_00c026c0
 */


void FUN_00c026c0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  
  switch(*(undefined4 *)(param_1 + 0x6f8)) {
  case 0:
    break;
  case 1:
    if (*(char *)(param_1 + 0x940) == '\0') {
      return;
    }
    *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(param_1 + 0x900);
    *(undefined1 *)(param_1 + 0x940) = 0;
    if (*(long *)(param_1 + 0xae0) == 0) {
      FUN_01038170(param_1,param_1 + 0x948);
      uVar3 = 2;
    }
    else {
      FUN_01037730(param_1,param_1 + 0x948,(undefined8 *)(param_1 + 0xae0));
      *(undefined8 *)(param_1 + 0xb08) = 0;
      *(undefined8 *)(param_1 + 0xb10) = 0;
      *(undefined8 *)(param_1 + 0xaf8) = 0;
      *(undefined8 *)(param_1 + 0xb00) = 0;
      *(undefined8 *)(param_1 + 0xae0) = 0;
      *(undefined8 *)(param_1 + 0xae8) = 0;
      *(undefined8 *)(param_1 + 0xaf0) = 0;
      *(undefined1 *)(param_1 + 0xb18) = 1;
      uVar3 = 4;
    }
    goto LAB_00c02814;
  case 2:
    uVar2 = FUN_010386c0(param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    plVar1 = *(long **)(param_1 + 0x980);
    if (plVar1 != (long *)0x0) {
      local_24 = 999;
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_24);
    }
    *(undefined1 *)(param_1 + 0xb71) = 0;
    break;
  case 3:
    uVar2 = FUN_010386c0(param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x6f8) = 1;
    *(undefined1 *)(param_1 + 0xb71) = 0;
    return;
  case 4:
    uVar2 = FUN_010384a0(param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x980) != 0) {
      local_28 = FUN_010386e0(param_1);
      plVar1 = *(long **)(param_1 + 0x980);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_28);
    }
    *(undefined4 *)(param_1 + 0x6f8) = 1;
    *(undefined1 *)(param_1 + 0x940) = 0;
    if (*(char *)(param_1 + 0xb71) != '\0') {
      FUN_01038270(param_1,1);
      *(undefined1 *)(param_1 + 0xb71) = 0;
    }
    uVar3 = 5;
    goto LAB_00c02814;
  case 5:
    uVar2 = FUN_010386c0(param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    break;
  default:
    goto switchD_00c026f0_default;
  }
  uVar3 = 1;
LAB_00c02814:
  *(undefined4 *)(param_1 + 0x6f8) = uVar3;
switchD_00c026f0_default:
  return;
}


