/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130a240; name: FUN_0130a240
 */


bool FUN_0130a240(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  ulong *apuStack_90 [13];
  long local_28;
  ulong local_18;
  
  local_b0 = &LAB_0130db60;
  local_a8 = FUN_0130dbd0;
  apuStack_90[0] = &local_18;
  local_a0 = &LAB_0130dbe0;
  local_98 = &LAB_0130dbf0;
  local_18 = 0;
  FUN_0130a080(&local_28,param_1,&local_b0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(apuStack_90);
  }
  return local_18 < 2;
}


