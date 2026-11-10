/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd67d0; name: FUN_00fd67d0
 */


uint FUN_00fd67d0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  local_18 = 0x8e89686f5660e8f;
  uVar2 = FUN_0167bc20(*(undefined8 *)(param_1 + 0x1a0),&local_18);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  local_18 = 0xbf2bb2531b7cde14;
  uVar1 = FUN_0167bc20(*(undefined8 *)(param_1 + 0x1a0),&local_18);
  return (uVar1 ^ 1) & 1;
}


