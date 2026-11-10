/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013352d0; name: FUN_013352d0
 */


/* WARNING: Removing unreachable block (ram,0x013353a8) */

void FUN_013352d0(undefined8 *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  uint *puVar9;
  ushort *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  
  if (((*(long *)(param_2 + 0x68) != 0) && (*(char *)(*(long *)(param_2 + 0x68) + 0x170) != '\0'))
     && (uVar5 = FUN_014bca10(*(undefined8 *)(param_2 + 0x170)), (uVar5 & 1) != 0)) {
    puVar6 = *(uint **)(*(long *)(param_2 + 0x68) + 400);
    uVar2 = *puVar6;
    piVar1 = (int *)((long)puVar6 + (ulong)uVar2);
    uVar5 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1));
    puVar9 = (uint *)((long)piVar1 + uVar5);
    uVar8 = (ulong)*puVar9;
    puVar9 = (uint *)((long)puVar9 + uVar8);
    if (param_3 < *puVar9) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      puVar9 = puVar9 + (param_3 & 0xffffffff) + 1;
      uVar12 = (ulong)*puVar9;
      piVar1 = (int *)((long)puVar9 + uVar12);
      puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar10 < 7) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if ((ulong)puVar10[3] != 0) {
          uVar13 = *(undefined4 *)((long)piVar1 + (ulong)puVar10[3]);
        }
      }
      *(undefined4 *)param_1 = uVar13;
      puVar9 = (uint *)((long)piVar1 + (ulong)puVar10[2]);
      uVar11 = (ulong)*puVar9;
      uVar3 = *(uint *)((long)puVar9 + uVar11);
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          puVar7 = (undefined4 *)
                   ((long)puVar6 +
                   uVar11 + (param_3 & 0xffffffff) * 4 + (ulong)puVar10[2] + uVar12 + uVar8 + uVar5
                   + (ulong)uVar2 + 0xc);
          puVar4 = param_1;
          do {
            *(undefined4 *)((long)puVar4 + 4) = puVar7[-1];
            lVar14 = lVar14 + 2;
            *(undefined4 *)(puVar4 + 1) = *puVar7;
            puVar7 = puVar7 + 2;
            puVar4 = puVar4 + 1;
          } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar14);
          if ((uVar3 & 1) == 0) {
            return;
          }
        }
        *(undefined4 *)((long)param_1 + lVar14 * 4 + 4) =
             *(undefined4 *)((long)puVar9 + lVar14 * 4 + uVar11 + 4);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


