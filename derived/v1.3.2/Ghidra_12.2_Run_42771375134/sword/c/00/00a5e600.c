/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5e600; name: FUN_00a5e600
 */


void FUN_00a5e600(long param_1,uint param_2)

{
  code *pcVar1;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined8 local_28;
  
  if (*(uint *)(param_1 + 0x5cc) != param_2) {
    *(uint *)(param_1 + 0x5cc) = param_2;
    if (param_2 < 0x3d) {
      param_1 = param_1 + 0x100;
      local_b0 = (undefined1 *)0x8db51510bfbf4d28;
      FUN_00ffd510((float)param_2,param_1,&local_b0);
      if (param_2 == 10) {
        local_88 = &DAT_021554d8;
      }
      else if (param_2 == 0x1e) {
        local_88 = &DAT_021554b8;
      }
      else {
        if (param_2 != 0x3c) {
          return;
        }
        local_88 = &DAT_02155498;
      }
      local_28 = 0x8e89686f5660e8f;
      local_b0 = &LAB_00a5e830;
      local_a8 = FUN_00a5e8f0;
      local_a0 = &LAB_00a5e900;
      local_80 = 0;
      local_98 = &LAB_00a5e920;
      local_90 = param_1;
      FUN_00ffd120(param_1,&local_28,&local_b0);
      pcVar1 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = (undefined1 *)0x0;
        local_98 = (undefined1 *)0x0;
        local_b0 = (undefined1 *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar1)(&local_90);
      }
    }
  }
  return;
}


