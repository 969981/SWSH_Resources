/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00686cd0; name: FUN_00686cd0
 */


undefined8 FUN_00686cd0(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar5 = 1;
  }
  else if (param_2 == 0) {
    puVar10 = (undefined8 *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
       (puVar8 = (undefined8 *)*puVar10, puVar8 != (undefined8 *)0x0)) {
      plVar6 = *(long **)(param_1 + 8);
      if (plVar6 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,puVar8);
        if (lVar7 != 0) {
          puVar11 = puVar8;
          do {
            (**(code **)*puVar11)(puVar11);
            lVar7 = lVar7 + -1;
            puVar11 = puVar11 + 0x2e;
          } while (lVar7 != 0);
        }
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,puVar8,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *puVar10 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar5 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *puVar10 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    uVar5 = 0;
    if (plVar6 != (long *)0x0) {
      uVar12 = *(ulong *)(param_1 + 0x10);
      lVar7 = (**(code **)(*plVar6 + 0x40))
                        (plVar6,0x170,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                         0x5d1);
      uVar5 = 0;
      if (lVar7 != 0) {
        if (0 < (long)param_2) {
          lVar9 = lVar7;
          uVar13 = param_2;
          do {
            FUN_00687310(lVar9,0,0);
            lVar9 = lVar9 + 0x170;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        uVar13 = param_2;
        if (uVar12 <= param_2) {
          uVar13 = uVar12;
        }
        if ((uVar13 != 0) && ((param_3 & 1) != 0)) {
          lVar9 = 0;
          uVar12 = 0;
          do {
            lVar1 = *(long *)(param_1 + 0x28) + lVar9;
            lVar2 = lVar7 + lVar9;
            uVar5 = *(undefined8 *)(lVar1 + 8);
            uVar3 = *(undefined8 *)(lVar1 + 0x10);
            uVar4 = *(undefined8 *)(lVar1 + 0x20);
            *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
            *(undefined8 *)(lVar2 + 0x20) = uVar4;
            *(undefined8 *)(lVar2 + 8) = uVar5;
            *(undefined8 *)(lVar2 + 0x10) = uVar3;
            FUN_005c80d0(lVar2 + 0x28,lVar1 + 0x28);
            FUN_005c80d0(lVar2 + 0x58,lVar1 + 0x58);
            uVar5 = *(undefined8 *)(lVar1 + 0x88);
            uVar3 = *(undefined8 *)(lVar1 + 0x90);
            uVar4 = *(undefined8 *)(lVar1 + 0xa0);
            *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar1 + 0x98);
            *(undefined8 *)(lVar2 + 0xa0) = uVar4;
            *(undefined8 *)(lVar2 + 0x88) = uVar5;
            *(undefined8 *)(lVar2 + 0x90) = uVar3;
            uVar5 = *(undefined8 *)(lVar1 + 0xa8);
            uVar3 = *(undefined8 *)(lVar1 + 0xb0);
            uVar4 = *(undefined8 *)(lVar1 + 0xc0);
            *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(lVar1 + 0xb8);
            *(undefined8 *)(lVar2 + 0xc0) = uVar4;
            *(undefined8 *)(lVar2 + 0xa8) = uVar5;
            *(undefined8 *)(lVar2 + 0xb0) = uVar3;
            FUN_00686f50(lVar2 + 200,lVar1 + 200);
            FUN_00686f50(lVar2 + 0x118,lVar1 + 0x118);
            uVar12 = uVar12 + 1;
            lVar9 = lVar9 + 0x170;
            *(undefined8 *)(lVar2 + 0x168) = *(undefined8 *)(lVar1 + 0x168);
          } while (uVar12 < uVar13);
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (puVar10 = *(undefined8 **)(param_1 + 0x28), puVar10 != (undefined8 *)0x0)) {
          plVar6 = *(long **)(param_1 + 8);
          if (plVar6 != (long *)0x0) {
            lVar9 = (**(code **)(*plVar6 + 0x50))(plVar6,puVar10);
            if (lVar9 != 0) {
              puVar8 = puVar10;
              do {
                (**(code **)*puVar8)(puVar8);
                lVar9 = lVar9 + -1;
                puVar8 = puVar8 + 0x2e;
              } while (lVar9 != 0);
            }
            (**(code **)(*plVar6 + 0x48))
                      (plVar6,puVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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


