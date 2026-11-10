/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009828b0; name: FUN_009828b0
 */


uint FUN_009828b0(undefined8 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined5 uStack_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 auStack_84 [36];
  
  iVar1 = FUN_0093eb90(param_1,5);
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    iVar7 = 0;
    do {
      uVar2 = FUN_0093eb90(param_1,iVar7 + 6);
      uVar4 = FUN_0093ec60(param_1,uVar2);
      uVar5 = FUN_008e29c0(uVar4,param_3);
      if ((uVar5 & 1) != 0) {
        local_a8 = 0x1f;
        *(undefined2 *)((undefined4 *)((ulong)&local_a8 | 1) + 1) = 0;
        *(undefined4 *)((ulong)&local_a8 | 1) = 0;
        uStack_98 = 0;
        local_a0 = 0;
        local_9c = 0;
        local_88 = 0;
        local_90 = 0;
        FUN_00943e60(auStack_84);
        local_a0 = 2;
        local_a7 = 1;
        local_a6 = (undefined1)uVar2;
        local_9c = CONCAT31(local_9c._1_3_,1);
        local_90._0_7_ = CONCAT25(0x101,(undefined5)local_90);
        local_a8 = param_2;
        uVar3 = FUN_0093f400(param_1,&local_a8);
        uVar6 = uVar6 | uVar3;
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  return uVar6 & 1;
}


