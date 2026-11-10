/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bfe80; name: FUN_004bfe80
 */


void FUN_004bfe80(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  puVar5 = PTR_DAT_027134a8;
  puVar4 = PTR_DAT_027134a0;
  puVar3 = PTR_DAT_02712a90;
  iVar1 = *(int *)(PTR_DAT_027134a0 + 0x24);
  while (iVar1 != 0) {
    lVar12 = *(long *)puVar4;
    FUN_0048d3e0(*(undefined4 *)(lVar12 + 0x18),*(undefined8 *)(lVar12 + 8),
                 *(undefined4 *)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x14));
    if (*(int *)(lVar12 + 0x10) == 4) {
      plVar11 = *(long **)(lVar12 + 8);
      plVar10 = (long *)(puVar5 + 0x10);
      plVar8 = (long *)0x0;
      do {
        plVar7 = plVar8;
        plVar8 = (long *)*plVar10;
        plVar10 = plVar8 + 0x32;
      } while (plVar8 != (long *)0x0 && plVar11 != plVar8);
      if (plVar8 != (long *)0x0) {
        plVar10 = (long *)(puVar5 + 0x10);
        if (*(long **)(puVar5 + 0x10) != plVar8) {
          plVar10 = plVar7 + 0x32;
        }
        *plVar10 = plVar8[0x32];
        if (*(long **)(puVar5 + 8) == plVar8) {
          *(long **)(puVar5 + 8) = plVar7;
        }
        *(int *)puVar5 = *(int *)puVar5 + -1;
        plVar11 = *(long **)(lVar12 + 8);
      }
      FUN_00468090(plVar11);
      (**(code **)(*plVar11 + 0x20))(plVar11,0);
      if (plVar11 != (long *)0x0) {
        uVar2 = *(undefined4 *)puVar3;
        (**(code **)(*plVar11 + 8))(plVar11);
        FUN_00404870(uVar2,plVar11);
      }
    }
    puVar6 = *(undefined8 **)puVar4;
    if (puVar6 == (undefined8 *)0x0) {
      iVar1 = *(int *)(puVar4 + 0x24);
    }
    else {
      *(undefined8 *)puVar4 = *puVar6;
      if (*(undefined8 **)(puVar4 + 8) == puVar6) {
        *(undefined8 *)(puVar4 + 8) = 0;
        puVar9 = *(undefined8 **)(puVar4 + 0x18);
      }
      else {
        puVar9 = *(undefined8 **)(puVar4 + 0x18);
      }
      if ((puVar6 < puVar9) || (puVar9 + (ulong)*(uint *)(puVar4 + 0x20) * 4 <= puVar6)) {
        FUN_00404870(*(undefined4 *)puVar3);
        iVar1 = *(int *)(puVar4 + 0x24) + -1;
        *(int *)(puVar4 + 0x24) = iVar1;
      }
      else {
        *puVar6 = *(undefined8 *)(puVar4 + 0x10);
        *(undefined8 **)(puVar4 + 0x10) = puVar6;
        iVar1 = *(int *)(puVar4 + 0x24) + -1;
        *(int *)(puVar4 + 0x24) = iVar1;
      }
    }
  }
  return;
}


