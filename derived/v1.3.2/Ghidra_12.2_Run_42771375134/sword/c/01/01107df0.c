/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01107df0; name: FUN_01107df0
 */


void FUN_01107df0(char *param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  char *apcStack_90 [12];
  
  if ((*param_1 != '\0') && (*(int *)(param_1 + 4) == 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      local_b0 = (undefined1 *)0x0;
      uVar2 = FUN_010ef130();
    }
    else {
      FUN_010edb50(&local_b0);
      uVar2 = FUN_010ef130(local_b0);
    }
    if (local_b0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = (undefined1 *)0x0;
    }
    if ((uVar2 & 1) == 0) {
      FUN_01102d70(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
      local_b0 = &LAB_01107fe0;
      local_a8 = FUN_01108020;
      local_a0 = &LAB_01108030;
      local_98 = &LAB_01108040;
      apcStack_90[0] = param_1;
      FUN_01036ef0(*(undefined8 *)(param_1 + 0x20),&local_b0);
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x20),1,1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x20),0);
      pcVar1 = local_a8;
      param_1[4] = '\x01';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *param_1 = '\x01';
      if (local_a8 != (code *)0x0) {
        local_a0 = (undefined1 *)0x0;
        local_98 = (undefined1 *)0x0;
        local_b0 = (undefined1 *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar1)(apcStack_90);
      }
    }
  }
  return;
}


