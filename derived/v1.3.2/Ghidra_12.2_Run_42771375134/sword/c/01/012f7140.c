/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f7140; name: FUN_012f7140
 */


void FUN_012f7140(long param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined4 local_80 [24];
  
  *(undefined4 *)(param_1 + 0x60) = param_2;
  local_a0 = &LAB_012f7590;
  local_98 = FUN_012f76b0;
  local_90 = &LAB_012f76c0;
  local_88 = &LAB_012f76d0;
  local_80[0] = param_2;
  FUN_012c6db0(&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(local_80);
  }
  return;
}


