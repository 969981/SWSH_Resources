/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00662c30; name: FUN_00662c30
 */


undefined8 FUN_00662c30(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar4 = 1;
  }
  else if (param_2 == 0) {
    puVar10 = (undefined8 *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
       (puVar8 = (undefined8 *)*puVar10, puVar8 != (undefined8 *)0x0)) {
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 != (long *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,puVar8);
        if (lVar6 != 0) {
          puVar12 = puVar8;
          do {
            (**(code **)*puVar12)(puVar12);
            lVar6 = lVar6 + -1;
            puVar12 = puVar12 + 0x1a;
          } while (lVar6 != 0);
        }
        (**(code **)(*plVar5 + 0x48))
                  (plVar5,puVar8,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *puVar10 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar4 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *puVar10 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    uVar4 = 0;
    if (plVar5 != (long *)0x0) {
      uVar11 = *(ulong *)(param_1 + 0x10);
      lVar6 = (**(code **)(*plVar5 + 0x40))
                        (plVar5,0xd0,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1
                        );
      uVar4 = 0;
      if (lVar6 != 0) {
        if (0 < (long)param_2) {
          lVar9 = lVar6;
          uVar13 = param_2;
          do {
            FUN_006657a0(lVar9);
            lVar9 = lVar9 + 0xd0;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        uVar13 = param_2;
        if (uVar11 <= param_2) {
          uVar13 = uVar11;
        }
        if ((uVar13 != 0) && ((param_3 & 1) != 0)) {
          lVar9 = 0;
          uVar11 = 0;
          do {
            lVar1 = *(long *)(param_1 + 0x28) + lVar9;
            lVar2 = lVar6 + lVar9;
            uVar4 = *(undefined8 *)(lVar1 + 0x10);
            uVar3 = *(undefined8 *)(lVar1 + 0x18);
            uVar7 = *(undefined8 *)(lVar1 + 0x28);
            *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
            *(undefined8 *)(lVar2 + 0x28) = uVar7;
            *(undefined8 *)(lVar2 + 0x10) = uVar4;
            *(undefined8 *)(lVar2 + 0x18) = uVar3;
            FUN_005c80d0(lVar2 + 0x30,lVar1 + 0x30);
            uVar4 = *(undefined8 *)(lVar1 + 0x68);
            uVar11 = uVar11 + 1;
            *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(lVar1 + 0x60);
            *(undefined8 *)(lVar2 + 0x68) = uVar4;
            lVar9 = lVar9 + 0xd0;
            uVar4 = *(undefined8 *)(lVar1 + 0x70);
            uVar3 = *(undefined8 *)(lVar1 + 0x78);
            uVar7 = *(undefined8 *)(lVar1 + 0x88);
            *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar1 + 0x80);
            *(undefined8 *)(lVar2 + 0x88) = uVar7;
            *(undefined8 *)(lVar2 + 0x70) = uVar4;
            *(undefined8 *)(lVar2 + 0x78) = uVar3;
            uVar4 = *(undefined8 *)(lVar1 + 0x90);
            uVar3 = *(undefined8 *)(lVar1 + 0x98);
            uVar7 = *(undefined8 *)(lVar1 + 0xa8);
            *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar1 + 0xa0);
            *(undefined8 *)(lVar2 + 0xa8) = uVar7;
            *(undefined8 *)(lVar2 + 0x90) = uVar4;
            *(undefined8 *)(lVar2 + 0x98) = uVar3;
            uVar7 = *(undefined8 *)(lVar1 + 0xc0);
            uVar4 = *(undefined8 *)(lVar1 + 0xb0);
            uVar3 = *(undefined8 *)(lVar1 + 0xb8);
            *(undefined4 *)(lVar2 + 200) = *(undefined4 *)(lVar1 + 200);
            *(undefined8 *)(lVar2 + 0xb8) = uVar3;
            *(undefined8 *)(lVar2 + 0xc0) = uVar7;
            *(undefined8 *)(lVar2 + 0xb0) = uVar4;
          } while (uVar11 < uVar13);
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (puVar10 = *(undefined8 **)(param_1 + 0x28), puVar10 != (undefined8 *)0x0)) {
          plVar5 = *(long **)(param_1 + 8);
          if (plVar5 != (long *)0x0) {
            lVar9 = (**(code **)(*plVar5 + 0x50))(plVar5,puVar10);
            if (lVar9 != 0) {
              puVar8 = puVar10;
              do {
                (**(code **)*puVar8)(puVar8);
                lVar9 = lVar9 + -1;
                puVar8 = puVar8 + 0x1a;
              } while (lVar9 != 0);
            }
            (**(code **)(*plVar5 + 0x48))
                      (plVar5,puVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar4 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(long *)(param_1 + 0x28) = lVar6;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar13;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar4;
}


