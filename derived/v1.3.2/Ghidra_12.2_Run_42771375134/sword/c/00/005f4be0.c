/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f4be0; name: FUN_005f4be0
 */


undefined8 FUN_005f4be0(long param_1,ulong param_2,ulong param_3)

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
  long *plVar11;
  long lVar12;
  ulong uVar13;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar8 = 1;
  }
  else if (param_2 == 0) {
    plVar9 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar12 = *plVar9, lVar12 != 0)) {
      plVar11 = *(long **)(param_1 + 8);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x50))(plVar11,lVar12);
        (**(code **)(*plVar11 + 0x48))
                  (plVar11,lVar12,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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
                              (plVar9,0x20,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h"
                               ,0x5d1);
      uVar8 = 0;
      if (__s != (void *)0x0) {
        if (0 < (long)param_2) {
                    /* WARNING: Subroutine does not return */
          memset(__s,0,param_2 << 5);
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
          uVar13 = uVar4 & 3;
          if (uVar5 - 1 < 3) {
            lVar10 = 0;
          }
          else {
            lVar12 = 0;
            lVar10 = 0;
            do {
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar12);
              puVar3 = (undefined8 *)((long)__s + lVar12);
              uVar8 = *puVar2;
              uVar6 = puVar2[1];
              lVar10 = lVar10 + 4;
              uVar7 = puVar2[3];
              puVar3[2] = puVar2[2];
              puVar3[3] = uVar7;
              *puVar3 = uVar8;
              puVar3[1] = uVar6;
              lVar1 = *(long *)(param_1 + 0x28) + lVar12;
              uVar8 = *(undefined8 *)(lVar1 + 0x20);
              uVar6 = *(undefined8 *)(lVar1 + 0x28);
              uVar7 = *(undefined8 *)(lVar1 + 0x38);
              puVar3[6] = *(undefined8 *)(lVar1 + 0x30);
              puVar3[7] = uVar7;
              puVar3[4] = uVar8;
              puVar3[5] = uVar6;
              lVar1 = *(long *)(param_1 + 0x28) + lVar12;
              uVar8 = *(undefined8 *)(lVar1 + 0x40);
              uVar6 = *(undefined8 *)(lVar1 + 0x48);
              uVar7 = *(undefined8 *)(lVar1 + 0x58);
              puVar3[10] = *(undefined8 *)(lVar1 + 0x50);
              puVar3[0xb] = uVar7;
              puVar3[8] = uVar8;
              puVar3[9] = uVar6;
              lVar1 = *(long *)(param_1 + 0x28) + lVar12;
              lVar12 = lVar12 + 0x80;
              uVar8 = *(undefined8 *)(lVar1 + 0x60);
              uVar6 = *(undefined8 *)(lVar1 + 0x68);
              uVar7 = *(undefined8 *)(lVar1 + 0x78);
              puVar3[0xe] = *(undefined8 *)(lVar1 + 0x70);
              puVar3[0xf] = uVar7;
              puVar3[0xc] = uVar8;
              puVar3[0xd] = uVar6;
            } while (uVar4 - uVar13 != lVar10);
          }
          if (uVar13 != 0) {
            lVar10 = lVar10 << 5;
            lVar12 = -uVar13;
            do {
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar10);
              puVar3 = (undefined8 *)((long)__s + lVar10);
              uVar8 = *puVar2;
              uVar6 = puVar2[1];
              lVar10 = lVar10 + 0x20;
              uVar7 = puVar2[3];
              lVar12 = lVar12 + 1;
              puVar3[2] = puVar2[2];
              puVar3[3] = uVar7;
              *puVar3 = uVar8;
              puVar3[1] = uVar6;
            } while (lVar12 != 0);
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar12 = *(long *)(param_1 + 0x28), lVar12 != 0)) {
          plVar9 = *(long **)(param_1 + 8);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x50))(plVar9,lVar12);
            (**(code **)(*plVar9 + 0x48))
                      (plVar9,lVar12,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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


