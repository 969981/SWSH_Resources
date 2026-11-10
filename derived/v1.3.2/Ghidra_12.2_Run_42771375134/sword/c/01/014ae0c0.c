/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae0c0; name: FUN_014ae0c0
 */


undefined8 FUN_014ae0c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((param_1 == 0) || (uVar2 = FUN_008787d0(), (uVar2 & 1) != 0)) {
    return 0;
  }
  uVar2 = FUN_0087d610(param_1,2);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  iVar1 = FUN_00878a50(param_1);
  if (((((((iVar1 != 9) || (iVar1 = FUN_008783b0(param_1), iVar1 != 0xe9)) ||
         (uVar2 = FUN_0087d200(param_1), (uVar2 & 1) != 0)) &&
        (((iVar1 = FUN_00878a50(param_1), iVar1 != 9 ||
          (iVar1 = FUN_008783b0(param_1), iVar1 != 0x1da)) ||
         (uVar2 = FUN_0087d200(param_1), (uVar2 & 1) != 0)))) &&
       ((((iVar1 = FUN_00878a50(param_1), iVar1 != 9 ||
          (iVar1 = FUN_008783b0(param_1), iVar1 != 0x30a)) ||
         (uVar2 = FUN_0087d200(param_1), (uVar2 & 1) != 0)) &&
        (((iVar1 = FUN_00878a50(param_1), iVar1 != 9 ||
          (iVar1 = FUN_008783b0(param_1), iVar1 != 0x33b)) ||
         (uVar2 = FUN_0087d200(param_1), (uVar2 & 1) != 0)))))) &&
      (((iVar1 = FUN_00878a50(param_1), iVar1 != 9 ||
        (iVar1 = FUN_008783b0(param_1), iVar1 != 0x350)) ||
       (uVar2 = FUN_0087d200(param_1), (uVar2 & 1) != 0)))) &&
     (((((iVar1 = FUN_00878a50(param_1), iVar1 != 9 ||
         (iVar1 = FUN_008783b0(param_1), iVar1 != 0x233)) ||
        (uVar2 = FUN_0087d200(param_1), (uVar2 & 1) != 0)) &&
       (((iVar1 = FUN_00878a50(param_1), iVar1 != 9 ||
         (iVar1 = FUN_008783b0(param_1), iVar1 != 0x33c)) ||
        (uVar2 = FUN_0087d200(param_1), (uVar2 & 1) != 0)))) &&
      (((iVar1 = FUN_00878a50(param_1), iVar1 != 9 ||
        (iVar1 = FUN_008783b0(param_1), iVar1 != 0x363)) ||
       (uVar2 = FUN_0087d200(param_1), (uVar2 & 1) != 0)))))) {
    iVar1 = FUN_00878a50(param_1);
    if (iVar1 != 9) {
      return 0;
    }
    iVar1 = FUN_008783b0(param_1);
    if (iVar1 != 0x2a3) {
      return 0;
    }
    uVar2 = FUN_0087d200(param_1);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  FUN_00878310(param_1);
  return 1;
}


