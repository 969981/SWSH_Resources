/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0098f270; name: FUN_0098f270
 */


void FUN_0098f270(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined2 uStack_75;
  undefined2 local_73;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 auStack_54 [36];
  
  uVar1 = FUN_0093ec60();
  uVar2 = FUN_008e2f50(uVar1,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    local_78 = 0x1f;
    uStack_77 = 0;
    uVar2 = (ulong)&local_78 | 4;
    FUN_00943e60(uVar2);
    uStack_77 = 1;
    local_78 = param_2;
    FUN_00943f20(uVar2,2,0x120);
    FUN_00943f60(uVar2,param_2);
    FUN_0093f640(param_1,&local_78);
  }
  else {
    local_78 = 0x1f;
    local_73 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    local_70 = 0;
    local_6c = 0;
    local_58 = 0;
    local_60 = 0;
    FUN_00943e60(auStack_54);
    uStack_77 = 1;
    local_60._0_6_ = CONCAT15(1,(undefined5)local_60);
    local_6c = CONCAT31(local_6c._1_3_,param_4);
    uStack_64 = 1;
    local_78 = param_2;
    uStack_76 = param_2;
    local_70 = param_3;
    FUN_0093f400(param_1,&local_78);
  }
  FUN_0093ebd0(param_1,0x75,1);
  return;
}


