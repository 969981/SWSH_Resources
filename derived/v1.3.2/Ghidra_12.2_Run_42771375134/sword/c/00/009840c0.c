/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009840c0; name: FUN_009840c0
 */


void FUN_009840c0(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined1 auStack_48 [40];
  
  uVar2 = FUN_0093eb90(param_1,4);
  if ((uVar2 == (param_2 & 0xff)) && (iVar3 = FUN_0093eb90(param_1,99), iVar3 != 0)) {
    local_60 = 0x1f1f;
    local_54 = 0;
    uStack_50 = 0;
    local_5c = 0;
    uStack_58 = 0;
    local_4c = 1;
    FUN_00943e60(auStack_48);
    local_5c = 5;
    uVar4 = FUN_008ec1d0(5,param_2);
    uStack_58 = (undefined4)uVar4;
    local_54 = (undefined4)((ulong)uVar4 >> 0x20);
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    local_60 = CONCAT11(local_60._1_1_,(char)param_2);
    uVar1 = FUN_0093eb90(param_1,3);
    local_60 = CONCAT11(uVar1,(undefined1)local_60);
    FUN_0093f310(param_1,&local_60);
  }
  return;
}


