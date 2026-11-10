/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00543010; name: FUN_00543010
 */


undefined8 FUN_00543010(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar2 = 1;
  }
  else if (param_2 == 0) {
    plVar3 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar7 = *plVar3, lVar7 != 0)) {
      plVar8 = *(long **)(param_1 + 8);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x50))(plVar8,lVar7);
        (**(code **)(*plVar8 + 0x48))
                  (plVar8,lVar7,"C:/workspace/sisdk/3.0/SDK/Core/Include\\SiCore/SiCore_Array.h",
                   0x5f2);
      }
      *plVar3 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar2 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    uVar2 = 0;
    if (plVar3 != (long *)0x0) {
      uVar9 = *(ulong *)(param_1 + 0x10);
      puVar4 = (undefined8 *)
               (**(code **)(*plVar3 + 0x40))
                         (plVar3,0x128,param_2,0x10,
                          "C:/workspace/sisdk/3.0/SDK/Core/Include\\SiCore/SiCore_Array.h",0x5d1);
      uVar2 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        if (0 < (long)param_2) {
          uVar6 = param_2 & 3;
          puVar5 = puVar4;
          if (2 < param_2 - 1) {
            lVar7 = uVar6 - param_2;
            do {
              *puVar5 = 0;
              puVar5[1] = 0;
              lVar7 = lVar7 + 4;
              puVar5[0x25] = 0;
              puVar5[0x26] = 0;
              puVar5[0x4b] = 0;
              puVar5[0x4a] = 0;
              puVar5[0x70] = 0;
              puVar5[0x6f] = 0;
              puVar5 = puVar5 + 0x94;
            } while (lVar7 != 0);
          }
          if (uVar6 != 0) {
            lVar7 = -uVar6;
            do {
              *puVar5 = 0;
              puVar5[1] = 0;
              lVar7 = lVar7 + 1;
              puVar5 = puVar5 + 0x25;
            } while (lVar7 != 0);
          }
        }
        uVar6 = param_2;
        if (uVar9 <= param_2) {
          uVar6 = uVar9;
        }
        if ((uVar6 != 0) && ((param_3 & 1) != 0)) {
          uVar1 = param_2;
          if (uVar9 <= param_2) {
            uVar1 = uVar9;
          }
          if (uVar1 == 1) {
            lVar7 = 0;
          }
          else {
            lVar7 = 0;
            lVar10 = 0x128;
            do {
              memcpy((void *)((long)puVar4 + lVar10 + -0x128),
                     (void *)(*(long *)(param_1 + 0x28) + lVar10 + -0x128),0x128);
              memcpy((void *)((long)puVar4 + lVar10),(void *)(*(long *)(param_1 + 0x28) + lVar10),
                     0x128);
              lVar7 = lVar7 + 2;
              lVar10 = lVar10 + 0x250;
            } while (uVar6 - (uVar6 & 1) != lVar7);
          }
          if ((uVar6 & 1) != 0) {
            memcpy(puVar4 + lVar7 * 0x25,(void *)(*(long *)(param_1 + 0x28) + lVar7 * 0x128),0x128);
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar7 = *(long *)(param_1 + 0x28), lVar7 != 0)) {
          plVar3 = *(long **)(param_1 + 8);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x50))(plVar3,lVar7);
            (**(code **)(*plVar3 + 0x48))
                      (plVar3,lVar7,"C:/workspace/sisdk/3.0/SDK/Core/Include\\SiCore/SiCore_Array.h"
                       ,0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar2 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar4;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar6;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar2;
}


