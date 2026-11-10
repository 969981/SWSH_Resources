/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e8df0; name: FUN_014e8df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014e8df0(long param_1)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 *local_950;
  code *local_948;
  undefined1 *local_940;
  undefined1 *local_938;
  long lStack_930;
  undefined4 local_928;
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
  lStack_930 = param_1;
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
    local_38 = 0xa26bfba1b557d91;
    local_40 = 0xa26b7ba1b556ff9;
    local_48 = 0xa26c3ba1b55845d;
    local_50 = 0xa26bdba1b557a2b;
    local_950 = &LAB_014e9f70;
    local_948 = FUN_014e9fe0;
    local_940 = &LAB_014e9ff0;
    local_938 = &LAB_014ea000;
    local_d0 = &LAB_014ea010;
    local_c8 = FUN_014ea020;
    local_c0 = &LAB_014ea030;
    local_b8 = &LAB_014ea040;
    FUN_014e2880(param_1 + 0xb0,0,&local_38,&local_40,&local_48,&local_50,&local_950,&local_d0);
    pcVar4 = local_c8;
    bVar1 = local_c8 != (code *)0x0;
    local_c8 = (code *)0x0;
    pcVar3 = local_948;
    if (bVar1) {
      local_c0 = (undefined1 *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar4)(auStack_b0);
      pcVar3 = local_948;
    }
    goto joined_r0x014e9150;
  case 1:
    if (*(long *)(param_1 + 0xa0) == 0) {
      local_950 = (undefined1 *)0x0;
      FUN_014ea2a0();
    }
    else {
      FUN_014e9630(&local_950);
      FUN_014ea2a0(local_950);
    }
    if (local_950 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_950 + 0x48) + 0x18))();
    }
    uVar5 = 3;
    break;
  case 2:
                    /* WARNING: Subroutine does not return */
    memset(&local_950,0,0x87f);
  case 3:
    local_928 = _DAT_00000084;
    uVar2 = _DAT_00000080;
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_014ddc70(&local_950);
      uVar2 = *(uint *)(local_950 + 0x80);
      local_928 = *(undefined4 *)(local_950 + 0x84);
      if (local_950 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_950 + 0x48) + 0x18))();
      }
    }
    if ((uVar2 & 0xff) == 0) goto switchD_014e8e2c_caseD_4;
    local_950 = &LAB_014ea050;
    local_948 = FUN_014ea110;
    local_940 = &LAB_014ea120;
    local_938 = &LAB_014ea130;
    local_d0 = &LAB_014ea140;
    local_c8 = FUN_014ea150;
    local_c0 = &LAB_014ea160;
    local_38 = 0x5bc321fa6f7522a1;
    local_b8 = &LAB_014ea170;
    FUN_014e2700(param_1 + 0xb0,0,&local_38,&local_950,&local_d0);
    pcVar4 = local_c8;
    bVar1 = local_c8 != (code *)0x0;
    local_c8 = (code *)0x0;
    pcVar3 = local_948;
    if (bVar1) {
      local_c0 = (undefined1 *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar4)(auStack_b0);
      pcVar3 = local_948;
    }
joined_r0x014e9150:
    if (pcVar3 != (code *)0x0) {
      local_938 = (undefined1 *)0x0;
      local_940 = (undefined1 *)0x0;
      local_948 = (code *)0x0;
      local_950 = (undefined1 *)0x0;
      (*pcVar3)(&lStack_930);
    }
    uVar5 = 2;
    break;
  default:
    goto switchD_014e8e2c_caseD_4;
  case 5:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_950 = (undefined1 *)0x0;
      FUN_014e12c0(0,1);
    }
    else {
      FUN_014ddc70(&local_950);
      FUN_014e12c0(local_950,1);
    }
    if (local_950 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_950 + 0x48) + 0x18))();
    }
    uVar5 = 9;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar5;
switchD_014e8e2c_caseD_4:
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}


