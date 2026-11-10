/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498620; name: FUN_00498620
 */


void FUN_00498620(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  if ((param_3 != 2) && (uVar5 = (ulong)*(uint *)(param_2 + 0x10), *(uint *)(param_2 + 0x10) != 0))
  {
    plVar7 = *(long **)(param_2 + 8);
    plVar11 = plVar7;
LAB_00498654:
    do {
      uVar2 = *(uint *)(param_1 + 0x38);
      if (uVar2 != 0) {
        uVar3 = 0;
        uVar8 = (uint)*plVar11;
        if (uVar2 != 0) {
          uVar3 = uVar8 / uVar2;
        }
        for (plVar9 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)(uVar8 - uVar3 * uVar2) * 8);
            plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9[1] == *plVar11) {
            FUN_0045b180(plVar9[2]);
            plVar7 = *(long **)(param_2 + 8);
            uVar5 = (ulong)*(uint *)(param_2 + 0x10);
            plVar11 = plVar11 + 1;
            if (plVar11 != plVar7 + uVar5) goto LAB_00498654;
            goto LAB_004986bc;
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar7 + uVar5);
  }
LAB_004986bc:
  puVar4 = PTR_DAT_02712d18;
  plVar11 = *(long **)PTR_DAT_02712d18;
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xc0);
    if (plVar11 == (long *)0x0) {
      *(undefined8 *)puVar4 = 0;
    }
    else {
      *plVar11 = (long)(PTR_DAT_02712d28 + 0x10);
      plVar11[1] = 0;
      puVar1 = PTR_DAT_02712d38;
      lVar10 = *(long *)(PTR_DAT_02712d38 + 8);
      plVar11[2] = 0;
      plVar11[3] = lVar10;
      plVar7 = (long *)(puVar1 + 0x10);
      if (*(long *)(puVar1 + 0x10) != 0) {
        plVar7 = (long *)(lVar10 + 0x10);
      }
      *plVar7 = (long)plVar11;
      *(long **)(puVar1 + 8) = plVar11;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      puVar1 = PTR_DAT_02712d30 + 0x10;
      plVar11[7] = 0;
      plVar11[8] = 0;
      *plVar11 = (long)puVar1;
      plVar11[10] = 0;
      plVar11[0xb] = 0;
      plVar11[0xf] = 0;
      plVar11[0x10] = 0;
      plVar11[0x12] = 0;
      plVar11[0x13] = 0;
      plVar11[0x15] = 0;
      plVar11[0x16] = 0;
      *(long **)puVar4 = plVar11;
      *(undefined2 *)(plVar11 + 0x17) = 0x101;
    }
  }
  if (param_3 == 2) {
    FUN_0045ae00(plVar11,param_2);
  }
  else if (param_3 == 1) {
    FUN_0045ac00(plVar11,param_2);
  }
  else if (param_3 == 0) {
    FUN_0045abb0(plVar11,param_2);
  }
  FUN_004c5bc0(0);
  lVar10 = *(long *)(PTR_DAT_02713320 + 0x10);
  if (lVar10 != 0) {
    do {
      while (((1 < *(uint *)(*(long *)(lVar10 + 8) + 0x40) &&
              (lVar6 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x38) + 8), lVar6 != 0)) &&
             (*(char *)(lVar6 + 0xb8) != '\0'))) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
      }
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
      FUN_00498470(lVar10 + 0x20,plVar11 + 0x14);
      lVar10 = *(long *)(lVar10 + 0x10);
    } while (lVar10 != 0);
  }
  return;
}


