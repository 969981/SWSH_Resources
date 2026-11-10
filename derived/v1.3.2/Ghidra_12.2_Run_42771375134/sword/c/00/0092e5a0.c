/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092e5a0; name: FUN_0092e5a0
 */


uint FUN_0092e5a0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_00880f50(param_4);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar6,3,uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar6,4,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,param_4);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x38,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xb4);
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x38);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  uVar6 = FUN_008e12a0(param_3,0x10);
  if (iVar3 == 0) {
    uVar4 = FUN_008ec050(uVar6,uVar2);
  }
  else {
    uVar4 = FUN_008ec010(uVar6,iVar3);
  }
  if (uVar4 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (uint)uVar6;
    if (uVar4 <= (uint)uVar6) {
      uVar5 = uVar4;
    }
  }
  return uVar5;
}


