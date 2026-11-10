/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ec9d0; name: FUN_005ec9d0
 */


undefined8 FUN_005ec9d0(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  void *__s;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar6 = 1;
  }
  else if (param_2 == 0) {
    plVar7 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar9 = *plVar7, lVar9 != 0)) {
      plVar11 = *(long **)(param_1 + 8);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x50))(plVar11,lVar9);
        (**(code **)(*plVar11 + 0x48))
                  (plVar11,lVar9,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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
      uVar12 = *(ulong *)(param_1 + 0x10);
      __s = (void *)(**(code **)(*plVar7 + 0x40))
                              (plVar7,0x18,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h"
                               ,0x5d1);
      uVar6 = 0;
      if (__s != (void *)0x0) {
        if (0 < (long)param_2) {
                    /* WARNING: Subroutine does not return */
          memset(__s,0,param_2 * 0x18);
        }
        uVar4 = param_2;
        if (uVar12 <= param_2) {
          uVar4 = uVar12;
        }
        if ((uVar4 != 0) && ((param_3 & 1) != 0)) {
          uVar5 = param_2;
          if (uVar12 <= param_2) {
            uVar5 = uVar12;
          }
          if (uVar5 == 1) {
            lVar9 = 0;
          }
          else {
            lVar10 = 0;
            lVar9 = 0;
            do {
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar10);
              puVar3 = (undefined8 *)((long)__s + lVar10);
              uVar6 = *puVar2;
              uVar8 = puVar2[2];
              puVar3[1] = puVar2[1];
              puVar3[2] = uVar8;
              *puVar3 = uVar6;
              lVar1 = *(long *)(param_1 + 0x28) + lVar10;
              lVar9 = lVar9 + 2;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              uVar8 = *(undefined8 *)(lVar1 + 0x28);
              lVar10 = lVar10 + 0x30;
              puVar3[3] = *(undefined8 *)(lVar1 + 0x18);
              puVar3[4] = uVar6;
              puVar3[5] = uVar8;
            } while (uVar4 - (uVar4 & 1) != lVar9);
          }
          if ((uVar4 & 1) != 0) {
            puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar9 * 0x18);
            puVar3 = (undefined8 *)((long)__s + lVar9 * 0x18);
            uVar6 = *puVar2;
            uVar8 = puVar2[2];
            puVar3[1] = puVar2[1];
            puVar3[2] = uVar8;
            *puVar3 = uVar6;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar9 = *(long *)(param_1 + 0x28), lVar9 != 0)) {
          plVar7 = *(long **)(param_1 + 8);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x50))(plVar7,lVar9);
            (**(code **)(*plVar7 + 0x48))
                      (plVar7,lVar9,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar6 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(void **)(param_1 + 0x28) = __s;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar4;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar6;
}


