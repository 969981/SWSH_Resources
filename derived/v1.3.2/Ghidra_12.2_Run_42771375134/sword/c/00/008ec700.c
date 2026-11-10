/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec700; name: FUN_008ec700
 */


void FUN_008ec700(uint param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  
  switch(param_1 & 0xf) {
  case 1:
    uVar7 = FUN_008e0a00(param_2);
    uVar7 = FUN_008ed150(uVar7,param_1 >> 10 & 0x3f,(param_1 & 0xffff) >> 4 & 0x3f);
    break;
  case 2:
    uVar2 = (param_1 & 0xffff) >> 4 & 0x3f;
    uVar3 = param_1 >> 10 & 0x3f;
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      uVar1 = uVar2;
      uVar2 = uVar3;
    }
    iVar6 = FUN_008ed5b0(DAT_02a4d198,(1 - uVar1) + uVar2);
    uVar7 = FUN_008e0a00(param_2);
    uVar7 = FUN_008ed0b0(uVar7,iVar6 + uVar1);
    break;
  case 3:
    uVar4 = FUN_008e0a00(param_2);
    uVar5 = FUN_008e0a00(param_2);
    uVar7 = FUN_008ed100(uVar4,uVar5);
    break;
  case 4:
    uVar4 = FUN_008e0a00(param_2);
    uVar5 = FUN_008e0a00(param_2);
    uVar2 = (param_1 & 0xffff) >> 4 & 0x3f;
    uVar3 = param_1 >> 10 & 0x3f;
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      uVar1 = uVar2;
      uVar2 = uVar3;
    }
    iVar6 = FUN_008ed5b0(DAT_02a4d198,(1 - uVar1) + uVar2);
    uVar7 = FUN_008ed180(uVar4,uVar5,iVar6 + uVar1);
    break;
  default:
    goto switchD_008ec73c_default;
  }
  *param_3 = uVar7;
switchD_008ec73c_default:
  return;
}


