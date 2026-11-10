/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d04d0; name: FUN_005d04d0
 */


undefined8 FUN_005d04d0(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar1 = 1;
  }
  else if (param_2 == 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (plVar2 = (long *)*puVar3, plVar2 != (long *)0x0))
    {
      plVar7 = *(long **)(param_1 + 8);
      if (plVar7 != (long *)0x0) {
        lVar4 = (**(code **)(*plVar7 + 0x50))(plVar7,plVar2);
        if (lVar4 != 0) {
          plVar10 = plVar2;
          do {
            if ((*(byte *)(plVar10 + 5) & 1) == 0) {
              if (plVar10[1] != 0) {
                plVar5 = (long *)*plVar10;
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x48))
                            (plVar5,plVar10[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1)
                  ;
                }
                plVar10[1] = 0;
              }
              plVar10[1] = 0;
            }
            plVar10 = plVar10 + 6;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        (**(code **)(*plVar7 + 0x48))
                  (plVar7,plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *puVar3 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar2 = *(long **)(param_1 + 8);
    uVar1 = 0;
    if (plVar2 != (long *)0x0) {
      uVar6 = *(ulong *)(param_1 + 0x10);
      puVar3 = (undefined8 *)
               (**(code **)(*plVar2 + 0x40))
                         (plVar2,0x30,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar1 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          uVar8 = param_2;
          puVar9 = puVar3;
          do {
            while( true ) {
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              *puVar9 = 0;
              puVar9[1] = 0;
              lVar4 = FUN_005bc740();
              if (lVar4 == 0) break;
              uVar1 = FUN_005bc740();
              uVar8 = uVar8 - 1;
              *puVar9 = uVar1;
              puVar9 = puVar9 + 6;
              if (uVar8 == 0) goto LAB_005d0590;
            }
            uVar1 = FUN_005bc6f0();
            uVar8 = uVar8 - 1;
            *puVar9 = uVar1;
            puVar9 = puVar9 + 6;
          } while (uVar8 != 0);
        }
LAB_005d0590:
        uVar8 = param_2;
        if (uVar6 <= param_2) {
          uVar8 = uVar6;
        }
        if ((uVar8 != 0) && ((param_3 & 1) != 0)) {
          lVar4 = 0;
          uVar6 = 0;
          do {
            FUN_005c80d0((long)puVar3 + lVar4,*(long *)(param_1 + 0x28) + lVar4);
            uVar6 = uVar6 + 1;
            lVar4 = lVar4 + 0x30;
          } while (uVar6 < uVar8);
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (plVar2 = *(long **)(param_1 + 0x28), plVar2 != (long *)0x0)) {
          plVar7 = *(long **)(param_1 + 8);
          if (plVar7 != (long *)0x0) {
            lVar4 = (**(code **)(*plVar7 + 0x50))(plVar7,plVar2);
            if (lVar4 != 0) {
              plVar10 = plVar2;
              do {
                if ((*(byte *)(plVar10 + 5) & 1) == 0) {
                  if (plVar10[1] != 0) {
                    plVar5 = (long *)*plVar10;
                    if (plVar5 != (long *)0x0) {
                      (**(code **)(*plVar5 + 0x48))
                                (plVar5,plVar10[1],"../../../../Include\\SiCore/SiCore_String.inl",
                                 0xe1);
                    }
                    plVar10[1] = 0;
                  }
                  plVar10[1] = 0;
                }
                plVar10 = plVar10 + 6;
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
            }
            (**(code **)(*plVar7 + 0x48))
                      (plVar7,plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar1 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar3;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar8;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar1;
}


