/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00674140; name: FUN_00674140
 */


undefined8 FUN_00674140(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar3 = 1;
  }
  else if (param_2 == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (plVar4 = (long *)*puVar5, plVar4 != (long *)0x0))
    {
      plVar10 = *(long **)(param_1 + 8);
      if (plVar10 != (long *)0x0) {
        lVar6 = (**(code **)(*plVar10 + 0x50))(plVar10,plVar4);
        if (lVar6 != 0) {
          plVar13 = plVar4;
          do {
            if ((*(byte *)(plVar13 + 5) & 1) == 0) {
              if (plVar13[1] != 0) {
                plVar7 = (long *)*plVar13;
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x48))
                            (plVar7,plVar13[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1)
                  ;
                }
                plVar13[1] = 0;
              }
              plVar13[1] = 0;
            }
            plVar13 = plVar13 + 9;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        (**(code **)(*plVar10 + 0x48))
                  (plVar10,plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *puVar5 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar3 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *puVar5 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      uVar9 = *(ulong *)(param_1 + 0x10);
      puVar5 = (undefined8 *)
               (**(code **)(*plVar4 + 0x40))
                         (plVar4,0x48,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar3 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          uVar11 = param_2;
          puVar12 = puVar5;
          do {
            puVar12[4] = 0;
            puVar12[5] = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            *puVar12 = 0;
            puVar12[1] = 0;
            lVar6 = FUN_005bc740();
            if (lVar6 == 0) {
              uVar3 = FUN_005bc6f0();
            }
            else {
              uVar3 = FUN_005bc740();
            }
            *puVar12 = uVar3;
            puVar12[7] = 0;
            puVar12[8] = 0;
            uVar11 = uVar11 - 1;
            puVar12[6] = 0;
            puVar12 = puVar12 + 9;
          } while (uVar11 != 0);
        }
        uVar11 = param_2;
        if (uVar9 <= param_2) {
          uVar11 = uVar9;
        }
        if ((uVar11 != 0) && ((param_3 & 1) != 0)) {
          lVar6 = 0;
          uVar9 = 0;
          do {
            lVar1 = (long)puVar5 + lVar6;
            lVar2 = *(long *)(param_1 + 0x28) + lVar6;
            FUN_005c80d0(lVar1,lVar2);
            uVar3 = *(undefined8 *)(lVar2 + 0x30);
            uVar8 = *(undefined8 *)(lVar2 + 0x40);
            uVar9 = uVar9 + 1;
            lVar6 = lVar6 + 0x48;
            *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
            *(undefined8 *)(lVar1 + 0x40) = uVar8;
            *(undefined8 *)(lVar1 + 0x30) = uVar3;
          } while (uVar9 < uVar11);
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (plVar4 = *(long **)(param_1 + 0x28), plVar4 != (long *)0x0)) {
          plVar10 = *(long **)(param_1 + 8);
          if (plVar10 != (long *)0x0) {
            lVar6 = (**(code **)(*plVar10 + 0x50))(plVar10,plVar4);
            if (lVar6 != 0) {
              plVar13 = plVar4;
              do {
                if ((*(byte *)(plVar13 + 5) & 1) == 0) {
                  if (plVar13[1] != 0) {
                    plVar7 = (long *)*plVar13;
                    if (plVar7 != (long *)0x0) {
                      (**(code **)(*plVar7 + 0x48))
                                (plVar7,plVar13[1],"../../../../Include\\SiCore/SiCore_String.inl",
                                 0xe1);
                    }
                    plVar13[1] = 0;
                  }
                  plVar13[1] = 0;
                }
                plVar13 = plVar13 + 9;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
            (**(code **)(*plVar10 + 0x48))
                      (plVar10,plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar3 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar5;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar11;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar3;
}


