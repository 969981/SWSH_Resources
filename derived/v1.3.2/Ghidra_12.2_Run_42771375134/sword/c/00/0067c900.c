/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067c900; name: FUN_0067c900
 */


undefined8 FUN_0067c900(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar6 = 1;
  }
  else if (param_2 == 0) {
    plVar7 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar8 = *plVar7, lVar8 != 0)) {
      plVar12 = *(long **)(param_1 + 8);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x50))(plVar12,lVar8);
        (**(code **)(*plVar12 + 0x48))
                  (plVar12,lVar8,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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
      lVar8 = (**(code **)(*plVar7 + 0x40))
                        (plVar7,0x20,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1
                        );
      uVar6 = 0;
      if (lVar8 != 0) {
        if (0 < (long)param_2) {
          uVar9 = param_2 & 3;
          lVar13 = lVar8;
          if (2 < param_2 - 1) {
            lVar11 = uVar9 - param_2;
            do {
              *(undefined8 *)(lVar13 + 0x10) = 0;
              *(undefined8 *)(lVar13 + 0x18) = 0;
              lVar11 = lVar11 + 4;
              *(undefined8 *)(lVar13 + 0x30) = 0;
              *(undefined8 *)(lVar13 + 0x38) = 0;
              *(undefined8 *)(lVar13 + 0x50) = 0;
              *(undefined8 *)(lVar13 + 0x58) = 0;
              *(undefined8 *)(lVar13 + 0x70) = 0;
              *(undefined8 *)(lVar13 + 0x78) = 0;
              lVar13 = lVar13 + 0x80;
            } while (lVar11 != 0);
          }
          if (uVar9 != 0) {
            lVar11 = -uVar9;
            puVar10 = (undefined8 *)(lVar13 + 0x10);
            do {
              *puVar10 = 0;
              puVar10[1] = 0;
              lVar11 = lVar11 + 1;
              puVar10 = puVar10 + 4;
            } while (lVar11 != 0);
          }
        }
        uVar9 = param_2;
        if (uVar14 <= param_2) {
          uVar9 = uVar14;
        }
        if ((uVar9 != 0) && ((param_3 & 1) != 0)) {
          uVar3 = param_2;
          if (uVar14 <= param_2) {
            uVar3 = uVar14;
          }
          uVar14 = uVar9 & 3;
          if (uVar3 - 1 < 3) {
            lVar11 = 0;
          }
          else {
            lVar13 = 0;
            lVar11 = 0;
            do {
              puVar10 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar13);
              puVar2 = (undefined8 *)(lVar8 + lVar13);
              uVar6 = *puVar10;
              uVar4 = puVar10[1];
              lVar11 = lVar11 + 4;
              uVar5 = puVar10[3];
              puVar2[2] = puVar10[2];
              puVar2[3] = uVar5;
              *puVar2 = uVar6;
              puVar2[1] = uVar4;
              lVar1 = *(long *)(param_1 + 0x28) + lVar13;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              uVar4 = *(undefined8 *)(lVar1 + 0x28);
              uVar5 = *(undefined8 *)(lVar1 + 0x38);
              puVar2[6] = *(undefined8 *)(lVar1 + 0x30);
              puVar2[7] = uVar5;
              puVar2[4] = uVar6;
              puVar2[5] = uVar4;
              lVar1 = *(long *)(param_1 + 0x28) + lVar13;
              uVar6 = *(undefined8 *)(lVar1 + 0x40);
              uVar4 = *(undefined8 *)(lVar1 + 0x48);
              uVar5 = *(undefined8 *)(lVar1 + 0x58);
              puVar2[10] = *(undefined8 *)(lVar1 + 0x50);
              puVar2[0xb] = uVar5;
              puVar2[8] = uVar6;
              puVar2[9] = uVar4;
              lVar1 = *(long *)(param_1 + 0x28) + lVar13;
              lVar13 = lVar13 + 0x80;
              uVar6 = *(undefined8 *)(lVar1 + 0x60);
              uVar4 = *(undefined8 *)(lVar1 + 0x68);
              uVar5 = *(undefined8 *)(lVar1 + 0x78);
              puVar2[0xe] = *(undefined8 *)(lVar1 + 0x70);
              puVar2[0xf] = uVar5;
              puVar2[0xc] = uVar6;
              puVar2[0xd] = uVar4;
            } while (uVar9 - uVar14 != lVar11);
          }
          if (uVar14 != 0) {
            lVar11 = lVar11 << 5;
            lVar13 = -uVar14;
            do {
              puVar10 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar11);
              puVar2 = (undefined8 *)(lVar8 + lVar11);
              uVar6 = *puVar10;
              uVar4 = puVar10[1];
              lVar11 = lVar11 + 0x20;
              uVar5 = puVar10[3];
              lVar13 = lVar13 + 1;
              puVar2[2] = puVar10[2];
              puVar2[3] = uVar5;
              *puVar2 = uVar6;
              puVar2[1] = uVar4;
            } while (lVar13 != 0);
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar13 = *(long *)(param_1 + 0x28), lVar13 != 0)) {
          plVar7 = *(long **)(param_1 + 8);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x50))(plVar7,lVar13);
            (**(code **)(*plVar7 + 0x48))
                      (plVar7,lVar13,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar6 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(long *)(param_1 + 0x28) = lVar8;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar9;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar6;
}


