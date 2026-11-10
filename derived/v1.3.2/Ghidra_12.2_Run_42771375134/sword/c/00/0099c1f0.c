/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099c1f0; name: FUN_0099c1f0
 */


byte FUN_0099c1f0(undefined8 param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char local_b0 [8];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined1 local_90;
  int6 local_8e;
  undefined2 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar4 = FUN_008ebfa0(7);
  uVar6 = FUN_00942380(param_1);
  uVar7 = FUN_00942390(param_1);
  FUN_00943860(auStack_d8,uVar6,uVar7);
  uVar8 = FUN_00943ae0(auStack_d8,&local_b8);
  bVar9 = 0;
  if ((uVar8 & 1) != 0) {
    lVar1 = (ulong)(uVar4 & 0xff) * 8;
    uVar2 = *(undefined4 *)(&DAT_0214c074 + lVar1);
    bVar3 = (&DAT_0214c078)[lVar1];
    do {
      FUN_008e0a00(local_b8);
      uVar5 = FUN_008f94e0();
      uVar6 = FUN_00942380(param_1);
      uVar8 = FUN_008fafc0(uVar6,uVar5,param_2);
      if ((uVar8 & 1) != 0) {
        local_80 = 0;
        local_70 = 0;
        local_a8[0] = 0x1f;
        uStack_94 = (uint)bVar3;
        _local_8e = CONCAT26(0x101,(uint6)param_3 << 0x10);
        local_a0 = local_b8;
        local_90 = 8;
        local_78 = 1;
        local_68 = 0;
        local_98 = uVar2;
        FUN_00942450(param_1);
        uVar6 = FUN_00925ae0();
        FUN_0094f630(uVar6,local_b0,local_a8);
        bVar9 = bVar9 | local_b0[0] != '\0';
      }
      uVar8 = FUN_00943ae0(auStack_d8,&local_b8);
    } while ((uVar8 & 1) != 0);
  }
  return bVar9;
}


