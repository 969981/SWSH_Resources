/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093e320; name: FUN_0093e320
 */


void FUN_0093e320(undefined8 param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined2 local_70;
  undefined8 local_6e;
  undefined1 local_66;
  undefined1 auStack_64 [36];
  
  uVar2 = FUN_0093ee20();
  if ((uVar2 & 0xff) != 0x1f) {
    FUN_0093ec60(param_1,uVar2);
    uVar4 = FUN_008e1890();
    if ((uVar4 & 1) == 0) {
      uVar3 = FUN_0093ec30(param_1,6);
      uVar5 = FUN_0093ec60(param_1,uVar3);
      local_70 = 0x1f1f;
      local_6e = 0x101000000000000;
      local_66 = 0;
      FUN_00943e60(auStack_64);
      local_70 = CONCAT11((char)uVar2,(char)uVar3);
      uVar1 = FUN_008ec2f0(uVar5,2,1);
      local_6e = CONCAT62(local_6e._2_6_,uVar1);
      local_66 = FUN_0093ec30(param_1,0);
      FUN_00943f20(auStack_64,2,0x3b0);
      FUN_00943f60(auStack_64,uVar3 & 0xff);
      FUN_0093f110(param_1,&local_70);
    }
  }
  return;
}


