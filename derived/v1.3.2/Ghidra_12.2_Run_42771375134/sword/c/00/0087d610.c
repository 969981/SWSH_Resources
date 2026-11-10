/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d610; name: FUN_0087d610
 */


uint FUN_0087d610(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0086ad20(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_00867f40(*(undefined8 *)(param_1 + 0x98));
  if (param_2 == 2) {
    uVar2 = uVar1 | uVar2;
  }
  else if (param_2 != 1) {
    if (param_2 == 0) {
      uVar2 = uVar1 & (uVar2 ^ 1);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2 & 1;
}


