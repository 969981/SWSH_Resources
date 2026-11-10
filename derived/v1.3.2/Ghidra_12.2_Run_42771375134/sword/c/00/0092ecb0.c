/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092ecb0; name: FUN_0092ecb0
 */


uint FUN_0092ecb0(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4,
                 undefined1 *param_5)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar4,3,uVar2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x16,*(undefined1 *)((long)param_3 + 0xe));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_3);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x62,0);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x61,0);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),4,param_4 & 0xff);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x30);
  uVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),4);
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x62);
  *param_5 = uVar2;
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  uVar1 = 0x1f;
  if ((uVar3 & 0xff) != (param_4 & 0xff)) {
    uVar1 = uVar3;
  }
  return uVar1;
}


