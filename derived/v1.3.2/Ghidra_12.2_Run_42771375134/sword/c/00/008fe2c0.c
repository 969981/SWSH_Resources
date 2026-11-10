/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fe2c0; name: FUN_008fe2c0
 */


undefined8 FUN_008fe2c0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_008ec3f0(param_2,0x1a);
  if ((((iVar1 == 0) || (uVar2 = FUN_008e1810(param_3,2), (uVar2 & 1) == 0)) &&
      ((iVar1 = FUN_008ec3f0(param_2,0x1b), iVar1 == 0 ||
       (uVar2 = FUN_008e1810(param_3,5), (uVar2 & 1) == 0)))) &&
     (((iVar1 = FUN_008ec3f0(param_2,0x1c), iVar1 == 0 ||
       (uVar2 = FUN_008e1810(param_3,4), (uVar2 & 1) == 0)) &&
      ((iVar1 = FUN_008ec3f0(param_2,0x1d), iVar1 == 0 ||
       (uVar2 = FUN_008e1810(param_3,3), (uVar2 & 1) == 0)))))) {
    iVar1 = FUN_008ec3f0(param_2,0x1e);
    if ((iVar1 != 0) && (uVar2 = FUN_008e1810(param_3,1), (uVar2 & 1) != 0)) {
      return 1;
    }
    iVar1 = FUN_008ec3f0(param_2,0x1f);
    if (((iVar1 == 0) || (uVar2 = FUN_008e1810(param_3,6), (uVar2 & 1) == 0)) &&
       ((iVar1 = FUN_008ec3f0(param_2,0x20), iVar1 == 0 ||
        (uVar2 = FUN_008e1810(param_3,7), (uVar2 & 1) == 0)))) {
      return 0;
    }
  }
  return 1;
}


