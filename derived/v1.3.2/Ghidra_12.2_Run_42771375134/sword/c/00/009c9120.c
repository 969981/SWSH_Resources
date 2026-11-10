/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9120; name: FUN_009c9120
 */


void FUN_009c9120(long param_1,byte param_2,char param_3,undefined4 param_4,undefined2 param_5,
                 undefined4 param_6,undefined1 param_7,byte param_8)

{
  char *pcVar1;
  
  if (param_2 < 6) {
    pcVar1 = (char *)(param_1 + (ulong)param_2 * 0x14 + 0x60);
    if (*pcVar1 == '\x1f') {
      *pcVar1 = param_3;
      param_1 = param_1 + (ulong)param_2 * 0x14;
      *(undefined4 *)(param_1 + 100) = param_4;
      *(undefined2 *)(param_1 + 0x68) = param_5;
      *(undefined4 *)(param_1 + 0x6c) = param_6;
      *(undefined1 *)(param_1 + 0x70) = param_7;
      *(byte *)(param_1 + 0x71) = param_8 & 1;
    }
  }
  return;
}


