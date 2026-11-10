/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077fde0; name: FUN_0077fde0
 */


long FUN_0077fde0(long param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  short *psVar5;
  undefined4 uVar6;
  bool bVar7;
  short sVar8;
  undefined4 uVar9;
  ulong uVar10;
  
  uVar3 = FUN_0077d470(*(undefined8 *)(param_1 + 0x78));
  lVar4 = FUN_0077dad0(uVar3,*(undefined4 *)(param_1 + 0xb0));
  if (lVar4 == 0) {
    uVar6 = 0;
    goto LAB_0077ff18;
  }
  psVar5 = (short *)(lVar4 + (long)*(int *)(param_1 + 0xac) * 2);
  if (*psVar5 == 0x10) {
    *(undefined1 *)(param_1 + 0xb9) = 1;
    uVar1 = FUN_0077db50(psVar5);
    *(undefined2 *)(param_1 + 0xc0) = uVar1;
    uVar2 = FUN_0077db70(psVar5);
    uVar2 = uVar2 & 0xffff;
    if (0xf < uVar2) {
      uVar2 = 0x10;
    }
    *(uint *)(param_1 + 0xc4) = uVar2;
    if (uVar2 != 0) {
      uVar10 = 0;
      do {
        uVar1 = FUN_0077dba0(psVar5,uVar10 & 0xffffffff);
        *(undefined2 *)(param_1 + 200 + uVar10 * 2) = uVar1;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0xc4));
    }
    psVar5 = (short *)FUN_0077db30(psVar5);
    sVar8 = *psVar5;
    uVar6 = (undefined4)((ulong)((long)psVar5 - lVar4) >> 1);
joined_r0x0077ff0c:
    if (sVar8 == 0) goto LAB_0077ff10;
LAB_0077fecc:
    if (sVar8 != 10) {
      uVar9 = uVar6;
    }
    else {
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      uVar9 = 0;
    }
    bVar7 = sVar8 == 10;
    *(undefined4 *)(param_1 + 0xac) = uVar9;
  }
  else {
    *(undefined1 *)(param_1 + 0xb9) = 0;
    sVar8 = *psVar5;
    if (sVar8 != 0 && sVar8 != 10) {
      sVar8 = psVar5[1];
      uVar6 = (undefined4)((ulong)((long)(psVar5 + 1) - lVar4) >> 1);
      goto joined_r0x0077ff0c;
    }
    uVar6 = (undefined4)((ulong)((long)psVar5 - lVar4) >> 1);
    if (sVar8 != 0) goto LAB_0077fecc;
LAB_0077ff10:
    bVar7 = true;
  }
  *(bool *)(param_1 + 0xb8) = bVar7;
LAB_0077ff18:
  *param_2 = uVar6;
  return lVar4;
}


