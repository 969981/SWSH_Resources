/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010afa60; name: FUN_010afa60
 */


void FUN_010afa60(long param_1,uint param_2)

{
  long lVar1;
  undefined1 *local_28;
  
  local_28 = &DAT_80a8e808288e407;
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  FUN_00ffd010(param_1 + 0x100,PTR_DAT_02724358 + (ulong)param_2 * 8);
  return;
}


