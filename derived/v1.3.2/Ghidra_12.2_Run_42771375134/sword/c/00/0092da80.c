/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092da80; name: FUN_0092da80
 */


bool FUN_0092da80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  *param_5 = 1;
  iVar3 = FUN_008e2e80(param_3);
  if (iVar3 == 0x19) {
    bVar1 = false;
  }
  else {
    FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_008e0a00(param_2);
    FUN_008db3f0(uVar4,3,uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_008e0a00(param_3);
    FUN_008db3f0(uVar4,4,uVar2);
    FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x24,iVar3);
    FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x49,1);
    FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x56,*param_5);
    FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xc0);
    iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x49);
    bVar1 = iVar3 != 0;
    iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x56);
    *param_5 = iVar3 != 0;
    FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  }
  return bVar1;
}


