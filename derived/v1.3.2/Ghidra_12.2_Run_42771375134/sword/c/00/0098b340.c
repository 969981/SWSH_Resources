/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0098b340; name: FUN_0098b340
 */


void FUN_0098b340(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined6 uStack_60;
  undefined1 uStack_5a;
  undefined4 local_58;
  undefined1 auStack_54 [36];
  
  uVar1 = FUN_0093ec60();
  uVar2 = FUN_008e1810(uVar1,param_3);
  if ((uVar2 & 1) != 0) {
    FUN_0093f010(param_1,param_2);
    local_80[0] = 0x1f;
    local_7c = 0x2d;
    local_58 = 0;
    uStack_60 = 0;
    uStack_5a = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_61 = 0;
    FUN_00943e60(auStack_54);
    local_80[0] = (undefined1)param_2;
    local_78 = CONCAT71(local_78._1_7_,local_80[0]);
    uStack_5a = 1;
    local_7c = param_3;
    FUN_0093f290(param_1,local_80);
    FUN_0093f090(param_1,param_2);
  }
  return;
}


