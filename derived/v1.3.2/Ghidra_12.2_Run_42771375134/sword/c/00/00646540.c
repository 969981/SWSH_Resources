/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00646540; name: FUN_00646540
 */


undefined8 FUN_00646540(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar4 = 1;
  }
  else if (param_2 == 0) {
    plVar5 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar10 = *plVar5, lVar10 != 0)) {
      plVar12 = *(long **)(param_1 + 8);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x50))(plVar12,lVar10);
        (**(code **)(*plVar12 + 0x48))
                  (plVar12,lVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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
      uVar13 = *(ulong *)(param_1 + 0x10);
      puVar6 = (undefined8 *)
               (**(code **)(*plVar5 + 0x40))
                         (plVar5,0x14,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar4 = 0;
      if (puVar6 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          uVar8 = param_2 & 3;
          puVar7 = puVar6;
          if (2 < param_2 - 1) {
            lVar10 = uVar8 - param_2;
            do {
              *puVar7 = 0;
              puVar7[1] = 0;
              lVar10 = lVar10 + 4;
              *(undefined8 *)((long)puVar7 + 0x1c) = 0;
              *(undefined8 *)((long)puVar7 + 0x14) = 0;
              *(undefined8 *)((long)puVar7 + 0x44) = 0;
              *(undefined8 *)((long)puVar7 + 0x3c) = 0;
              puVar7[5] = 0;
              puVar7[6] = 0;
              puVar7 = puVar7 + 10;
            } while (lVar10 != 0);
          }
          if (uVar8 != 0) {
            lVar10 = -uVar8;
            do {
              *puVar7 = 0;
              puVar7[1] = 0;
              puVar7 = (undefined8 *)((long)puVar7 + 0x14);
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0);
          }
        }
        uVar8 = param_2;
        if (uVar13 <= param_2) {
          uVar8 = uVar13;
        }
        if ((uVar8 != 0) && ((param_3 & 1) != 0)) {
          uVar3 = param_2;
          if (uVar13 <= param_2) {
            uVar3 = uVar13;
          }
          if (uVar3 == 1) {
            lVar9 = 0;
          }
          else {
            lVar10 = 0;
            lVar9 = 0;
            do {
              puVar7 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar10);
              puVar2 = (undefined8 *)((long)puVar6 + lVar10);
              uVar4 = *puVar7;
              uVar11 = puVar7[1];
              *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar7 + 2);
              *puVar2 = uVar4;
              puVar2[1] = uVar11;
              lVar1 = *(long *)(param_1 + 0x28) + lVar10;
              lVar10 = lVar10 + 0x28;
              uVar4 = *(undefined8 *)(lVar1 + 0x14);
              uVar11 = *(undefined8 *)(lVar1 + 0x1c);
              lVar9 = lVar9 + 2;
              *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(lVar1 + 0x24);
              *(undefined8 *)((long)puVar2 + 0x1c) = uVar11;
              *(undefined8 *)((long)puVar2 + 0x14) = uVar4;
            } while (uVar8 - (uVar8 & 1) != lVar9);
          }
          if ((uVar8 & 1) != 0) {
            puVar7 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar9 * 0x14);
            puVar2 = (undefined8 *)((long)puVar6 + lVar9 * 0x14);
            uVar4 = *puVar7;
            uVar11 = puVar7[1];
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar7 + 2);
            *puVar2 = uVar4;
            puVar2[1] = uVar11;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar10 = *(long *)(param_1 + 0x28), lVar10 != 0)) {
          plVar5 = *(long **)(param_1 + 8);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x50))(plVar5,lVar10);
            (**(code **)(*plVar5 + 0x48))
                      (plVar5,lVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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


