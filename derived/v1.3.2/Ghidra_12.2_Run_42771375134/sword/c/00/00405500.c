/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00405500; name: FUN_00405500
 */


int FUN_00405500(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  
  puVar7 = PTR_DAT_02712a50;
  puVar6 = PTR_DAT_02712a48;
  if ((param_1 == (undefined8 *)0x0) && ((param_4 & 1) == 0)) {
    return -1;
  }
  iVar8 = *(int *)PTR_DAT_02712a48;
  if (iVar8 <= *(int *)PTR_DAT_02712a50) {
    return -1;
  }
  puVar13 = *(uint **)PTR_DAT_02712a40;
  if (iVar8 < 1) {
    iVar12 = 0;
    if (iVar8 < 1) {
      return -1;
    }
  }
  else {
    iVar12 = 0;
    do {
      nn::os::LockMutex((MutexType *)(puVar13 + 0xc));
      if (*puVar13 == 0) {
        if (*(int *)puVar6 <= iVar12) {
          return -1;
        }
        goto LAB_004055a8;
      }
      nn::os::UnlockMutex((MutexType *)(puVar13 + 0xc));
      iVar8 = *(int *)puVar6;
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 0x1a;
    } while (iVar12 < iVar8);
    if (iVar8 <= iVar12) {
      return -1;
    }
  }
LAB_004055a8:
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = param_2 / param_3;
  }
  uVar3 = uVar4 * param_3;
  if (param_1 == (undefined8 *)0x0) {
    if (uVar3 + param_5 == 0) {
      param_1 = *(undefined8 **)(puVar13 + 2);
      *(undefined8 **)(puVar13 + 4) = param_1;
    }
    else {
      param_1 = (undefined8 *)FUN_007749a0(uVar3 + param_5);
      *(undefined8 **)(puVar13 + 2) = param_1;
      *(undefined8 **)(puVar13 + 4) = param_1;
    }
    if (param_1 == (undefined8 *)0x0) goto LAB_004056e4;
    if (param_5 != 0) {
      uVar10 = (ulong)param_5;
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = (ulong)param_1 / uVar10;
      }
      lVar9 = (long)param_1 - uVar5 * uVar10;
      if (lVar9 != 0) {
        param_1 = (undefined8 *)((long)param_1 + (uVar10 - lVar9));
        *(undefined8 **)(puVar13 + 4) = param_1;
      }
    }
    bVar2 = (byte)puVar13[0xb] | 1;
  }
  else {
    bVar2 = (byte)puVar13[0xb] & 0xfe;
    *(undefined8 **)(puVar13 + 4) = param_1;
  }
  *(byte *)(puVar13 + 0xb) = bVar2;
  puVar13[10] = param_4;
  puVar13[0x18] = uVar3;
  if ((param_4 >> 3 & 1) == 0) {
    lVar9 = FUN_00404a80(param_1);
    *(long *)(puVar13 + 0x14) = lVar9;
    if (lVar9 == 0) {
      FUN_00774a20(*(undefined8 *)(puVar13 + 2));
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
LAB_004056e4:
      nn::os::UnlockMutex((MutexType *)(puVar13 + 0xc));
      return -1;
    }
    iVar8 = FUN_00404a70();
    puVar13[0x18] = puVar13[0x18] - iVar8;
  }
  else if (uVar3 != 0) {
    puVar1 = (undefined8 *)((long)param_1 + (ulong)uVar3);
    do {
      *param_1 = 0;
      if (*(long *)(puVar13 + 8) == 0) {
        puVar11 = puVar13 + 8;
      }
      else {
        puVar11 = *(uint **)(puVar13 + 6);
      }
      *(undefined8 **)puVar11 = param_1;
      *(undefined8 **)(puVar13 + 6) = param_1;
      param_1 = (undefined8 *)((long)param_1 + (ulong)param_3);
    } while (param_1 != puVar1);
  }
  *puVar13 = uVar4;
  puVar13[1] = param_3;
  puVar13[0x16] = param_5;
  *(int *)puVar7 = *(int *)puVar7 + 1;
  nn::os::UnlockMutex((MutexType *)(puVar13 + 0xc));
  return iVar12;
}


