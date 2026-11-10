/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ec4d0; name: FUN_009ec4d0
 */


undefined8 FUN_009ec4d0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_008d5870();
  uVar4 = FUN_008d5520(param_1);
  uVar4 = FUN_008df3c0(uVar4,uVar1 & 0xff);
  uVar5 = FUN_008d5500(param_1);
  uVar1 = FUN_008f9f90(uVar5,uVar1);
  uVar1 = uVar1 & 0xff;
  uVar2 = FUN_009141c0(uVar4);
  if ((uVar2 & 0xff) <= uVar1) {
    return 0;
  }
  do {
    FUN_00914330(uVar4,uVar1);
    iVar3 = FUN_008e19f0();
    if (iVar3 != 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < (uVar2 & 0xff));
  return 0;
}


