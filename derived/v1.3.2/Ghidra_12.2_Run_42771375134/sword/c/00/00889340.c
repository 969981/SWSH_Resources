/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00889340; name: FUN_00889340
 */


undefined4 FUN_00889340(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = 3;
  }
  if (param_1 == 7) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if (param_1 < 8) {
    uVar1 = uVar2;
  }
  return uVar1;
}


