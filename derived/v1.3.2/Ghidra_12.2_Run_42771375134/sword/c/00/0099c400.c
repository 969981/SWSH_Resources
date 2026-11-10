/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099c400; name: FUN_0099c400
 */


void FUN_0099c400(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  long *plVar10;
  char cVar11;
  undefined1 local_190;
  undefined4 local_18f;
  undefined1 local_18b;
  undefined4 local_18a;
  undefined1 local_186;
  undefined4 local_185;
  undefined1 local_181;
  undefined1 auStack_180 [80];
  undefined1 *local_130;
  undefined1 **local_128;
  undefined1 *local_120;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined1 **local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 auStack_d0 [80];
  undefined1 local_80;
  undefined4 local_7f;
  undefined1 local_7b;
  undefined4 local_7a;
  undefined1 local_76;
  undefined4 local_75;
  undefined1 local_71;
  long *local_70 [2];
  
  plVar10 = (long *)*param_3;
  puVar9 = (undefined1 *)*plVar10;
  uVar6 = FUN_009423f0();
  uVar7 = FUN_00943080(uVar6,2);
  if ((uVar7 & 1) == 0) {
    uVar6 = FUN_009423f0(param_1);
    FUN_009430a0(uVar6,2);
    FUN_0099c6a0(param_1);
  }
  iVar5 = FUN_008e2e80(puVar9);
  uVar4 = FUN_008e1810(puVar9,0x1a);
  FUN_0093b070(auStack_180);
  local_70[0] = plVar10;
  FUN_0093b070(auStack_d0);
  FUN_00942450(param_1);
  uVar6 = FUN_00925e30();
  FUN_009a0350(uVar6,&local_108,local_70);
  local_130 = local_100;
  uStack_110 = local_e0;
  local_120 = local_f0;
  iVar2 = (int)local_108;
  cVar11 = local_108._4_1_;
  uVar3 = local_108._5_1_;
  local_128 = local_f8;
  FUN_0093ba70(auStack_180,auStack_d0);
  local_190 = local_80;
  local_18b = local_7b;
  local_18f = local_7f;
  local_186 = local_76;
  local_18a = local_7a;
  local_181 = local_71;
  local_185 = local_75;
  if (iVar2 == 4) {
    local_108 = &local_190;
    local_f8 = (undefined1 **)CONCAT44(local_f8._4_4_,(int)local_130);
    local_100 = puVar9;
    FUN_00942450(param_1);
    uVar6 = FUN_00925e60();
    FUN_0099c910(uVar6,local_70,&local_108);
  }
  else if (iVar2 == 1) {
    local_100 = (undefined1 *)((long)plVar10 + 0x24);
    local_f8 = &local_130;
    local_f0 = auStack_180;
    local_108 = puVar9;
    FUN_00942450(param_1);
    uVar6 = FUN_00925d60();
    FUN_0099cc30(uVar6,local_70,&local_108);
    cVar11 = (char)local_70[0];
  }
  FUN_0099c780(param_1,puVar9,&local_130,local_d8);
  local_108 = (undefined1 *)((long)plVar10 + 0x24);
  local_f0._0_2_ = CONCAT11(cVar11,uVar3);
  local_e8 = local_d8;
  local_f0 = (undefined1 *)
             (CONCAT53(CONCAT41((int)plVar10[2],iVar5 != 0x19),CONCAT12(uVar4,(undefined2)local_f0))
             & 0xffffffffff01ffff);
  local_100 = puVar9;
  local_f8 = &local_130;
  FUN_00942450(param_1);
  uVar6 = FUN_00925e20();
  FUN_009a0040(uVar6,local_70,&local_108);
  local_108 = (undefined1 *)CONCAT44(local_108._4_4_,(int)local_130);
  FUN_00942450(param_1);
  uVar6 = FUN_00925980();
  FUN_0099fca0(uVar6,local_70,&local_108);
  puVar1 = local_130;
  iVar5 = (int)local_130;
  uVar7 = FUN_00942740(param_1,puVar9);
  if ((uVar7 & 1) != 0) {
    if ((iVar2 == 1) && (cVar11 == '\0')) {
      uVar6 = FUN_00942380(param_1);
      FUN_0094b800(uVar6,puVar9,(ulong)puVar1 & 0xffffffff);
    }
    if (((cVar11 != '\0') && (iVar5 == 0xa5)) && (lVar8 = FUN_0093b2c0(auStack_180,0), lVar8 != 0))
    {
      uVar6 = FUN_00942380(param_1);
      FUN_0094b8b0(uVar6,puVar9,lVar8);
    }
  }
  return;
}


