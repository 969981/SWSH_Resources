/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db5d20; name: FUN_00db5d20
 */


void FUN_00db5d20(long *param_1,byte param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  byte *local_80 [12];
  byte local_14 [4];
  
  local_14[0] = param_2 & 1;
  local_80[0] = local_14;
  local_a0 = &LAB_00db87a0;
  local_98 = FUN_00db87e0;
  local_90 = &LAB_00db87f0;
  local_88 = &LAB_00db8800;
  (**(code **)(*param_1 + 0x100))(param_1,&local_a0);
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


