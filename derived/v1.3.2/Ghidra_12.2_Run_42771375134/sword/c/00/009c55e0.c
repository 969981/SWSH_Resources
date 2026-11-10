/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c55e0; name: FUN_009c55e0
 */


void FUN_009c55e0(undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  if (*(byte *)((long)param_1 + 0x31) < *(byte *)((long)param_1 + 0x32)) {
    param_1[(ulong)*(byte *)((long)param_1 + 0x31) + 1] = *param_1;
    *(undefined1 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x31) + 0x18) = param_3;
    *(undefined1 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x31) + 0x1d) = param_2;
    *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x31) * 2 + 0x22) = 0;
    *(undefined1 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x31) + 0x2c) = 0;
    *(char *)((long)param_1 + 0x31) = *(char *)((long)param_1 + 0x31) + '\x01';
  }
  return;
}


