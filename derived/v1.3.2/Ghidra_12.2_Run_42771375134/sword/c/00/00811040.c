/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00811040; name: FUN_00811040
 */


void FUN_00811040(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = 0;
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) goto LAB_0081108c;
LAB_008110a4:
  if (-1 < lVar10) {
    return;
  }
  do {
    puVar1 = (uint *)(*plVar4 + lVar10 * 0x10);
    if (puVar1[1] == 3) {
      if (*(int *)(param_2 + 0x10) < 5) {
        FUN_0080dfa0(param_2,0xb);
        if (*(int *)(param_2 + 0x10) < 5) goto LAB_008110f8;
LAB_00811150:
        **(undefined1 **)(param_2 + 8) = 0x10;
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
        iVar3 = *(int *)(param_2 + 0x10) + -1;
        *(int *)(param_2 + 0x10) = iVar3;
        uVar8 = *puVar1;
        if (iVar3 < 5) goto LAB_00811114;
LAB_0081117c:
        pbVar5 = *(byte **)(param_2 + 8);
        if (uVar8 < 0x80) {
          pbVar7 = pbVar5;
        }
        else {
          pbVar6 = pbVar5;
          uVar9 = (ulong)uVar8;
          do {
            uVar8 = (uint)(uVar9 >> 7);
            uVar2 = uVar9 >> 0xe;
            pbVar7 = pbVar6 + 1;
            *pbVar6 = (byte)uVar9 | 0x80;
            pbVar6 = pbVar7;
            uVar9 = uVar9 >> 7;
          } while (uVar2 != 0);
        }
        *pbVar7 = (byte)uVar8;
        iVar3 = ((int)pbVar7 + 1) - (int)pbVar5;
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)iVar3;
        iVar3 = *(int *)(param_2 + 0x10) - iVar3;
        *(int *)(param_2 + 0x10) = iVar3;
        if (iVar3 < 5) goto LAB_00811128;
LAB_008111dc:
        **(undefined1 **)(param_2 + 8) = 0x1a;
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
      }
      else {
        **(undefined1 **)(param_2 + 8) = 0xb;
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
        iVar3 = *(int *)(param_2 + 0x10) + -1;
        *(int *)(param_2 + 0x10) = iVar3;
        if (4 < iVar3) goto LAB_00811150;
LAB_008110f8:
        FUN_0080dfa0(param_2,0x10);
        uVar8 = *puVar1;
        if (4 < *(int *)(param_2 + 0x10)) goto LAB_0081117c;
LAB_00811114:
        FUN_0080dfa0(param_2);
        if (4 < *(int *)(param_2 + 0x10)) goto LAB_008111dc;
LAB_00811128:
        FUN_0080dfa0(param_2,0x1a);
      }
      FUN_00810400(puVar1,param_2);
      if (*(int *)(param_2 + 0x10) < 5) {
        FUN_0080dfa0(param_2,0xc);
        goto LAB_00811080;
      }
      **(undefined1 **)(param_2 + 8) = 0xc;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
      plVar4 = (long *)*param_1;
    }
    else {
LAB_00811080:
      plVar4 = (long *)*param_1;
    }
    lVar10 = lVar10 + 1;
    if (plVar4 == (long *)0x0) goto LAB_008110a4;
LAB_0081108c:
    if ((int)((ulong)(plVar4[1] - *plVar4) >> 4) <= lVar10) {
      return;
    }
  } while( true );
}


