/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00217f90; name: FUN_00217f90
 */


ulong FUN_00217f90(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(param_1 + 1);
  if (uVar1 != 1) {
    if (uVar1 == 0) {
      return 0xffffffff;
    }
    param_1 = (undefined8 *)*param_1;
  }
  uVar2 = 0;
  do {
    if (param_1[uVar2] == param_2) {
      return uVar2 & 0xffffffff;
    }
    uVar2 = uVar2 + 1;
  } while ((uint)uVar2 < (uint)uVar1);
  return 0xffffffff;
}


