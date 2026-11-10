/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080e440; name: FUN_0080e440
 */


undefined4 FUN_0080e440(ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 4;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    uVar3 = 5;
  }
  uVar2 = (uint)param_1;
  uVar1 = 3;
  if (0x1fffff < uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 2;
  if (0x3fff < uVar2) {
    uVar3 = uVar1;
  }
  uVar1 = 1;
  if (0x7f < uVar2) {
    uVar1 = uVar3;
  }
  return uVar1;
}


