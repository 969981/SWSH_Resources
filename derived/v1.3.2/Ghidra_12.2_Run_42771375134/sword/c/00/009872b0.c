/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009872b0; name: FUN_009872b0
 */


bool FUN_009872b0(undefined8 param_1,undefined1 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 auStack_54 [36];
  
  FUN_0093ec60();
  uVar3 = FUN_008e2d10();
  uVar4 = FUN_00888fc0();
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    local_60 = 0x1f000000001f1f;
    local_58 = (uint)local_58._2_2_ << 0x10;
    FUN_00943e60(auStack_54);
    uVar2 = local_60;
    local_60._0_2_ = CONCAT11(param_2,param_2);
    local_60._4_4_ = SUB84(uVar2,4);
    local_60._0_4_ = (uint)(ushort)local_60;
    local_58._0_2_ = CONCAT11(1,(undefined1)local_58);
    FUN_0093fbf0(param_1,&local_60);
    uVar2 = local_60;
    local_60._0_2_ = CONCAT11(param_2,param_2);
    local_60._0_4_ = CONCAT22(uVar3,(ushort)local_60);
    local_60._5_3_ = SUB83(uVar2,5);
    local_60._0_5_ = CONCAT14(1,(uint)local_60);
    local_58 = 1;
    FUN_0093fce0(param_1,&local_60);
  }
  return bVar1;
}


