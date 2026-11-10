/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0098be90; name: FUN_0098be90
 */


void FUN_0098be90(undefined8 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined6 uStack_80;
  byte bStack_7a;
  undefined4 local_78;
  undefined1 auStack_74 [36];
  undefined1 local_50 [8];
  undefined1 auStack_48 [8];
  
  uVar3 = FUN_009416b0();
  FUN_008ed700(auStack_48,4,uVar3);
  bVar2 = FUN_00941920(param_1,auStack_48,local_50);
  if (bVar2 != 0) {
    local_a0[0] = 0x1f;
    local_9c = 0x2d;
    local_78 = 0;
    uStack_80 = 0;
    bStack_7a = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_81 = 0;
    local_98 = 0;
    FUN_00943e60(auStack_74);
    uVar6 = (ulong)bVar2;
    puVar7 = local_50;
    bStack_7a = 0;
    local_a0[0] = param_2;
    do {
      uVar1 = *puVar7;
      uVar4 = FUN_0093ec60(param_1,uVar1);
      uVar5 = FUN_008e1810(uVar4,param_3);
      if ((uVar5 & 1) != 0) {
        local_a0[(ulong)bStack_7a + 8] = uVar1;
        bStack_7a = bStack_7a + 1;
      }
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    local_78._0_3_ = CONCAT12(1,(undefined2)local_78);
    if (bStack_7a != 0) {
      local_9c = param_3;
      FUN_0093f290(param_1,local_a0);
    }
  }
  return;
}


