/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00699030; name: FUN_00699030
 */


void FUN_00699030(undefined8 param_1,undefined1 (*param_2) [16],int *param_3)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar6 < 5) {
    uVar5 = 0;
LAB_00699094:
    lVar4 = 0;
  }
  else {
    uVar5 = 0;
    if ((ulong)puVar6[2] != 0) {
      uVar5 = (ulong)*(byte *)((long)param_3 + (ulong)puVar6[2]);
    }
    if ((*puVar6 < 7) || ((ulong)puVar6[3] == 0)) goto LAB_00699094;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar6[3]);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  auVar8 = (**(code **)(PTR_PTR_02715050 + uVar5 * 8))(param_1,lVar4);
  *param_2 = auVar8;
  puVar3 = PTR_PTR_02715058;
  puVar6 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar6 < 9) {
    uVar5 = 0;
LAB_006990f4:
    lVar4 = 0;
  }
  else {
    uVar5 = 0;
    if ((ulong)puVar6[4] != 0) {
      uVar5 = (ulong)*(byte *)((long)param_3 + (ulong)puVar6[4]);
    }
    if ((*puVar6 < 0xb) || ((ulong)puVar6[5] == 0)) goto LAB_006990f4;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar6[5]);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  auVar8 = (**(code **)(PTR_PTR_02715058 + uVar5 * 8))(param_1,lVar4);
  param_2[1] = auVar8;
  puVar6 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar6 < 0xd) {
    uVar5 = 0;
LAB_00699154:
    lVar4 = 0;
  }
  else {
    uVar5 = 0;
    if ((ulong)puVar6[6] != 0) {
      uVar5 = (ulong)*(byte *)((long)param_3 + (ulong)puVar6[6]);
    }
    if ((*puVar6 < 0xf) || ((ulong)puVar6[7] == 0)) goto LAB_00699154;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar6[7]);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  auVar8 = (**(code **)(puVar3 + uVar5 * 8))(param_1,lVar4);
  param_2[2] = auVar8;
  puVar6 = (ushort *)((long)param_3 - (long)*param_3);
  uVar2 = *puVar6;
  if (0x1c < uVar2) {
    if (((ulong)puVar6[0xe] != 0) &&
       (uVar5 = (ulong)*(byte *)((long)param_3 + (ulong)puVar6[0xe]), uVar5 != 0)) {
      if ((uVar2 < 0x1f) || ((ulong)puVar6[0xf] == 0)) {
        lVar4 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_3 + (ulong)puVar6[0xf]);
        lVar4 = (long)puVar1 + (ulong)*puVar1;
      }
      uVar7 = (**(code **)(PTR_PTR_02715048 + uVar5 * 8))(param_1,lVar4);
      *(undefined4 *)param_2[3] = uVar7;
      puVar6 = (ushort *)((long)param_3 - (long)*param_3);
    }
    uVar2 = *puVar6;
  }
  if (uVar2 < 0x11) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if ((ulong)puVar6[8] != 0) {
      uVar5 = (ulong)*(byte *)((long)param_3 + (ulong)puVar6[8]);
    }
    if ((0x12 < uVar2) && ((ulong)puVar6[9] != 0)) {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar6[9]);
      lVar4 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_00699210;
    }
  }
  lVar4 = 0;
LAB_00699210:
  auVar8 = (**(code **)(puVar3 + uVar5 * 8))(param_1,lVar4);
  param_2[4] = auVar8;
  return;
}


