/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00927090; name: FUN_00927090
 */


bool FUN_00927090(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar4,2,uVar1);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x60,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x76,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x8f);
  iVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x60);
  if (param_3 != 0) {
    iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x76);
    *(bool *)param_3 = iVar3 != 0;
  }
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return iVar2 != 0;
}


