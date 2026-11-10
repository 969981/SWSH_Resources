/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c55a0; name: FUN_006c55a0
 */


void FUN_006c55a0(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  
  puVar2 = PTR_PTR_02715048;
  if (param_3 == (int *)0x0) {
    return;
  }
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 7) {
    uVar4 = 0;
LAB_006c5614:
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[3] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[3]);
    }
    if ((*puVar5 < 9) || ((ulong)puVar5[4] == 0)) goto LAB_006c5614;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[4]);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar6 = (**(code **)(PTR_PTR_02715048 + uVar4 * 8))(param_1,lVar3);
  *param_2 = uVar6;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 0xb) {
    uVar4 = 0;
LAB_006c5674:
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[5] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[5]);
    }
    if ((*puVar5 < 0xd) || ((ulong)puVar5[6] == 0)) goto LAB_006c5674;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[6]);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar6 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar3);
  param_2[1] = uVar6;
  puVar2 = PTR_PTR_02715058;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 0xf) {
    uVar4 = 0;
LAB_006c56cc:
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[7] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[7]);
    }
    if ((*puVar5 < 0x11) || ((ulong)puVar5[8] == 0)) goto LAB_006c56cc;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[8]);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  auVar7 = (**(code **)(PTR_PTR_02715058 + uVar4 * 8))(param_1,lVar3);
  *(undefined1 (*) [16])(param_2 + 4) = auVar7;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 0x13) {
    uVar4 = 0;
LAB_006c572c:
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[9] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[9]);
    }
    if ((*puVar5 < 0x15) || ((ulong)puVar5[10] == 0)) goto LAB_006c572c;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[10]);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  auVar7 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar3);
  *(undefined1 (*) [16])(param_2 + 8) = auVar7;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 0x17) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[0xb] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[0xb]);
    }
    if ((0x18 < *puVar5) && ((ulong)puVar5[0xc] != 0)) {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar5[0xc]);
      lVar3 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_006c5788;
    }
  }
  lVar3 = 0;
LAB_006c5788:
  auVar7 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar3);
  *(undefined1 (*) [16])(param_2 + 0xc) = auVar7;
  return;
}


