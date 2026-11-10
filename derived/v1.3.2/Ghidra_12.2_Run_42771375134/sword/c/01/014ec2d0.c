/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ec2d0; name: FUN_014ec2d0
 */


void FUN_014ec2d0(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 auStack_130 [96];
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    return;
  }
  alStack_b0[0] = param_1;
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
    local_38 = 0xa26c2ba1b5582aa;
    local_40 = 0xa26b7ba1b556ff9;
    local_48 = 0xa26c1ba1b5580f7;
    local_50 = 0xa26bdba1b557a2b;
    local_d0 = &LAB_014ed5a0;
    local_c8 = FUN_014ed610;
    local_c0 = &LAB_014ed620;
    local_b8 = &LAB_014ed630;
    local_150 = &LAB_014ed640;
    local_148 = FUN_014ed650;
    local_140 = &LAB_014ed660;
    local_138 = &LAB_014ed670;
    FUN_014e2880(param_1 + 0xb0,0,&local_38,&local_40,&local_48,&local_50,&local_d0,&local_150);
    pcVar1 = local_148;
    break;
  case 1:
    if (*(long *)(param_1 + 0x90) == 0) {
      local_d0 = (undefined1 *)0x0;
      plVar2 = (long *)FUN_014e73d0();
    }
    else {
      FUN_014dd710(&local_d0);
      plVar2 = (long *)FUN_014e73d0(local_d0);
    }
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      local_d0 = (undefined1 *)0x0;
    }
    if (*(long *)(param_1 + 0x90) == 0) {
      local_d0 = (undefined1 *)0x0;
    }
    else {
      FUN_014dd710(&local_d0);
    }
    FUN_014e7550(local_d0,*plVar2 + (ulong)*(uint *)(param_1 + 0x2d8) * 0x158);
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      local_d0 = (undefined1 *)0x0;
    }
    if (*(long *)(param_1 + 0x88) == 0) {
      local_d0 = (undefined1 *)0x0;
      FUN_014e12c0(0,5);
    }
    else {
      FUN_014ddc70(&local_d0);
      FUN_014e12c0(local_d0,5);
    }
    goto joined_r0x014ec5e4;
  case 2:
    local_38 = 0x5bc325fa6f75296d;
    local_d0 = &LAB_014ed680;
    local_c8 = FUN_014ed6f0;
    local_c0 = &LAB_014ed700;
    local_b8 = &LAB_014ed710;
    local_150 = &LAB_014ed720;
    local_148 = FUN_014ed730;
    local_140 = &LAB_014ed740;
    local_138 = &LAB_014ed750;
    FUN_014e2700(param_1 + 0xb0,0,&local_38,&local_d0,&local_150);
    pcVar1 = local_148;
    break;
  default:
    goto switchD_014ec30c_caseD_3;
  case 4:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_d0 = (undefined1 *)0x0;
      FUN_014e12c0(0,3);
    }
    else {
      FUN_014ddc70(&local_d0);
      FUN_014e12c0(local_d0,3);
    }
joined_r0x014ec5e4:
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    }
    uVar3 = 0xb;
    goto LAB_014ec5b8;
  }
  local_148 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar1)(auStack_130);
  }
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar1)(alStack_b0);
  }
  uVar3 = 8;
LAB_014ec5b8:
  *(undefined4 *)(param_1 + 0x80) = uVar3;
switchD_014ec30c_caseD_3:
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}


