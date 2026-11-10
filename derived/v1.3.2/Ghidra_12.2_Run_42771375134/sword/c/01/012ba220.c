/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ba220; name: FUN_012ba220
 */


undefined4 FUN_012ba220(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = FUN_00878ac0(*(undefined8 *)(param_1 + 0x58));
  uVar2 = 3;
  if (0xf9 < bVar1) {
    uVar2 = 1;
  }
  return uVar2;
}


