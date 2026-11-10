/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9500; name: FUN_008f9500
 */


undefined8 FUN_008f9500(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_009c98b0(param_3);
  iVar2 = FUN_008df6e0(param_2,uVar1,param_3);
  if (-1 < iVar2) {
    uVar3 = FUN_008f79e0(param_1,uVar1,iVar2);
    if ((uVar3 & 0xff) != 5) {
      uVar4 = FUN_008f9590(param_1,uVar3);
      return uVar4;
    }
  }
  return 0xff;
}


