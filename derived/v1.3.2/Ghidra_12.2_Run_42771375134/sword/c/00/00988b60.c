/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00988b60; name: FUN_00988b60
 */


void FUN_00988b60(undefined8 param_1,byte param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined2 local_58;
  
  uVar1 = FUN_0093eb90(param_1,2);
  if (uVar1 == param_2) {
    iVar2 = FUN_0093ec30(param_1,param_3);
    if (iVar2 != 0) {
      FUN_0093ec40(param_1,param_3,0);
      local_58 = 0x1f;
      uVar3 = (ulong)&local_58 | 4;
      FUN_00943e60(uVar3);
      local_58 = CONCAT11(1,param_2);
      FUN_00943f20(uVar3,2,0x114);
      FUN_00943f60(uVar3,uVar1);
      FUN_00944010(uVar3);
      FUN_0093f640(param_1,&local_58);
    }
  }
  return;
}


