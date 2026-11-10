/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ada70; name: FUN_014ada70
 */


undefined4 FUN_014ada70(undefined8 param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = FUN_008e2920();
  if (((((uVar3 & 0x7c00) == 0x800) || ((uVar3 & 0x1f) == 2)) || ((uVar3 & 0x3e0) == 0x40)) ||
     (iVar4 = FUN_008e12a0(param_1,0x13), iVar4 == 0x1a)) {
    return 4;
  }
  sVar1 = FUN_008e2d10(param_1);
  if (sVar1 == 0x21d) {
    return 4;
  }
  uVar2 = FUN_008e4cb0(param_1);
  if (1999 < uVar2) {
    return 0;
  }
  if (999 < uVar2) {
    return 1;
  }
  uVar5 = 2;
  if (uVar2 < 500) {
    uVar5 = 3;
  }
  return uVar5;
}


