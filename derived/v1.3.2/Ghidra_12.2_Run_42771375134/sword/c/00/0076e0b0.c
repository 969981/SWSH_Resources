/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076e0b0; name: FUN_0076e0b0
 */


undefined8 FUN_0076e0b0(long *param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  if ((uVar5 >> 0xf & 1) == 0) {
    return 0x16;
  }
  if (param_1[3] == 0) {
    return 9;
  }
  if ((uVar5 >> 0xc & 1) == 0) {
    lVar9 = *param_1;
    sVar4 = *(short *)(lVar9 + 10);
    iVar3 = 0;
    if (sVar4 != 0) {
      iVar3 = (int)(*(int *)(lVar9 + 0x28) - *(uint *)(lVar9 + 0x24)) / (int)sVar4;
    }
    if (0 < iVar3) {
      uVar2 = 0;
      plVar10 = (long *)(lVar9 + (ulong)*(uint *)(lVar9 + 0x24));
      do {
        while (*plVar10 == 0) {
          printf("\nError NotFound [0x%08x]\n",*(uint *)(plVar10 + 1));
          sVar4 = *(short *)(lVar9 + 10);
          uVar2 = 0x13;
          plVar10 = (long *)((long)plVar10 + (long)sVar4);
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) goto LAB_0076e164;
        }
        plVar10 = (long *)((long)plVar10 + (long)sVar4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
LAB_0076e164:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    *(uint *)(param_1 + 0xc) = uVar5 | 0x1000;
  }
  lVar13 = *param_1;
  lVar9 = param_1[2];
  if (lVar9 == 0) {
    lVar9 = lVar13 + *(int *)(lVar13 + 0x10);
  }
  lVar8 = param_1[8];
  lVar11 = param_1[10];
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  if (param_3 == -2) {
    if (((9 < *(byte *)(lVar13 + 6)) && (*(int *)(lVar13 + 0x38) != *(int *)(lVar13 + 0x34))) &&
       (uVar2 = (*(code *)param_1[5])(param_1,*(undefined4 *)((long)param_1 + 0xd4)),
       (int)uVar2 != 0)) {
      return uVar2;
    }
    puVar12 = (ulong *)(param_1[1] + (long)(int)param_1[6]);
    lVar13 = param_1[0xb];
joined_r0x0076e324:
    if (lVar13 < lVar11) {
      uVar2 = 7;
    }
    else {
      lVar6 = param_1[9];
      if (lVar8 < lVar6) {
        uVar2 = 8;
      }
      else {
        if (param_3 != -2) {
          lVar13 = lVar11 << 0x20;
          lVar11 = lVar11 + -0x10;
          *(long *)(lVar9 + (lVar13 + -0x800000000 >> 0x20)) = (long)(int)param_1[0x15] * 8;
          *(undefined4 *)(param_1 + 0x15) = 0;
          *(undefined8 *)(lVar9 + (int)lVar11) = 0;
          lVar13 = param_1[0xb];
          lVar6 = param_1[9];
        }
        if (*(ulong *)((long)param_1 + 0x8c) < (ulong)(lVar13 - param_1[10])) {
          *(long *)((long)param_1 + 0x8c) = lVar13 - param_1[10];
          uVar7 = *(ulong *)((long)param_1 + 0x94);
        }
        else {
          uVar7 = *(ulong *)((long)param_1 + 0x94);
        }
        if (uVar7 < (ulong)(param_1[8] - lVar6)) {
          *(long *)((long)param_1 + 0x94) = param_1[8] - lVar6;
        }
        if (lVar8 + 0x80 <= lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0076e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(&PTR_LAB_0260e008)[*puVar12 & 0xffffffff])();
          return uVar2;
        }
        uVar2 = 3;
      }
    }
  }
  else {
    if (param_3 == -1) {
      iVar3 = *(int *)(lVar13 + 0x1c);
      if (-1 < iVar3) {
        puVar12 = (ulong *)(param_1[1] + (long)iVar3);
        bVar1 = *(byte *)(lVar13 + 6);
joined_r0x0076e308:
        if ((9 < bVar1) && (*(int *)(lVar13 + 0x38) != *(int *)(lVar13 + 0x34))) {
          *(int *)((long)param_1 + 0xd4) = iVar3;
          uVar2 = (*(code *)param_1[5])(param_1);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          puVar12 = (ulong *)param_1[1];
        }
        lVar13 = param_1[0xb];
        goto joined_r0x0076e324;
      }
    }
    else if (-1 < param_3) {
      sVar4 = *(short *)(lVar13 + 10);
      iVar3 = 0;
      if (sVar4 != 0) {
        iVar3 = (int)(*(int *)(lVar13 + 0x24) - *(uint *)(lVar13 + 0x20)) / (int)sVar4;
      }
      if (param_3 < iVar3) {
        iVar3 = (int)*(undefined8 *)
                      (lVar13 + (ulong)*(uint *)(lVar13 + 0x20) + (ulong)(uint)(sVar4 * param_3));
        puVar12 = (ulong *)(param_1[1] + (long)iVar3);
        bVar1 = *(byte *)(lVar13 + 6);
        goto joined_r0x0076e308;
      }
    }
    uVar2 = 0x14;
  }
  return uVar2;
}


