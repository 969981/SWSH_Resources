/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136ac70; name: FUN_0136ac70
 */


void FUN_0136ac70(ushort *param_1,long param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar3 = *(int *)(param_2 + 0x68) - 1;
  if (uVar3 < 8) {
    lVar6 = *(long *)(&DAT_0216c4e0 + (long)(int)uVar3 * 8);
  }
  else {
    lVar6 = 0;
  }
  uVar8 = (ulong)*(ushort *)((long)param_3 + (6 - (long)*param_3));
  puVar4 = (uint *)((long)param_3 + uVar8);
  uVar9 = (ulong)*puVar4;
  puVar4 = (uint *)((long)puVar4 + lVar6 * 4 + uVar9 + 4);
  uVar10 = (ulong)*puVar4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  piVar1 = (int *)((long)puVar4 + uVar10);
  iVar2 = *piVar1;
  uVar12 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar2));
  uVar11 = 0;
  if (uVar12 != 0) {
    uVar11 = *(undefined1 *)((long)piVar1 + uVar12);
  }
  *(undefined1 *)param_1 = uVar11;
  uVar12 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar2));
  uVar11 = 0;
  if (uVar12 != 0) {
    uVar11 = *(undefined1 *)((long)piVar1 + uVar12);
  }
  *(undefined1 *)((long)param_1 + 1) = uVar11;
  uVar12 = (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar2));
  puVar4 = (uint *)((long)piVar1 + uVar12);
  uVar13 = (ulong)*puVar4;
  uVar3 = *(uint *)((long)puVar4 + uVar13);
  if (uVar3 != 0) {
    uVar5 = 0;
    puVar4 = (uint *)((long)param_3 + uVar13 + lVar6 * 4 + uVar12 + uVar10 + uVar9 + uVar8 + 8);
    do {
      uVar8 = (ulong)*puVar4;
      lVar6 = uVar8 - (long)*(int *)((long)puVar4 + uVar8);
      if (*(ushort *)((long)puVar4 + lVar6) < 5) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(ushort *)((long)puVar4 + lVar6 + 4);
        if ((ulong)uVar7 != 0) {
          uVar7 = (ushort)*(byte *)((long)puVar4 + uVar8 + uVar7);
        }
      }
      if (9 < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_1[1] = uVar7;
      lVar6 = uVar8 - (long)*(int *)((long)puVar4 + uVar8);
      if (*(ushort *)((long)puVar4 + lVar6) < 7) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(ushort *)((long)puVar4 + lVar6 + 6);
        if ((ulong)uVar7 != 0) {
          uVar7 = (ushort)*(undefined4 *)((long)puVar4 + uVar8 + uVar7);
        }
      }
      param_1[2] = uVar7;
      lVar6 = uVar8 - (long)*(int *)((long)puVar4 + uVar8);
      if ((*(ushort *)((long)puVar4 + lVar6) < 9) ||
         (uVar9 = (ulong)*(ushort *)((long)puVar4 + lVar6 + 8), uVar9 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ushort)*(byte *)((long)puVar4 + uVar8 + uVar9);
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
      param_1[3] = uVar7;
      param_1 = param_1 + 3;
    } while (uVar5 < uVar3);
  }
  return;
}


