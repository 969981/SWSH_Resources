/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aa1f0; name: FUN_009aa1f0
 */


uint FUN_009aa1f0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 local_48 [8];
  undefined1 local_38 [8];
  
  local_38[0] = FUN_008e0a00(param_2);
  FUN_00942450(param_1);
  uVar5 = FUN_00925630();
  FUN_00945320(uVar5,local_48,local_38);
  uVar1 = FUN_008ec560(param_2,local_48[0]);
  uVar5 = FUN_009423e0(param_1);
  iVar2 = FUN_0092cbd0(uVar5,param_2,local_48[0],uVar1);
  uVar4 = 0;
  if (iVar2 != 0) {
    FUN_00942390(param_1);
    FUN_00931930();
    uVar3 = FUN_009327b0();
    uVar4 = FUN_009aa2c0(param_1,param_2,local_48[0],iVar2,uVar3,param_3 & 1);
  }
  return uVar4 & 1;
}


