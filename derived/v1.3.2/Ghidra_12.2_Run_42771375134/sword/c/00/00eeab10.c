/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eeab10; name: FUN_00eeab10
 */


void FUN_00eeab10(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_160 [2];
  undefined *local_150;
  undefined8 local_148;
  long local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar2 = PTR_DAT_02710848;
  lVar19 = *(long *)PTR_DAT_02710848;
  plVar15 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar7 = FUN_00f4c1c0(*(undefined8 *)(param_1 + 0x110),param_1 + 0x118);
  switch(*(undefined4 *)(lVar7 + 0x40)) {
  case 4:
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e8960(lVar13 + 0x50,lVar20,*param_2,param_3,plVar15);
    break;
  case 5:
    lVar13 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    iVar5 = FUN_015114c0(lVar20,0xc0af8f3b3677602d);
    uVar4 = 0x99;
    if (iVar5 == 1) {
      uVar4 = 0x9a;
    }
    uVar1 = 0x9b;
    if (iVar5 != 2) {
      uVar1 = uVar4;
    }
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
    }
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e8a30(lVar13 + 0x50,lVar20,*param_2,uVar1,param_3,plVar15);
    break;
  case 6:
    lVar13 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    iVar5 = FUN_015114c0(lVar20,0xc0af8f3b3677602d);
    uVar4 = 0x99;
    if (iVar5 == 1) {
      uVar4 = 0x9a;
    }
    uVar1 = 0x9b;
    if (iVar5 != 2) {
      uVar1 = uVar4;
    }
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
    }
    local_140 = 0x161fb0c979a2b7e4;
    local_138 = &DAT_01cf3863;
    local_130 = 4;
    puVar8 = (undefined8 *)FUN_00f4c1c0(*(undefined8 *)(param_1 + 0x110),local_160 + 4);
    local_d0 = *puVar8;
    local_c8 = puVar8[1];
    uStack_c0 = puVar8[2];
    local_b8 = puVar8[3];
    uStack_b0 = puVar8[4];
    local_a8 = puVar8[5];
    uStack_a0 = puVar8[6];
    local_98 = puVar8[7];
    uStack_90 = puVar8[8];
    local_88 = puVar8[9];
    uStack_80 = puVar8[10];
    local_78 = puVar8[0xb];
    uStack_70 = puVar8[0xc];
    lVar13 = FUN_00e076b0(local_160 + 4,plVar15);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    FUN_00e30560(lVar13);
    FUN_00e30c60(lVar13,&local_d0);
    puVar2 = PTR_DAT_02710860;
    lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar20 + 0x80)) {
LAB_00eeb9d8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar15;
    *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
    lVar17 = (**(code **)(*plVar15 + 0x10))(plVar15,0x90,8);
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    FUN_00883c20(lVar17,plVar15);
    *(long **)(lVar17 + 8) = plVar15;
    *(long *)(lVar17 + 0x10) = lVar17;
    *(undefined8 *)(lVar17 + 0x18) = 0x90;
    *(undefined8 *)(lVar17 + 0x20) = 8;
    *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
    if (lVar17 == 0) {
      local_d8 = 0;
    }
    else {
      plVar16 = (long *)(lVar17 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      local_d8 = lVar17;
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_00e30f20(lVar13,plVar15,&local_d8);
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      local_d8 = 0;
    }
    local_160[1] = 0x161fb7c979a2c3c9;
    local_150 = &DAT_01d11430;
    local_148 = 4;
    puVar8 = (undefined8 *)FUN_00f4c1c0(*(undefined8 *)(param_1 + 0x110),local_160 + 1);
    local_140 = *puVar8;
    local_138 = (undefined *)puVar8[1];
    local_130 = puVar8[2];
    local_128 = puVar8[3];
    uStack_120 = puVar8[4];
    local_118 = puVar8[5];
    uStack_110 = puVar8[6];
    local_108 = puVar8[7];
    uStack_100 = puVar8[8];
    local_f8 = puVar8[9];
    uStack_f0 = puVar8[10];
    local_e8 = puVar8[0xb];
    uStack_e0 = puVar8[0xc];
    lVar20 = FUN_00e076b0(local_160 + 1,plVar15);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    FUN_00e30560(lVar20);
    FUN_00e30c60(lVar20,local_160 + 4);
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00eeb9d8;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar10 = (**(code **)(*plVar15 + 0x10))(plVar15,0x90,8);
    if (lVar10 == 0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    FUN_00883c20(lVar10,plVar15);
    *(long **)(lVar10 + 8) = plVar15;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(undefined8 *)(lVar10 + 0x18) = 0x90;
    *(undefined8 *)(lVar10 + 0x20) = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (lVar10 == 0) {
      local_160[0] = 0;
    }
    else {
      plVar16 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      local_160[0] = lVar10;
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_00e30f20(lVar20,plVar15,local_160);
    if (local_160[0] != 0) {
      (**(code **)(*(long *)(local_160[0] + 0x48) + 0x18))();
      local_160[0] = 0;
    }
    lVar9 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar18 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar18 + 0x48);
    if (lVar18 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e8c10(lVar9 + 0x50,lVar18,*param_2,lVar17,lVar10,uVar1,param_3,plVar15);
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))(plVar16);
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
    }
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    if (lVar13 == 0) goto LAB_00eeb700;
    plVar15 = (long *)(lVar13 + 0x48);
    pcVar14 = *(code **)(*plVar15 + 0x18);
    goto LAB_00eeb6fc;
  case 7:
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e8890(lVar13 + 0x50,lVar20,*param_2,param_3,plVar15);
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))(plVar16);
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
    *(undefined1 *)(param_1 + 0x13f) = 1;
    goto LAB_00eeb700;
  case 8:
    lVar13 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    uVar4 = FUN_015114c0(lVar20,0x125ec4ca02dd636a);
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar17 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar17 + 0x48);
    if (lVar17 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e8e40(lVar13 + 0x50,lVar17,*param_2,uVar4,param_3,plVar15);
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))(plVar16);
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
    *(undefined1 *)(param_1 + 0x145) = 1;
    if (lVar20 == 0) goto LAB_00eeb700;
    plVar15 = (long *)(lVar20 + 0x48);
    pcVar14 = *(code **)(*plVar15 + 0x18);
    goto LAB_00eeb6fc;
  case 9:
    lVar13 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    uVar6 = FUN_015114c0(lVar20,0xc0af8f3b3677602d);
    iVar5 = uVar6 + 0xe4;
    if (2 < uVar6) {
      iVar5 = 0x99;
    }
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
    }
    cVar3 = FUN_008d4270();
    uVar4 = 0x120;
    if (cVar3 != '-') {
      uVar4 = 0xda;
    }
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    uVar1 = 0xda;
    if (cVar3 != ',') {
      uVar1 = uVar4;
    }
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e91b0(lVar13 + 0x50,lVar20,*param_2,iVar5,0xd9,uVar1,param_3,plVar15);
    lVar13 = *(long *)(lVar20 + 0x48);
    goto LAB_00eeb6e4;
  case 10:
    lVar13 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    uVar6 = FUN_015114c0(lVar20,0xc0af8f3b3677602d);
    iVar5 = uVar6 + 0xe4;
    if (2 < uVar6) {
      iVar5 = 0x99;
    }
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
    }
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    uVar11 = *param_2;
    uVar12 = 0xdb;
    goto LAB_00eeb600;
  case 0xb:
    lVar13 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    uVar6 = FUN_015114c0(lVar20,0xc0af8f3b3677602d);
    iVar5 = uVar6 + 0xe4;
    if (2 < uVar6) {
      iVar5 = 0x99;
    }
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
    }
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    uVar11 = *param_2;
    uVar12 = 0xdc;
