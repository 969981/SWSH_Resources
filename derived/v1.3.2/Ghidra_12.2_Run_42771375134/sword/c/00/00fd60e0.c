/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd60e0; name: FUN_00fd60e0
 */


void FUN_00fd60e0(long param_1,byte param_2)

{
  long lVar1;
  undefined1 *local_18;
  
  local_18 = &DAT_80a8e808288e407;
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_18);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 & 1;
  return;
}


