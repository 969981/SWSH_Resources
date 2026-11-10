/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940e80; name: FUN_00940e80
 */


undefined8 FUN_00940e80(long param_1)

{
  ulong uVar1;
  
  FUN_008db610(*(undefined8 *)(param_1 + 0x30),0x12);
  uVar1 = FUN_008ddc10();
  if (((uVar1 & 1) == 0) ||
     (uVar1 = FUN_008db590(*(undefined8 *)(param_1 + 0x30),0x47,1), (uVar1 & 1) == 0)) {
    return 0;
  }
  return 1;
}


