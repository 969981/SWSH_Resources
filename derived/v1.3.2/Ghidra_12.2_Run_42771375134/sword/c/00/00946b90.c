/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946b90; name: FUN_00946b90
 */


ulong FUN_00946b90(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 1) == 1) {
    uVar2 = *(uint *)(param_1 + 2);
    if ((*(char *)((long)param_1 + 0x15) == '\0') &&
       (((uVar1 = FUN_008e0a10(*param_1), (uVar1 & 1) != 0 ||
         (*(char *)((long)param_1 + 0x14) != '\0')) || (*(char *)((long)param_1 + 0x16) != '\0'))))
    {
      uVar1 = FUN_00945420(uVar2);
      return uVar1;
    }
  }
  else {
    uVar2 = 0;
  }
  return (ulong)uVar2;
}


