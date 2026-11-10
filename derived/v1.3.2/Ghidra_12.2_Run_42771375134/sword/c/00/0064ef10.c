/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064ef10; name: FUN_0064ef10
 */


undefined8 FUN_0064ef10(long param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar6 = 1;
  }
  else if (param_2 == 0) {
    plVar7 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar11 = *plVar7, lVar11 != 0)) {
      plVar13 = *(long **)(param_1 + 8);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x50))(plVar13,lVar11);
        (**(code **)(*plVar13 + 0x48))
                  (plVar13,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar7 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar6 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar7 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar7 = *(long **)(param_1 + 8);
    uVar6 = 0;
    if (plVar7 != (long *)0x0) {
      uVar14 = *(ulong *)(param_1 + 0x10);
      puVar8 = (undefined8 *)
               (**(code **)(*plVar7 + 0x40))
                         (plVar7,0x28,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar6 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          uVar10 = param_2 & 3;
          puVar9 = puVar8;
          if (2 < param_2 - 1) {
            lVar11 = uVar10 - param_2;
            do {
              *(undefined1 *)(puVar9 + 2) = 0;
              *puVar9 = 0;
              puVar9[1] = 0;
              lVar11 = lVar11 + 4;
              *(undefined1 *)(puVar9 + 7) = 0;
              *(undefined1 *)(puVar9 + 0xc) = 0;
              *(undefined1 *)(puVar9 + 0x11) = 0;
              puVar9[3] = 0;
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[6] = 0;
              puVar9[8] = 0;
              puVar9[9] = 0;
              puVar9[10] = 0;
              puVar9[0xb] = 0;
              puVar9[0xd] = 0;
              puVar9[0xe] = 0;
              puVar9[0xf] = 0;
              puVar9[0x10] = 0;
              puVar9[0x12] = 0;
              puVar9[0x13] = 0;
              puVar9 = puVar9 + 0x14;
            } while (lVar11 != 0);
          }
          if (uVar10 != 0) {
            lVar11 = -uVar10;
            do {
              *(undefined1 *)(puVar9 + 2) = 0;
              *puVar9 = 0;
              puVar9[1] = 0;
              lVar11 = lVar11 + 1;
              puVar9[3] = 0;
              puVar9[4] = 0;
              puVar9 = puVar9 + 5;
            } while (lVar11 != 0);
          }
        }
        uVar10 = param_2;
        if (uVar14 <= param_2) {
          uVar10 = uVar14;
        }
        if ((uVar10 != 0) && ((param_3 & 1) != 0)) {
          uVar3 = param_2;
          if (uVar14 <= param_2) {
            uVar3 = uVar14;
          }
          if (uVar3 == 1) {
            lVar11 = 0;
          }
          else {
            lVar12 = 0;
            lVar11 = 0;
            do {
              puVar9 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar12);
              puVar1 = (undefined8 *)((long)puVar8 + lVar12);
              *puVar1 = *puVar9;
              lVar11 = lVar11 + 2;
              uVar6 = puVar9[1];
              uVar4 = puVar9[2];
              uVar5 = puVar9[4];
              puVar1[3] = puVar9[3];
              puVar1[4] = uVar5;
              puVar1[1] = uVar6;
              puVar1[2] = uVar4;
              lVar2 = *(long *)(param_1 + 0x28) + lVar12;
              lVar12 = lVar12 + 0x50;
              puVar1[5] = *(undefined8 *)(lVar2 + 0x28);
              uVar6 = *(undefined8 *)(lVar2 + 0x30);
              uVar4 = *(undefined8 *)(lVar2 + 0x38);
              uVar5 = *(undefined8 *)(lVar2 + 0x48);
              puVar1[8] = *(undefined8 *)(lVar2 + 0x40);
              puVar1[9] = uVar5;
              puVar1[6] = uVar6;
              puVar1[7] = uVar4;
            } while (uVar10 - (uVar10 & 1) != lVar11);
          }
          if ((uVar10 & 1) != 0) {
            puVar9 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar11 * 0x28);
            puVar1 = puVar8 + lVar11 * 5;
            *puVar1 = *puVar9;
            uVar6 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[4];
            puVar1[3] = puVar9[3];
            puVar1[4] = uVar5;
            puVar1[1] = uVar6;
            puVar1[2] = uVar4;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar11 = *(long *)(param_1 + 0x28), lVar11 != 0)) {
          plVar7 = *(long **)(param_1 + 8);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x50))(plVar7,lVar11);
            (**(code **)(*plVar7 + 0x48))
                      (plVar7,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar6 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar8;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar10;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar6;
}


