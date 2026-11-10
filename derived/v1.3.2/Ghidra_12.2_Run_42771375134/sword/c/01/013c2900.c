/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c2900; name: FUN_013c2900
 */


void FUN_013c2900(long param_1)

{
  undefined1 auStack_50 [20];
  undefined4 local_3c;
  
  FUN_01302c30(auStack_50);
  local_3c = 4;
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_013c21e0(*(undefined8 *)(param_1 + 0x68),auStack_50);
  }
  FUN_01302cd0(auStack_50);
  return;
}


