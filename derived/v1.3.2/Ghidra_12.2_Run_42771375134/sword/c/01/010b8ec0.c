/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b8ec0; name: FUN_010b8ec0
 */


void FUN_010b8ec0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x90) + 0x608);
  if (iVar1 == -1) {
    return;
  }
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  lVar4 = FUN_010aad10();
  puVar2 = PTR_DAT_027108d8;
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  if (iVar1 != 0) {
    if (iVar1 == 5) {
      lVar4 = *(long *)(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0x7c) = 1;
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a80),1);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a88),1);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a90),1);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a98),1);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1aa0),1);
      lVar4 = *(long *)(param_1 + 0x90);
      lVar8 = *(long *)PTR_DAT_027108d8;
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a70),*(int *)(lVar8 + 0x11aec) != 0);
      FUN_016b2d70(*(undefined8 *)(lVar4 + 0x1a78),*(int *)(lVar8 + 0x11aec) != 0);
      FUN_010b1170(*(undefined8 *)(param_1 + 0x90),1);
    }
    goto LAB_010b9308;
  }
  lVar4 = puVar7[2];
  uVar5 = FUN_010a31a0(*(undefined8 *)PTR_DAT_027108d8,*(undefined4 *)(lVar4 + 8));
  if ((uVar5 & 1) != 0) {
LAB_010b8fe0:
    *(undefined4 *)(*(long *)puVar2 + (long)*(int *)(lVar4 + 8) * 0xa0 + 0x10c) = 0xffffffff;
    FUN_010bc320(param_1,0x5cd950fe6d47a4d3,0,1,1,0);
    *(undefined4 *)(param_1 + 0x7c) = 0x2d;
    goto LAB_010b9308;
  }
  uVar5 = FUN_010bd780();
  if ((uVar5 & 1) != 0) {
    FUN_010bc320(param_1,0x30b9f9570c93cea1,0,0,1,0);
    *(undefined4 *)(param_1 + 0x7c) = 6;
    *(undefined4 *)(param_1 + 0xec) = 4;
    FUN_010bc6f0(param_1,0,1);
    goto LAB_010b9308;
  }
  lVar6 = *(long *)puVar2;
  lVar8 = 0;
  if (*(int *)(lVar6 + 0x11af0) != 8) {
    lVar8 = 16000;
  }
  lVar4 = lVar6 + lVar8 + (long)*(int *)(lVar4 + 8) * 0xa0;
  local_e0 = *(undefined8 *)(lVar4 + 0x108);
  local_d8 = *(undefined8 *)(lVar4 + 0x110);
  uStack_d0 = *(undefined8 *)(lVar4 + 0x118);
  local_c8 = *(undefined8 *)(lVar4 + 0x120);
  local_c0 = *(undefined8 *)(lVar4 + 0x128);
  uStack_b8 = *(undefined8 *)(lVar4 + 0x130);
  local_b0 = *(undefined2 *)(lVar4 + 0x138);
  local_ac = *(undefined4 *)(lVar4 + 0x13c);
  local_a8 = *(undefined2 *)(lVar4 + 0x140);
  local_a4 = *(undefined4 *)(lVar4 + 0x144);
  local_a0 = *(undefined1 *)(lVar4 + 0x148);
  local_9f = *(undefined1 *)(lVar4 + 0x149);
  local_9c = *(undefined4 *)(lVar4 + 0x14c);
  local_98 = *(undefined4 *)(lVar4 + 0x150);
  local_94 = *(undefined4 *)(lVar4 + 0x154);
  local_90 = *(undefined8 *)(lVar4 + 0x158);
  uStack_88 = *(undefined8 *)(lVar4 + 0x160);
  local_80 = *(undefined8 *)(lVar4 + 0x168);
  uStack_78 = *(undefined8 *)(lVar4 + 0x170);
  local_70 = *(undefined8 *)(lVar4 + 0x178);
  uStack_68 = *(undefined8 *)(lVar4 + 0x180);
  uStack_50 = *(undefined8 *)(lVar4 + 0x198);
  local_60 = *(undefined8 *)(lVar4 + 0x188);
  local_58 = *(undefined8 *)(lVar4 + 400);
  local_48 = *(undefined2 *)(lVar4 + 0x1a0);
  if (*(char *)(*(long *)(param_1 + 0x90) + 0x1a5c) == '\0') {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_010aad10();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    lVar4 = puVar7[2];
    FUN_01211890(&local_118,*(undefined8 *)PTR_DAT_02710958,&uStack_88);
    if (local_118 != 0) {
      FUN_010bd8b0(lVar4 + 0x20,&local_118);
      *(undefined4 *)(param_1 + 0x7c) = 0x23;
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),0,1);
      *(undefined4 *)(param_1 + 0x84) = 5;
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar4 = FUN_010aad10();
      for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
      }
      *(undefined4 *)puVar7[2] = 3;
      goto LAB_010b9308;
    }
    goto LAB_010b8fe0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0x1a;
  local_108 = DAT_02163b50;
  uStack_100 = DAT_02163b58;
  local_118 = DAT_02163b40;
  uStack_110 = DAT_02163b48;
  local_e8 = DAT_02163b70;
  local_f8 = DAT_02163b60;
  uStack_f0 = DAT_02163b68;
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_010b91c0:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar4 = FUN_010aad10();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar7 = puVar7 + -10;
          goto LAB_010b91c4;
        }
      }
      goto LAB_010b91c0;
    }
  }
LAB_010b91c4:
  *(undefined1 *)(puVar7 + 0x1a) = 1;
  FUN_0077eb10(puVar7[0x22],&local_118,puVar7[0x1b]);
  puVar7[0x13] = puVar7[0x1b];
  FUN_0077eb10(puVar7[0x22],&uStack_110,puVar7[0x1c]);
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[0x14] = puVar7[0x1c];
  puVar7[0x15] = 0;
  FUN_010bc320(param_1,0xc86aa8c663766d1b,1,0,1,0);
LAB_010b9308:
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
  *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x608) = 0xffffffff;
  return;
}


