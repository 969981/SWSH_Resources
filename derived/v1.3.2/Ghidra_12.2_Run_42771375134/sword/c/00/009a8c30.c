/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8c30; name: FUN_009a8c30
 */


void FUN_009a8c30(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [8];
  
  uVar4 = FUN_008e1890(param_2);
  if (((uVar4 & 1) == 0) && (uVar4 = FUN_008e1600(param_2), (uVar4 & 1) == 0)) {
    uVar1 = FUN_008e0a00(param_2);
    local_68 = 0x1f1f0000;
    local_64 = 0;
    FUN_00943e60(auStack_60);
    local_68 = CONCAT13(0x1f,CONCAT12(uVar1,(undefined2)local_68));
    uVar2 = FUN_008ec2f0(param_2,0x10,1);
    local_68 = CONCAT22(local_68._2_2_,uVar2);
    FUN_00943f20(auStack_60,2,0x32e);
    FUN_00943f60(auStack_60,uVar1);
    iVar3 = FUN_00942620(param_1);
    if (iVar3 == 2) {
      FUN_00943e70(auStack_60);
    }
    FUN_00942450(param_1);
    uVar5 = FUN_009255d0();
    FUN_0094c670(uVar5,auStack_38,&local_68);
  }
  return;
}


