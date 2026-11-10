/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ea830; name: FUN_005ea830
 */


undefined8 FUN_005ea830(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  void *__s;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar8 = 1;
  }
  else if (param_2 == 0) {
    plVar9 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar10 = *plVar9, lVar10 != 0)) {
      plVar12 = *(long **)(param_1 + 8);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x50))(plVar12,lVar10);
        (**(code **)(*plVar12 + 0x48))
                  (plVar12,lVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar9 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar8 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar9 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar9 = *(long **)(param_1 + 8);
    uVar8 = 0;
    if (plVar9 != (long *)0x0) {
      uVar13 = *(ulong *)(param_1 + 0x10);
      __s = (void *)(**(code **)(*plVar9 + 0x40))
                              (plVar9,0x30,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h"
                               ,0x5d1);
      uVar8 = 0;
      if (__s != (void *)0x0) {
        if (0 < (long)param_2) {
                    /* WARNING: Subroutine does not return */
          memset(__s,0,param_2 * 0x30);
        }
        uVar4 = param_2;
        if (uVar13 <= param_2) {
          uVar4 = uVar13;
        }
        if ((uVar4 != 0) && ((param_3 & 1) != 0)) {
          uVar5 = param_2;
          if (uVar13 <= param_2) {
            uVar5 = uVar13;
          }
          if (uVar5 == 1) {
            lVar10 = 0;
          }
          else {
            lVar11 = 0;
            lVar10 = 0;
            do {
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar11);
              puVar3 = (undefined8 *)((long)__s + lVar11);
              uVar8 = puVar2[1];
              lVar10 = lVar10 + 2;
              *puVar3 = *puVar2;
              puVar3[1] = uVar8;
              uVar8 = puVar2[2];
              uVar6 = puVar2[3];
              uVar7 = puVar2[5];
              puVar3[4] = puVar2[4];
              puVar3[5] = uVar7;
              puVar3[2] = uVar8;
              puVar3[3] = uVar6;
              lVar1 = *(long *)(param_1 + 0x28) + lVar11;
              lVar11 = lVar11 + 0x60;
              uVar8 = *(undefined8 *)(lVar1 + 0x38);
              puVar3[6] = *(undefined8 *)(lVar1 + 0x30);
              puVar3[7] = uVar8;
              uVar8 = *(undefined8 *)(lVar1 + 0x40);
              uVar6 = *(undefined8 *)(lVar1 + 0x48);
              uVar7 = *(undefined8 *)(lVar1 + 0x58);
              puVar3[10] = *(undefined8 *)(lVar1 + 0x50);
              puVar3[0xb] = uVar7;
              puVar3[8] = uVar8;
              puVar3[9] = uVar6;
            } while (uVar4 - (uVar4 & 1) != lVar10);
          }
          if ((uVar4 & 1) != 0) {
            puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar10 * 0x30);
            puVar3 = (undefined8 *)((long)__s + lVar10 * 0x30);
            uVar8 = puVar2[1];
            *puVar3 = *puVar2;
            puVar3[1] = uVar8;
            uVar8 = puVar2[2];
            uVar6 = puVar2[3];
            uVar7 = puVar2[5];
            puVar3[4] = puVar2[4];
            puVar3[5] = uVar7;
            puVar3[2] = uVar8;
            puVar3[3] = uVar6;
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar10 = *(long *)(param_1 + 0x28), lVar10 != 0)) {
          plVar9 = *(long **)(param_1 + 8);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x50))(plVar9,lVar10);
            (**(code **)(*plVar9 + 0x48))
                      (plVar9,lVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar8 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(void **)(param_1 + 0x28) = __s;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar4;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar8;
}


