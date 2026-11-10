/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00461d30; name: FUN_00461d30
 */


void FUN_00461d30(float param_1,long param_2,int param_3,int param_4,uint param_5,int param_6)

{
  long *plVar1;
  long lVar2;
  float *pfVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_40;
  int iStack_3c;
  undefined2 local_38;
  float local_34;
  float local_28;
  float local_24;
  
  plVar1 = *(long **)(param_2 + 8);
  if (plVar1 != (long *)0x0) {
    local_24 = param_1;
    if (param_6 == 1) {
      pcVar4 = *(code **)(*plVar1 + 0x10);
      pfVar3 = &local_24;
    }
    else {
      fVar9 = 0.0;
      fVar10 = 1.0;
      fVar11 = 1.0;
      if (param_6 != 3) {
        fVar11 = 0.0;
      }
      piVar5 = *(int **)(param_2 + 0x48);
      uVar7 = (ulong)*(uint *)(param_2 + 0x50);
      piVar6 = piVar5 + uVar7 * 4;
      local_28 = fVar11;
      if (*(uint *)(param_2 + 0x50) != 0) {
        if (param_6 == 4) {
          do {
            if (*(ushort *)(piVar5 + 2) == param_5) {
              if ((*piVar5 == param_3) && (piVar5[1] == param_4)) {
                piVar5[3] = (int)param_1;
                piVar6 = piVar5;
              }
              if (*piVar5 != 0) {
                fVar11 = fVar11 + (float)piVar5[3];
                local_28 = fVar11;
              }
            }
            piVar5 = piVar5 + 4;
          } while (piVar5 != (int *)(*(long *)(param_2 + 0x48) +
                                    (ulong)*(uint *)(param_2 + 0x50) * 0x10));
        }
        else {
          piVar8 = piVar5;
          if (param_6 == 3) {
            do {
              if (*(ushort *)(piVar5 + 2) == param_5) {
                if ((*piVar5 == param_3) && (piVar5[1] == param_4)) {
                  piVar5[3] = (int)param_1;
                  piVar8 = *(int **)(param_2 + 0x48);
                  uVar7 = (ulong)*(uint *)(param_2 + 0x50);
                  piVar6 = piVar5;
                }
                fVar10 = fVar10 * (float)piVar5[3];
                local_28 = fVar10;
              }
              piVar5 = piVar5 + 4;
            } while (piVar5 != piVar8 + uVar7 * 4);
          }
          else {
            do {
              if (*(ushort *)(piVar5 + 2) == param_5) {
                if ((*piVar5 == param_3) && (piVar5[1] == param_4)) {
                  piVar5[3] = (int)param_1;
                  piVar8 = *(int **)(param_2 + 0x48);
                  uVar7 = (ulong)*(uint *)(param_2 + 0x50);
                  piVar6 = piVar5;
                }
                fVar9 = fVar9 + (float)piVar5[3];
                local_28 = fVar9;
              }
              piVar5 = piVar5 + 4;
            } while (piVar5 != piVar8 + uVar7 * 4);
          }
        }
      }
      if (piVar5 == piVar6) {
        local_38 = (undefined2)param_5;
        local_40 = param_3;
        iStack_3c = param_4;
        local_34 = param_1;
        lVar2 = FUN_00461f30((undefined8 *)(param_2 + 0x48),&local_40);
        if (lVar2 != 0) {
          fVar9 = local_28 + local_24;
          local_28 = local_28 * local_24;
          if (param_6 != 3) {
            local_28 = fVar9;
          }
        }
      }
      plVar1 = *(long **)(param_2 + 8);
      pcVar4 = *(code **)(*plVar1 + 0x10);
      pfVar3 = &local_28;
    }
    (*pcVar4)(plVar1,param_5,pfVar3,4);
  }
  return;
}


