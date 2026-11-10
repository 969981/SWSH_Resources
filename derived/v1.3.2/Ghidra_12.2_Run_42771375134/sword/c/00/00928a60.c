/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00928a60; name: FUN_00928a60
 */


void FUN_00928a60(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,int *param_6,int *param_7)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00880e50(param_2,param_3,param_7);
  *param_6 = iVar2;
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_4);
  FUN_008db3f0(uVar4,3,uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_5);
  FUN_008db3f0(uVar4,4,uVar1);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x22,*param_6);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x23,*param_7);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x38,1);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x74);
  iVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x22);
  *param_6 = iVar2;
  iVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x23);
  *param_7 = iVar2;
  uVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x38);
  if (1 < (uVar3 & 0xff)) {
    *param_7 = *param_7 * (uVar3 & 0xff);
  }
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  if (*param_6 == 8) {
    *param_6 = 0;
  }
  return;
}


