/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00632a90; name: FUN_00632a90
 */


undefined8 FUN_00632a90(long param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar4 = 1;
  }
  else if (param_2 == 0) {
    plVar5 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar7 = *plVar5, lVar7 != 0)) {
      plVar16 = *(long **)(param_1 + 8);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x50))(plVar16,lVar7);
        (**(code **)(*plVar16 + 0x48))
                  (plVar16,lVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar5 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar4 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar5 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    uVar4 = 0;
    if (plVar5 != (long *)0x0) {
      uVar17 = *(ulong *)(param_1 + 0x10);
      puVar6 = (undefined8 *)
               (**(code **)(*plVar5 + 0x40))
                         (plVar5,0x58,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar4 = 0;
      if (puVar6 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          uVar8 = param_2;
          puVar10 = puVar6;
          do {
            *puVar10 = 0;
            puVar10[1] = 0;
            uVar8 = uVar8 - 1;
            puVar10[2] = 0xffffffffffffffff;
            *(undefined1 *)(puVar10 + 3) = 0;
            *(undefined4 *)(puVar10 + 10) = 0xffffffff;
            *(undefined1 *)((long)puVar10 + 0x54) = 0;
            puVar10[8] = 0;
            puVar10[9] = 0;
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar10 = puVar10 + 0xb;
          } while (uVar8 != 0);
        }
        uVar8 = param_2;
        if (uVar17 <= param_2) {
          uVar8 = uVar17;
        }
        if ((uVar8 != 0) && ((param_3 & 1) != 0)) {
          uVar3 = param_2;
          if (uVar17 <= param_2) {
            uVar3 = uVar17;
          }
          if (uVar3 == 1) {
            lVar7 = 0;
          }
          else {
            lVar9 = 0;
            lVar7 = 0;
            do {
              puVar10 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar9);
              uVar12 = puVar10[2];
              uVar4 = *puVar10;
              puVar1 = (undefined8 *)((long)puVar6 + lVar9);
              puVar1[1] = puVar10[1];
              puVar1[2] = uVar12;
              *puVar1 = uVar4;
              uVar4 = puVar10[3];
              uVar12 = puVar10[4];
              lVar7 = lVar7 + 2;
              uVar13 = puVar10[6];
              puVar1[5] = puVar10[5];
              puVar1[6] = uVar13;
              puVar1[3] = uVar4;
              puVar1[4] = uVar12;
              uVar13 = puVar10[9];
              uVar4 = puVar10[7];
              uVar12 = puVar10[8];
              *(undefined8 *)((long)puVar1 + 0x4d) = *(undefined8 *)((long)puVar10 + 0x4d);
              puVar1[8] = uVar12;
              puVar1[9] = uVar13;
              puVar1[7] = uVar4;
              lVar2 = *(long *)(param_1 + 0x28) + lVar9;
              lVar9 = lVar9 + 0xb0;
              uVar4 = *(undefined8 *)(lVar2 + 0x60);
              uVar15 = *(undefined8 *)(lVar2 + 0x68);
              puVar1[0xb] = *(undefined8 *)(lVar2 + 0x58);
              puVar1[0xc] = uVar4;
              uVar12 = *(undefined8 *)(lVar2 + 0x78);
              uVar4 = *(undefined8 *)(lVar2 + 0x80);
              uVar13 = *(undefined8 *)(lVar2 + 0x88);
              puVar1[0xe] = *(undefined8 *)(lVar2 + 0x70);
              puVar1[0xf] = uVar12;
              puVar1[0x10] = uVar4;
              uVar14 = *(undefined8 *)(lVar2 + 0xa5);
              uVar4 = *(undefined8 *)(lVar2 + 0x90);
              uVar12 = *(undefined8 *)(lVar2 + 0x98);
              uVar11 = *(undefined8 *)(lVar2 + 0xa0);
              puVar1[0xd] = uVar15;
              puVar1[0x13] = uVar12;
              puVar1[0x14] = uVar11;
              puVar1[0x11] = uVar13;
              puVar1[0x12] = uVar4;
              *(undefined8 *)((long)puVar1 + 0xa5) = uVar14;
            } while (uVar8 - (uVar8 & 1) != lVar7);
          }
          if ((uVar8 & 1) != 0) {
            puVar10 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar7 * 0x58);
            puVar1 = puVar6 + lVar7 * 0xb;
            uVar12 = puVar10[2];
            uVar4 = puVar10[1];
            *puVar1 = *puVar10;
            puVar1[1] = uVar4;
            puVar1[2] = uVar12;
            uVar4 = puVar10[3];
            uVar12 = puVar10[4];
            uVar13 = puVar10[6];
            puVar1[5] = puVar10[5];
            puVar1[6] = uVar13;
            puVar1[3] = uVar4;
            puVar1[4] = uVar12;
            uVar13 = puVar10[9];
            uVar4 = puVar10[7];
            uVar12 = puVar10[8];
            *(undefined8 *)((long)puVar1 + 0x4d) = *(undefined8 *)((long)puVar10 + 0x4d);
            puVar1[8] = uVar12;
            puVar1[9] = uVar13;
            puVar1[7] = uVar4;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar7 = *(long *)(param_1 + 0x28), lVar7 != 0)) {
          plVar5 = *(long **)(param_1 + 8);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x50))(plVar5,lVar7);
            (**(code **)(*plVar5 + 0x48))
                      (plVar5,lVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar4 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar6;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar8;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar4;
}


