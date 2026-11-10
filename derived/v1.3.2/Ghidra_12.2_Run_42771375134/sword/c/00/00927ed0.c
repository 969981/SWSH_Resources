/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00927ed0; name: FUN_00927ed0
 */


bool FUN_00927ed0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((param_3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_008e29c0(param_2,2);
    uVar2 = uVar2 & 1;
  }
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar6,2,uVar1);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x59,uVar2);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x12);
  uVar5 = FUN_008e1810(param_2,0x15);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_008e1810(param_2,0x20);
  }
  else {
    FUN_008db590(*(undefined8 *)(param_1 + 0x10),0x48,1);
    uVar5 = FUN_008e1810(param_2,0x20);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_008e1810(param_2,0x21);
  }
  else {
    FUN_008db590(*(undefined8 *)(param_1 + 0x10),0x48,1);
    uVar5 = FUN_008e1810(param_2,0x21);
  }
  if (((uVar5 & 1) != 0) || (uVar5 = FUN_008e1810(param_2,0x1f), (uVar5 & 1) != 0)) {
    FUN_008db590(*(undefined8 *)(param_1 + 0x10),0x59,1);
  }
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x59);
  iVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return iVar3 != 0 && iVar4 == 0;
}


