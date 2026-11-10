/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00680340; name: FUN_00680340
 */


undefined8 FUN_00680340(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar2 = 1;
  }
  else if (param_2 == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
       (puVar5 = (undefined8 *)*puVar6, puVar5 != (undefined8 *)0x0)) {
      plVar3 = *(long **)(param_1 + 8);
      if (plVar3 != (long *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,puVar5);
        if (lVar4 != 0) {
          puVar9 = puVar5;
          do {
            (**(code **)*puVar9)(puVar9);
            lVar4 = lVar4 + -1;
            puVar9 = puVar9 + 10;
          } while (lVar4 != 0);
        }
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,puVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *puVar6 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar2 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    uVar2 = 0;
    if (plVar3 != (long *)0x0) {
      uVar7 = *(ulong *)(param_1 + 0x10);
      plVar3 = (long *)(**(code **)(*plVar3 + 0x40))
                                 (plVar3,0x50,param_2,0x10,
                                  "../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
      uVar2 = 0;
      if (plVar3 != (long *)0x0) {
        if (0 < (long)param_2) {
          puVar1 = PTR_DAT_02713f98 + 0x10;
          uVar10 = param_2;
          plVar8 = plVar3;
          do {
            plVar8[2] = 0;
            plVar8[3] = 0;
            *plVar8 = (long)puVar1;
            plVar8[1] = 0;
            plVar8[8] = 0;
            plVar8[9] = 0;
            plVar8[6] = 0;
            plVar8[7] = 0;
            plVar8[4] = 0x30;
            plVar8[5] = 0;
            lVar4 = FUN_005bc6f0();
            plVar8[1] = lVar4;
            uVar10 = uVar10 - 1;
            plVar8 = plVar8 + 10;
          } while (uVar10 != 0);
        }
        uVar10 = param_2;
        if (uVar7 <= param_2) {
          uVar10 = uVar7;
        }
        if ((uVar10 != 0) && ((param_3 & 1) != 0)) {
          lVar4 = 0;
          uVar7 = 0;
          do {
            FUN_0066e1f0((long)plVar3 + lVar4,*(long *)(param_1 + 0x28) + lVar4);
            uVar7 = uVar7 + 1;
            lVar4 = lVar4 + 0x50;
          } while (uVar7 < uVar10);
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (puVar6 = *(undefined8 **)(param_1 + 0x28), puVar6 != (undefined8 *)0x0)) {
          plVar8 = *(long **)(param_1 + 8);
          if (plVar8 != (long *)0x0) {
            lVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,puVar6);
            if (lVar4 != 0) {
              puVar5 = puVar6;
              do {
                (**(code **)*puVar5)(puVar5);
                lVar4 = lVar4 + -1;
                puVar5 = puVar5 + 10;
              } while (lVar4 != 0);
            }
            (**(code **)(*plVar8 + 0x48))
                      (plVar8,puVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar2 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(long **)(param_1 + 0x28) = plVar3;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar10;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar2;
}


