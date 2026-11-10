/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00936d20; name: FUN_00936d20
 */


void FUN_00936d20(long param_1,undefined1 param_2,uint param_3)

{
  if ((param_3 < 0x14) && ((0xa79ffU >> (ulong)(param_3 & 0x1f) & 1) != 0)) {
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xba,
                 *(undefined4 *)(&DAT_0214acd0 + (long)(int)param_3 * 4),param_2,0xffff0000);
    return;
  }
  return;
}


