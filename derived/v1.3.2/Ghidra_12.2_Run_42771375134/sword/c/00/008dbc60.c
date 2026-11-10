/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dbc60; name: FUN_008dbc60
 */


void FUN_008dbc60(long param_1,undefined8 param_2)

{
  ushort uVar1;
  
  uVar1 = FUN_008dbea0(param_2);
  if (uVar1 < 0x80) {
    *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 8) = param_2;
  }
  return;
}


