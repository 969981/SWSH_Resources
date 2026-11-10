/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b5350; name: FUN_013b5350
 */


void FUN_013b5350(long param_1)

{
  code *pcVar1;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  long local_30;
  long local_28;
  
  FUN_01370670();
  if (*(long *)PTR_DAT_02727748 == 0) {
    local_30 = 0;
  }
  else {
    FUN_013b7950(&local_30);
  }
  local_b0 = &LAB_013b7b20;
  local_a8 = FUN_013b7b90;
  local_a0 = &LAB_013b7ba0;
  local_98 = &LAB_013b7bb0;
  alStack_90[0] = param_1;
  FUN_0130a080(&local_28,local_30,&local_b0);
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
    (*pcVar1)(alStack_90);
  }
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


