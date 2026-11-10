/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094c820; name: FUN_0094c820
 */


void FUN_0094c820(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_78 [8];
  undefined2 local_70;
  uint6 local_6e;
  undefined2 uStack_68;
  undefined1 local_66;
  undefined1 auStack_64 [36];
  
  *param_2 = 0;
  uVar7 = *param_3;
  uVar1 = param_3[1];
  uVar3 = *(undefined2 *)(param_3 + 2);
  uVar6 = FUN_009423e0();
  sVar5 = FUN_0092e3e0(uVar6,uVar7,uVar1,uVar3);
  if (sVar5 != 0) {
    uVar7 = *param_3;
    uVar2 = *(undefined1 *)((long)param_3 + 0x12);
    local_70 = 0x1f1f;
    _local_6e = 0x101000000000000;
    local_66 = 0;
    FUN_00943e60(auStack_64);
    uVar4 = FUN_008e0a00(uVar7);
    uVar7 = _local_6e;
    local_70 = CONCAT11(uVar4,(undefined1)local_70);
    _local_6e = CONCAT62(stack0xffffffffffffff94,sVar5);
    uVar1 = _local_6e;
    uStack_68 = SUB82(uVar7,6);
    local_6e = (uint6)(uint5)uVar1;
    local_66 = uVar2;
    FUN_00942450(param_1);
    uVar7 = FUN_00925b20();
    FUN_00948f40(uVar7,local_78,&local_70);
    *param_2 = local_78[0];
  }
  return;
}


