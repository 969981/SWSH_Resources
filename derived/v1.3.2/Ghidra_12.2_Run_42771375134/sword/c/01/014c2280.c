/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c2280; name: FUN_014c2280
 */


void FUN_014c2280(long param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 local_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [24];
  undefined8 local_68;
  
  FUN_012b4da0(auStack_88,*(undefined8 *)(*(long *)(param_1 + 0xb18) + 400),
               *(undefined8 *)(*(long *)(param_1 + 0xb18) + 0x180));
  FUN_012b4250(auStack_98,auStack_88,param_4);
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  lVar4 = FUN_012b40f0(auStack_98);
  if (lVar4 != 0) {
    uVar6 = 0;
    do {
      FUN_012b4190(auStack_c8,auStack_98,uVar6);
      local_68 = 0x46509229aa397441;
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      local_e0 = 0;
      lVar4 = FUN_012b4b40(auStack_d8,&local_e0);
      if (lVar4 < 0x279c8c26c1297878) {
        lVar7 = param_1 + 0x600;
        if (((lVar4 != -0x5499ccfc0c399994) &&
            (lVar7 = param_1 + 0x270, lVar4 != 0x1070113c2722e521)) &&
           (lVar7 = param_1 + 0x3a0, lVar4 == 0x11ed5007bd2f6560)) {
          lVar7 = param_1 + 0x990;
        }
      }
      else {
        lVar7 = param_1 + 0x860;
        if (((lVar4 != 0x279c8c26c1297878) && (lVar7 = param_1 + 0x730, lVar4 != 0x52f33f26d9b811a1)
            ) && (lVar7 = param_1 + 0x3a0, lVar4 == 0x6b463adca6acf09e)) {
          lVar7 = param_1 + 0x4d0;
        }
      }
      local_68 = 0xa8ff76e4d666e611;
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      uVar8 = FUN_012b4630(0,auStack_d8);
      local_68 = 0x5d9164dec9cb93d0;
      local_b8 = CONCAT44(local_b8._4_4_,uVar8);
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      uVar1 = FUN_012b4420(auStack_d8,0);
      local_b8._0_5_ = CONCAT14(uVar1,(undefined4)local_b8);
      local_68 = 0xb7c1f97682e43b8;
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      uVar8 = FUN_012b4630(0,auStack_d8);
      local_68 = 0x316a7f2de12017f;
      local_b0 = CONCAT44(local_b0._4_4_,uVar8);
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      uVar8 = FUN_012b4630(0,auStack_d8);
      local_b0 = CONCAT44(uVar8,(undefined4)local_b0);
      local_68 = 0xa565b6e7d672eef8;
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      iVar3 = FUN_012b4420(auStack_d8,0);
      local_a8 = CONCAT71(local_a8._1_7_,iVar3 != 0);
      local_68 = 0x8f2eb49ea3382950;
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      iVar3 = FUN_012b4420(auStack_d8,0);
      local_a8._0_2_ = CONCAT11(iVar3 != 0,(undefined1)local_a8);
      local_68 = 0x69e478e79e1a1456;
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      uVar2 = FUN_012b4420(auStack_d8,0);
      local_a8._0_4_ = CONCAT22(uVar2,(undefined2)local_a8);
      local_68 = 0x7493955bec212752;
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      iVar3 = FUN_012b4420(auStack_d8,0);
      local_a8._0_5_ = CONCAT14(iVar3 != 0,(undefined4)local_a8);
      local_68 = 0xdddc04896dc3c333;
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      uVar2 = FUN_012b4420(auStack_d8,0);
      local_a8 = CONCAT26(uVar2,(undefined6)local_a8);
      local_68 = 0x183094936cdaaf05;
      FUN_012b4250(auStack_d8,auStack_c8,&local_68);
      local_a0 = FUN_012b4420(auStack_d8,0);
      FUN_014c4b90(*(undefined8 *)(param_1 + (long)param_2 * 8 + 0x260),param_3,lVar7,&local_b8);
      uVar6 = uVar6 + 1;
      uVar5 = FUN_012b40f0(auStack_98);
    } while (uVar6 < uVar5);
  }
  return;
}


