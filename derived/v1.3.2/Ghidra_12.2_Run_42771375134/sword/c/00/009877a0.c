/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009877a0; name: FUN_009877a0
 */


undefined8 FUN_009877a0(undefined8 param_1,undefined1 param_2,uint param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 auStack_95 [5];
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined6 uStack_80;
  undefined1 uStack_7a;
  undefined4 local_78;
  undefined1 auStack_74 [36];
  
  uVar4 = FUN_0093ec60(param_1,param_3);
  local_a0 = (undefined1)uVar4;
  uStack_9f = (undefined1)((ulong)uVar4 >> 8);
  uStack_9e = (undefined2)((ulong)uVar4 >> 0x10);
  uStack_9c = (undefined4)((ulong)uVar4 >> 0x20);
  local_98 = 0;
  cVar2 = FUN_0093f0d0(param_1,&local_a0);
  if ((cVar2 == '\0') || (iVar3 = FUN_008e19f0(uVar4), iVar3 != 0)) {
    puVar1 = auStack_95 + 1;
    local_a0 = 0x1f;
    uStack_9f = 0x1f;
    uStack_9e = 0;
    uStack_9c = 0;
    local_98 = 1;
    uStack_97 = 1;
    uStack_96 = 0;
    FUN_00943e60(puVar1);
    uVar5 = 1;
    local_a0 = param_2;
    uStack_9f = (char)param_3;
    uStack_9e = FUN_008ec2f0(uVar4,4,1);
    FUN_00943f20(puVar1,2,0x20c);
    FUN_00943f60(puVar1,param_3 & 0xff);
    FUN_0093f110(param_1,&local_a0);
    local_a0 = 0x1f;
    uStack_9c = 0x2d;
    local_78 = 0;
    uStack_80 = 0;
    uStack_7a = 0;
    local_98 = 0;
    uStack_97 = 0;
    uStack_96 = 0;
    auStack_95 = (undefined1  [5])0x0;
    local_90 = 0;
    uStack_88 = 0;
    local_81 = 0;
    FUN_00943e60(auStack_74);
    uStack_7a = 1;
    uStack_9c = 0x2d;
    local_a0 = param_2;
    local_98 = (char)param_3;
    FUN_0093f290(param_1,&local_a0);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


