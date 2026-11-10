/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094f010; name: FUN_0094f010
 */


undefined8 FUN_0094f010(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008e2ed0();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_008e1810(param_1,0x22);
    return uVar2;
  }
  return 1;
}


