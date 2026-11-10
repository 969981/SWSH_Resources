/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080c700; name: FUN_0080c700
 */


void FUN_0080c700(undefined8 param_1,byte *param_2)

{
  if ((*param_2 & 1) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    FUN_0080c5d0();
    return;
  }
  **(undefined1 **)(param_2 + 0x10) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  FUN_0080c5d0();
  return;
}


