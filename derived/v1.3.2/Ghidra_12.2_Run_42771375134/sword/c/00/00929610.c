/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00929610; name: FUN_00929610
 */


bool FUN_00929610(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar4,2,uVar1);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  uVar3 = FUN_008e1810(param_2,0x16);
  if (((uVar3 & 1) != 0) || (uVar3 = FUN_008e1810(param_2,8), (uVar3 & 1) != 0)) {
    FUN_008db590(*(undefined8 *)(param_1 + 0x10),0x48,1);
  }
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xc);
  iVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return iVar2 != 0;
}


