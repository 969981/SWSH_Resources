/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00675ea0; name: FUN_00675ea0
 */


undefined8 FUN_00675ea0(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar5 = 1;
  }
  else if (param_2 == 0) {
    plVar6 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar10 = *plVar6, lVar10 != 0)) {
      plVar13 = *(long **)(param_1 + 8);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x50))(plVar13,lVar10);
        (**(code **)(*plVar13 + 0x48))
                  (plVar13,lVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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
                         (plVar6,0x24,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      uVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          puVar8 = puVar7;
          if (param_2 != 1) {
            lVar10 = (param_2 & 1) - param_2;
            do {
              *puVar8 = 0;
              puVar8[1] = 0;
              lVar10 = lVar10 + 2;
              puVar8[2] = 0x7fffffff;
              *(undefined8 *)((long)puVar8 + 0x1c) = 0x100000000;
              *(undefined8 *)((long)puVar8 + 0x2c) = 0;
              *(undefined8 *)((long)puVar8 + 0x24) = 0;
              *(undefined8 *)((long)puVar8 + 0x34) = 0x7fffffff;
              puVar8[8] = 0x100000000;
              puVar8 = puVar8 + 9;
            } while (lVar10 != 0);
          }
          if ((param_2 & 1) != 0) {
            puVar8[2] = 0x7fffffff;
            *puVar8 = 0;
            puVar8[1] = 0;
            *(undefined8 *)((long)puVar8 + 0x1c) = 0x100000000;
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
            lVar9 = 0;
          }
          else {
            lVar10 = 0;
            lVar9 = 0;
            do {
              puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar10);
              puVar2 = (undefined8 *)((long)puVar7 + lVar10);
              *puVar2 = *puVar8;
              uVar11 = puVar8[3];
              uVar5 = puVar8[1];
              uVar12 = puVar8[2];
              *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar8 + 4);
              puVar2[2] = uVar12;
              puVar2[3] = uVar11;
              puVar2[1] = uVar5;
              lVar1 = *(long *)(param_1 + 0x28) + lVar10;
              lVar10 = lVar10 + 0x48;
              *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(lVar1 + 0x24);
              uVar5 = *(undefined8 *)(lVar1 + 0x2c);
              uVar12 = *(undefined8 *)(lVar1 + 0x34);
              uVar11 = *(undefined8 *)(lVar1 + 0x3c);
              lVar9 = lVar9 + 2;
              *(undefined4 *)((long)puVar2 + 0x44) = *(undefined4 *)(lVar1 + 0x44);
              *(undefined8 *)((long)puVar2 + 0x3c) = uVar11;
              *(undefined8 *)((long)puVar2 + 0x34) = uVar12;
              *(undefined8 *)((long)puVar2 + 0x2c) = uVar5;
            } while (uVar3 - (uVar3 & 1) != lVar9);
          }
          if ((uVar3 & 1) != 0) {
            puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar9 * 0x24);
            puVar2 = (undefined8 *)((long)puVar7 + lVar9 * 0x24);
            *puVar2 = *puVar8;
            uVar5 = puVar8[1];
            uVar12 = puVar8[2];
            uVar11 = puVar8[3];
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar8 + 4);
            puVar2[2] = uVar12;
            puVar2[3] = uVar11;
            puVar2[1] = uVar5;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar10 = *(long *)(param_1 + 0x28), lVar10 != 0)) {
          plVar6 = *(long **)(param_1 + 8);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x50))(plVar6,lVar10);
            (**(code **)(*plVar6 + 0x48))
                      (plVar6,lVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar5 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar7;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar3;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar5;
}


