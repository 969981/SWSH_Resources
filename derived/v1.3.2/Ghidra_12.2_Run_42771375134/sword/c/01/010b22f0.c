/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b22f0; name: FUN_010b22f0
 */


void FUN_010b22f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)PTR_DAT_027108d8;
  lVar3 = 0;
  if (*(int *)(lVar2 + 0x11af0) != 8) {
    lVar3 = 16000;
  }
  lVar3 = lVar2 + lVar3 +
          (long)(int)(*(int *)(lVar2 + 0x11aec) + ~*(uint *)(param_2 + 0x1a58)) * 0xa0;
  uVar4 = *(undefined8 *)(lVar3 + 0x118);
  uVar1 = *(undefined8 *)(lVar3 + 0x110);
  *param_1 = *(undefined8 *)(lVar3 + 0x108);
  param_1[1] = uVar1;
  param_1[2] = uVar4;
  uVar5 = *(undefined8 *)(lVar3 + 0x130);
  uVar1 = *(undefined8 *)(lVar3 + 0x120);
  uVar4 = *(undefined8 *)(lVar3 + 0x128);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar3 + 0x138);
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[3] = uVar1;
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(lVar3 + 0x13c);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(lVar3 + 0x140);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(lVar3 + 0x144);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(lVar3 + 0x148);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)(lVar3 + 0x149);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(lVar3 + 0x14c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar3 + 0x150);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(lVar3 + 0x154);
  uVar1 = *(undefined8 *)(lVar3 + 0x160);
  param_1[10] = *(undefined8 *)(lVar3 + 0x158);
  param_1[0xb] = uVar1;
  uVar1 = *(undefined8 *)(lVar3 + 0x168);
  uVar4 = *(undefined8 *)(lVar3 + 0x170);
  uVar5 = *(undefined8 *)(lVar3 + 0x180);
  param_1[0xe] = *(undefined8 *)(lVar3 + 0x178);
  param_1[0xf] = uVar5;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar4;
  uVar5 = *(undefined8 *)(lVar3 + 0x198);
  uVar1 = *(undefined8 *)(lVar3 + 0x188);
  uVar4 = *(undefined8 *)(lVar3 + 400);
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(lVar3 + 0x1a0);
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar5;
  param_1[0x10] = uVar1;
  return;
}


