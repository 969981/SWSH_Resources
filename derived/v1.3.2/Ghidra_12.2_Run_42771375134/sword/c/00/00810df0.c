/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00810df0; name: FUN_00810df0
 */


byte * FUN_00810df0(undefined8 *param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  lVar10 = 0;
  plVar7 = (long *)*param_1;
joined_r0x00810e1c:
  if (plVar7 != (long *)0x0) goto LAB_00810e30;
LAB_00810e48:
  if (-1 < lVar10) {
    return param_2;
  }
LAB_00810e54:
  piVar1 = (int *)(*plVar7 + lVar10 * 0x10);
  switch(piVar1[1]) {
  case 0:
    goto switchD_00810e70_caseD_0;
  case 1:
    iVar2 = piVar1[2];
    uVar9 = *piVar1 << 3 | 5;
    if (0x7f < uVar9) {
      pbVar5 = param_2;
      uVar8 = uVar9;
      do {
        uVar9 = uVar8 >> 7;
        uVar3 = uVar8 >> 0xe;
        param_2 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        pbVar5 = param_2;
        uVar8 = uVar9;
      } while (uVar3 != 0);
    }
    *param_2 = (byte)uVar9;
    *(int *)(param_2 + 1) = iVar2;
    param_2 = param_2 + 5;
    plVar7 = (long *)*param_1;
    break;
  case 2:
    uVar4 = *(undefined8 *)(piVar1 + 2);
    uVar9 = *piVar1 << 3 | 1;
    if (0x7f < uVar9) {
      pbVar5 = param_2;
      uVar8 = uVar9;
      do {
        uVar9 = uVar8 >> 7;
        uVar3 = uVar8 >> 0xe;
        param_2 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        pbVar5 = param_2;
        uVar8 = uVar9;
      } while (uVar3 != 0);
    }
    *param_2 = (byte)uVar9;
    *(undefined8 *)(param_2 + 1) = uVar4;
    param_2 = param_2 + 9;
    plVar7 = (long *)*param_1;
    break;
  case 3:
    uVar4 = *(undefined8 *)(piVar1 + 2);
    uVar9 = *piVar1 << 3 | 2;
    if (0x7f < uVar9) {
      pbVar5 = param_2;
      uVar8 = uVar9;
      do {
        uVar9 = uVar8 >> 7;
        uVar3 = uVar8 >> 0xe;
        param_2 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        pbVar5 = param_2;
        uVar8 = uVar9;
      } while (uVar3 != 0);
    }
    *param_2 = (byte)uVar9;
    param_2 = (byte *)FUN_0080e510(uVar4,param_2 + 1);
    plVar7 = (long *)*param_1;
    goto joined_r0x00810e2c;
  case 4:
    uVar9 = *piVar1 << 3 | 3;
    if (0x7f < uVar9) {
      pbVar5 = param_2;
      uVar8 = uVar9;
      do {
        uVar9 = uVar8 >> 7;
        uVar3 = uVar8 >> 0xe;
        param_2 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        pbVar5 = param_2;
        uVar8 = uVar9;
      } while (uVar3 != 0);
    }
    *param_2 = (byte)uVar9;
    pbVar5 = (byte *)FUN_00810df0(*(undefined8 *)(piVar1 + 2),param_2 + 1);
    uVar9 = *piVar1 << 3 | 4;
    if (0x7f < uVar9) {
      pbVar6 = pbVar5;
      uVar8 = uVar9;
      do {
        uVar9 = uVar8 >> 7;
        uVar3 = uVar8 >> 0xe;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = (byte)uVar8 | 0x80;
        pbVar6 = pbVar5;
        uVar8 = uVar9;
      } while (uVar3 != 0);
    }
    param_2 = pbVar5 + 1;
    *pbVar5 = (byte)uVar9;
  default:
    goto switchD_00810e70_default;
  }
  lVar10 = lVar10 + 1;
  if (plVar7 == (long *)0x0) goto LAB_00810e48;
LAB_00810e30:
  if ((int)((ulong)(plVar7[1] - *plVar7) >> 4) <= lVar10) {
    return param_2;
  }
  goto LAB_00810e54;
switchD_00810e70_default:
  plVar7 = (long *)*param_1;
joined_r0x00810e2c:
  lVar10 = lVar10 + 1;
  goto joined_r0x00810e1c;
switchD_00810e70_caseD_0:
  uVar4 = *(undefined8 *)(piVar1 + 2);
  uVar9 = *piVar1 << 3;
  if (0x7f < uVar9) {
    pbVar5 = param_2;
    uVar8 = uVar9;
    do {
      uVar9 = uVar8 >> 7;
      uVar3 = uVar8 >> 0xe;
      param_2 = pbVar5 + 1;
      *pbVar5 = (byte)uVar8 | 0x80;
      pbVar5 = param_2;
      uVar8 = uVar9;
    } while (uVar3 != 0);
  }
  *param_2 = (byte)uVar9;
  param_2 = (byte *)FUN_0080e320(uVar4,param_2 + 1);
  lVar10 = lVar10 + 1;
  plVar7 = (long *)*param_1;
  goto joined_r0x00810e1c;
}


