/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7140; name: FUN_011f7140
 */


undefined1  [16] FUN_011f7140(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  uVar3 = uVar2 / 300;
  if (uVar2 % 300 != 0) {
    uVar3 = uVar3 + 1;
  }
  if (uVar3 <= param_2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    return auVar1 << 0x40;
  }
  if (param_2 + 1 == uVar3) {
    auVar4._8_8_ = (param_2 * -300 - *(long *)(param_1 + 8)) + *(long *)(param_1 + 0x10);
    auVar4._0_8_ = 1;
    return auVar4;
  }
  auVar5._8_8_ = 300;
  auVar5._0_8_ = 1;
  return auVar5;
}


