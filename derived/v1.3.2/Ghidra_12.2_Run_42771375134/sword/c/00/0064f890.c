/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064f890; name: FUN_0064f890
 */


undefined8 FUN_0064f890(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar3 = 1;
  }
  else if (param_2 == 0) {
    plVar4 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (*plVar4 != 0)) {
      plVar6 = *(long **)(param_1 + 8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar4 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar3 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      uVar9 = *(ulong *)(param_1 + 0x10);
      lVar5 = (**(code **)(*plVar4 + 0x40))
                        (plVar4,8,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
      uVar1 = param_2;
      if (uVar9 <= param_2) {
        uVar1 = uVar9;
      }
      uVar3 = 0;
      if (lVar5 != 0) {
        if ((uVar1 != 0) && ((param_3 & 1) != 0)) {
          uVar2 = param_2;
          if (uVar9 <= param_2) {
            uVar2 = uVar9;
          }
          if (uVar2 == 1) {
            lVar7 = 0;
          }
          else {
            lVar7 = 0;
            do {
              lVar8 = lVar7 * 8;
              lVar7 = lVar7 + 2;
              *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar8);
              ((undefined8 *)(lVar5 + lVar8))[1] =
                   *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar8 + 8);
            } while (uVar1 - (uVar1 & 1) != lVar7);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined8 *)(lVar5 + lVar7 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar7 * 8);
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (*(long *)(param_1 + 0x28) != 0)) {
          plVar4 = *(long **)(param_1 + 8);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x48))
                      (plVar4,*(long *)(param_1 + 0x28),"../../../../Include\\SiCore/SiCore_Array.h"
                       ,0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar3 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(long *)(param_1 + 0x28) = lVar5;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar1;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar3;
}


