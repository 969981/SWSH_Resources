/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00978670; name: FUN_00978670
 */


undefined8 FUN_00978670(undefined8 param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined2 local_58 [20];
  
  uVar1 = FUN_0093eb90(param_1,4);
  if (uVar1 == param_2) {
    iVar2 = FUN_0093ec30(param_1,0);
    uVar3 = 0;
    if (iVar2 == 1) {
      local_58[0] = 0x1f;
      uVar4 = (ulong)local_58 | 4;
      FUN_00943e60(uVar4);
      local_58[0] = CONCAT11(local_58[0]._1_1_,param_2);
      FUN_00943f20(uVar4,2,0x786);
      FUN_00943f60(uVar4,uVar1);
      FUN_0093f640(param_1,local_58);
      FUN_0093ec40(param_1,0,0);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


