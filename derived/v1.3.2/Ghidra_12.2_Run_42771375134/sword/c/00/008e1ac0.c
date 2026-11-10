/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1ac0; name: FUN_008e1ac0
 */


bool FUN_008e1ac0(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x90);
  uVar2 = FUN_008ed0a0(&local_28);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_008ed270(&local_28);
    return (int)((uVar1 & 0xff) - (uint)*(byte *)(param_1 + (ulong)param_2 + 0x1f8)) < 2;
  }
  return false;
}


