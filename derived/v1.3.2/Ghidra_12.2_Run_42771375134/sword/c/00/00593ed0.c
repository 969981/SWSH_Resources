/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00593ed0; name: FUN_00593ed0
 */


undefined8 FUN_00593ed0(void)

{
  undefined8 uVar1;
  int in_w3;
  
  if (in_w3 == 9) {
    uVar1 = FUN_00593860();
    return uVar1;
  }
  if (in_w3 == 5) {
    uVar1 = FUN_00593550();
    return uVar1;
  }
  if (in_w3 == 3) {
    uVar1 = FUN_00593180();
    return uVar1;
  }
  return 0xfffffffc;
}


