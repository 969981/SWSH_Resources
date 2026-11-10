/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041d650; name: FUN_0041d650
 */


void FUN_0041d650(undefined8 param_1,long param_2,int param_3,int param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *local_80;
  long *local_78;
  undefined4 local_64;
  
  iVar10 = FUN_0041b310();
  puVar7 = PTR_DAT_02712a90;
  if (iVar10 == 0x2d) {
    plVar1 = (long *)(param_2 + 0x78);
    puVar2 = PTR_DAT_02712c30 + 0x10;
    do {
      lVar14 = local_78[2];
      iVar10 = (**(code **)(*local_78 + 0x10))();
      plVar9 = local_78;
      if (iVar10 == 0) {
        lVar14 = local_78[3];
        local_80 = (undefined8 *)0x0;
        uVar11 = FUN_0041d9d0(param_1,param_2,local_78);
        puVar8 = local_80;
        plVar3 = local_78;
        if ((uVar11 & 1) != 0) {
          if ((*(byte *)(param_2 + 0x5a) >> 1 & 1) == 0) {
            iVar10 = *(int *)(lVar14 + 8);
            iVar5 = *(int *)(lVar14 + 0xc);
            plVar12 = (long *)FUN_00404690(*(undefined4 *)puVar7,0x28);
            if (plVar12 == (long *)0x0) {
              (**(code **)*puVar8)(puVar8,0);
              plVar3 = local_78;
            }
            else {
              *(int *)(plVar12 + 2) = iVar5 + iVar10;
              *plVar12 = (long)puVar2;
              plVar12[3] = (long)puVar8;
              FUN_0041b2a0(param_2 + 0x60,plVar12);
              plVar13 = (long *)plVar9[6];
              plVar3 = local_78;
              if (plVar13 != (long *)0x0) {
                puVar4 = (undefined8 *)0x0;
                if (puVar8 != (undefined8 *)0x0) {
                  puVar4 = puVar8 + -0x58;
                }
                do {
                  while( true ) {
                    if (plVar13[3] == 0) {
                      plVar9[6] = 0;
                    }
                    else {
                      plVar9[6] = plVar13[3];
                    }
                    plVar13[1] = (long)puVar4;
                    *(undefined1 *)(plVar12 + 4) = 1;
                    if (*(long *)(param_2 + 0x78) == 0) break;
                    plVar13[3] = *(long *)(param_2 + 0x78);
                    *(long **)(param_2 + 0x78) = plVar13;
                    iVar10 = *(int *)(*plVar13 + 4);
                    if (iVar10 == 4) goto LAB_0041d8b8;
LAB_0041d884:
                    if (iVar10 == 3) {
                      FUN_0040d700(puVar4);
                    }
                    plVar13 = (long *)plVar9[6];
                    plVar3 = local_78;
                    if (plVar13 == (long *)0x0) goto joined_r0x0041d6dc;
                  }
                  *(long **)(param_2 + 0x78) = plVar13;
                  plVar13[3] = 0;
                  iVar10 = *(int *)(*plVar13 + 4);
                  if (iVar10 != 4) goto LAB_0041d884;
LAB_0041d8b8:
                  *(byte *)(puVar4 + 0x5c) = *(byte *)(puVar4 + 0x5c) | 1;
                  plVar13 = (long *)plVar9[6];
                  plVar3 = local_78;
                } while (plVar13 != (long *)0x0);
              }
            }
          }
          else {
            (**(code **)*local_80)(local_80,*(undefined4 *)(param_2 + 0x54));
            plVar12 = (long *)plVar9[6];
            plVar3 = local_78;
            if (plVar12 != (long *)0x0) {
              puVar4 = (undefined8 *)0x0;
              if (puVar8 != (undefined8 *)0x0) {
                puVar4 = puVar8 + -0x58;
              }
              do {
                if (plVar12[3] == 0) {
                  plVar9[6] = 0;
                }
                else {
                  plVar9[6] = plVar12[3];
                }
                plVar12[1] = (long)puVar4;
                uVar6 = *(undefined4 *)(*plVar12 + 4);
                local_64 = 0;
                FUN_0042e770((float)((param_4 + param_3) - (int)plVar12[2]),*plVar12 + 8,0,&local_64
                            );
                FUN_0040d3b0(puVar4,uVar6);
                FUN_00404870(*(undefined4 *)puVar7,plVar12);
                plVar12 = (long *)plVar9[6];
                plVar3 = local_78;
              } while (plVar12 != (long *)0x0);
            }
          }
        }
      }
      else {
        plVar3 = local_78;
        if (((iVar10 == 1) &&
            ((*(code *)**(undefined8 **)local_78[3])
                       ((undefined8 *)local_78[3],(int)lVar14 - param_3), plVar3 = local_78,
            (char)plVar9[4] != '\0')) && ((long *)*plVar1 != (long *)0x0)) {
          plVar12 = (long *)0x0;
          plVar13 = (long *)*plVar1;
          do {
            while( true ) {
              lVar15 = plVar13[1];
              lVar14 = 0;
              if (lVar15 != 0) {
                lVar14 = lVar15 + 0x2c0;
              }
              if (lVar14 == plVar9[3]) break;
              plVar16 = plVar13 + 3;
              plVar12 = plVar13;
              plVar13 = (long *)*plVar16;
              plVar3 = local_78;
              if ((long *)*plVar16 == (long *)0x0) goto joined_r0x0041d6dc;
            }
            uVar6 = *(undefined4 *)(*plVar13 + 4);
            local_80 = (undefined8 *)((ulong)local_80 & 0xffffffff00000000);
            FUN_0042e770((float)((param_4 + param_3) - (int)plVar13[2]),*plVar13 + 8,0,&local_80);
            FUN_0040d3b0(lVar15,uVar6);
            plVar16 = (long *)plVar13[3];
            plVar3 = plVar1;
            if ((long *)*plVar1 != plVar13) {
              plVar3 = plVar12 + 3;
            }
            *plVar3 = (long)plVar16;
            FUN_00404870(*(undefined4 *)puVar7,plVar13);
            plVar13 = plVar16;
            plVar3 = local_78;
          } while (plVar16 != (long *)0x0);
        }
      }
joined_r0x0041d6dc:
      local_78 = plVar3;
      if (plVar3 != (long *)0x0) {
        uVar6 = *(undefined4 *)puVar7;
        (**(code **)*plVar3)(plVar3);
        FUN_00404870(uVar6,plVar3);
      }
      iVar10 = FUN_0041b310(param_2 + 0x60,param_3,param_4,&local_78);
    } while (iVar10 == 0x2d);
  }
  return;
}


