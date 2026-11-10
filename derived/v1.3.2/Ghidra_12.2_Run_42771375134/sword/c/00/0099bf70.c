/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099bf70; name: FUN_0099bf70
 */


byte FUN_0099bf70(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte bVar6;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 auStack_b4 [36];
  char local_90 [8];
  undefined1 auStack_88 [32];
  undefined8 local_68;
  
  uVar3 = FUN_00942380();
  uVar4 = FUN_00942390(param_1);
  FUN_00943860(auStack_88,uVar3,uVar4);
  uVar5 = FUN_00943ae0(auStack_88,&local_68);
  bVar6 = 0;
  if ((uVar5 & 1) != 0) {
    do {
      FUN_008e0a00(local_68);
      uVar2 = FUN_008f94e0();
      uVar3 = FUN_00942380(param_1);
      uVar5 = FUN_008fafc0(uVar3,uVar2,param_2);
      if ((uVar5 & 1) != 0) {
        local_c0 = 0x1f1f;
        *(undefined2 *)((undefined4 *)((ulong)&local_c0 | 2) + 1) = 0;
        *(undefined4 *)((ulong)&local_c0 | 2) = 0;
        local_b8 = 0x101;
        local_b6 = 0;
        FUN_00943e60(auStack_b4);
        local_c0 = CONCAT11(local_c0._1_1_,0x1f);
        uVar1 = FUN_008e0a00(local_68);
        local_c0 = CONCAT11(uVar1,(undefined1)local_c0);
        local_b6 = 1;
        local_be = FUN_008e12a0(local_68,0x10);
        FUN_00943f20(auStack_b4,2,0x20c);
        uVar1 = FUN_008e0a00(local_68);
        FUN_00943f60(auStack_b4,uVar1);
        FUN_00942450(param_1);
        uVar3 = FUN_00925b20();
        FUN_00948f40(uVar3,local_90,&local_c0);
        bVar6 = bVar6 | local_90[0] != '\0';
      }
      uVar5 = FUN_00943ae0(auStack_88,&local_68);
    } while ((uVar5 & 1) != 0);
  }
  return bVar6;
}


