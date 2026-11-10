/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093e520; name: FUN_0093e520
 */


void FUN_0093e520(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined2 uStack_9e;
  undefined1 uStack_9c;
  undefined2 uStack_9b;
  undefined1 uStack_99;
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
  
  local_a0 = 0;
  uStack_9f = 0;
  uStack_9e._0_1_ = 5;
  uStack_9e._1_1_ = 5;
  uStack_9c = 0;
  uStack_9b = 0;
  uStack_99 = 0;
  FUN_00943e60(&local_98);
  local_a0 = 0x51;
  uStack_9f = 0;
  uStack_9e._1_1_ = 5;
  uStack_99 = 1;
  uStack_9e._0_1_ = param_4;
  FUN_00943f20(&local_98,2,0x3a8);
  FUN_00943f60(&local_98,param_2);
  FUN_00940120(param_1,&local_a0);
  uVar5 = FUN_008e1890(param_3);
  if ((uVar5 & 1) == 0) {
    local_a0 = 0x1f;
    uStack_9f = 0x1f;
    uStack_9e._0_1_ = 0;
    uStack_9e._1_1_ = 0;
    uStack_9c = 0;
    uStack_9b = 0;
    uStack_99 = 0;
    local_98 = 1;
    uStack_97 = 1;
    uStack_96 = 0;
    FUN_00943e60(auStack_95 + 1);
    local_a0 = param_2;
    uStack_9f = param_2;
    sVar3 = FUN_008e12a0(param_3,0xf);
    uStack_9e = FUN_008e12a0(param_3,0xd);
    uStack_9e = sVar3 - uStack_9e;
    FUN_0093f110(param_1,&local_a0);
  }
  iVar4 = FUN_008e19f0(param_3);
  if (iVar4 != 0) {
    local_a0 = 0x1f;
    uStack_9c = 0x2d;
    uStack_9b = 0;
    uStack_99 = 0;
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
    uStack_9b = 0;
    uStack_99 = 0;
    local_a0 = param_2;
    local_98 = param_2;
    FUN_0093f290(param_1,&local_a0);
  }
  bVar1 = FUN_008e2150(param_3);
  if (bVar1 != 0) {
    uVar6 = 0;
    do {
      cVar2 = FUN_008e2440(param_3,uVar6);
      if (cVar2 != '\0') {
        local_a0 = 0x1f;
        uStack_9f = 0;
        uStack_9e._0_1_ = 0;
        uStack_9e._1_1_ = 0;
        uStack_9c = 0;
        FUN_00943e60(&local_98);
        uStack_9f = (undefined1)uVar6;
        local_a0 = param_2;
        uStack_9e._0_1_ = cVar2;
        FUN_0093f210(param_1,&local_a0);
      }
      uVar6 = uVar6 + 1;
    } while (bVar1 != uVar6);
  }
  return;
}


