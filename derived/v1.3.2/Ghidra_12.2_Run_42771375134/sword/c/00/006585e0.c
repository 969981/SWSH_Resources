/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006585e0; name: FUN_006585e0
 */


undefined8 FUN_006585e0(long param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar7 = 1;
  }
  else if (param_2 == 0) {
    plVar8 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar11 = *plVar8, lVar11 != 0)) {
      plVar16 = *(long **)(param_1 + 8);
      if (plVar16 != (long *)0x0) {
        lVar10 = (**(code **)(*plVar16 + 0x50))(plVar16,lVar11);
        if (lVar10 != 0) {
          plVar18 = (long *)(lVar11 + 0x50);
          do {
            if ((long *)*plVar18 != (long *)0x0) {
              (**(code **)(*(long *)*plVar18 + 0x18))();
              *plVar18 = 0;
            }
            lVar10 = lVar10 + -1;
            plVar18 = plVar18 + 0xb;
          } while (lVar10 != 0);
        }
        (**(code **)(*plVar16 + 0x48))
                  (plVar16,lVar11,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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
      uVar17 = *(ulong *)(param_1 + 0x10);
      puVar9 = (undefined8 *)
               (**(code **)(*plVar8 + 0x40))
                         (plVar8,0x58,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar7 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          uVar13 = param_2;
          puVar14 = puVar9;
          do {
            *puVar14 = 0;
            puVar14[1] = 0xc00000000;
            uVar13 = uVar13 - 1;
            puVar14[2] = 0x100000001;
            puVar14[3] = 1;
            puVar14[10] = 0;
            *(undefined4 *)(puVar14 + 9) = 0;
            puVar14[6] = 0;
            puVar14[4] = 0x42c8000000000000;
            puVar14[5] = 0x800000001;
            puVar14[7] = 0;
            puVar14[8] = 0;
            puVar14 = puVar14 + 0xb;
          } while (uVar13 != 0);
        }
        uVar13 = param_2;
        if (uVar17 <= param_2) {
          uVar13 = uVar17;
        }
        if ((uVar13 != 0) && ((param_3 & 1) != 0)) {
          uVar3 = param_2;
          if (uVar17 <= param_2) {
            uVar3 = uVar17;
          }
          if (uVar3 == 1) {
            lVar11 = 0;
          }
          else {
            lVar10 = 0;
            lVar11 = 0;
            do {
              puVar14 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar10);
              uVar12 = puVar14[2];
              uVar7 = *puVar14;
              puVar1 = (undefined8 *)((long)puVar9 + lVar10);
              puVar1[1] = puVar14[1];
              puVar1[2] = uVar12;
              *puVar1 = uVar7;
              uVar7 = puVar14[3];
              uVar12 = puVar14[4];
              lVar11 = lVar11 + 2;
              uVar6 = puVar14[6];
              puVar1[5] = puVar14[5];
              puVar1[6] = uVar6;
              puVar1[3] = uVar7;
              puVar1[4] = uVar12;
              uVar7 = puVar14[7];
              uVar12 = puVar14[8];
              uVar6 = puVar14[10];
              puVar1[9] = puVar14[9];
              puVar1[10] = uVar6;
              puVar1[7] = uVar7;
              puVar1[8] = uVar12;
              lVar2 = *(long *)(param_1 + 0x28) + lVar10;
              lVar10 = lVar10 + 0xb0;
              uVar15 = *(undefined8 *)(lVar2 + 0x68);
              uVar7 = *(undefined8 *)(lVar2 + 0x60);
              puVar1[0xb] = *(undefined8 *)(lVar2 + 0x58);
              puVar1[0xc] = uVar7;
              uVar12 = *(undefined8 *)(lVar2 + 0x78);
              uVar7 = *(undefined8 *)(lVar2 + 0x80);
              uVar6 = *(undefined8 *)(lVar2 + 0x88);
              puVar1[0xe] = *(undefined8 *)(lVar2 + 0x70);
              puVar1[0xf] = uVar12;
              puVar1[0x10] = uVar7;
              uVar7 = *(undefined8 *)(lVar2 + 0xa0);
              uVar4 = *(undefined8 *)(lVar2 + 0xa8);
              uVar12 = *(undefined8 *)(lVar2 + 0x90);
              uVar5 = *(undefined8 *)(lVar2 + 0x98);
              puVar1[0xd] = uVar15;
              puVar1[0x13] = uVar5;
              puVar1[0x14] = uVar7;
              puVar1[0x15] = uVar4;
              puVar1[0x11] = uVar6;
              puVar1[0x12] = uVar12;
            } while (uVar13 - (uVar13 & 1) != lVar11);
          }
          if ((uVar13 & 1) != 0) {
            puVar14 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar11 * 0x58);
            puVar1 = puVar9 + lVar11 * 0xb;
            uVar12 = puVar14[2];
            uVar7 = puVar14[1];
            *puVar1 = *puVar14;
            puVar1[1] = uVar7;
            puVar1[2] = uVar12;
            uVar7 = puVar14[3];
            uVar12 = puVar14[4];
            uVar6 = puVar14[6];
            puVar1[5] = puVar14[5];
            puVar1[6] = uVar6;
            puVar1[3] = uVar7;
            puVar1[4] = uVar12;
            uVar7 = puVar14[7];
            uVar12 = puVar14[8];
            uVar6 = puVar14[10];
            puVar1[9] = puVar14[9];
            puVar1[10] = uVar6;
            puVar1[7] = uVar7;
            puVar1[8] = uVar12;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar11 = *(long *)(param_1 + 0x28), lVar11 != 0)) {
          plVar8 = *(long **)(param_1 + 8);
          if (plVar8 != (long *)0x0) {
            lVar10 = (**(code **)(*plVar8 + 0x50))(plVar8,lVar11);
            if (lVar10 != 0) {
              plVar16 = (long *)(lVar11 + 0x50);
              do {
                if ((long *)*plVar16 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar16 + 0x18))();
                  *plVar16 = 0;
                }
                lVar10 = lVar10 + -1;
                plVar16 = plVar16 + 0xb;
              } while (lVar10 != 0);
            }
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
        *(ulong *)(param_1 + 0x10) = uVar13;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar7;
}


