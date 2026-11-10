/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006629f0; name: FUN_006629f0
 */


undefined8 FUN_006629f0(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar5 = 1;
  }
  else if (param_2 == 0) {
    puVar9 = (undefined8 *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
       (puVar8 = (undefined8 *)*puVar9, puVar8 != (undefined8 *)0x0)) {
      plVar6 = *(long **)(param_1 + 8);
      if (plVar6 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,puVar8);
        if (lVar7 != 0) {
          puVar11 = puVar8;
          do {
            (**(code **)*puVar11)(puVar11);
            lVar7 = lVar7 + -1;
            puVar11 = puVar11 + 0x23;
          } while (lVar7 != 0);
        }
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,puVar8,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *puVar9 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar5 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *puVar9 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    uVar5 = 0;
    if (plVar6 != (long *)0x0) {
      uVar12 = *(ulong *)(param_1 + 0x10);
      lVar7 = (**(code **)(*plVar6 + 0x40))
                        (plVar6,0x118,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                         0x5d1);
      uVar5 = 0;
      if (lVar7 != 0) {
        if (0 < (long)param_2) {
          lVar10 = lVar7;
          uVar13 = param_2;
          do {
            FUN_0065c710(lVar10);
            lVar10 = lVar10 + 0x118;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        uVar13 = param_2;
        if (uVar12 <= param_2) {
          uVar13 = uVar12;
        }
        if ((uVar13 != 0) && ((param_3 & 1) != 0)) {
          lVar10 = 0;
          uVar12 = 0;
          do {
            lVar1 = *(long *)(param_1 + 0x28) + lVar10;
            lVar2 = lVar7 + lVar10;
            uVar5 = *(undefined8 *)(lVar1 + 0x10);
            uVar3 = *(undefined8 *)(lVar1 + 0x18);
            uVar4 = *(undefined8 *)(lVar1 + 0x28);
            *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
            *(undefined8 *)(lVar2 + 0x28) = uVar4;
            *(undefined8 *)(lVar2 + 0x10) = uVar5;
            *(undefined8 *)(lVar2 + 0x18) = uVar3;
            FUN_005c80d0(lVar2 + 0x30,lVar1 + 0x30);
            memcpy((void *)(lVar2 + 0x60),(void *)(lVar1 + 0x60),0xb4);
            uVar12 = uVar12 + 1;
            lVar10 = lVar10 + 0x118;
          } while (uVar12 < uVar13);
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (puVar9 = *(undefined8 **)(param_1 + 0x28), puVar9 != (undefined8 *)0x0)) {
          plVar6 = *(long **)(param_1 + 8);
          if (plVar6 != (long *)0x0) {
            lVar10 = (**(code **)(*plVar6 + 0x50))(plVar6,puVar9);
            if (lVar10 != 0) {
              puVar8 = puVar9;
              do {
                (**(code **)*puVar8)(puVar8);
                lVar10 = lVar10 + -1;
                puVar8 = puVar8 + 0x23;
              } while (lVar10 != 0);
            }
            (**(code **)(*plVar6 + 0x48))
                      (plVar6,puVar9,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar5 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(long *)(param_1 + 0x28) = lVar7;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar13;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar5;
}


