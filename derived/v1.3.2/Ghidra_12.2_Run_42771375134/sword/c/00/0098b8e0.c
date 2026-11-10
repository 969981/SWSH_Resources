/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0098b8e0; name: FUN_0098b8e0
 */


void FUN_0098b8e0(undefined8 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined2 local_68 [20];
  
  uVar1 = FUN_0093eb90(param_1,4);
  if (uVar1 == (param_2 & 0xff)) {
    iVar2 = FUN_0093ec30(param_1,0);
    if (iVar2 != 0) {
      FUN_0093f010(param_1,param_2);
      local_68[0] = 0x1f;
      uVar3 = (ulong)local_68 | 4;
      FUN_00943e60(uVar3);
      local_68[0] = CONCAT11(local_68[0]._1_1_,(char)param_2);
      FUN_00943f20(uVar3,2,param_3);
      FUN_00943f60(uVar3,uVar1);
      FUN_0093f640(param_1,local_68);
      FUN_0093f090(param_1,param_2);
      FUN_0093ec40(param_1,0,0);
    }
  }
  return;
}


