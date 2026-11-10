/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009459b0; name: FUN_009459b0
 */


undefined8
FUN_009459b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
            uint param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_64 [4];
  undefined8 local_60;
  undefined2 local_58;
  undefined1 auStack_48 [4];
  undefined1 local_44 [4];
  
  FUN_00942390();
  uVar4 = FUN_00931920();
  uVar5 = FUN_00942380(param_1);
  uVar3 = FUN_008e0a00(param_3);
  uVar3 = FUN_008f9470(uVar5,uVar4,uVar3);
  uVar4 = FUN_00942380(param_1);
  FUN_008f8e50(uVar4,uVar3,local_44,auStack_64);
  FUN_008e0a00(param_2);
  local_44[0] = FUN_008f94e0();
  if ((param_5 & 1) == 0) {
    bVar1 = FUN_008e12a0(param_2,0x11);
    bVar2 = FUN_008e12a0(param_3,0x11);
    if (bVar1 < bVar2) {
      return 0;
    }
  }
  uVar6 = FUN_00942670(param_1,0x400);
  if (((uVar6 & 1) == 0) && (uVar6 = FUN_00942670(param_1,0x80000), (uVar6 & 1) == 0)) {
    local_60 = param_3;
    local_58 = param_4;
    FUN_00942450(param_1);
    uVar4 = FUN_009259e0();
    FUN_00945c60(uVar4,auStack_48,&local_60);
    uVar4 = FUN_009423b0(param_1);
    FUN_0093a430(uVar4,local_44[0]);
    return 1;
  }
  return 0;
}


