/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c162d0; name: FUN_00c162d0
 */


void FUN_00c162d0(long param_1,ulong param_2)

{
  undefined8 local_18;
  
  if ((param_2 & 1) == 0) {
    local_18 = 0x5d535ce6aac7e0c2;
  }
  else {
    local_18 = 0x5dcf04a7eab5508d;
  }
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x5f8),&local_18);
  return;
}


