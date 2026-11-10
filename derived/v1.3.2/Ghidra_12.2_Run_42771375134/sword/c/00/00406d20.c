/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00406d20; name: FUN_00406d20
 */


void FUN_00406d20(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  puVar5 = PTR_DAT_02712ac8;
  for (plVar9 = *(long **)PTR_DAT_02712ac8;
      (plVar9 != (long *)0x0 && (plVar9 + 1 != (long *)param_2)); plVar9 = (long *)*plVar9) {
  }
  bVar3 = *(byte *)(plVar9 + 2);
  bVar1 = bVar3 & 0xfd;
  *(byte *)(plVar9 + 2) = bVar1;
  if ((bVar3 & 1) == 0) {
    iVar2 = *(int *)(plVar9 + 1);
    *(byte *)(plVar9 + 2) = bVar1 | 1;
    FUN_004308f0(iVar2,*(undefined4 *)((long)plVar9 + 0xc),0,1);
    for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (*(int *)(plVar9 + 1) == iVar2) {
        *(byte *)(plVar9 + 2) = *(byte *)(plVar9 + 2) | 1;
      }
    }
  }
  puVar4 = PTR_DAT_02712a90;
  if (*(undefined8 **)puVar5 != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)puVar5;
    puVar8 = (undefined8 *)0x0;
    do {
      while (puVar6 = puVar10, puVar10 = (undefined8 *)*puVar6,
            (*(byte *)(puVar6 + 2) >> 1 & 1) == 0) {
        puVar7 = (undefined8 *)puVar5;
        if (*(undefined8 **)puVar5 != puVar6) {
          puVar7 = puVar8;
        }
        *puVar7 = puVar10;
        if (*(undefined8 **)(puVar5 + 8) == puVar6) {
          *(undefined8 **)(puVar5 + 8) = puVar8;
          puVar7 = *(undefined8 **)(puVar5 + 0x18);
          if (puVar7 <= puVar6) goto LAB_00406df8;
LAB_00406e38:
          FUN_00404870(*(undefined4 *)puVar4);
        }
        else {
          puVar7 = *(undefined8 **)(puVar5 + 0x18);
          if (puVar6 < puVar7) goto LAB_00406e38;
LAB_00406df8:
          if (puVar7 + (ulong)*(uint *)(puVar5 + 0x20) * 3 <= puVar6) goto LAB_00406e38;
          *puVar6 = *(undefined8 *)(puVar5 + 0x10);
          *(undefined8 **)(puVar5 + 0x10) = puVar6;
        }
        *(int *)(puVar5 + 0x24) = *(int *)(puVar5 + 0x24) + -1;
        if (puVar10 == (undefined8 *)0x0) {
          return;
        }
      }
      puVar8 = puVar6;
    } while (puVar10 != (undefined8 *)0x0);
  }
  return;
}


