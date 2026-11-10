/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00657f10; name: FUN_00657f10
 */


undefined8 FUN_00657f10(long param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar5 = 1;
  }
  else if (param_2 == 0) {
    plVar6 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar11 = *plVar6, lVar11 != 0)) {
      plVar13 = *(long **)(param_1 + 8);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x50))(plVar13,lVar11);
        (**(code **)(*plVar13 + 0x48))
                  (plVar13,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar6 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar5 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar6 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    uVar5 = 0;
    if (plVar6 != (long *)0x0) {
      uVar14 = *(ulong *)(param_1 + 0x10);
      puVar7 = (undefined4 *)
               (**(code **)(*plVar6 + 0x40))
                         (plVar6,0x14,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar5 = 0;
      if (puVar7 != (undefined4 *)0x0) {
        if (0 < (long)param_2) {
          uVar9 = param_2 & 3;
          puVar8 = puVar7;
          if (2 < param_2 - 1) {
            lVar11 = uVar9 - param_2;
            do {
              *puVar8 = 1;
              *(undefined8 *)(puVar8 + 3) = 0;
              lVar11 = lVar11 + 4;
              *(undefined8 *)(puVar8 + 1) = 0;
              puVar8[5] = 1;
              puVar8[10] = 1;
              *(undefined8 *)(puVar8 + 0xd) = 0;
              *(undefined8 *)(puVar8 + 0xb) = 0;
              puVar8[0xf] = 1;
              *(undefined8 *)(puVar8 + 6) = 0;
              *(undefined8 *)(puVar8 + 8) = 0;
              *(undefined8 *)(puVar8 + 0x10) = 0;
              *(undefined8 *)(puVar8 + 0x12) = 0;
              puVar8 = puVar8 + 0x14;
            } while (lVar11 != 0);
          }
          if (uVar9 != 0) {
            lVar11 = -uVar9;
            do {
              *puVar8 = 1;
              *(undefined8 *)(puVar8 + 3) = 0;
              lVar11 = lVar11 + 1;
              *(undefined8 *)(puVar8 + 1) = 0;
              puVar8 = puVar8 + 5;
            } while (lVar11 != 0);
          }
        }
        uVar9 = param_2;
        if (uVar14 <= param_2) {
          uVar9 = uVar14;
        }
        if ((uVar9 != 0) && ((param_3 & 1) != 0)) {
          uVar4 = param_2;
          if (uVar14 <= param_2) {
            uVar4 = uVar14;
          }
          if (uVar4 == 1) {
            lVar10 = 0;
          }
          else {
            lVar11 = 0;
            lVar10 = 0;
            do {
              puVar3 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar11);
              puVar1 = (undefined8 *)((long)puVar7 + lVar11);
              uVar5 = *puVar3;
              uVar12 = puVar3[1];
              *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar3 + 2);
              *puVar1 = uVar5;
              puVar1[1] = uVar12;
              lVar2 = *(long *)(param_1 + 0x28) + lVar11;
              lVar11 = lVar11 + 0x28;
              uVar5 = *(undefined8 *)(lVar2 + 0x14);
              uVar12 = *(undefined8 *)(lVar2 + 0x1c);
              lVar10 = lVar10 + 2;
              *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(lVar2 + 0x24);
              *(undefined8 *)((long)puVar1 + 0x1c) = uVar12;
              *(undefined8 *)((long)puVar1 + 0x14) = uVar5;
            } while (uVar9 - (uVar9 & 1) != lVar10);
          }
          if ((uVar9 & 1) != 0) {
            puVar3 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar10 * 0x14);
            puVar1 = (undefined8 *)(puVar7 + lVar10 * 5);
            uVar5 = *puVar3;
            uVar12 = puVar3[1];
            *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar3 + 2);
            *puVar1 = uVar5;
            puVar1[1] = uVar12;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar11 = *(long *)(param_1 + 0x28), lVar11 != 0)) {
          plVar6 = *(long **)(param_1 + 8);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x50))(plVar6,lVar11);
            (**(code **)(*plVar6 + 0x48))
                      (plVar6,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar5 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 **)(param_1 + 0x28) = puVar7;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar9;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar5;
}


