/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c1490; name: FUN_003c1490
 */


void FUN_003c1490(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort local_20 [4];
  ushort local_18 [4];
  
  local_18[0] = *param_1;
  uVar1 = local_18[0] & 0x200 | *param_2;
  *param_2 = uVar1;
  if (uVar1 != local_18[0]) {
    *param_1 = uVar1;
    if (*(long *)(param_1 + 0x28) != 0) {
      local_20[0] = *param_2;
      FUN_003c5900(*(long *)(param_1 + 0x28),local_18,local_20);
    }
  }
  return;
}


