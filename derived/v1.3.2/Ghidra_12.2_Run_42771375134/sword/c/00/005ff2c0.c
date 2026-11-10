/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ff2c0; name: FUN_005ff2c0
 */


undefined8 FUN_005ff2c0(long param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar7 = 1;
  }
  else if (param_2 == 0) {
    plVar8 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar11 = *plVar8, lVar11 != 0)) {
      plVar13 = *(long **)(param_1 + 8);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x50))(plVar13,lVar11);
        (**(code **)(*plVar13 + 0x48))
                  (plVar13,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar8 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar7 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar8 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar8 = *(long **)(param_1 + 8);
    uVar7 = 0;
    if (plVar8 != (long *)0x0) {
      uVar14 = *(ulong *)(param_1 + 0x10);
      puVar9 = (undefined8 *)
               (**(code **)(*plVar8 + 0x40))
                         (plVar8,0x28,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar7 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          puVar10 = puVar9;
          if (param_2 != 1) {
            lVar11 = (param_2 & 1) - param_2;
            do {
              *puVar10 = 0;
              puVar10[1] = 0;
              lVar11 = lVar11 + 2;
              puVar10[2] = 0xffffffffffffffff;
              *(undefined1 *)(puVar10 + 3) = 0;
              *(undefined1 *)(puVar10 + 8) = 0;
              puVar10[9] = 0;
              puVar10[4] = 0;
              puVar10[5] = 0;
              puVar10[6] = 0;
              puVar10[7] = 0xffffffffffffffff;
              puVar10 = puVar10 + 10;
            } while (lVar11 != 0);
          }
          if ((param_2 & 1) != 0) {
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0xffffffffffffffff;
            *(undefined1 *)(puVar10 + 3) = 0;
            puVar10[4] = 0;
          }
        }
        uVar3 = param_2;
        if (uVar14 <= param_2) {
          uVar3 = uVar14;
        }
        if ((uVar3 != 0) && ((param_3 & 1) != 0)) {
          uVar4 = param_2;
          if (uVar14 <= param_2) {
            uVar4 = uVar14;
          }
          if (uVar4 == 1) {
            lVar11 = 0;
          }
          else {
            lVar12 = 0;
            lVar11 = 0;
            do {
              puVar10 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar12);
              puVar1 = (undefined8 *)((long)puVar9 + lVar12);
              *puVar1 = *puVar10;
              lVar11 = lVar11 + 2;
              uVar7 = puVar10[1];
              uVar5 = puVar10[2];
              uVar6 = puVar10[4];
              puVar1[3] = puVar10[3];
              puVar1[4] = uVar6;
              puVar1[1] = uVar7;
              puVar1[2] = uVar5;
              lVar2 = *(long *)(param_1 + 0x28) + lVar12;
              lVar12 = lVar12 + 0x50;
              puVar1[5] = *(undefined8 *)(lVar2 + 0x28);
              uVar7 = *(undefined8 *)(lVar2 + 0x30);
              uVar5 = *(undefined8 *)(lVar2 + 0x38);
              uVar6 = *(undefined8 *)(lVar2 + 0x48);
              puVar1[8] = *(undefined8 *)(lVar2 + 0x40);
              puVar1[9] = uVar6;
              puVar1[6] = uVar7;
              puVar1[7] = uVar5;
            } while (uVar3 - (uVar3 & 1) != lVar11);
          }
          if ((uVar3 & 1) != 0) {
            puVar10 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar11 * 0x28);
            puVar1 = puVar9 + lVar11 * 5;
            *puVar1 = *puVar10;
            uVar7 = puVar10[1];
            uVar5 = puVar10[2];
            uVar6 = puVar10[4];
            puVar1[3] = puVar10[3];
            puVar1[4] = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar5;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar11 = *(long *)(param_1 + 0x28), lVar11 != 0)) {
          plVar8 = *(long **)(param_1 + 8);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x50))(plVar8,lVar11);
            (**(code **)(*plVar8 + 0x48))
                      (plVar8,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar7 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar9;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar3;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar7;
}


