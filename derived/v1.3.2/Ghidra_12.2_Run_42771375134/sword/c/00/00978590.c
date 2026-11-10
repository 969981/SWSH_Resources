/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00978590; name: FUN_00978590
 */


bool FUN_00978590(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined2 local_58;
  char local_56;
  undefined4 local_54;
  
  uVar3 = FUN_0093eb90(param_1,3);
  bVar2 = uVar3 == (param_2 & 0xff);
  if (bVar2) {
    uVar1 = (undefined1)param_2;
    local_58 = CONCAT11(local_58._1_1_,uVar1);
    local_54 = 7;
    FUN_0093f670(param_1,&local_58);
    uVar4 = FUN_0093ec60(param_1,param_2);
    local_58 = CONCAT11(3,uVar1);
    local_56 = FUN_008e2ef0(uVar4,3);
    local_56 = local_56 + '\x01';
    FUN_0093fd90(param_1,&local_58);
    uVar5 = (ulong)&local_58 | 4;
    local_58 = 0x1f;
    FUN_00943e60(uVar5);
    local_58 = CONCAT11(local_58._1_1_,uVar1);
    FUN_00943f20(uVar5,2,0x2ba);
    FUN_00943f60(uVar5,uVar3);
    FUN_0093f640(param_1,&local_58);
  }
  return bVar2;
}


