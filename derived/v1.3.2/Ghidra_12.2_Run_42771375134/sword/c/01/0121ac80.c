/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121ac80; name: FUN_0121ac80
 */


void FUN_0121ac80(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  
  if (((undefined8 *)*param_2 != (undefined8 *)0x0) && (0x3f < (ulong)(param_2[1] << 3))) {
    *(undefined8 *)*param_2 = *param_1;
    uVar1 = (ulong)param_2[4] >> 3;
    *(byte *)(param_2[3] + uVar1) =
         *(byte *)(param_2[3] + uVar1) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
  }
  return;
}


