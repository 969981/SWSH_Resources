/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00886440; name: FUN_00886440
 */


undefined4 FUN_00886440(long param_1)

{
  undefined4 uVar1;
  short *psVar2;
  
  psVar2 = *(short **)(param_1 + 0x10);
  if (*psVar2 == 0) {
    return 0;
  }
  if (psVar2[4] == 0) {
    return 1;
  }
  if (psVar2[8] == 0) {
    return 2;
  }
  if (psVar2[0xc] == 0) {
    return 3;
  }
  if (psVar2[0x10] == 0) {
    return 4;
  }
  if (psVar2[0x14] == 0) {
    return 5;
  }
  if (psVar2[0x18] == 0) {
    return 6;
  }
  if (psVar2[0x1c] == 0) {
    return 7;
  }
  uVar1 = 8;
  if (psVar2[0x20] != 0) {
    uVar1 = 9;
  }
  return uVar1;
}


