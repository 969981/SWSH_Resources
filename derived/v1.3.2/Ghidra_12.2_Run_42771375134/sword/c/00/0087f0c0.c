/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087f0c0; name: FUN_0087f0c0
 */


undefined8 FUN_0087f0c0(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00867b80(*(undefined8 *)(param_1 + 0x98));
  uVar2 = 0;
  if (((uVar1 & 1) != 0) && ((param_2 & 1) != 0)) {
    FUN_00867c20(*(undefined8 *)(param_1 + 0x98));
    uVar2 = 1;
  }
  return uVar2;
}


