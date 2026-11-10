/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008859b0; name: FUN_008859b0
 */


void FUN_008859b0(long *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 0) {
    uVar2 = 0;
    do {
      (**(code **)(*param_1 + 0x50))(param_1,uVar2);
      FUN_00878370();
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  return;
}


