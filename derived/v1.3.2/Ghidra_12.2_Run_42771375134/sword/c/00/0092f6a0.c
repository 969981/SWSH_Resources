/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092f6a0; name: thunk_FUN_008fa2d0
 */


undefined1 thunk_FUN_008fa2d0(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x88);
  if ((puVar3[0x29d] >> 2 & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x150) == 2) {
    if ((puVar3[0x29c] & 0x41800) == 0 && (puVar3[0x29d] & 0x30) == 0) {
      return 0;
    }
  }
  else if (1 < *puVar3) {
    return 0;
  }
  FUN_008e0a00(param_2);
  cVar1 = FUN_009c98b0();
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = FUN_008e0a10(param_2);
  if ((uVar2 & 1) == 0) {
    return *(undefined1 *)(param_2 + 0x33e);
  }
  return 0;
}


