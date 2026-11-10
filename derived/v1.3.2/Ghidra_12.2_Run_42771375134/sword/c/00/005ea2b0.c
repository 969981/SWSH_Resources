/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ea2b0; name: FUN_005ea2b0
 */


undefined8 FUN_005ea2b0(long param_1,ulong param_2,ulong param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar5 = 1;
  }
  else if (param_2 == 0) {
    plVar6 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (*plVar6 != 0)) {
      plVar8 = *(long **)(param_1 + 8);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x48))
                  (plVar8,*plVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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
      uVar10 = *(ulong *)(param_1 + 0x10);
      lVar7 = (**(code **)(*plVar6 + 0x40))
                        (plVar6,1,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
      uVar3 = param_2;
      if (uVar10 <= param_2) {
        uVar3 = uVar10;
      }
      uVar5 = 0;
      if (lVar7 != 0) {
        if ((uVar3 != 0) && ((param_3 & 1) != 0)) {
          uVar4 = param_2;
          if (uVar10 <= param_2) {
            uVar4 = uVar10;
          }
          if (uVar4 == 1) {
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            do {
              puVar1 = (undefined1 *)(lVar7 + lVar9);
              *puVar1 = *(undefined1 *)(*(long *)(param_1 + 0x28) + lVar9);
              lVar2 = *(long *)(param_1 + 0x28) + lVar9;
              lVar9 = lVar9 + 2;
              puVar1[1] = *(undefined1 *)(lVar2 + 1);
            } while (uVar3 - (uVar3 & 1) != lVar9);
          }
          if ((uVar3 & 1) != 0) {
            *(undefined1 *)(lVar7 + lVar9) = *(undefined1 *)(*(long *)(param_1 + 0x28) + lVar9);
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (*(long *)(param_1 + 0x28) != 0)) {
          plVar6 = *(long **)(param_1 + 8);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x48))
                      (plVar6,*(long *)(param_1 + 0x28),"../../../../Include\\SiCore/SiCore_Array.h"
                       ,0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar5 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(long *)(param_1 + 0x28) = lVar7;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar3;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar5;
}


