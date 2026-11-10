/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa57f0; name: FUN_00aa57f0
 */


void FUN_00aa57f0(long *param_1,long param_2,undefined2 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined2 uVar6;
  long *plVar7;
  long *plVar8;
  
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  puVar1 = PTR_DAT_02719728;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  puVar1 = PTR_DAT_027164d8 + 0x10;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[4] = (long)puVar1;
  param_1[5] = 0;
  puVar2 = PTR_DAT_027194a8 + 0x10;
  *(undefined4 *)(param_1 + 0x49) = 0xff;
  *(undefined2 *)((long)param_1 + 0x24c) = 0xf9;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = (long)puVar1;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = (long)puVar2;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0xff;
  *(undefined2 *)((long)param_1 + 0x47c) = 0xf9;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = (long)puVar1;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = (long)puVar2;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0xff;
  *(undefined2 *)((long)param_1 + 0x6ac) = 0xf9;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = (long)puVar1;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = (long)puVar2;
  param_1[0x11a] = 0;
  *(undefined4 *)(param_1 + 0x11b) = 0xff;
  *(undefined2 *)((long)param_1 + 0x8dc) = 0xf9;
  param_1[0x131] = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = 0;
  param_1[0x12e] = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  param_1[0x11f] = 0;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  param_1[0x11c] = (long)puVar1;
  param_1[0x153] = 0;
  param_1[0x152] = 0;
  param_1[0x151] = 0;
  param_1[0x150] = 0;
  param_1[0x143] = 0;
  param_1[0x142] = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = (long)puVar2;
  param_1[0x160] = 0;
  *(undefined4 *)(param_1 + 0x161) = 0xff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = (long)puVar2;
  param_1[0x27] = 0;
  *(undefined2 *)((long)param_1 + 0xb0c) = 0xf9;
  *(undefined1 *)(param_1 + 0x162) = 0;
  param_1[0x48] = 0;
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x728))((long *)param_1[1],0);
  if ((uVar3 == 0xff) ||
     (plVar8 = *(long **)(param_1[1] + (ulong)uVar3 * 8 + 0x548), plVar8 == (long *)0x0)) {
    *(undefined2 *)((long)param_1 + 0x24c) = 0xf9;
    lVar5 = param_1[0x8e];
    *(uint *)(param_1 + 0x49) = uVar3;
    param_1[0x8e] = 0;
  }
  else {
    plVar7 = plVar8 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar8 + 400))(plVar8);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_00ad2d90(plVar8), (uVar4 & 1) == 0)) {
      uVar6 = 0xf9;
    }
    else {
      uVar6 = *param_3;
    }
    *(undefined2 *)((long)param_1 + 0x24c) = uVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = param_1[0x8e];
    *(uint *)(param_1 + 0x49) = uVar3;
    param_1[0x8e] = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x728))((long *)param_1[1],1);
  if ((uVar3 == 0xff) ||
     (plVar8 = *(long **)(param_1[1] + (ulong)uVar3 * 8 + 0x548), plVar8 == (long *)0x0)) {
    *(undefined2 *)((long)param_1 + 0x47c) = 0xf9;
    lVar5 = param_1[0xd4];
    *(uint *)(param_1 + 0x8f) = uVar3;
    param_1[0xd4] = 0;
  }
  else {
    plVar7 = plVar8 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar8 + 400))(plVar8);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_00ad2d90(plVar8), (uVar4 & 1) == 0)) {
      uVar6 = 0xf9;
    }
    else {
      uVar6 = param_3[1];
    }
    *(undefined2 *)((long)param_1 + 0x47c) = uVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = param_1[0xd4];
    *(uint *)(param_1 + 0x8f) = uVar3;
    param_1[0xd4] = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x728))((long *)param_1[1],2);
  if ((uVar3 == 0xff) ||
     (plVar8 = *(long **)(param_1[1] + (ulong)uVar3 * 8 + 0x548), plVar8 == (long *)0x0)) {
    *(undefined2 *)((long)param_1 + 0x6ac) = 0xf9;
    lVar5 = param_1[0x11a];
    *(uint *)(param_1 + 0xd5) = uVar3;
    param_1[0x11a] = 0;
  }
  else {
    plVar7 = plVar8 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar8 + 400))(plVar8);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_00ad2d90(plVar8), (uVar4 & 1) == 0)) {
      uVar6 = 0xf9;
    }
    else {
      uVar6 = param_3[2];
    }
    *(undefined2 *)((long)param_1 + 0x6ac) = uVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = param_1[0x11a];
    *(uint *)(param_1 + 0xd5) = uVar3;
    param_1[0x11a] = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x728))((long *)param_1[1],3);
  if ((uVar3 == 0xff) ||
     (plVar8 = *(long **)(param_1[1] + (ulong)uVar3 * 8 + 0x548), plVar8 == (long *)0x0)) {
    *(undefined2 *)((long)param_1 + 0x8dc) = 0xf9;
    lVar5 = param_1[0x160];
    *(uint *)(param_1 + 0x11b) = uVar3;
    param_1[0x160] = 0;
  }
  else {
    plVar7 = plVar8 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar8 + 400))(plVar8);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_00ad2d90(plVar8), (uVar4 & 1) == 0)) {
      uVar6 = 0xf9;
    }
    else {
      uVar6 = param_3[3];
    }
    *(undefined2 *)((long)param_1 + 0x8dc) = uVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = param_1[0x160];
    *(uint *)(param_1 + 0x11b) = uVar3;
    param_1[0x160] = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x728))((long *)param_1[1],4);
  if ((uVar3 == 0xff) ||
     (plVar8 = *(long **)(param_1[1] + (ulong)uVar3 * 8 + 0x548), plVar8 == (long *)0x0)) {
    *(undefined2 *)((long)param_1 + 0xb0c) = 0xf9;
  }
  else {
    plVar7 = plVar8 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = (**(code **)(*plVar8 + 400))(plVar8);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_00ad2d90(plVar8), (uVar4 & 1) == 0)) {
      uVar6 = 0xf9;
    }
    else {
      uVar6 = param_3[4];
    }
    *(undefined2 *)((long)param_1 + 0xb0c) = uVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  *(uint *)(param_1 + 0x161) = uVar3;
  *(undefined1 *)(param_1 + 0x162) = *(undefined1 *)(param_3 + 5);
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


