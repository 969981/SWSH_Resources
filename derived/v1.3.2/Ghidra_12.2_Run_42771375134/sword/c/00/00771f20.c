/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00771f20; name: FUN_00771f20
 */


void FUN_00771f20(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  uint *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_006d86d0(param_1,0x80018180);
  puVar3 = PTR_DAT_02716138;
  *param_1 = (long)(PTR_DAT_02716138 + 0x10);
  param_1[9] = (long)(puVar3 + 0x90);
  param_1[10] = (long)(puVar3 + 0x100);
  param_1[0x10] = (long)(PTR_DAT_02710a48 + 0x10);
  lVar5 = *(long *)(param_2 + 8);
  param_1[0x11] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0x16);
    lVar5 = *(long *)(param_2 + 0x10);
    lVar1 = *(long *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x28);
    param_1[0x14] = *(long *)(param_2 + 0x20);
    param_1[0x15] = lVar2;
    param_1[0x12] = lVar5;
    param_1[0x13] = lVar1;
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x26);
    lVar5 = *(long *)(param_2 + 0x90);
    lVar1 = *(long *)(param_2 + 0x98);
    lVar2 = *(long *)(param_2 + 0xa8);
    param_1[0x24] = *(long *)(param_2 + 0xa0);
    param_1[0x25] = lVar2;
    param_1[0x22] = lVar5;
    param_1[0x23] = lVar1;
  }
  puVar3 = PTR_DAT_02715420;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  puVar4 = PTR_DAT_02716140;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x10] = (long)(puVar4 + 0x10);
  lVar5 = *(long *)puVar3;
  lVar1 = *(long *)(puVar3 + 8);
  param_1[0x32] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3c] = lVar5;
  param_1[0x3d] = lVar1;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  *(undefined8 *)((long)param_1 + 500) = 0;
  if (*(long *)(param_2 + 8) == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar7 = *(uint **)(*(long *)(param_2 + 8) + 400);
    piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
  }
  uVar9 = 0;
  uVar10 = 0;
  if (0x26 < *(ushort *)((long)piVar6 - (long)*piVar6)) {
    uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x13];
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = *(undefined4 *)((long)piVar6 + uVar8);
    }
  }
  *(undefined4 *)((long)param_1 + 0x1fc) = uVar10;
  uVar10 = 0;
  if (0x28 < *(ushort *)((long)piVar6 - (long)*piVar6)) {
    uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x14];
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = *(undefined4 *)((long)piVar6 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = uVar10;
  uVar10 = 0;
  if (0x2a < *(ushort *)((long)piVar6 - (long)*piVar6)) {
    uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x15];
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = *(undefined4 *)((long)piVar6 + uVar8);
    }
  }
  *(undefined4 *)((long)param_1 + 0x204) = uVar10;
  uVar10 = 0;
  if (0x2c < *(ushort *)((long)piVar6 - (long)*piVar6)) {
    uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x16];
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = *(undefined4 *)((long)piVar6 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x41) = uVar10;
  uVar10 = 0;
  if (0x2e < *(ushort *)((long)piVar6 - (long)*piVar6)) {
    uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x17];
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = *(undefined4 *)((long)piVar6 + uVar8);
    }
  }
  *(undefined4 *)((long)param_1 + 0x20c) = uVar10;
  if ((0x30 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x18], uVar8 != 0)) {
    uVar9 = *(undefined4 *)((long)piVar6 + uVar8);
  }
  *(undefined4 *)(param_1 + 0x42) = uVar9;
  return;
}


