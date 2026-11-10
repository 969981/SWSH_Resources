/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468750; name: FUN_00468750
 */


void FUN_00468750(uint param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  puVar4 = PTR_DAT_02713110;
  puVar3 = PTR_DAT_02713108;
  puVar2 = PTR_DAT_02712e28;
  if (*(long *)(PTR_DAT_02713110 + 8) != 0) {
    lVar10 = *(long *)(PTR_DAT_02713110 + 8);
    lVar8 = 0;
    do {
      while( true ) {
        lVar7 = lVar10;
        lVar10 = 0;
        if (*(long *)(lVar7 + 0x20) != 0) {
          lVar10 = *(long *)(lVar7 + 0x20) + -0x18;
        }
        if (((*(uint *)(lVar10 + 0x26b) >> 0xc & 1) != 0) && (*(int *)(lVar10 + 0x2b8) == -1))
        break;
        if (((*(uint *)(lVar10 + 0x26b) >> 0xe & 1) == 0) && (-1 < *(int *)(lVar10 + 0x288))) {
          fVar11 = *(float *)(lVar10 + 0x214) * (float)param_1;
          fVar12 = 0.5;
          if (fVar11 <= 0.0) {
            fVar12 = -0.5;
          }
          *(int *)(lVar10 + 0x288) = *(int *)(lVar10 + 0x288) - (int)(fVar12 + fVar11);
        }
        lVar10 = *(long *)(lVar7 + 0x68);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 0x68) == 0) {
          return;
        }
      }
      if (*(long **)puVar3 != (long *)0x0) {
        plVar1 = *(long **)puVar3;
        plVar9 = (long *)0x0;
        do {
          while( true ) {
            plVar5 = plVar1;
            plVar1 = (long *)*plVar5;
            lVar10 = 0;
            if (plVar5[1] != 0) {
              lVar10 = plVar5[1] + 0x18;
            }
            if (lVar10 == *(long *)(lVar7 + 0x20)) break;
            plVar9 = plVar5;
            if (plVar1 == (long *)0x0) goto LAB_004688c0;
          }
          plVar6 = (long *)puVar3;
          if (*(long **)puVar3 != plVar5) {
            plVar6 = plVar9;
          }
          *plVar6 = (long)plVar1;
          if (*(long **)(puVar3 + 8) == plVar5) {
            *(long **)(puVar3 + 8) = plVar9;
            plVar6 = *(long **)(puVar3 + 0x18);
            if (plVar6 <= plVar5) goto LAB_00468874;
LAB_004688a4:
            FUN_00404870(*(undefined4 *)puVar2);
          }
          else {
            plVar6 = *(long **)(puVar3 + 0x18);
            if (plVar5 < plVar6) goto LAB_004688a4;
LAB_00468874:
            if (plVar6 + (ulong)*(uint *)(puVar3 + 0x20) * 3 <= plVar5) goto LAB_004688a4;
            *plVar5 = *(long *)(puVar3 + 0x10);
            *(long **)(puVar3 + 0x10) = plVar5;
          }
          *(int *)(puVar3 + 0x24) = *(int *)(puVar3 + 0x24) + -1;
        } while (plVar1 != (long *)0x0);
      }
LAB_004688c0:
      lVar10 = *(long *)(lVar7 + 0x68);
      plVar1 = (long *)(puVar4 + 8);
      if (*(long *)(puVar4 + 8) != lVar7) {
        plVar1 = (long *)(lVar8 + 0x68);
      }
      *plVar1 = lVar10;
      if (*(long *)puVar4 == lVar7) {
        *(long *)puVar4 = lVar8;
      }
      FUN_00468b10(lVar7,0);
    } while (lVar10 != 0);
  }
  return;
}


