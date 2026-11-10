/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e72ad0; name: FUN_00e72ad0
 */


void FUN_00e72ad0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  long local_28;
  
  uVar5 = (**(code **)(*(long *)param_1[0xf] + 0x210))();
  uVar3 = FUN_015772a0(param_1[0xf] + 0x50);
  fVar8 = (float)uVar5;
  if ((uVar3 & 1) == 0) {
    if (fVar8 < 1.0) goto LAB_00e72b34;
  }
  else {
    uVar3 = (**(code **)(*(long *)param_1[0xf] + 0x218))();
    if (((fVar8 < 1.0) && (0.0 < fVar8)) && ((uVar3 & 1) != 0)) {
LAB_00e72b34:
      auVar6 = FUN_0075e7d0(uVar5,param_1 + 0x54,param_1 + 0x56);
      goto LAB_00e72c28;
    }
  }
  auVar6 = *(undefined1 (*) [16])(param_1 + 0x56);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  if (param_1[0x11] == 0) {
    local_28 = 0;
  }
  else {
    FUN_00e73550(&local_28);
  }
  uVar1 = FUN_00e95a90((int)param_1[0x13],local_28);
  *(uint *)(param_1 + 0x50) = uVar1;
  uVar2 = uVar1;
  if (*(char *)((long)param_1 + 0x9c) != '\0') {
    uVar2 = 0;
    if (0.0 < *(float *)(param_1 + 0x13)) {
      uVar2 = uVar1 + 1;
    }
    *(uint *)(param_1 + 0x50) = uVar2;
  }
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x50) = uVar2;
  uVar1 = (uint)((ulong)(*(long *)(local_28 + 0x3c0) - *(long *)(local_28 + 0x3b8)) >> 5);
  if ((int)uVar2 <= (int)uVar1) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x50) = uVar1;
  FUN_00e746a0(DAT_01d4c5c0,param_1);
  auVar7 = (**(code **)(*param_1 + 0xa0))((int)param_1[0x13],param_1);
  *(undefined1 (*) [16])(param_1 + 0x16) = auVar7;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
LAB_00e72c28:
  lVar4 = param_1[0xf];
  *(undefined1 *)(lVar4 + 0xc0) = 1;
  *(undefined1 (*) [16])(lVar4 + 0xa0) = auVar6;
  return;
}


