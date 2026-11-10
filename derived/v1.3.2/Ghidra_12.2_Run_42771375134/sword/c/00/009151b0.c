/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009151b0; name: FUN_009151b0
 */


void FUN_009151b0(long param_1,undefined2 param_2,ushort param_3,ushort param_4,void *param_5,
                 uint param_6)

{
  *(ushort *)(param_1 + 0xe) = param_3 & 0xff;
  *(undefined2 *)(param_1 + 8) = param_2;
  *(short *)(param_1 + 0xc) = (short)param_6;
  *(ushort *)(param_1 + 10) = param_4 & 0xff;
  memcpy((void *)(param_1 + 0x10),param_5,(ulong)param_6);
  return;
}


