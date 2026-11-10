/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f4640; name: FUN_004f4640
 */


ulong FUN_004f4640(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  
  puVar6 = PTR_DAT_02712d20;
  lVar2 = -4;
  if (*(long *)(param_1 + 0x30) != -1) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  lVar3 = -4;
  if (*(long *)(param_1 + 0x48) != -1) {
    lVar3 = *(long *)(param_1 + 0x48);
  }
  if (*(int *)(param_1 + 0x108) == 0) {
LAB_004f46e8:
    uVar11 = 0;
    iVar4 = *(int *)(param_1 + 0x38);
  }
  else {
    puVar7 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,lVar2);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00497c70(*(undefined8 *)puVar6,lVar3);
      if (puVar7 != (undefined8 *)0x0) {
        iVar4 = *(int *)(puVar7 + 10);
        *(int *)(puVar7 + 10) = iVar4 + -1;
        lVar12 = lVar3;
        if (iVar4 + -1 == 0) {
          uVar5 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*puVar7)(puVar7);
          FUN_00404870(uVar5,puVar7);
          iVar4 = *(int *)(param_1 + 0x108);
          goto joined_r0x004f4860;
        }
LAB_004f48c0:
        iVar4 = *(int *)(param_1 + 0x108);
        goto joined_r0x004f4860;
      }
      lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x48);
      puVar7 = (undefined8 *)FUN_00497c70(*(undefined8 *)puVar6,lVar12);
      uVar11 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        iVar4 = *(int *)(puVar7 + 10);
        *(int *)(puVar7 + 10) = iVar4 + -1;
        if (iVar4 + -1 == 0) {
          uVar5 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*puVar7)(puVar7);
          FUN_00404870(uVar5,puVar7);
        }
        goto LAB_004f48c0;
      }
    }
    else {
      iVar4 = *(int *)(puVar7 + 10);
      *(int *)(puVar7 + 10) = iVar4 + -1;
      lVar12 = lVar2;
      if (iVar4 + -1 != 0) goto LAB_004f48c0;
      uVar5 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar7)(puVar7);
      FUN_00404870(uVar5,puVar7);
      iVar4 = *(int *)(param_1 + 0x108);
joined_r0x004f4860:
      if (iVar4 == 0) goto LAB_004f46e8;
      lVar8 = 0;
      uVar11 = 0;
      plVar9 = param_2;
      do {
        plVar1 = (long *)(*(long *)(param_1 + 0x100) + lVar8);
        lVar8 = lVar8 + 0x20;
        *plVar9 = *plVar1;
        lVar10 = plVar1[1];
        *plVar9 = lVar12;
        plVar9[1] = lVar10;
        uVar11 = uVar11 + 1;
        plVar9 = plVar9 + 2;
      } while (uVar11 < *(uint *)(param_1 + 0x108));
    }
    iVar4 = *(int *)(param_1 + 0x38);
  }
  if (((iVar4 == 0) || (*(float *)(param_1 + 0x3c) <= 0.0)) ||
     (puVar7 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,lVar2),
     puVar7 == (undefined8 *)0x0)) {
    iVar4 = *(int *)(param_1 + 0x50);
  }
  else {
    iVar4 = *(int *)(puVar7 + 10);
    *(int *)(puVar7 + 10) = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      uVar5 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar7)(puVar7);
      FUN_00404870(uVar5,puVar7);
    }
    plVar9 = param_2 + (uVar11 & 0xffffffff) * 2;
    uVar11 = (ulong)((int)uVar11 + 1);
    *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(param_1 + 0x38);
    fVar13 = *(float *)(param_1 + 0x3c);
    fVar14 = *(float *)(param_1 + 0xa4);
    *plVar9 = lVar2;
    *(float *)((long)plVar9 + 0xc) = fVar14 * fVar13;
    iVar4 = *(int *)(param_1 + 0x50);
  }
  if (((iVar4 != 0) && (0.0 < *(float *)(param_1 + 0x54))) &&
     (puVar7 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,lVar3),
     puVar7 != (undefined8 *)0x0)) {
    iVar4 = *(int *)(puVar7 + 10);
    *(int *)(puVar7 + 10) = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      uVar5 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar7)(puVar7);
      FUN_00404870(uVar5,puVar7);
    }
    param_2 = param_2 + (uVar11 & 0xffffffff) * 2;
    uVar11 = (ulong)((int)uVar11 + 1);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x50);
    fVar13 = *(float *)(param_1 + 0x54);
    fVar14 = *(float *)(param_1 + 0xa4);
    *param_2 = lVar3;
    *(float *)((long)param_2 + 0xc) = fVar14 * fVar13;
  }
  return uVar11 & 0xffffffff;
}


