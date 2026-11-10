/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d709f0; name: FUN_00d709f0
 */


undefined4 FUN_00d709f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 10;
  if (param_1 != 2) {
    uVar2 = 0;
  }
  uVar1 = 0x1c;
  if (param_1 != 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}


