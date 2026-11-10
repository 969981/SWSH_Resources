/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00497850; name: FUN_00497850
 */


void FUN_00497850(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  
  puVar3 = PTR_DAT_02712a90;
  if (*(uint *)(param_1 + 0x38) != 0) {
    plVar10 = (long *)**(undefined8 **)(param_1 + 0x30);
    if (plVar10 == (long *)0x0) {
      uVar14 = 0;
      do {
        uVar14 = uVar14 + 1;
        if (*(uint *)(param_1 + 0x38) <= uVar14) {
          return;
        }
        plVar10 = (long *)(*(undefined8 **)(param_1 + 0x30))[uVar14];
      } while (plVar10 == (long *)0x0);
    }
    else {
      uVar14 = 0;
    }
    if (param_2 == 0) {
      plVar15 = (long *)0x0;
      do {
        while (plVar10[1] == -2) {
          plVar11 = (long *)*plVar10;
          plVar15 = plVar10;
          if (plVar11 == (long *)0x0) {
            do {
              uVar14 = uVar14 + 1;
              if (*(uint *)(param_1 + 0x38) <= uVar14) {
                return;
              }
              plVar11 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar14 * 8);
            } while (plVar11 == (long *)0x0);
            plVar15 = (long *)0x0;
          }
          plVar10 = plVar11;
          if (plVar11 == (long *)0x0) {
            return;
          }
        }
        puVar12 = (undefined8 *)plVar10[2];
        iVar6 = *(int *)(puVar12 + 10);
        *(undefined1 *)((long)puVar12 + 0x54) = 0;
        *(int *)(puVar12 + 10) = iVar6 + -1;
        if (iVar6 + -1 == 0) {
          uVar1 = *(undefined4 *)puVar3;
          (**(code **)*puVar12)(puVar12);
          FUN_00404870(uVar1,puVar12);
        }
        plVar4 = (long *)*plVar10;
        plVar11 = plVar4;
        plVar13 = plVar15;
        uVar7 = uVar14;
        if (plVar4 == (long *)0x0) {
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(param_1 + 0x38) <= uVar7) {
              plVar11 = (long *)0x0;
              break;
            }
            plVar11 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar7 * 8);
            plVar13 = (long *)0x0;
          } while (plVar11 == (long *)0x0);
        }
        if (plVar15 == (long *)0x0) {
          plVar15 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar14 * 8);
        }
        *plVar15 = (long)plVar4;
        FUN_00404870(*(undefined4 *)puVar3,plVar10);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        plVar10 = plVar11;
        plVar15 = plVar13;
        uVar14 = uVar7;
      } while (plVar11 != (long *)0x0);
    }
    else {
      plVar15 = (long *)0x0;
      do {
        uVar5 = plVar10[1];
        if (uVar5 == 0xfffffffffffffffe) {
LAB_00497a0c:
          if ((long *)*plVar10 == (long *)0x0) {
            do {
              uVar14 = uVar14 + 1;
              if (*(uint *)(param_1 + 0x38) <= uVar14) {
                return;
              }
              plVar11 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar14 * 8);
            } while (plVar11 == (long *)0x0);
            plVar13 = (long *)0x0;
          }
          else {
            plVar11 = (long *)*plVar10;
            plVar13 = plVar10;
          }
        }
        else {
          puVar12 = (undefined8 *)plVar10[2];
          iVar6 = *(int *)(param_2 + 0x10) + -1;
          if (-1 < iVar6) {
            iVar8 = 0;
            do {
              while( true ) {
                iVar2 = iVar6 - iVar8;
                if (iVar2 < 0) {
                  iVar2 = iVar2 + 1;
                }
                iVar2 = iVar8 + (iVar2 >> 1);
                uVar9 = *(ulong *)(*(long *)(param_2 + 8) + (long)iVar2 * 8);
                if (uVar5 > uVar9 || uVar9 == uVar5) break;
                iVar6 = iVar2 + -1;
                if (iVar6 < iVar8) goto LAB_00497aac;
              }
              if (uVar5 <= uVar9) {
                if (*(long *)(param_2 + 8) + (long)iVar2 * 8 != 0) goto LAB_00497a0c;
                break;
              }
              iVar8 = iVar2 + 1;
            } while (iVar8 <= iVar6);
          }
LAB_00497aac:
          iVar6 = *(int *)(puVar12 + 10);
          *(undefined1 *)((long)puVar12 + 0x54) = 0;
          *(int *)(puVar12 + 10) = iVar6 + -1;
          if (iVar6 + -1 == 0) {
            uVar1 = *(undefined4 *)puVar3;
            (**(code **)*puVar12)(puVar12);
            FUN_00404870(uVar1,puVar12);
          }
          plVar4 = (long *)*plVar10;
          plVar11 = plVar4;
          plVar13 = plVar15;
          uVar7 = uVar14;
          if (plVar4 == (long *)0x0) {
            do {
              uVar7 = uVar7 + 1;
              if (*(uint *)(param_1 + 0x38) <= uVar7) {
                plVar11 = (long *)0x0;
                break;
              }
              plVar11 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar7 * 8);
              plVar13 = (long *)0x0;
            } while (plVar11 == (long *)0x0);
          }
          if (plVar15 == (long *)0x0) {
            plVar15 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar14 * 8);
          }
          *plVar15 = (long)plVar4;
          FUN_00404870(*(undefined4 *)puVar3,plVar10);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          uVar14 = uVar7;
        }
        plVar10 = plVar11;
        plVar15 = plVar13;
      } while (plVar10 != (long *)0x0);
    }
  }
  return;
}


