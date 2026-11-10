/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012edd90; name: FUN_012edd90
 */


void FUN_012edd90(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long local_58;
  
  puVar3 = PTR_DAT_02715088;
  if (*(char *)(param_1 + 0x68) != '\0') {
    plVar14 = *(long **)(param_1 + 0x130);
    while ((long *)(param_1 + 0x128) != plVar14) {
      while (lVar4 = FUN_012f11b0(param_1,*(undefined4 *)((long)plVar14 + 0x14)), lVar4 != 0) {
        plVar6 = (long *)plVar14[4];
joined_r0x012eddf4:
        if (plVar14 + 3 != plVar6) {
          do {
            plVar7 = *(long **)(param_1 + 0x98);
            if (plVar7 != *(long **)(param_1 + 0xa0)) {
              lVar8 = plVar6[2];
              uVar11 = (long)*(long **)(param_1 + 0xa0) + (-8 - (long)plVar7);
              uVar13 = uVar11 >> 3;
              uVar1 = (int)uVar13 + 1;
              uVar9 = (ulong)uVar1 & 7;
              if (uVar11 < 0x38) {
                lVar12 = 0;
              }
              else {
                lVar12 = 0;
                lVar10 = (uVar9 - 1) - uVar13;
                do {
                  if (*plVar7 == lVar8) {
                    lVar12 = lVar12 + 1;
                  }
                  if (plVar7[1] == lVar8) {
                    lVar12 = lVar12 + 1;
                  }
                  if (plVar7[2] == lVar8) {
                    lVar12 = lVar12 + 1;
                  }
                  if (plVar7[3] == lVar8) {
                    lVar12 = lVar12 + 1;
                  }
                  if (plVar7[4] == lVar8) {
                    lVar12 = lVar12 + 1;
                  }
                  if (plVar7[5] == lVar8) {
                    lVar12 = lVar12 + 1;
                  }
                  plVar15 = plVar7 + 6;
                  plVar2 = plVar7 + 7;
                  plVar7 = plVar7 + 8;
                  if (*plVar15 == lVar8) {
                    lVar12 = lVar12 + 1;
                  }
                  if (*plVar2 == lVar8) {
                    lVar12 = lVar12 + 1;
                  }
                  lVar10 = lVar10 + 8;
                } while (lVar10 != 0);
              }
              if ((uVar1 & 7) != 0) {
                lVar10 = -uVar9;
                do {
                  if (*plVar7 == lVar8) {
                    lVar12 = lVar12 + 1;
                  }
                  lVar10 = lVar10 + 1;
                  plVar7 = plVar7 + 1;
                } while (lVar10 != 0);
              }
              if (lVar12 != 0) goto code_r0x012edef8;
            }
            plVar7 = (long *)plVar6[1];
            *(long **)(*plVar6 + 8) = plVar7;
            *(long *)plVar6[1] = *plVar6;
            plVar14[5] = plVar14[5] + -1;
            (**(code **)(*(long *)plVar14[6] + 0x18))((long *)plVar14[6],plVar6,0x18,8);
            plVar6 = plVar7;
            if (plVar14 + 3 == plVar7) break;
          } while( true );
        }
        if (plVar14[5] == 0) {
          if ((int)plVar14[2] == 8) {
            plVar6 = (long *)(lVar4 + 0x48);
            (**(code **)(*plVar6 + 0x10))(plVar6);
            local_58 = lVar4;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            uVar5 = 8;
LAB_012ee008:
            FUN_012f2f60(uVar5,&local_58,1,puVar3);
            if (local_58 != 0) {
              (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
              local_58 = 0;
            }
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
          }
          else if ((int)plVar14[2] == 2) {
            plVar6 = (long *)(lVar4 + 0x48);
            (**(code **)(*plVar6 + 0x10))(plVar6);
            local_58 = lVar4;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            uVar5 = 2;
            goto LAB_012ee008;
          }
          plVar6 = (long *)plVar14[1];
          *(long **)(*plVar14 + 8) = plVar6;
          *(long *)plVar14[1] = *plVar14;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + -1;
          if (plVar14[5] != 0) {
            lVar4 = plVar14[3];
            plVar7 = (long *)plVar14[4];
            *(undefined8 *)(*plVar7 + 8) = *(undefined8 *)(lVar4 + 8);
            **(long **)(lVar4 + 8) = *plVar7;
            plVar14[5] = 0;
            while (plVar7 != plVar14 + 3) {
              plVar15 = (long *)plVar7[1];
              (**(code **)(*(long *)plVar14[6] + 0x18))((long *)plVar14[6],plVar7,0x18,8);
              plVar7 = plVar15;
            }
          }
          goto LAB_012ee0b8;
        }
        plVar14 = (long *)plVar14[1];
        if ((long *)(param_1 + 0x128) == plVar14) {
          return;
        }
      }
      plVar6 = (long *)plVar14[1];
      *(long **)(*plVar14 + 8) = plVar6;
      *(long *)plVar14[1] = *plVar14;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + -1;
      if (plVar14[5] != 0) {
        lVar4 = plVar14[3];
        plVar7 = (long *)plVar14[4];
        *(undefined8 *)(*plVar7 + 8) = *(undefined8 *)(lVar4 + 8);
        **(long **)(lVar4 + 8) = *plVar7;
        plVar14[5] = 0;
        while (plVar7 != plVar14 + 3) {
          plVar15 = (long *)plVar7[1];
          (**(code **)(*(long *)plVar14[6] + 0x18))((long *)plVar14[6],plVar7,0x18,8);
          plVar7 = plVar15;
        }
      }
LAB_012ee0b8:
      (**(code **)(**(long **)(param_1 + 0x140) + 0x18))(*(long **)(param_1 + 0x140),plVar14,0x48,8)
      ;
      plVar14 = plVar6;
    }
  }
  return;
code_r0x012edef8:
  plVar6 = (long *)plVar6[1];
  goto joined_r0x012eddf4;
}


