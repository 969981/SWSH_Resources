/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c1a90; name: FUN_007c1a90
 */


void FUN_007c1a90(char *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  
  if (((param_2 != (undefined8 *)0x0) && (pbVar1 = (byte *)*param_2, pbVar1 != (byte *)0x0)) &&
     ((param_2[1] & 0x1fffffffffffffff) != 0)) {
    if (*param_1 != '\0') {
      *pbVar1 = *pbVar1 | 1;
    }
    uVar2 = (ulong)param_2[4] >> 3;
    *(byte *)(param_2[3] + uVar2) =
         *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
  }
  return;
}


