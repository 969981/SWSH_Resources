/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00947f10; name: FUN_00947f10
 */


void FUN_00947f10(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 local_c8 [8];
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined7 uStack_98;
  undefined1 local_91;
  undefined6 uStack_90;
  undefined1 uStack_8a;
  undefined4 local_88;
  undefined1 auStack_84 [36];
  
  uVar2 = *param_3;
  uVar3 = FUN_00942620();
  uVar4 = FUN_00942630(param_1);
  uVar7 = FUN_00942380(param_1);
  FUN_00942390(param_1);
  uVar8 = FUN_00931920();
  uVar5 = FUN_008f9470(uVar7,uVar8,uVar2);
  FUN_008ed700(&local_b0,9,uVar5);
  FUN_00942390(param_1);
  uVar7 = FUN_00931920();
  bVar1 = FUN_008ee2f0(&local_b0,uVar3,uVar4,uVar7,local_c8);
  if (bVar1 != 0) {
    uVar11 = (ulong)bVar1;
    puVar12 = local_c8;
    do {
      while( true ) {
        uVar7 = FUN_009424e0(param_1,*puVar12);
        uVar9 = FUN_008e28f0(uVar7,3);
        if ((uVar9 & 1) == 0) {
          uVar10 = 0;
        }
        else {
          bVar1 = FUN_008e1810(uVar7,0x22);
          local_a8._0_5_ = CONCAT14(bVar1 & 1,3);
          local_b0 = uVar7;
          FUN_00942450(param_1);
          uVar8 = FUN_00925c40();
          FUN_009487f0(uVar8,auStack_c0,&local_b0);
          uVar9 = FUN_008e2ed0(uVar7);
          if ((uVar9 & 1) != 0) {
            local_a8 = CONCAT62(local_a8._2_6_,0x100);
            local_b0 = uVar7;
            FUN_00942450(param_1);
            uVar8 = FUN_009254b0();
            FUN_009489e0(uVar8,auStack_c0,&local_b0);
          }
          uVar10 = 1;
        }
        uVar8 = FUN_009423e0(param_1);
        uVar6 = FUN_00927ed0(uVar8,uVar7,1);
        uVar9 = FUN_008e1810(uVar7,0x1f);
        if ((uVar9 & 1) == 0) break;
        local_b0 = CONCAT71(local_b0._1_7_,0x1f);
        local_b0 = CONCAT44(0x2d,(undefined4)local_b0);
        local_88 = 0;
        local_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_91 = 0;
        uStack_90 = 0;
        uStack_8a = 0;
        FUN_00943e60(auStack_84);
        uVar2 = FUN_008e0a00(uVar7);
        local_b0 = CONCAT71(local_b0._1_7_,uVar2);
        local_b0 = CONCAT44(0x1f,(undefined4)local_b0);
        uVar2 = FUN_008e0a00(uVar7);
        local_a8 = CONCAT71(local_a8._1_7_,uVar2);
        uVar10 = 1;
        uStack_8a = 1;
        local_88 = CONCAT13(1,(undefined3)local_88);
        FUN_00942450(param_1);
        uVar8 = FUN_00925570();
        FUN_00948290(uVar8,auStack_c0,&local_b0);
        uVar9 = FUN_008e1810(uVar7,0x21);
        if ((uVar9 & 1) == 0) goto LAB_009480f8;
LAB_00948120:
        local_b0 = CONCAT71(local_b0._1_7_,0x1f);
        local_b0 = CONCAT44(0x2d,(undefined4)local_b0);
        local_88 = 0;
        local_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_91 = 0;
        uStack_90 = 0;
        uStack_8a = 0;
        FUN_00943e60(auStack_84);
        uVar2 = FUN_008e0a00(uVar7);
        local_b0 = CONCAT71(local_b0._1_7_,uVar2);
        local_b0 = CONCAT44(0x21,(undefined4)local_b0);
        uVar2 = FUN_008e0a00(uVar7);
        local_a8 = CONCAT71(local_a8._1_7_,uVar2);
        uStack_8a = 1;
        local_88 = CONCAT13(1,(undefined3)local_88);
        FUN_00942450(param_1);
        uVar7 = FUN_00925570();
        FUN_00948290(uVar7,auStack_c0,&local_b0);
LAB_00948184:
        uVar7 = FUN_009423b0(param_1);
        FUN_009360c0(uVar7,0x5bc,*puVar12);
        puVar12 = puVar12 + 1;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          return;
        }
      }
      uVar10 = uVar10 | uVar6;
      uVar9 = FUN_008e1810(uVar7,0x21);
      if ((uVar9 & 1) != 0) goto LAB_00948120;
LAB_009480f8:
      if ((uVar10 & 1) != 0) goto LAB_00948184;
      puVar12 = puVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}


