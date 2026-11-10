/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01416a50; name: FUN_01416a50
 */


void FUN_01416a50(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_01679db0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x5d0),~param_2 & 1,~param_2 & 1);
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_01679db0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x5d0),~param_2 & 1,~param_2 & 1);
  return;
}


