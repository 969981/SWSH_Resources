/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c56c0; name: FUN_009c56c0
 */


void FUN_009c56c0(long param_1,undefined4 param_2,undefined1 param_3,undefined2 param_4,
                 undefined1 param_5)

{
  if (*(byte *)(param_1 + 0x31) < *(byte *)(param_1 + 0x32)) {
    *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x31) * 4 + 4) = param_2;
    *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0x31) + 0x18) = param_3;
    *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0x31) + 0x1d) = 0;
    *(undefined2 *)(param_1 + (ulong)*(byte *)(param_1 + 0x31) * 2 + 0x22) = param_4;
    *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0x31) + 0x2c) = param_5;
    *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x01';
  }
  return;
}


