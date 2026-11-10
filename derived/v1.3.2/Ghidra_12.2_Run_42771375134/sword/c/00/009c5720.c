/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c5720; name: FUN_009c5720
 */


undefined8
FUN_009c5720(long param_1,undefined4 *param_2,undefined1 *param_3,short *param_4,undefined1 *param_5
            )

{
  short *psVar1;
  ulong uVar2;
  
  if (*(byte *)(param_1 + 0x31) == 0) {
    return 0;
  }
  uVar2 = (ulong)(*(byte *)(param_1 + 0x31) - 1);
  psVar1 = (short *)(param_1 + uVar2 * 2 + 0x22);
  if (*psVar1 == 0) {
    *param_2 = 5;
    *param_3 = 0;
    *param_5 = 0;
    *param_4 = 0;
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + uVar2 * 4 + 4);
  *param_3 = *(undefined1 *)(param_1 + uVar2 + 0x18);
  *param_5 = *(undefined1 *)(param_1 + uVar2 + 0x2c);
  *param_4 = *psVar1;
  return 1;
}


