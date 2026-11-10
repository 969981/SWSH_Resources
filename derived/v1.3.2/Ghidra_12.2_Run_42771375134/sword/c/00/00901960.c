/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00901960; name: FUN_00901960
 */


undefined8 FUN_00901960(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0x34d) != '\0') ||
     (iVar3 = FUN_009dd590(*(undefined8 *)(param_1 + 0x58),param_2,param_1 + 0x108), iVar3 < 0)) {
    bVar1 = FUN_008fa2d0(*(undefined8 *)(param_1 + 0x58),param_2);
    if (bVar1 < 0xdc) {
      FUN_009c7ca0(param_3,1,0x52);
      uVar2 = FUN_008e0a00(param_2);
      FUN_009c7cd0(param_3,uVar2);
      FUN_009c7cf0(param_3,0x18);
      return 0;
    }
    iVar3 = 0x54;
  }
  FUN_009c7ca0(param_3,1,iVar3);
  uVar2 = FUN_008e0a00(param_2);
  FUN_009c7cd0(param_3,uVar2);
  FUN_009c7cd0(param_3,*(undefined1 *)(param_1 + 0x2a6));
  FUN_009c7cf0(param_3,0x18);
  return 1;
}