LAB_00eeb600:
    FUN_008e91b0(lVar13 + 0x50,lVar20,uVar11,iVar5,0xd9,uVar12,param_3,plVar15);
    lVar13 = *(long *)(lVar20 + 0x48);
    goto LAB_00eeb6e4;
  case 0xc:
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e8ff0(lVar13 + 0x50,lVar20,*param_2,param_3,plVar15);
    break;
  case 0xd:
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e93c0(lVar13 + 0x50,lVar20,*param_2,param_3,plVar15);
    break;
  case 0xe:
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e9430(lVar13 + 0x50,lVar20,*param_2,param_3,*param_4,plVar15);
    break;
  case 0xf:
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e97b0(lVar13 + 0x50,lVar20,*param_2,param_3,plVar15);
    break;
  case 0x10:
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e9490(lVar13 + 0x50,lVar20,*param_2,param_3,plVar15);
    break;
  case 0x11:
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e9ae0(lVar13 + 0x50,lVar20,*param_2,param_3,*param_4,plVar15);
    break;
  case 0x12:
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar19 = *(long *)(lVar19 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar20 = *(long *)(lVar19 + 0x58);
    plVar16 = (long *)(lVar20 + 0x48);
    if (lVar20 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e9b40(lVar13 + 0x50,lVar20,*param_2,param_3,*param_4,plVar15);
    break;
  default:
    lVar13 = *(long *)PTR_DAT_027108d0;
    lVar20 = *(long *)(lVar19 + 0x90);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    lVar17 = *(long *)(lVar20 + 0x58);
    plVar16 = (long *)(lVar17 + 0x48);
    if (lVar17 != 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    FUN_008e7170(lVar13 + 0x50,lVar19,lVar17,*param_2,param_3,0,*param_4,plVar15,plVar15);
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))(plVar16);
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
    goto LAB_00eeb700;
  }
  lVar13 = *(long *)(lVar20 + 0x48);
LAB_00eeb6e4:
  (**(code **)(lVar13 + 0x18))(plVar16);
  plVar15 = (long *)(lVar19 + 0x48);
  pcVar14 = *(code **)(*plVar15 + 0x18);
LAB_00eeb6fc:
  (*pcVar14)(plVar15);
LAB_00eeb700:
  lVar19 = *(long *)PTR_DAT_027108d0;
  *(undefined4 *)(lVar19 + 0xb30) = *(undefined4 *)(param_1 + 0x120);
  if ((*(int *)(lVar7 + 0x40) == 0x13) || (*(int *)(lVar7 + 0x40) == 1)) {
    *(uint *)(lVar19 + 0xac0) = *(uint *)(lVar19 + 0xac0) | 0x10000000;
  }
  return;
}


