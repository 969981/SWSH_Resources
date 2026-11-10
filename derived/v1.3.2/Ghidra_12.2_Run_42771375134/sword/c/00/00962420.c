/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00962420; name: FUN_00962420
 */


ulong FUN_00962420(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 unaff_x21;
  undefined1 *puVar16;
  ulong uVar17;
  byte local_c8 [8];
  char local_c0 [8];
  undefined2 local_b8;
  undefined2 local_b6;
  undefined1 uStack_b1;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 auStack_ac [20];
  undefined8 local_98;
  undefined1 local_90 [4];
  undefined4 local_8c;
  ulong local_88;
  undefined8 local_80;
  undefined1 local_78;
  char cStack_77;
  char cStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined2 uStack_73;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  byte bStack_6a;
  undefined8 local_68;
  ulong in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar1 = FUN_00965600(param_2);
  switch(uVar1) {
  case 1:
    uVar11 = FUN_009655e0(param_2);
    uVar12 = FUN_009423e0(param_1);
    uVar1 = 1;
    uVar13 = 1;
    goto LAB_009624ec;
  case 2:
    uVar11 = FUN_009655e0(param_2);
    uVar12 = FUN_009423e0(param_1);
    uVar1 = 2;
    uVar13 = 2;
    goto LAB_009624ec;
  case 3:
    uVar11 = FUN_009655e0(param_2);
    uVar12 = FUN_009423e0(param_1);
    uVar1 = 3;
    uVar13 = 3;
    goto LAB_009624ec;
  case 4:
    uVar11 = FUN_009655e0(param_2);
    uVar12 = FUN_009423e0(param_1);
    uVar1 = 4;
    uVar13 = 4;
LAB_009624ec:
    cVar2 = FUN_0092c500(uVar12,uVar13,uVar11);
    uStack_74 = 0;
    uStack_75 = FUN_008e0a00(uVar11);
    cStack_77 = cVar2 + '\x05';
    local_78 = uVar1;
    cStack_76 = cVar2;
    FUN_00942450(param_1);
    uVar11 = FUN_009250b0();
    FUN_00951e70(uVar11,&local_80,&local_78);
    uVar5 = (uint)((char)local_80 == '\0');
    goto LAB_00962b24;
  case 5:
    uVar11 = FUN_009655e0(param_2);
    local_78 = 0x1f;
    uStack_74 = 10;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    local_68 = 0;
    FUN_00943e60(local_90 + 0x34);
    local_78 = FUN_008e0a00(uVar11);
    uStack_70 = 3;
    goto LAB_009626ac;
  case 6:
    uVar11 = FUN_009655e0(param_2);
    local_78 = 0x1f;
    uStack_74 = 10;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    local_68 = 0;
    FUN_00943e60(local_90 + 0x34);
    local_78 = FUN_008e0a00(uVar11);
    uStack_70 = 1;
    goto LAB_009626ac;
  case 7:
    uVar11 = FUN_009655e0(param_2);
    local_78 = 0x1f;
    uStack_74 = 10;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    local_68 = 0;
    FUN_00943e60(local_90 + 0x34);
    local_78 = FUN_008e0a00(uVar11);
    uStack_70 = 2;
    goto LAB_009626ac;
  case 8:
    uVar11 = FUN_009655e0(param_2);
    local_78 = 0x1f;
    uStack_74 = 10;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    local_68 = 0;
    FUN_00943e60(local_90 + 0x34);
    local_78 = FUN_008e0a00(uVar11);
    uStack_70 = 4;
LAB_009626ac:
    uStack_71 = 0;
    uStack_73 = 0;
    uStack_74 = 8;
    uVar11 = FUN_008e0a00(uVar11);
    local_68 = FUN_008ed0b0(uVar11,5);
LAB_009626c4:
    FUN_00942450(param_1);
    uVar11 = FUN_009255f0();
    FUN_00947840(uVar11,&local_80,&local_78);
    uVar5 = (uint)((char)local_80 != '\0');
    goto LAB_00962b24;
  case 9:
    uVar12 = 1;
    goto LAB_0096272c;
  case 10:
    uVar12 = 2;
    goto LAB_0096272c;
  case 0xb:
    uVar12 = 3;
    goto LAB_0096272c;
  case 0xc:
    uVar12 = 4;
    goto LAB_0096272c;
  case 0xd:
    uVar12 = 5;
    goto LAB_0096272c;
  case 0xe:
    uVar12 = 9;
LAB_0096272c:
    uVar11 = 4;
    uVar13 = 1;
    break;
  case 0xf:
    uVar13 = 0xffffffff;
    uVar11 = 2;
    uVar12 = 1;
    break;
  case 0x10:
    uVar13 = 0xffffffff;
    uVar11 = 2;
    uVar12 = 2;
    break;
  case 0x11:
    uVar13 = 0xffffffff;
    uVar11 = 2;
    uVar12 = 3;
    break;
  case 0x12:
    uVar13 = 0xffffffff;
    uVar11 = 2;
    uVar12 = 4;
    break;
  case 0x13:
    uVar12 = 5;
    uVar13 = 0xffffffff;
    uVar11 = 2;
    break;
  case 0x14:
    uVar12 = 5;
    uVar11 = 2;
    uVar13 = 0xfffffffe;
    break;
  case 0x15:
    uVar13 = 0xffffffff;
    uVar11 = 2;
    uVar12 = 7;
    break;
  case 0x16:
    FUN_009655e0(param_2);
    uVar9 = FUN_008e0a00();
    uVar11 = FUN_008ec1d0(5,uVar9);
    local_78 = (undefined1)uVar11;
    cStack_77 = (char)((ulong)uVar11 >> 8);
    cStack_76 = (char)((ulong)uVar11 >> 0x10);
    uStack_75 = (undefined1)((ulong)uVar11 >> 0x18);
    uStack_74 = (undefined1)((ulong)uVar11 >> 0x20);
    uStack_73 = (undefined2)((ulong)uVar11 >> 0x28);
    uStack_71 = (undefined1)((ulong)uVar11 >> 0x38);
    uVar12 = 5;
    goto LAB_00962b20;
  case 0x17:
    FUN_009655e0(param_2);
    uVar9 = FUN_008e0a00();
    uVar11 = FUN_008ec1d0(1,uVar9);
    local_78 = (undefined1)uVar11;
    cStack_77 = (char)((ulong)uVar11 >> 8);
    cStack_76 = (char)((ulong)uVar11 >> 0x10);
    uStack_75 = (undefined1)((ulong)uVar11 >> 0x18);
    uStack_74 = (undefined1)((ulong)uVar11 >> 0x20);
    uStack_73 = (undefined2)((ulong)uVar11 >> 0x28);
    uStack_71 = (undefined1)((ulong)uVar11 >> 0x38);
    uVar12 = 1;
    goto LAB_00962b20;
  case 0x18:
    puVar15 = &DAT_0214b618;
    uVar11 = 2;
    goto LAB_00962830;
  case 0x19:
    puVar15 = &DAT_0214b60c;
    uVar11 = 3;
LAB_00962830:
    uVar14 = FUN_00963cb0(param_1,param_2,puVar15,uVar11);
    return uVar14;
  case 0x1a:
    uVar11 = FUN_009655e0(param_2);
    FUN_008ec080(6,uVar11,&local_78);
    uVar12 = 6;
    goto LAB_00962b20;
  case 0x1b:
    uVar11 = FUN_009655e0(param_2);
    FUN_008ec080(7,uVar11,&local_78);
    uVar12 = 7;
    goto LAB_00962b20;
  case 0x1c:
    uVar13 = FUN_009655e0(param_2);
    uVar11 = FUN_009655f0(param_2);
    uVar9 = FUN_008e0a00(uVar13);
    uVar10 = FUN_008e0a00(uVar11);
    uVar1 = FUN_009425e0(param_1,uVar10);
    uVar14 = FUN_008ed0b0(uVar9,4);
    FUN_00943e60(&local_b8);
    FUN_00943f20(&local_b8,1,0x1cf);
    FUN_00943f60(&local_b8,uVar1);
    uVar11 = local_80;
    local_90[0] = 0x1f;
    local_8c = 0x18;
    local_80 = CONCAT71(local_80._1_7_,2);
    uVar12 = local_80;
    local_88 = 0;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    FUN_00943e60((long)&local_80 + 4);
    local_90[0] = FUN_008e0a00(uVar13);
    uVar11 = local_80;
    local_8c = 0x14;
    local_80 = CONCAT71(local_80._1_7_,uVar1);
    uVar12 = local_80;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    local_88 = uVar14;
    FUN_00943eb0((long)&local_80 + 4,&local_b8);
    FUN_00942450(param_1);
    uVar11 = FUN_00925850();
    FUN_0094a5a0(uVar11,local_90 + 0x48,local_90);
    return in_stack_ffffffffffffffb8 & 0xff;
  case 0x1d:
    uVar13 = FUN_009655e0(param_2);
    uVar11 = FUN_009655f0(param_2);
    uVar9 = FUN_008e0a00(uVar13);
    uVar10 = FUN_008e0a00(uVar11);
    uVar1 = FUN_009425e0(param_1,uVar10);
    uVar14 = FUN_008ed0b0(uVar9,4);
    FUN_00943e60(&local_b8);
    FUN_00943f20(&local_b8,1,0x1d1);
    FUN_00943f60(&local_b8,uVar1);
    uVar11 = local_80;
    local_90[0] = 0x1f;
    local_8c = 0x18;
    local_80 = CONCAT71(local_80._1_7_,2);
    uVar12 = local_80;
    local_88 = 0;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    FUN_00943e60((long)&local_80 + 4);
    local_90[0] = FUN_008e0a00(uVar13);
    uVar11 = local_80;
    local_8c = 0x15;
    local_80 = CONCAT71(local_80._1_7_,uVar1);
    uVar12 = local_80;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    local_88 = uVar14;
    FUN_00943eb0((long)&local_80 + 4,&local_b8);
    FUN_00942450(param_1);
    uVar11 = FUN_00925850();
    FUN_0094a5a0(uVar11,local_90 + 0x48,local_90);
    return in_stack_ffffffffffffffb8 & 0xff;
  case 0x1e:
    uVar13 = FUN_009655e0(param_2);
    uVar11 = FUN_009655f0(param_2);
    uVar9 = FUN_008e0a00(uVar13);
    uVar10 = FUN_008e0a00(uVar11);
    uVar1 = FUN_009425e0(param_1,uVar10);
    uVar14 = FUN_008ed0b0(uVar9,4);
    FUN_00943e60(&local_b8);
    FUN_00943f20(&local_b8,1,0x20f);
    FUN_00943f60(&local_b8,uVar1);
    uVar11 = local_80;
    local_90[0] = 0x1f;
    local_8c = 0x18;
    local_80 = CONCAT71(local_80._1_7_,2);
    uVar12 = local_80;
    local_88 = 0;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    FUN_00943e60((long)&local_80 + 4);
    local_90[0] = FUN_008e0a00(uVar13);
    uVar11 = local_80;
    local_8c = 0x16;
    local_80 = CONCAT71(local_80._1_7_,uVar1);
    uVar12 = local_80;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    local_88 = uVar14;
    FUN_00943eb0((long)&local_80 + 4,&local_b8);
    FUN_00942450(param_1);
    uVar11 = FUN_00925850();
    FUN_0094a5a0(uVar11,local_90 + 0x48,local_90);
    return in_stack_ffffffffffffffb8 & 0xff;
  case 0x1f:
    uVar13 = FUN_009655e0(param_2);
    uVar11 = FUN_009655f0(param_2);
    uVar9 = FUN_008e0a00(uVar13);
    uVar10 = FUN_008e0a00(uVar11);
    uVar1 = FUN_009425e0(param_1,uVar10);
    uVar14 = FUN_008ed0b0(uVar9,4);
    FUN_00943e60(&local_b8);
    FUN_00943f20(&local_b8,1,0x211);
    FUN_00943f60(&local_b8,uVar1);
    uVar11 = local_80;
    local_90[0] = 0x1f;
    local_8c = 0x18;
    local_80 = CONCAT71(local_80._1_7_,2);
    uVar12 = local_80;
    local_88 = 0;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    FUN_00943e60((long)&local_80 + 4);
    local_90[0] = FUN_008e0a00(uVar13);
    uVar11 = local_80;
    local_8c = 0x17;
    local_80 = CONCAT71(local_80._1_7_,uVar1);
    uVar12 = local_80;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    local_88 = uVar14;
    FUN_00943eb0((long)&local_80 + 4,&local_b8);
    FUN_00942450(param_1);
    uVar11 = FUN_00925850();
    FUN_0094a5a0(uVar11,local_90 + 0x48,local_90);
    return in_stack_ffffffffffffffb8 & 0xff;
  case 0x20:
    uVar11 = FUN_009655e0(param_2);
    uVar9 = FUN_008e0a00();
    uVar1 = FUN_009425e0(param_1,uVar9);
    uVar12 = FUN_008ed0b0(uVar9,5);
    FUN_00943e60(&local_b0);
    FUN_00943f20(&local_b0,1,0x95);
    FUN_00943f60(&local_b0,uVar1);
    local_80 = CONCAT71(local_80._1_7_,0x1f);
    local_80 = CONCAT44(0x18,(undefined4)local_80);
    uStack_70 = 2;
    local_78 = 0;
    cStack_77 = 0;
    cStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_6e = 0xf9;
    FUN_00943e60(&uStack_6c);
    uVar3 = FUN_008e0a00(uVar11);
    local_80 = CONCAT71(local_80._1_7_,uVar3);
    local_80 = CONCAT44(0x11,(undefined4)local_80);
    local_78 = (undefined1)uVar12;
    cStack_77 = (char)((ulong)uVar12 >> 8);
    cStack_76 = (char)((ulong)uVar12 >> 0x10);
    uStack_75 = (undefined1)((ulong)uVar12 >> 0x18);
    uStack_74 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_73 = (undefined2)((ulong)uVar12 >> 0x28);
    uStack_71 = (undefined1)((ulong)uVar12 >> 0x38);
    uStack_6e = 200;
    uStack_70 = uVar1;
    FUN_00943eb0(&uStack_6c,&local_b0);
    FUN_00942450(param_1);
    uVar11 = FUN_00925850();
    FUN_0094a5a0(uVar11,&local_88,&local_80);
    return local_88 & 0xff;
  case 0x21:
    uVar13 = FUN_009655e0(param_2);
    uVar9 = FUN_008e0a00();
    uVar11 = FUN_00942380(param_1);
    uVar1 = FUN_008fa0a0(uVar11,uVar9);
    uVar14 = FUN_008ed120(uVar9);
    FUN_00943e60(&local_b8);
    FUN_00943f20(&local_b8,1,0xb1);
    FUN_00943f60(&local_b8,uVar1);
    uVar11 = local_80;
    local_90[0] = 0x1f;
    local_8c = 0x18;
    local_80 = CONCAT71(local_80._1_7_,2);
    uVar12 = local_80;
    local_88 = 0;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    FUN_00943e60((long)&local_80 + 4);
    local_90[0] = FUN_008e0a00(uVar13);
    uVar11 = local_80;
    local_8c = 8;
    local_80 = CONCAT71(local_80._1_7_,uVar1);
    uVar12 = local_80;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    local_88 = uVar14;
    FUN_00943eb0((long)&local_80 + 4,&local_b8);
    FUN_00942450(param_1);
    uVar11 = FUN_00925850();
    FUN_0094a5a0(uVar11,local_90 + 0x48,local_90);
    return in_stack_ffffffffffffffb8 & 0xff;
  case 0x22:
    uVar13 = FUN_009655e0(param_2);
    uVar9 = FUN_008e0a00();
    uVar11 = FUN_00942380(param_1);
    uVar1 = FUN_008fa0a0(uVar11,uVar9);
    uVar14 = FUN_008ed120(uVar9);
    FUN_00943e60(&local_b8);
    FUN_00943f20(&local_b8,1,0x1cb);
    FUN_00943f60(&local_b8,uVar1);
    uVar11 = local_80;
    local_90[0] = 0x1f;
    local_8c = 0x18;
    local_80 = CONCAT71(local_80._1_7_,2);
    uVar12 = local_80;
    local_88 = 0;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    FUN_00943e60((long)&local_80 + 4);
    local_90[0] = FUN_008e0a00(uVar13);
    uVar11 = local_80;
    local_8c = 0x13;
    local_80 = CONCAT71(local_80._1_7_,uVar1);
    uVar12 = local_80;
    local_80._4_4_ = SUB84(uVar11,4);
    local_80._0_2_ = (undefined2)uVar12;
    local_80._0_4_ = CONCAT22(0xf9,(undefined2)local_80);
    local_88 = uVar14;
    FUN_00943eb0((long)&local_80 + 4,&local_b8);
    FUN_00942450(param_1);
    uVar11 = FUN_00925850();
    FUN_0094a5a0(uVar11,local_90 + 0x48,local_90);
    return in_stack_ffffffffffffffb8 & 0xff;
  case 0x23:
    FUN_009655e0(param_2);
    uVar9 = FUN_008e0a00();
    local_78 = 0x1f;
    uStack_74 = 10;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    local_68 = 0;
    FUN_00943e60(local_90 + 0x34);
    local_78 = (undefined1)uVar9;
    uStack_74 = 2;
    uStack_73 = 0;
    uStack_71 = 0;
    local_68 = FUN_008ed0b0(uVar9,5);
    FUN_00943f20(local_90 + 0x34,1,0x86);
    goto LAB_009626c4;
  case 0x24:
    uVar11 = FUN_009655e0(param_2);
    FUN_008ec080(6,uVar11,&local_78);
    uVar5 = FUN_00963f90(param_1,param_2,6,&local_78);
    uVar7 = FUN_00964060(param_1,param_2);
    uVar5 = uVar5 | uVar7;
    goto LAB_00962b24;
  case 0x25:
    FUN_009655e0(param_2);
    uVar14 = FUN_008e0a00();
    uVar11 = FUN_008ec250(uVar14,uVar14 & 0xffffffff);
    local_78 = (undefined1)uVar11;
    cStack_77 = (char)((ulong)uVar11 >> 8);
    cStack_76 = (char)((ulong)uVar11 >> 0x10);
    uStack_75 = (undefined1)((ulong)uVar11 >> 0x18);
    uStack_74 = (undefined1)((ulong)uVar11 >> 0x20);
    uStack_73 = (undefined2)((ulong)uVar11 >> 0x28);
    uStack_71 = (undefined1)((ulong)uVar11 >> 0x38);
    uVar12 = 0x16;
    goto LAB_00962b20;
  case 0x26:
    iVar8 = FUN_008ebfa0(2);
    uVar5 = 0;
    if (iVar8 != 0) {
      uVar11 = FUN_009655e0(param_2);
      uVar12 = FUN_009655f0(param_2);
      uVar11 = FUN_008e0a00(uVar11);
      uVar11 = FUN_008ed0b0(uVar11,2);
      local_78 = (undefined1)uVar11;
      cStack_77 = (char)((ulong)uVar11 >> 8);
      cStack_76 = (char)((ulong)uVar11 >> 0x10);
      uStack_75 = (undefined1)((ulong)uVar11 >> 0x18);
      uStack_74 = (undefined1)((ulong)uVar11 >> 0x20);
      uStack_73 = (undefined2)((ulong)uVar11 >> 0x28);
      uStack_71 = (undefined1)((ulong)uVar11 >> 0x38);
      uVar5 = FUN_00963db0(param_1,param_2,uVar12,0xe,&local_78,0);
    }
    goto LAB_00962b24;
  case 0x27:
    FUN_009655e0(param_2);
    uVar11 = FUN_008e0a00();
    uVar11 = FUN_008ed0b0(uVar11,3);
    local_78 = (undefined1)uVar11;
    cStack_77 = (char)((ulong)uVar11 >> 8);
    cStack_76 = (char)((ulong)uVar11 >> 0x10);
    uStack_75 = (undefined1)((ulong)uVar11 >> 0x18);
    uStack_74 = (undefined1)((ulong)uVar11 >> 0x20);
    uStack_73 = (undefined2)((ulong)uVar11 >> 0x28);
    uStack_71 = (undefined1)((ulong)uVar11 >> 0x38);
    uVar12 = 0xc;
    goto LAB_00962b20;
  case 0x28:
    iVar8 = FUN_008ebfa0(2);
    if (iVar8 == 0) {
      uVar5 = 0;
    }
    else {
      uVar11 = FUN_009655e0(param_2);
      uVar12 = FUN_00942380(param_1);
      uVar13 = FUN_00942390(param_1);
      FUN_00943860(local_90 + 0x40,uVar12,uVar13);
      uVar5 = 0;
      while (uVar14 = FUN_00943ae0(local_90 + 0x40,local_90 + 0x68), (uVar14 & 1) != 0) {
        uVar14 = FUN_00942690(param_1,uVar11,unaff_x21);
        if ((uVar14 & 1) != 0) {
          uVar7 = FUN_00964130(param_1,unaff_x21);
          uVar5 = uVar5 | uVar7;
        }
      }
    }
    return (ulong)(uVar5 & 1);
  case 0x29:
    iVar8 = FUN_008ebfa0(2);
    FUN_009655e0(param_2);
    uVar11 = FUN_008e0a00();
    uVar12 = 0x148;
    goto LAB_00962b04;
  case 0x2a:
    iVar8 = FUN_008ebfa0(2);
    FUN_009655e0(param_2);
    uVar11 = FUN_008e0a00();
    uVar12 = 0x53;
LAB_00962b04:
    uVar11 = FUN_008ed0d0(uVar11,iVar8 + 5,uVar12);
    uVar12 = 8;
    local_78 = (undefined1)uVar11;
    cStack_77 = (char)((ulong)uVar11 >> 8);
    cStack_76 = (char)((ulong)uVar11 >> 0x10);
    uStack_75 = (undefined1)((ulong)uVar11 >> 0x18);
    uStack_74 = (undefined1)((ulong)uVar11 >> 0x20);
    uStack_73 = (undefined2)((ulong)uVar11 >> 0x28);
    uStack_71 = (undefined1)((ulong)uVar11 >> 0x38);
LAB_00962b20:
    uVar5 = FUN_00963f90(param_1,param_2,uVar12,&local_78);
LAB_00962b24:
    return (ulong)(uVar5 & 1);
  case 0x2b:
    FUN_009655e0(param_2);
    uVar9 = FUN_008e0a00();
    FUN_009655f0(param_2);
    uVar10 = FUN_008e0a00();
    FUN_009425e0(param_1,uVar10);
    uVar5 = 0;
    do {
      uVar14 = FUN_008de0e0(uVar5);
      if (((uVar14 & 1) != 0) && (uVar7 = (uVar5 >> 3 & 0x1f) + 1, uVar7 < 4)) {
        local_90[(ulong)uVar7 + 0x42] =
             local_90[(ulong)uVar7 + 0x42] | (byte)(1 << (ulong)(uVar5 & 7));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x18);
    FUN_00942450(param_1);
    uVar11 = FUN_00925860();
    FUN_0094d250(uVar11,local_90 + 0x58,local_90 + 0x40);
    FUN_009425e0(param_1,uVar9);
    uVar5 = 0;
    do {
      uVar14 = FUN_008de0b0(uVar5);
      if (((uVar14 & 1) != 0) && (uVar7 = (uVar5 >> 3 & 0x1f) + 1, uVar7 < 4)) {
        local_90[(ulong)uVar7 + 0x42] =
             local_90[(ulong)uVar7 + 0x42] | (byte)(1 << (ulong)(uVar5 & 7));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x18);
    FUN_00942450(param_1);
    uVar11 = FUN_00925860();
    FUN_0094d250(uVar11,local_90 + 0x58,local_90 + 0x40);
    FUN_00942450(param_1);
    uVar11 = FUN_00925330();
    FUN_00947340(uVar11,local_90 + 0x58,local_90 + 0x40);
    return (ulong)((char)in_stack_ffffffffffffffc8 != '\0');
  case 0x2c:
    uVar11 = FUN_009655e0(param_2);
    uVar12 = FUN_00942380(param_1);
    uVar13 = FUN_00942390(param_1);
    FUN_00943860(local_90 + 0x30,uVar12,uVar13);
    uVar17 = FUN_00943ae0(local_90 + 0x30,local_90 + 0x58);
    uVar14 = 0;
    while ((uVar17 & 1) != 0) {
      uVar17 = FUN_00942690(param_1,uVar11,in_stack_ffffffffffffffc8);
      if (((uVar17 & 1) == 0) &&
         (uVar17 = FUN_00964230(param_1,param_2,in_stack_ffffffffffffffc8), (uVar17 & 1) != 0)) {
        uVar9 = FUN_00942540(param_1,in_stack_ffffffffffffffc8);
        FUN_00965770(param_2,uVar9,0x32);
        uVar14 = 1;
      }
      uVar17 = FUN_00943ae0(local_90 + 0x30,local_90 + 0x58);
    }
    return uVar14;
  case 0x2d:
    uVar11 = FUN_009655e0(param_2);
    uVar12 = FUN_00942380(param_1);
    uVar13 = FUN_00942390(param_1);
    FUN_00943860(&local_88,uVar12,uVar13);
    uVar14 = FUN_00943ae0(&local_88,&local_68);
    uVar17 = 0;
    if ((uVar14 & 1) != 0) {
      do {
        uVar14 = FUN_00942690(param_1,local_68,uVar11);
        if ((uVar14 & 1) != 0) {
          local_b8 = 0x1f1f;
          *(undefined2 *)((undefined4 *)((ulong)&local_b8 | 2) + 1) = 0;
          *(undefined4 *)((ulong)&local_b8 | 2) = 0;
          _uStack_b1 = CONCAT21(0x101,uStack_b1);
          local_ae = 0;
          FUN_00943e60(auStack_ac);
          uVar1 = FUN_008e0a00(uVar11);
          local_b8 = CONCAT11(local_b8._1_1_,uVar1);
          uVar1 = FUN_008e0a00(local_68);
          local_b8 = CONCAT11(uVar1,(undefined1)local_b8);
          local_ae = 0;
          bVar4 = FUN_00965540(param_2);
          _uStack_b1 = (uint3)(~bVar4 & 1) << 0x10;
          local_b6 = FUN_008ec2f0(local_68,6,0);
          uVar14 = FUN_00965540(param_2);
          if ((uVar14 & 1) == 0) {
            FUN_00943f20(auStack_ac,2,0x20c);
            uVar1 = FUN_008e0a00(local_68);
            FUN_00943f60(auStack_ac,uVar1);
          }
          FUN_00942450(param_1);
          uVar12 = FUN_00925b20();
          FUN_00948f40(uVar12,local_c0,&local_b8);
          if (local_c0[0] != '\0') {
            uVar9 = FUN_00942540(param_1,local_68);
            FUN_00965770(param_2,uVar9,0x33);
            uVar17 = 1;
          }
        }
        uVar14 = FUN_00943ae0(&local_88,&local_68);
      } while ((uVar14 & 1) != 0);
    }
    return uVar17;
  case 0x2e:
    uVar1 = FUN_00965540(param_2);
    uVar11 = FUN_009655e0(param_2);
    local_90[0] = 0x1f;
    local_8c = 0x2d;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6c = 0;
    bStack_6a = 0;
    local_80 = 0;
    local_78 = 0;
    cStack_77 = 0;
    cStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    local_88 = 0;
    FUN_00943e60((long)&local_68 + 4);
    local_90[0] = FUN_008e0a00(uVar11);
    local_8c = 0x2d;
    bStack_6a = 0;
    local_68 = CONCAT44(local_68._4_4_,CONCAT13(uVar1,(undefined3)local_68)) & 0xffffffff01ffffff;
    uVar12 = FUN_00942380(param_1);
    uVar13 = FUN_00942390(param_1);
    FUN_00943860(&local_b8,uVar12,uVar13);
    while (uVar14 = FUN_00943ae0(&local_b8,&local_98), (uVar14 & 1) != 0) {
      uVar14 = FUN_00942690(param_1,uVar11,local_98);
      if (((uVar14 & 1) != 0) && (iVar8 = FUN_008e19f0(local_98), iVar8 != 0)) {
        uVar1 = FUN_008e0a00(local_98);
        local_90[(ulong)bStack_6a + 8] = uVar1;
        bStack_6a = bStack_6a + 1;
      }
    }
    if (bStack_6a != 0) {
      uVar14 = 0;
      do {
        uVar1 = local_90[uVar14 + 8];
        uVar11 = FUN_009424e0(param_1,uVar1);
        uVar9 = FUN_00942580(param_1,uVar1);
        uVar10 = FUN_008e19f0(uVar11);
        FUN_009658e0(param_2,uVar9,uVar10);
        uVar14 = uVar14 + 1;
      } while (uVar14 < bStack_6a);
    }
    FUN_00942450(param_1);
    uVar11 = FUN_00925570();
    FUN_00948290(uVar11,local_c8,local_90);
    return (ulong)local_c8[0];
  default:
    uVar5 = 0;
    goto LAB_00962b24;
  }
  uVar9 = FUN_00942620();
  uVar10 = FUN_00942630(param_1);
  FUN_009655e0(param_2);
  uVar6 = FUN_008e0a00();
  uVar6 = FUN_00942580(param_1,uVar6);
  FUN_008ed700(local_90 + 0x48,uVar11,uVar6);
  FUN_00942390(param_1);
  uVar11 = FUN_00931920();
  bVar4 = FUN_008ee2f0(local_90 + 0x48,uVar9,uVar10,uVar11,local_90 + 0x38);
  if (bVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar14 = (ulong)bVar4;
    puVar16 = local_90 + 0x38;
    do {
      uVar11 = FUN_009424e0(param_1,*puVar16);
      uVar7 = FUN_00963bb0(param_1,param_2,uVar11,uVar12,uVar13);
      uVar5 = uVar5 | uVar7;
      uVar14 = uVar14 - 1;
      puVar16 = puVar16 + 1;
    } while (uVar14 != 0);
  }
  return (ulong)(uVar5 & 1);
}


