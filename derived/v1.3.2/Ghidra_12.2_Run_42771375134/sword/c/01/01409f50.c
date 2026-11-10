/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01409f50; name: FUN_01409f50
 */


uint FUN_01409f50(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_40 [16];
  
  if (5 < param_1) {
    uVar2 = 0;
    do {
      FUN_008885c0(auStack_40,uVar2);
      iVar1 = FUN_00888630(auStack_40,0xe);
      FUN_00888620(auStack_40);
      if (iVar1 == 7) {
        FUN_008885c0(auStack_40,uVar2);
        iVar1 = FUN_00888630(auStack_40,0x15);
        FUN_00888620(auStack_40);
        if (iVar1 == param_1 / 6 - 1) {
          return uVar2;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x648);
  }
  return 0;
}


