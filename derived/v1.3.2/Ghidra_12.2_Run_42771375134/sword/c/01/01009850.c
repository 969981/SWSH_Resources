/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01009850; name: FUN_01009850
 */


undefined8
FUN_01009850(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  ushort *puVar8;
  undefined8 uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  undefined8 local_60;
  char *local_58;
  long local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  piVar5 = (int *)FUN_01009440(param_1,param_2,&uStack_38);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x1d) {
    piVar7 = (int *)0x0;
    iVar2 = iRam0000000000000000;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0xe];
    piVar7 = (int *)0x0;
    if (uVar6 != 0) {
      puVar1 = (uint *)((long)piVar5 + uVar6);
      piVar7 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
    iVar2 = *piVar7;
  }
  if (iVar2 == 0) {
    return 0;
  }
  piVar5 = (int *)((long)(piVar7 + 1) + (ulong)(uint)piVar7[1]);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar6 == 0)) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar1 = (uint *)((long)piVar5 + uVar6);
    piVar5 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar6 == 0)) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar1 = (uint *)((long)piVar5 + uVar6);
    piVar5 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  if (param_4 != (undefined8 *)0x0) {
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x1b) {
      *param_4 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0xd];
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = *(undefined8 *)((long)piVar5 + uVar6);
      }
      *param_4 = uVar9;
    }
  }
  if (param_3 == (undefined8 *)0x0) {
    return 1;
  }
  FUN_01009b20(&local_60,param_1,&uStack_38);
  strncpy((char *)(param_3 + 8),local_58,0x40);
  *param_3 = local_60;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  param_3[1] = *param_2;
  puVar8 = (ushort *)((long)piVar5 - (long)*piVar5);
  uVar3 = *puVar8;
  if (uVar3 < 5) {
    uVar13 = 0;
LAB_01009a14:
    uVar10 = 0;
    uVar15 = uVar10;
  }
  else {
    uVar13 = 0;
    if ((ulong)puVar8[2] != 0) {
      uVar13 = *(undefined4 *)((long)piVar5 + (ulong)puVar8[2]);
    }
    if (uVar3 < 7) goto LAB_01009a14;
    uVar10 = 0;
    if ((ulong)puVar8[3] != 0) {
      uVar10 = *(uint *)((long)piVar5 + (ulong)puVar8[3]);
    }
    uVar15 = 0;
    if ((8 < uVar3) && ((ulong)puVar8[4] != 0)) {
      uVar15 = *(uint *)((long)piVar5 + (ulong)puVar8[4]);
    }
  }
  param_3[5] = (ulong)uVar15;
  param_3[4] = CONCAT44(uVar10,uVar13);
  puVar8 = (ushort *)((long)piVar5 - (long)*piVar5);
  uVar3 = *puVar8;
  if (uVar3 < 0xd) {
    fVar11 = 0.0;
    fVar14 = 0.0;
    fVar16 = 0.0;
    if (uVar3 < 0xb) goto LAB_01009acc;
    uVar4 = puVar8[5];
  }
  else {
    if ((ulong)puVar8[6] == 0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = *(float *)((long)piVar5 + (ulong)puVar8[6]) * DAT_01d4bb38;
    }
    fVar11 = fVar11 / DAT_01d4c284;
    uVar4 = puVar8[5];
  }
  fVar14 = 0.0;
  if ((ulong)uVar4 != 0) {
    fVar14 = *(float *)((long)piVar5 + (ulong)uVar4) * DAT_01d4bb38;
  }
  fVar16 = 0.0;
  fVar14 = fVar14 / DAT_01d4c284;
  if ((0xe < uVar3) && ((ulong)puVar8[7] != 0)) {
    fVar16 = *(float *)((long)piVar5 + (ulong)puVar8[7]) * DAT_01d4bb38;
  }
LAB_01009acc:
  auVar12 = FUN_00a92cd0(fVar11,fVar14,fVar16 / DAT_01d4c284);
  *(undefined1 (*) [16])(param_3 + 6) = auVar12;
  return 1;
}


