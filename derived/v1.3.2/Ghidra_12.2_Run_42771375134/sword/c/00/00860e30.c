/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00860e30; name: _INIT_361
 */


void _INIT_361(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  
  if ((DAT_029f5818 & 1) == 0) {
    DAT_029f5818 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                );
    FUN_007e26f0(&DAT_02142410,0x14ac);
    FUN_00818650("google/protobuf/descriptor.proto",&LAB_00845b20);
    plVar11 = operator_new(0x30);
    puVar1 = PTR_DAT_02717248 + 0x10;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = (long)puVar1;
    plVar11[1] = 0;
    *(long **)PTR_DAT_027171c0 = plVar11;
    plVar11 = operator_new(0xd8);
    plVar11[0x17] = 0;
    puVar1 = PTR_DAT_02717250;
    plVar11[0x15] = 0;
    plVar11[0x16] = 0;
    plVar11[0x13] = 0;
    plVar11[0x14] = 0;
    plVar11[0x11] = 0;
    plVar11[0x12] = 0;
    plVar11[0xf] = 0;
    plVar11[0x10] = 0;
    plVar11[0xd] = 0;
    plVar11[0xe] = 0;
    *plVar11 = (long)(puVar1 + 0x10);
    plVar11[1] = 0;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    puVar1 = PTR_DAT_02716d70;
    plVar11[5] = 0;
    plVar11[6] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    plVar11[2] = 0;
    puVar2 = PTR_DAT_02716d10;
    lVar12 = *(long *)PTR_DAT_02716d10;
    plVar11[0x18] = 0;
    plVar11[0x19] = 0;
    plVar11[3] = lVar12;
    plVar11[4] = lVar12;
    plVar11[0x1a] = lVar12;
    *(long **)PTR_DAT_02716e38 = plVar11;
    plVar11 = operator_new(0xe8);
    puVar1 = PTR_DAT_02717258 + 0x10;
    plVar11[0x14] = 0;
    plVar11[0x15] = 0;
    plVar11[0x12] = 0;
    plVar11[0x13] = 0;
    plVar11[0x10] = 0;
    plVar11[0x11] = 0;
    plVar11[0xe] = 0;
    plVar11[0xf] = 0;
    plVar11[0xc] = 0;
    plVar11[0xd] = 0;
    *plVar11 = (long)puVar1;
    plVar11[1] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[0x1b] = 0;
    plVar11[0x1c] = 0;
    plVar11[0x19] = 0;
    plVar11[0x1a] = 0;
    puVar1 = PTR_DAT_02716d70;
    plVar11[0x17] = 0;
    plVar11[0x18] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    plVar11[0x16] = 0;
    plVar11[3] = lVar12;
    *(long **)PTR_DAT_02716e40 = plVar11;
    plVar11 = operator_new(0x20);
    puVar1 = PTR_DAT_02717260 + 0x10;
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = (long)puVar1;
    plVar11[1] = 0;
    *(long **)PTR_DAT_027171c8 = plVar11;
    plVar11 = operator_new(0x20);
    puVar1 = PTR_DAT_02717268 + 0x10;
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = (long)puVar1;
    plVar11[1] = 0;
    *(long **)PTR_DAT_027171d0 = plVar11;
    plVar11 = operator_new(0x58);
    puVar1 = PTR_DAT_02716d70;
    *plVar11 = (long)(PTR_DAT_02717270 + 0x10);
    plVar11[1] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    plVar11[3] = lVar12;
    plVar11[4] = 0x100000000;
    plVar11[5] = lVar12;
    plVar11[6] = lVar12;
    plVar11[7] = 1;
    plVar11[8] = lVar12;
    plVar11[9] = lVar12;
    plVar11[10] = 0;
    *(long **)PTR_DAT_02716e60 = plVar11;
    plVar11 = operator_new(0x28);
    puVar1 = PTR_DAT_02716d70;
    *plVar11 = (long)(PTR_DAT_02717278 + 0x10);
    plVar11[1] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    plVar11[3] = lVar12;
    plVar11[4] = 0;
    *(long **)PTR_DAT_02716e58 = plVar11;
    plVar11 = operator_new(0x40);
    puVar1 = PTR_DAT_02717280;
    plVar11[6] = 0;
    *plVar11 = (long)(puVar1 + 0x10);
    plVar11[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    plVar11[4] = 0;
    plVar11[5] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    plVar11[7] = 0;
    plVar11[3] = lVar12;
    *(long **)PTR_DAT_02716e48 = plVar11;
    plVar11 = operator_new(0x30);
    puVar1 = PTR_DAT_02716d70;
    *plVar11 = (long)(PTR_DAT_02717288 + 0x10);
    plVar11[1] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    *(undefined4 *)(plVar11 + 5) = 0;
    plVar11[3] = lVar12;
    plVar11[4] = 0;
    *(long **)PTR_DAT_02716e68 = plVar11;
    plVar11 = operator_new(0x40);
    puVar1 = PTR_DAT_02717290;
    plVar11[6] = 0;
    *plVar11 = (long)(puVar1 + 0x10);
    plVar11[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    plVar11[4] = 0;
    plVar11[5] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    plVar11[7] = 0;
    plVar11[3] = lVar12;
    *(long **)PTR_DAT_02716e50 = plVar11;
    plVar11 = operator_new(0x40);
    puVar1 = PTR_DAT_02716d70;
    *plVar11 = (long)(PTR_DAT_02717298 + 0x10);
    plVar11[1] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    *(undefined2 *)(plVar11 + 7) = 0;
    plVar11[3] = lVar12;
    plVar11[4] = lVar12;
    plVar11[5] = lVar12;
    plVar11[6] = 0;
    *(long **)PTR_DAT_02716e70 = plVar11;
    plVar11 = operator_new(0x88);
    *plVar11 = (long)(PTR_DAT_027172a0 + 0x10);
    FUN_00825430(plVar11 + 1);
    plVar11[5] = 0;
    plVar11[0xf] = 0;
    puVar1 = PTR_DAT_02716d70;
    plVar11[0xd] = 0;
    plVar11[0xe] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[6] = 0;
    plVar11[7] = lVar12;
    plVar11[8] = lVar12;
    *(undefined4 *)(plVar11 + 0x10) = 0;
    plVar11[9] = 0x100000000;
    plVar11[10] = lVar12;
    plVar11[0xb] = lVar12;
    plVar11[0xc] = lVar12;
    puVar3 = PTR_DAT_027171d8;
    *(long **)PTR_DAT_027171d8 = plVar11;
    plVar11 = operator_new(0x58);
    *plVar11 = (long)(PTR_DAT_027172a8 + 0x10);
    FUN_00825430(plVar11 + 1);
    *(undefined4 *)(plVar11 + 10) = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    *(long **)PTR_DAT_027171e0 = plVar11;
    plVar11 = operator_new(0x60);
    *plVar11 = (long)(PTR_DAT_027172b0 + 0x10);
    FUN_00825430(plVar11 + 1);
    *(undefined4 *)(plVar11 + 0xb) = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    puVar4 = PTR_DAT_027171e8;
    *(long **)PTR_DAT_027171e8 = plVar11;
    plVar11 = operator_new(0x50);
    *plVar11 = (long)(PTR_DAT_027172b8 + 0x10);
    FUN_00825430(plVar11 + 1);
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[5] = 0;
    puVar5 = PTR_DAT_027171f0;
    *(long **)PTR_DAT_027171f0 = plVar11;
    plVar11 = operator_new(0x58);
    *plVar11 = (long)(PTR_DAT_027172c0 + 0x10);
    FUN_00825430(plVar11 + 1);
    *(undefined2 *)(plVar11 + 10) = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    puVar6 = PTR_DAT_027171f8;
    *(long **)PTR_DAT_027171f8 = plVar11;
    plVar11 = operator_new(0x58);
    *plVar11 = (long)(PTR_DAT_027172c8 + 0x10);
    FUN_00825430(plVar11 + 1);
    *(undefined1 *)(plVar11 + 10) = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    puVar7 = PTR_DAT_02717200;
    *(long **)PTR_DAT_02717200 = plVar11;
    plVar11 = operator_new(0x58);
    *plVar11 = (long)(PTR_DAT_027172d0 + 0x10);
    FUN_00825430(plVar11 + 1);
    *(undefined1 *)(plVar11 + 10) = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    puVar8 = PTR_DAT_02717208;
    *(long **)PTR_DAT_02717208 = plVar11;
    plVar11 = operator_new(0x58);
    *plVar11 = (long)(PTR_DAT_027172d8 + 0x10);
    FUN_00825430(plVar11 + 1);
    *(undefined1 *)(plVar11 + 10) = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    puVar9 = PTR_DAT_02717210;
    *(long **)PTR_DAT_02717210 = plVar11;
    plVar11 = operator_new(0x60);
    puVar1 = PTR_DAT_027172e0;
    plVar11[5] = 0;
    *plVar11 = (long)(puVar1 + 0x10);
    plVar11[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    plVar11[3] = 0;
    plVar11[4] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[6] = lVar12;
    plVar11[7] = 0;
    plVar11[10] = lVar12;
    plVar11[0xb] = lVar12;
    *(long **)PTR_DAT_02717218 = plVar11;
    plVar11 = operator_new(0x28);
    puVar1 = PTR_DAT_02716d70;
    *plVar11 = (long)(PTR_DAT_027172e8 + 0x10);
    plVar11[1] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    *(undefined1 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    *(long **)PTR_DAT_02717220 = plVar11;
    plVar11 = operator_new(0x30);
    puVar1 = PTR_DAT_027172f0 + 0x10;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = (long)puVar1;
    plVar11[1] = 0;
    puVar10 = PTR_DAT_02717228;
    *(long **)PTR_DAT_02717228 = plVar11;
    plVar11 = operator_new(0x70);
    puVar1 = PTR_DAT_027172f8;
    plVar11[0xd] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    *plVar11 = (long)(puVar1 + 0x10);
    plVar11[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    plVar11[9] = lVar12;
    plVar11[10] = lVar12;
    *(long **)PTR_DAT_02717230 = plVar11;
    plVar11 = operator_new(0x30);
    puVar1 = PTR_DAT_02717300 + 0x10;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = (long)puVar1;
    plVar11[1] = 0;
    *(long **)PTR_DAT_02717238 = plVar11;
    plVar11 = operator_new(0x40);
    *plVar11 = (long)(PTR_DAT_02717308 + 0x10);
    plVar11[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    plVar11[3] = 0;
    plVar11[4] = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar2;
    plVar11[2] = 0;
    plVar11[6] = lVar12;
    plVar11[7] = 0;
    *(long **)PTR_DAT_02717240 = plVar11;
    lVar13 = *(long *)PTR_DAT_02716e38;
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      FUN_00844a80();
      lVar12 = *(long *)puVar3;
    }
    *(long *)(lVar13 + 0xc0) = lVar12;
    puVar1 = PTR_DAT_027171e0;
    lVar12 = *(long *)puVar10;
    if (lVar12 == 0) {
      FUN_00844a80();
      lVar12 = *(long *)puVar10;
    }
    *(long *)(lVar13 + 200) = lVar12;
    lVar13 = *(long *)PTR_DAT_02716e40;
    lVar12 = *(long *)puVar1;
    if (lVar12 == 0) {
      FUN_00844a80();
      lVar12 = *(long *)puVar1;
    }
    *(long *)(lVar13 + 0xb0) = lVar12;
    lVar13 = *(long *)PTR_DAT_02716e60;
    lVar12 = *(long *)puVar4;
    if (lVar12 == 0) {
      FUN_00844a80();
      lVar12 = *(long *)puVar4;
    }
    *(long *)(lVar13 + 0x50) = lVar12;
    lVar13 = *(long *)PTR_DAT_02716e58;
    lVar12 = *(long *)puVar5;
    if (lVar12 == 0) {
      FUN_00844a80();
      lVar12 = *(long *)puVar5;
    }
    *(long *)(lVar13 + 0x20) = lVar12;
    lVar13 = *(long *)PTR_DAT_02716e48;
    lVar12 = *(long *)puVar6;
    if (lVar12 == 0) {
      FUN_00844a80();
      lVar12 = *(long *)puVar6;
    }
    *(long *)(lVar13 + 0x38) = lVar12;
    lVar13 = *(long *)PTR_DAT_02716e68;
    lVar12 = *(long *)puVar7;
    if (lVar12 == 0) {
      FUN_00844a80();
      lVar12 = *(long *)puVar7;
    }
    *(long *)(lVar13 + 0x20) = lVar12;
    lVar13 = *(long *)PTR_DAT_02716e50;
    lVar12 = *(long *)puVar8;
    if (lVar12 == 0) {
      FUN_00844a80();
      lVar12 = *(long *)puVar8;
    }
    *(long *)(lVar13 + 0x38) = lVar12;
    lVar13 = *(long *)PTR_DAT_02716e70;
    lVar12 = *(long *)puVar9;
    if (lVar12 == 0) {
      FUN_00844a80();
      lVar12 = *(long *)puVar9;
    }
    *(long *)(lVar13 + 0x30) = lVar12;
    FUN_008010b0(PTR_LAB_02717310);
  }
  return;
}


