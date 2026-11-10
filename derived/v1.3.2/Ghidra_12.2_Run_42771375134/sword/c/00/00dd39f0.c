/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd39f0; name: FUN_00dd39f0
 */


void FUN_00dd39f0(long *param_1,int *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  piVar5 = (int *)(*(long *)(*param_1 + 0xb20) + (long)*param_2 * 0x44);
  if ((-1 < *piVar5) && (lVar6 = *param_3, (*(byte *)(lVar6 + 0x4c8) & 1) != 0)) {
    lVar7 = 0;
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(*param_1 + 0xb20) + (long)*param_2 * 0x44 + 0x24);
    do {
      puVar1 = (undefined8 *)(param_1[1] + lVar7);
      iVar2 = piVar9[-8];
      uVar11 = puVar1[1];
      uVar10 = *puVar1;
      uVar13 = puVar1[3];
      uVar12 = puVar1[2];
      if (-1 < iVar2) {
        if ((ulong)((*(long *)(lVar6 + 0x328) - *(long *)(lVar6 + 800) >> 3) * -0x70a3d70a3d70a3d7)
            <= (ulong)(long)*piVar5) goto LAB_00dd3ba4;
        lVar4 = *(long *)(lVar6 + 800) + (long)*piVar5 * 200;
        lVar3 = *(long *)(lVar4 + 0x50);
        if ((ulong)(*(long *)(lVar4 + 0x58) - lVar3 >> 2) <= (ulong)(long)iVar2) goto LAB_00dd3bac;
        *(float *)(lVar3 + (long)iVar2 * 4) = (float)uVar10 + (float)uVar12;
      }
      iVar2 = piVar9[-4];
      if (-1 < iVar2) {
        if ((ulong)((*(long *)(lVar6 + 0x328) - *(long *)(lVar6 + 800) >> 3) * -0x70a3d70a3d70a3d7)
            <= (ulong)(long)*piVar5) goto LAB_00dd3ba4;
        lVar4 = *(long *)(lVar6 + 800) + (long)*piVar5 * 200;
        lVar3 = *(long *)(lVar4 + 0x50);
        if ((ulong)(*(long *)(lVar4 + 0x58) - lVar3 >> 2) <= (ulong)(long)iVar2) goto LAB_00dd3bac;
        *(float *)(lVar3 + (long)iVar2 * 4) =
             (float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar12 >> 0x20);
      }
      iVar2 = *piVar9;
      if (-1 < iVar2) {
        if ((ulong)((*(long *)(lVar6 + 0x328) - *(long *)(lVar6 + 800) >> 3) * -0x70a3d70a3d70a3d7)
            <= (ulong)(long)*piVar5) goto LAB_00dd3ba4;
        lVar4 = *(long *)(lVar6 + 800) + (long)*piVar5 * 200;
        lVar3 = *(long *)(lVar4 + 0x50);
        if ((ulong)(*(long *)(lVar4 + 0x58) - lVar3 >> 2) <= (ulong)(long)iVar2) goto LAB_00dd3bac;
        *(float *)(lVar3 + (long)iVar2 * 4) = (float)uVar11 + (float)uVar13;
      }
      iVar2 = piVar9[4];
      if (-1 < iVar2) {
        if ((ulong)((*(long *)(lVar6 + 0x328) - *(long *)(lVar6 + 800) >> 3) * -0x70a3d70a3d70a3d7)
            <= (ulong)(long)*piVar5) {
LAB_00dd3ba4:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar4 = *(long *)(lVar6 + 800) + (long)*piVar5 * 200;
        lVar3 = *(long *)(lVar4 + 0x50);
        if ((ulong)(*(long *)(lVar4 + 0x58) - lVar3 >> 2) <= (ulong)(long)iVar2) {
LAB_00dd3bac:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(undefined4 *)(lVar3 + (long)iVar2 * 4) = *(undefined4 *)(puVar1 + 4);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x30;
      piVar9 = piVar9 + 1;
    } while (uVar8 < 4);
  }
  return;
}


