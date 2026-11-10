/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b7370; name: FUN_014b7370
 */


undefined8 FUN_014b7370(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0087d3e0();
  if (uVar1 < 0xff) {
    if (uVar1 < 100) {
      iVar2 = FUN_00888630(param_2,0x39);
      if ((iVar2 != 0) && (iVar2 = FUN_00888630(param_2,0x44), 0 < iVar2)) {
        return 1;
      }
    }
    else if (uVar1 < 0xa0) {
      iVar2 = FUN_00888630(param_2,0x3a);
      if ((iVar2 != 0) && (iVar2 = FUN_00888630(param_2,0x45), 0 < iVar2)) {
        return 1;
      }
    }
    else {
      iVar2 = FUN_00888630(param_2,0x3b);
      if ((iVar2 != 0) && (iVar2 = FUN_00888630(param_2,0x46), 0 < iVar2)) {
        return 1;
      }
    }
  }
  return 0;
}


