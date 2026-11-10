/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095e3b0; name: FUN_0095e3b0
 */


void FUN_0095e3b0(undefined8 param_1,byte *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined1 auStack_240 [12];
  undefined1 auStack_234 [36];
  undefined1 auStack_210 [240];
  undefined1 auStack_120 [80];
  undefined1 auStack_d0 [40];
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  
  *param_2 = 0;
  puVar3 = (undefined1 *)FUN_009424e0(param_1,*param_3);
  uVar4 = FUN_009424e0(param_1,param_3[1]);
  uVar5 = FUN_009423e0(param_1);
  uVar1 = *(undefined4 *)(param_3 + 4);
  FUN_00926280(uVar5,uVar1,uVar1,uVar1,0,puVar3,auStack_d0);
  FUN_0093b070(auStack_120);
  FUN_0093b0b0(auStack_120,uVar4);
  FUN_0093b4d0(auStack_120,1);
  FUN_00942390(param_1);
  uVar4 = FUN_009319a0();
  FUN_0093b8b0(auStack_120,uVar4);
  uVar6 = FUN_0093b4e0(auStack_120);
  if ((uVar6 & 1) == 0) {
    FUN_009602f0(auStack_210);
    FUN_00943e60(auStack_234);
    FUN_00946a20(auStack_240);
    local_88 = (undefined1 *)CONCAT53(local_88._3_5_,0x10101);
    local_80 = 0;
    local_a8 = auStack_240;
    puStack_a0 = auStack_d0;
    local_98 = puVar3;
    puStack_90 = auStack_120;
    puStack_78 = auStack_210;
    FUN_00942450(param_1);
    uVar4 = FUN_00925240();
    FUN_00968560(uVar4,&local_258,&local_a8);
    if ((char)local_258 == '\0') {
      lVar7 = FUN_00942400(param_1);
      local_258 = *(undefined8 *)(lVar7 + 0x10);
      uStack_250 = *(undefined8 *)(lVar7 + 0x18);
      local_248 = *(undefined4 *)(lVar7 + 0x20);
      lVar7 = FUN_00942400(param_1);
      FUN_0093adf0(lVar7 + 0x10);
      lVar7 = FUN_00942400(param_1);
      FUN_00942390(param_1);
      uVar4 = FUN_009319a0();
      FUN_0093ae30(lVar7 + 0x10,puVar3,auStack_120,uVar4);
      lVar7 = FUN_00942400(param_1);
      FUN_0093aee0(lVar7 + 0x10,param_3[2]);
      lVar7 = FUN_00942400(param_1);
      FUN_0093af60(lVar7 + 0x10,1);
      puStack_a0 = auStack_d0;
      local_80 = CONCAT71(local_80._1_7_,1);
      local_a8 = puVar3;
      local_98 = auStack_240;
      puStack_90 = auStack_210;
      local_88 = auStack_120;
      FUN_00942450(param_1);
      uVar4 = FUN_00925450();
      FUN_0095e6a0(uVar4,auStack_70,&local_a8);
      lVar7 = FUN_00942400(param_1);
      bVar2 = FUN_0093af40(lVar7 + 0x10);
      *param_2 = bVar2 & 1;
      lVar7 = FUN_00942400(param_1);
      *(undefined4 *)(lVar7 + 0x20) = local_248;
      *(undefined8 *)(lVar7 + 0x10) = local_258;
      *(undefined8 *)(lVar7 + 0x18) = uStack_250;
    }
  }
  else {
    FUN_009423b0(param_1);
    FUN_009366b0();
  }
  return;
}


