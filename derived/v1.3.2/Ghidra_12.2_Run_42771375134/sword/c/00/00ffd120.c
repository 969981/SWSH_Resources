/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd120; name: FUN_00ffd120
 */


undefined8 FUN_00ffd120(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 local_150 [2];
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  local_150[0] = 0;
  local_130 = (undefined1 *)0x0;
  puStack_128 = (undefined1 *)0x0;
  local_140 = (undefined1 *)0x0;
  local_138 = (code *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  if (*(long *)(param_1 + 0x1b0) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_0167ba30();
    local_150[0] = *param_2;
    local_140 = &LAB_01000290;
    local_138 = FUN_010002a0;
    local_130 = &LAB_010002b0;
    puStack_128 = &LAB_010002c0;
    local_120 = param_1;
    uStack_118 = local_150[0];
    if ((code *)param_3[2] != (code *)0x0) {
      (*(code *)param_3[2])(param_3 + 4,auStack_a0);
      local_c0 = *param_3;
      local_b8 = (code *)param_3[1];
      local_b0 = param_3[2];
      uStack_a8 = param_3[3];
    }
    plVar1 = (long *)(param_1 + 0x450);
    if (*(char *)(param_1 + 0x490) != '\0') {
      plVar1 = (long *)(param_1 + 0x470);
    }
    if (0xf < *(ulong *)(*plVar1 + 0x88)) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    FUN_01000bf0(*plVar1 + 0x40,local_150);
    pcVar2 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar2)(auStack_a0);
    }
    pcVar2 = local_138;
    uVar3 = 1;
    if (local_138 != (code *)0x0) {
      uVar3 = 1;
      local_130 = (undefined1 *)0x0;
      puStack_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar2)(&local_120);
    }
  }
  return uVar3;
}


