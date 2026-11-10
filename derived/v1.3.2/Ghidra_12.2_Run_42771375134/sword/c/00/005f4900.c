/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f4900; name: FUN_005f4900
 */


undefined8 FUN_005f4900(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
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
      puVar7 = (undefined8 *)
               (**(code **)(*plVar6 + 0x40))
                         (plVar6,0x20,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          uVar9 = param_2 & 3;
          puVar8 = puVar7;
          if (2 < param_2 - 1) {
            lVar11 = uVar9 - param_2;
            do {
              *(undefined4 *)(puVar8 + 3) = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              lVar11 = lVar11 + 4;
              *puVar8 = 0;
              *(undefined4 *)(puVar8 + 7) = 0;
              puVar8[4] = 0;
              *(undefined4 *)(puVar8 + 0xb) = 0;
              puVar8[8] = 0;
              *(undefined4 *)(puVar8 + 0xf) = 0;
              puVar8[0xc] = 0;
              puVar8[5] = 0;
              puVar8[6] = 0;
              puVar8[9] = 0;
              puVar8[10] = 0;
              puVar8[0xd] = 0;
              puVar8[0xe] = 0;
              puVar8 = puVar8 + 0x10;
            } while (lVar11 != 0);
          }
          if (uVar9 != 0) {
            lVar11 = -uVar9;
            do {
              *(undefined4 *)(puVar8 + 3) = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              lVar11 = lVar11 + 1;
              *puVar8 = 0;
              puVar8 = puVar8 + 4;
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
            lVar10 = 0;
          }
          else {
            lVar11 = 0;
            lVar10 = 0;
            do {
              puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar11);
              uVar12 = puVar8[2];
              uVar5 = *puVar8;
              uVar4 = puVar8[1];
              puVar2 = (undefined8 *)((long)puVar7 + lVar11);
              *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar8 + 3);
              *puVar2 = uVar5;
              puVar2[1] = uVar4;
              puVar2[2] = uVar12;
              lVar1 = *(long *)(param_1 + 0x28) + lVar11;
              uVar5 = *(undefined8 *)(lVar1 + 0x20);
              uVar4 = *(undefined8 *)(lVar1 + 0x28);
              uVar12 = *(undefined8 *)(lVar1 + 0x30);
              *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(lVar1 + 0x38);
              puVar2[5] = uVar4;
              puVar2[6] = uVar12;
              puVar2[4] = uVar5;
              lVar1 = *(long *)(param_1 + 0x28) + lVar11;
              uVar12 = *(undefined8 *)(lVar1 + 0x50);
              uVar5 = *(undefined8 *)(lVar1 + 0x40);
              uVar4 = *(undefined8 *)(lVar1 + 0x48);
              *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(lVar1 + 0x58);
              puVar2[9] = uVar4;
              puVar2[10] = uVar12;
              puVar2[8] = uVar5;
              lVar1 = *(long *)(param_1 + 0x28) + lVar11;
              lVar11 = lVar11 + 0x80;
              uVar5 = *(undefined8 *)(lVar1 + 0x60);
              uVar4 = *(undefined8 *)(lVar1 + 0x68);
              uVar12 = *(undefined8 *)(lVar1 + 0x70);
              lVar10 = lVar10 + 4;
              *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(lVar1 + 0x78);
              puVar2[0xc] = uVar5;
              puVar2[0xd] = uVar4;
              puVar2[0xe] = uVar12;
            } while (uVar9 - uVar14 != lVar10);
          }
          if (uVar14 != 0) {
            lVar10 = lVar10 << 5;
            lVar11 = -uVar14;
            do {
              puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar10);
              uVar12 = puVar8[2];
              uVar5 = *puVar8;
              uVar4 = puVar8[1];
              puVar2 = (undefined8 *)((long)puVar7 + lVar10);
              lVar10 = lVar10 + 0x20;
              lVar11 = lVar11 + 1;
              *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar8 + 3);
              puVar2[1] = uVar4;
              puVar2[2] = uVar12;
              *puVar2 = uVar5;
            } while (lVar11 != 0);
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
        *(undefined8 **)(param_1 + 0x28) = puVar7;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar9;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar5;
}


