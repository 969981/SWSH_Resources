/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00938a30; name: FUN_00938a30
 */


void FUN_00938a30(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_008e50f0(param_2);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_008e0a00(param_2);
  }
  else {
    uVar1 = FUN_008e5100(param_2);
  }
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x4c,uVar1);
  return;
}


