/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c7e20; name: FUN_005c7e20
 */


undefined8 FUN_005c7e20(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar1 = 1;
  }
  else if (param_2 == 0) {
    plVar2 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar4 = *plVar2, lVar4 != 0)) {
      plVar6 = *(long **)(param_1 + 8);
      if (plVar6 != (long *)0x0) {
        lVar5 = (**(code **)(*plVar6 + 0x50))(plVar6,lVar4);
        if (lVar5 != 0) {
          pbVar11 = (byte *)(lVar4 + 0x30);
          do {
            if ((*pbVar11 & 1) == 0) {
              if (*(long *)(pbVar11 + -0x20) != 0) {
                plVar7 = *(long **)(pbVar11 + -0x28);
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x48))
                            (plVar7,*(long *)(pbVar11 + -0x20),
                             "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
                }
                pbVar11[-0x20] = 0;
                pbVar11[-0x1f] = 0;
                pbVar11[-0x1e] = 0;
                pbVar11[-0x1d] = 0;
                pbVar11[-0x1c] = 0;
                pbVar11[-0x1b] = 0;
                pbVar11[-0x1a] = 0;
                pbVar11[-0x19] = 0;
              }
              pbVar11[-0x20] = 0;
              pbVar11[-0x1f] = 0;
              pbVar11[-0x1e] = 0;
              pbVar11[-0x1d] = 0;
              pbVar11[-0x1c] = 0;
              pbVar11[-0x1b] = 0;
              pbVar11[-0x1a] = 0;
              pbVar11[-0x19] = 0;
            }
            pbVar11 = pbVar11 + 0xb8;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,lVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar2 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar2 = *(long **)(param_1 + 8);
    uVar1 = 0;
    if (plVar2 != (long *)0x0) {
      uVar9 = *(ulong *)(param_1 + 0x10);
      puVar3 = (undefined8 *)
               (**(code **)(*plVar2 + 0x40))
                         (plVar2,0xb8,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar1 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          puVar8 = puVar3;
          uVar10 = param_2;
          do {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = puVar8 + 7;
            puVar8[3] = 0;
            puVar8[6] = 1;
            puVar8[4] = 0;
            puVar8[5] = 0x80;
            lVar4 = FUN_005bc740();
            if (lVar4 == 0) {
              uVar1 = FUN_005bc6f0();
            }
            else {
              uVar1 = FUN_005bc740();
            }
            puVar8[1] = uVar1;
            *(undefined1 *)puVar8[2] = 0;
            uVar10 = uVar10 - 1;
            puVar8 = puVar8 + 0x17;
          } while (uVar10 != 0);
        }
        uVar10 = param_2;
        if (uVar9 <= param_2) {
          uVar10 = uVar9;
        }
        if ((uVar10 != 0) && ((param_3 & 1) != 0)) {
          lVar4 = 0;
          uVar9 = 0;
          do {
            puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar4);
            *(undefined8 *)((long)puVar3 + lVar4) = *puVar8;
            FUN_005c80d0((undefined8 *)((long)puVar3 + lVar4) + 1,puVar8 + 1);
            uVar9 = uVar9 + 1;
            lVar4 = lVar4 + 0xb8;
          } while (uVar9 < uVar10);
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar4 = *(long *)(param_1 + 0x28), lVar4 != 0)) {
          plVar2 = *(long **)(param_1 + 8);
          if (plVar2 != (long *)0x0) {
            lVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,lVar4);
            if (lVar5 != 0) {
              pbVar11 = (byte *)(lVar4 + 0x30);
              do {
                if ((*pbVar11 & 1) == 0) {
                  if (*(long *)(pbVar11 + -0x20) != 0) {
                    plVar6 = *(long **)(pbVar11 + -0x28);
                    if (plVar6 != (long *)0x0) {
                      (**(code **)(*plVar6 + 0x48))
                                (plVar6,*(long *)(pbVar11 + -0x20),
                                 "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
                    }
                    pbVar11[-0x20] = 0;
                    pbVar11[-0x1f] = 0;
                    pbVar11[-0x1e] = 0;
                    pbVar11[-0x1d] = 0;
                    pbVar11[-0x1c] = 0;
                    pbVar11[-0x1b] = 0;
                    pbVar11[-0x1a] = 0;
                    pbVar11[-0x19] = 0;
                  }
                  pbVar11[-0x20] = 0;
                  pbVar11[-0x1f] = 0;
                  pbVar11[-0x1e] = 0;
                  pbVar11[-0x1d] = 0;
                  pbVar11[-0x1c] = 0;
                  pbVar11[-0x1b] = 0;
                  pbVar11[-0x1a] = 0;
                  pbVar11[-0x19] = 0;
                }
                pbVar11 = pbVar11 + 0xb8;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
            (**(code **)(*plVar2 + 0x48))
                      (plVar2,lVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar1 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar3;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar10;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar1;
}


