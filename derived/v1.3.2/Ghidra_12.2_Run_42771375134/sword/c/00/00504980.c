/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00504980; name: FUN_00504980
 */


void FUN_00504980(long *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  uint *puVar8;
  uint *puVar9;
  long *plVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_2 + 0x90);
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = uVar3 / uVar2;
    }
    uVar2 = uVar3 - uVar6 * uVar2;
    puVar9 = *(uint **)(*param_1 + (ulong)uVar2 * 8);
    if (puVar9 != (uint *)0x0) {
      puVar8 = (uint *)0x0;
      do {
        if (*puVar9 == uVar3) {
          uVar3 = puVar9[0x1c];
          puVar9[0x1c] = uVar3 - 1;
          if ((int)uVar3 < 2) {
            if (puVar8 == (uint *)0x0) {
              puVar8 = (uint *)(*param_1 + (ulong)uVar2 * 8);
            }
            else {
              puVar8 = puVar8 + 2;
            }
            *(undefined8 *)puVar8 = *(undefined8 *)(puVar9 + 2);
            plVar10 = param_1 + 2;
            *(int *)plVar10 = (int)*plVar10 + -1;
            FUN_00504690(puVar9);
            puVar7 = PTR_DAT_02712e28;
            uVar5 = *(undefined4 *)PTR_DAT_02712e28;
            if (*(long *)(puVar9 + 0x10) != 0) {
              FUN_00404870(uVar5);
            }
            if (*(long *)(puVar9 + 0xc) != 0) {
              FUN_00404870(*(undefined4 *)puVar7);
            }
            if (*(long *)(puVar9 + 8) != 0) {
              FUN_00404870(*(undefined4 *)puVar7);
            }
            if (*(long *)(puVar9 + 4) != 0) {
              FUN_00404870(*(undefined4 *)puVar7);
            }
            FUN_00404870(uVar5,puVar9);
            iVar4 = (int)*plVar10;
          }
          else {
            iVar4 = (int)param_1[2];
          }
          if (iVar4 != 0) {
            return;
          }
          if (*param_1 == 0) {
            return;
          }
          *(undefined4 *)(param_1 + 1) = 0;
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
          *param_1 = 0;
          *(undefined4 *)((long)param_1 + 0xc) = 0;
          return;
        }
        puVar1 = puVar9 + 2;
        puVar8 = puVar9;
        puVar9 = *(uint **)puVar1;
      } while (*(uint **)puVar1 != (uint *)0x0);
    }
  }
  return;
}


