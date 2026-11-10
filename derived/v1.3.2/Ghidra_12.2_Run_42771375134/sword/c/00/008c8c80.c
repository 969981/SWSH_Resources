/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c8c80; name: FUN_008c8c80
 */


void FUN_008c8c80(long param_1,byte param_2)

{
  long lVar1;
  undefined8 local_28;
  
  local_28 = 0xe6c91c427d4980d3;
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 & 1;
  local_28 = 0xe6c91c427d4980d3;
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 & 1;
  return;
}


