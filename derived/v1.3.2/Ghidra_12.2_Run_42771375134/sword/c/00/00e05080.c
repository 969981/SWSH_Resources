/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e05080; name: FUN_00e05080
 */


undefined8 FUN_00e05080(long param_1,char *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined6 uStack_80;
  undefined2 local_7a;
  undefined6 uStack_78;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  undefined8 local_38;
  
  if (*param_2 == '\0') {
    return 0;
  }
  uVar4 = FUN_00ecec10();
  switch(uVar4) {
  case 0:
    local_b0 = *(undefined8 *)(param_2 + 0x10);
    local_a8 = *(undefined8 *)(param_2 + 0x18);
    local_a0 = *(undefined8 *)(param_2 + 0x20);
    local_98 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    local_90 = *(undefined8 *)(param_2 + 0x30);
    local_88 = *(undefined8 *)(param_2 + 0x38);
    uVar11 = *(undefined8 *)(param_2 + 0x46);
    break;
  case 1:
    local_b0 = *(undefined8 *)(param_2 + 0x4e);
    local_a8 = *(undefined8 *)(param_2 + 0x56);
    local_a0 = *(undefined8 *)(param_2 + 0x5e);
    local_98 = *(undefined8 *)(param_2 + 0x66);
    local_90 = *(undefined8 *)(param_2 + 0x6e);
    local_88 = *(undefined8 *)(param_2 + 0x76);
    uVar6 = *(undefined8 *)(param_2 + 0x7e);
    uVar11 = *(undefined8 *)(param_2 + 0x84);
    break;
  case 2:
    local_b0 = *(undefined8 *)(param_2 + 0x8c);
    local_a8 = *(undefined8 *)(param_2 + 0x94);
    local_a0 = *(undefined8 *)(param_2 + 0x9c);
    local_98 = *(undefined8 *)(param_2 + 0xa4);
    local_90 = *(undefined8 *)(param_2 + 0xac);
    local_88 = *(undefined8 *)(param_2 + 0xb4);
    uVar6 = *(undefined8 *)(param_2 + 0xbc);
    uVar11 = *(undefined8 *)(param_2 + 0xc2);
    break;
  case 3:
    local_b0 = *(undefined8 *)(param_2 + 0xca);
    local_a8 = *(undefined8 *)(param_2 + 0xd2);
    local_a0 = *(undefined8 *)(param_2 + 0xda);
    local_98 = *(undefined8 *)(param_2 + 0xe2);
    local_90 = *(undefined8 *)(param_2 + 0xea);
    local_88 = *(undefined8 *)(param_2 + 0xf2);
    uVar6 = *(undefined8 *)(param_2 + 0xfa);
    uVar11 = *(undefined8 *)(param_2 + 0x100);
    break;
  case 4:
    local_a8 = *(undefined8 *)(param_2 + 0x14e);
    local_a0 = *(undefined8 *)(param_2 + 0x156);
    local_98 = *(undefined8 *)(param_2 + 0x15e);
    local_b0 = *(undefined8 *)(param_2 + 0x146);
    pcVar10 = param_2 + 0x166;
    pcVar9 = param_2 + 0x16e;
    pcVar8 = param_2 + 0x176;
    param_2 = param_2 + 0x17c;
    goto LAB_00e05208;
  case 5:
    local_a8 = *(undefined8 *)(param_2 + 0x18c);
    local_a0 = *(undefined8 *)(param_2 + 0x194);
    local_98 = *(undefined8 *)(param_2 + 0x19c);
    local_b0 = *(undefined8 *)(param_2 + 0x184);
    pcVar10 = param_2 + 0x1a4;
    pcVar9 = param_2 + 0x1ac;
    pcVar8 = param_2 + 0x1b4;
    param_2 = param_2 + 0x1ba;
LAB_00e05208:
    local_90 = *(undefined8 *)pcVar10;
    local_88 = *(undefined8 *)pcVar9;
    uVar6 = *(undefined8 *)pcVar8;
    uVar11 = *(undefined8 *)param_2;
LAB_00e05284:
    uStack_78 = (undefined6)((ulong)uVar11 >> 0x10);
    uStack_80 = (undefined6)uVar6;
    local_7a = (undefined2)((ulong)uVar6 >> 0x30);
    goto LAB_00e052c8;
  case 6:
    local_b0 = *(undefined8 *)(param_2 + 0x108);
    local_a8 = *(undefined8 *)(param_2 + 0x110);
    local_a0 = *(undefined8 *)(param_2 + 0x118);
    local_98 = *(undefined8 *)(param_2 + 0x120);
    pcVar10 = param_2 + 0x13e;
    uVar6 = *(undefined8 *)(param_2 + 0x138);
    local_90 = *(undefined8 *)(param_2 + 0x128);
    local_88 = *(undefined8 *)(param_2 + 0x130);
    goto LAB_00e052b8;
  case 7:
    local_b0 = *(undefined8 *)(param_2 + 0x1c2);
    local_a8 = *(undefined8 *)(param_2 + 0x1ca);
    local_a0 = *(undefined8 *)(param_2 + 0x1d2);
    local_98 = *(undefined8 *)(param_2 + 0x1da);
    local_90 = *(undefined8 *)(param_2 + 0x1e2);
    local_88 = *(undefined8 *)(param_2 + 0x1ea);
    uVar6 = *(undefined8 *)(param_2 + 0x1f2);
    uVar11 = *(undefined8 *)(param_2 + 0x1f8);
    goto LAB_00e05284;
  case 8:
    local_b0 = *(undefined8 *)(param_2 + 0x200);
    local_a8 = *(undefined8 *)(param_2 + 0x208);
    local_a0 = *(undefined8 *)(param_2 + 0x210);
    local_98 = *(undefined8 *)(param_2 + 0x218);
    local_90 = *(undefined8 *)(param_2 + 0x220);
    local_88 = *(undefined8 *)(param_2 + 0x228);
    uVar6 = *(undefined8 *)(param_2 + 0x230);
    pcVar10 = param_2 + 0x236;
LAB_00e052b8:
    uVar11 = *(undefined8 *)pcVar10;
    break;
  default:
    uStack_78 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_7a = 0;
    local_b0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_a8 = 0;
    local_a0 = 0;
    goto LAB_00e052c8;
  }
  uStack_78 = (undefined6)((ulong)uVar11 >> 0x10);
  uStack_80 = (undefined6)uVar6;
  local_7a = (undefined2)((ulong)uVar6 >> 0x30);
LAB_00e052c8:
  local_38 = 0xcbf29ce484222645;
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar1 == plVar2) {
LAB_00e05340:
      FUN_00e305f0(*(undefined8 *)(param_1 + 0x68),2,&local_38);
      uVar5 = FUN_00e31bb0(*(undefined8 *)(param_1 + 0x68),&local_b0,1);
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        if (param_4 != (undefined8 *)0x0) {
          lVar7 = *(long *)(param_1 + 0x68);
          uVar6 = *(undefined8 *)(lVar7 + 0x58);
          uVar11 = *(undefined8 *)(lVar7 + 0x68);
          param_4[1] = *(undefined8 *)(lVar7 + 0x60);
          param_4[2] = uVar11;
          *param_4 = uVar6;
          uVar6 = *(undefined8 *)(lVar7 + 0x70);
          uVar11 = *(undefined8 *)(lVar7 + 0x78);
          uVar3 = *(undefined8 *)(lVar7 + 0x88);
          param_4[5] = *(undefined8 *)(lVar7 + 0x80);
          param_4[6] = uVar3;
          param_4[3] = uVar6;
          param_4[4] = uVar11;
          uVar6 = *(undefined8 *)(lVar7 + 0x90);
          uVar11 = *(undefined8 *)(lVar7 + 0x98);
          uVar3 = *(undefined8 *)(lVar7 + 0xa8);
          param_4[9] = *(undefined8 *)(lVar7 + 0xa0);
          param_4[10] = uVar3;
          param_4[7] = uVar6;
          param_4[8] = uVar11;
        }
        uVar6 = 1;
      }
      return uVar6;
    }
    lVar7 = *plVar1;
    uVar5 = FUN_015b5320(lVar7 + 0x50);
    if (((uVar5 & 1) != 0) && (uVar5 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar5 & 1) == 0))
    {
      FUN_006c5d20(auStack_70,lVar7 + 0x220);
      local_38 = local_50;
      goto LAB_00e05340;
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


