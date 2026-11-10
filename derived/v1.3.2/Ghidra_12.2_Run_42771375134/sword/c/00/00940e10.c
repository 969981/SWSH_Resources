/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940e10; name: FUN_00940e10
 */


undefined8 FUN_00940e10(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),2);
  if ((uVar1 == (param_2 & 0xff)) &&
     (iVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),0x35), 0 < iVar2)) {
    uVar3 = FUN_008db590(*(undefined8 *)(param_1 + 0x30),0x48,1);
    return uVar3;
  }
  return 0;
}


