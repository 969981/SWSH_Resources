/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092be20; name: FUN_0092be20
 */


bool FUN_0092be20(long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined1 param_5
                 ,undefined8 param_6)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (param_2 == 0) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = FUN_008e0a00(param_2);
  }
  FUN_008db3f0(uVar4,3,uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar4,4,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x1e,param_4);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x6b,param_5);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x4a,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x81);
  iVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x4a);
  *(bool *)param_6 = iVar3 != 0;
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return iVar2 != 0;
}


