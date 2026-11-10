/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014adfd0; name: FUN_014adfd0
 */


bool FUN_014adfd0(long param_1)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar2 = FUN_00878aa0();
    bVar1 = (bVar2 | 1) == 0x2d;
  }
  return bVar1;
}


