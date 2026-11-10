/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940f10; name: FUN_00940f10
 */


undefined8 FUN_00940f10(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),4);
  if ((uVar1 == (param_2 & 0xff)) &&
     (iVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),0x1e), iVar2 == param_3)) {
    uVar3 = FUN_008db590(*(undefined8 *)(param_1 + 0x30),0x48,1);
    return uVar3;
  }
  return 0;
}


