/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00699240; name: FUN_00699240
 */


void FUN_00699240(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  
  puVar2 = PTR_PTR_02715048;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 5) {
    uVar4 = 0;
LAB_006992a4:
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[2] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[2]);
    }
    if ((*puVar5 < 7) || ((ulong)puVar5[3] == 0)) goto LAB_006992a4;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[3]);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar6 = (**(code **)(PTR_PTR_02715048 + uVar4 * 8))(param_1,lVar3);
  *param_2 = uVar6;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 9) {
    uVar4 = 0;
LAB_00699304:
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[4] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[4]);
    }
    if ((*puVar5 < 0xb) || ((ulong)puVar5[5] == 0)) goto LAB_00699304;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[5]);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar6 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar3);
  param_2[1] = uVar6;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 0xd) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[6] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[6]);
    }
    if ((0xe < *puVar5) && ((ulong)puVar5[7] != 0)) {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar5[7]);
      lVar3 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_00699360;
    }
  }
  lVar3 = 0;
LAB_00699360:
  uVar6 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar3);
  param_2[2] = uVar6;
  return;
}


