/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940b60; name: FUN_00940b60
 */


void FUN_00940b60(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined2 local_60 [20];
  undefined1 auStack_38 [8];
  
  uVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),2);
  if (uVar1 == (param_2 & 0xff)) {
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 8));
    FUN_008deea0(uVar3,param_2);
    uVar4 = FUN_008e2ec0();
    if ((uVar4 & 1) == 0) {
      local_60[0] = 0x1f;
      uVar4 = (ulong)local_60 | 4;
      FUN_00943e60(uVar4);
      local_60[0] = CONCAT11(local_60[0]._1_1_,(char)param_2);
      FUN_00943f20(uVar4,2,0x406);
      FUN_00943f60(uVar4,uVar1);
      uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),0x12);
      FUN_00943f60(uVar4,uVar2);
      uVar3 = FUN_009256b0(*(undefined8 *)(param_1 + 0x20));
      FUN_0094c9b0(uVar3,auStack_38,local_60);
    }
  }
  return;
}


