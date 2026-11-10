/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067cdb0; name: FUN_0067cdb0
 */


undefined8 FUN_0067cdb0(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  void *__s;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar6 = 1;
  }
  else if (param_2 == 0) {
    plVar7 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar10 = *plVar7, lVar10 != 0)) {
      plVar9 = *(long **)(param_1 + 8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x50))(plVar9,lVar10);
        (**(code **)(*plVar9 + 0x48))
                  (plVar9,lVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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
      uVar11 = *(ulong *)(param_1 + 0x10);
      __s = (void *)(**(code **)(*plVar7 + 0x40))
                              (plVar7,0x10,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h"
                               ,0x5d1);
      uVar6 = 0;
      if (__s != (void *)0x0) {
        if (0 < (long)param_2) {
                    /* WARNING: Subroutine does not return */
          memset(__s,0,param_2 << 4);
        }
        uVar4 = param_2;
        if (uVar11 <= param_2) {
          uVar4 = uVar11;
        }
        if ((uVar4 != 0) && ((param_3 & 1) != 0)) {
          uVar5 = param_2;
          if (uVar11 <= param_2) {
            uVar5 = uVar11;
          }
          uVar11 = uVar4 & 3;
          if (uVar5 - 1 < 3) {
            lVar8 = 0;
          }
          else {
            lVar10 = 0;
            lVar8 = 0;
            do {
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar10);
              puVar3 = (undefined8 *)((long)__s + lVar10);
              uVar6 = puVar2[1];
              lVar8 = lVar8 + 4;
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              lVar1 = *(long *)(param_1 + 0x28) + lVar10;
              uVar6 = *(undefined8 *)(lVar1 + 0x18);
              puVar3[2] = *(undefined8 *)(lVar1 + 0x10);
              puVar3[3] = uVar6;
              lVar1 = *(long *)(param_1 + 0x28) + lVar10;
              uVar6 = *(undefined8 *)(lVar1 + 0x28);
              puVar3[4] = *(undefined8 *)(lVar1 + 0x20);
              puVar3[5] = uVar6;
              lVar1 = *(long *)(param_1 + 0x28) + lVar10;
              lVar10 = lVar10 + 0x40;
              uVar6 = *(undefined8 *)(lVar1 + 0x38);
              puVar3[6] = *(undefined8 *)(lVar1 + 0x30);
              puVar3[7] = uVar6;
            } while (uVar4 - uVar11 != lVar8);
          }
          if (uVar11 != 0) {
            lVar8 = lVar8 << 4;
            lVar10 = -uVar11;
            do {
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar8);
              puVar3 = (undefined8 *)((long)__s + lVar8);
              uVar6 = puVar2[1];
              lVar8 = lVar8 + 0x10;
              lVar10 = lVar10 + 1;
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
            } while (lVar10 != 0);
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar10 = *(long *)(param_1 + 0x28), lVar10 != 0)) {
          plVar7 = *(long **)(param_1 + 8);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x50))(plVar7,lVar10);
            (**(code **)(*plVar7 + 0x48))
                      (plVar7,lVar10,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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


