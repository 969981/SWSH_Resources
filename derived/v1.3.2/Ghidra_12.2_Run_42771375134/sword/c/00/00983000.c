/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00983000; name: FUN_00983000
 */


void FUN_00983000(undefined8 param_1,byte param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  byte local_68;
  undefined4 local_67;
  undefined2 local_63;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 uStack_5b;
  undefined2 uStack_5a;
  undefined5 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 auStack_44 [36];
  
  uVar2 = FUN_0093eb90(param_1,4);
  if ((uVar2 == param_2) && (iVar3 = FUN_0093eb90(param_1,99), iVar3 != 0)) {
    local_68 = 0x1f;
    local_63 = 0;
    local_67 = 0;
    uStack_58 = 0;
    local_60 = 0;
    local_5c = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    local_48 = 0;
    local_50 = 0;
    FUN_00943e60(auStack_44);
    local_67 = CONCAT31(local_67._1_3_,1);
    local_68 = param_2;
    uVar1 = FUN_0093eb90(param_1,3);
    local_67._0_2_ = CONCAT11(uVar1,(undefined1)local_67);
    local_5c = 0xff;
    uStack_5b = 3;
    local_60 = 1;
    local_48 = CONCAT11(1,(undefined1)local_48);
    local_50._0_7_ = CONCAT25(0x101,(undefined5)local_50);
    FUN_0093f400(param_1,&local_68);
  }
  return;
}


