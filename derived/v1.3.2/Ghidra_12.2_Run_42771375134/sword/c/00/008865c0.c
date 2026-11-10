/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008865c0; name: FUN_008865c0
 */


short FUN_008865c0(long param_1,byte param_2)

{
  short *psVar1;
  byte bVar2;
  
  psVar1 = *(short **)(param_1 + 0x10);
  bVar2 = 0;
  if (*psVar1 != 0) {
    if (psVar1[4] == 0) {
      bVar2 = 1;
    }
    else if (psVar1[8] == 0) {
      bVar2 = 2;
    }
    else if (psVar1[0xc] == 0) {
      bVar2 = 3;
    }
    else if (psVar1[0x10] == 0) {
      bVar2 = 4;
    }
    else if (psVar1[0x14] == 0) {
      bVar2 = 5;
    }
    else if (psVar1[0x18] == 0) {
      bVar2 = 6;
    }
    else if (psVar1[0x1c] == 0) {
      bVar2 = 7;
    }
    else {
      bVar2 = 8;
      if (psVar1[0x20] != 0) {
        bVar2 = 9;
      }
    }
  }
  if (bVar2 <= param_2) {
    param_2 = 0;
  }
  return psVar1[(ulong)param_2 * 4 + 2];
}


