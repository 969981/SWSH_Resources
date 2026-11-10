/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e4f80; name: FUN_014e4f80
 */


void FUN_014e4f80(long param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 *local_950;
  code *local_948;
  undefined1 *local_940;
  undefined1 *local_938;
  long alStack_930 [268];
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 auStack_b0 [96];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    return;
  }
  alStack_930[0] = param_1;
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
    local_38 = 0xa26c2ba1b5582aa;
    local_40 = 0xa26b7ba1b556ff9;
    local_48 = 0xa26c0ba1b557f44;
    local_50 = 0xa26bdba1b557a2b;
    local_950 = &LAB_014e5b30;
    local_948 = FUN_014e5ba0;
    local_940 = &LAB_014e5bb0;
    local_938 = &LAB_014e5bc0;
    local_d0 = &LAB_014e5bd0;
    local_c8 = FUN_014e5be0;
    local_c0 = &LAB_014e5bf0;
    local_b8 = &LAB_014e5c00;
    FUN_014e2880(param_1 + 0xb0,0,&local_38,&local_40,&local_48,&local_50,&local_950,&local_d0);
    pcVar1 = local_c8;
    break;
  case 1:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_950 = (undefined1 *)0x0;
      FUN_014e12c0(0,4);
    }
    else {
      FUN_014ddc70(&local_950);
      FUN_014e12c0(local_950,4);
    }
    goto joined_r0x014e52fc;
  case 2:
                    /* WARNING: Subroutine does not return */
    memset(&local_950,0,0x87f);
  case 3:
    local_38 = 0x5bc323fa6f752607;
    local_950 = &LAB_014e5c10;
    local_948 = FUN_014e5c80;
    local_940 = &LAB_014e5c90;
    local_938 = &LAB_014e5ca0;
    local_d0 = &LAB_014e5cb0;
    local_c8 = FUN_014e5cc0;
    local_c0 = &LAB_014e5cd0;
    local_b8 = &LAB_014e5ce0;
    FUN_014e2700(param_1 + 0xb0,0,&local_38,&local_950,&local_d0);
    pcVar1 = local_c8;
    break;
  default:
    goto switchD_014e4fbc_caseD_4;
  case 5:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_950 = (undefined1 *)0x0;
      FUN_014e12c0(0,1);
    }
    else {
      FUN_014ddc70(&local_950);
      FUN_014e12c0(local_950,1);
    }
joined_r0x014e52fc:
    if (local_950 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_950 + 0x48) + 0x18))();
    }
    uVar2 = 8;
    goto LAB_014e5314;
  }
  local_c8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar1)(auStack_b0);
  }
  pcVar1 = local_948;
  if (local_948 != (code *)0x0) {
    local_940 = (undefined1 *)0x0;
    local_938 = (undefined1 *)0x0;
    local_950 = (undefined1 *)0x0;
    local_948 = (code *)0x0;
    (*pcVar1)(alStack_930);
  }
  uVar2 = 5;
LAB_014e5314:
  *(undefined4 *)(param_1 + 0x80) = uVar2;
switchD_014e4fbc_caseD_4:
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}


