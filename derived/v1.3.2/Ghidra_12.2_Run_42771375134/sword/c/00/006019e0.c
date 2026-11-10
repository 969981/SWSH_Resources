/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006019e0; name: FUN_006019e0
 */


undefined8 FUN_006019e0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar2 = 1;
  }
  else if (param_2 == 0) {
    plVar3 = (long *)(param_1 + 0x28);
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar4 = *plVar3, lVar4 != 0)) {
      plVar6 = *(long **)(param_1 + 8);
      if (plVar6 != (long *)0x0) {
        lVar9 = (**(code **)(*plVar6 + 0x50))(plVar6,lVar4);
        if (lVar9 != 0) {
          lVar5 = lVar4;
          do {
            FUN_0060af00(lVar5);
            lVar9 = lVar9 + -1;
            lVar5 = lVar5 + 0x98;
          } while (lVar9 != 0);
        }
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,lVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
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
      uVar7 = *(ulong *)(param_1 + 0x10);
      lVar4 = (**(code **)(*plVar3 + 0x40))
                        (plVar3,0x98,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1
                        );
      uVar2 = 0;
      if (lVar4 != 0) {
        if (0 < (long)param_2) {
          lVar9 = lVar4;
          uVar8 = param_2;
          do {
            FUN_0060aec0(lVar9);
            lVar9 = lVar9 + 0x98;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar8 = param_2;
        if (uVar7 <= param_2) {
          uVar8 = uVar7;
        }
        if ((uVar8 != 0) && ((param_3 & 1) != 0)) {
          uVar1 = param_2;
          if (uVar7 <= param_2) {
            uVar1 = uVar7;
          }
          if (uVar1 == 1) {
            lVar9 = 0;
          }
          else {
            lVar5 = 0;
            lVar9 = 0;
            do {
              memcpy((void *)(lVar4 + lVar5),(void *)(*(long *)(param_1 + 0x28) + lVar5),0x98);
              memcpy((void *)(lVar4 + lVar5 + 0x98),
                     (void *)(*(long *)(param_1 + 0x28) + lVar5 + 0x98),0x98);
              lVar9 = lVar9 + 2;
              lVar5 = lVar5 + 0x130;
            } while (uVar8 - (uVar8 & 1) != lVar9);
          }
          if ((uVar8 & 1) != 0) {
            memcpy((void *)(lVar4 + lVar9 * 0x98),(void *)(*(long *)(param_1 + 0x28) + lVar9 * 0x98)
                   ,0x98);
          }
        }
        if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
           (lVar9 = *(long *)(param_1 + 0x28), lVar9 != 0)) {
          plVar3 = *(long **)(param_1 + 8);
          if (plVar3 != (long *)0x0) {
            lVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,lVar9);
            if (lVar5 != 0) {
              lVar10 = lVar9;
              do {
                FUN_0060af00(lVar10);
                lVar5 = lVar5 + -1;
                lVar10 = lVar10 + 0x98;
              } while (lVar5 != 0);
            }
            (**(code **)(*plVar3 + 0x48))
                      (plVar3,lVar9,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar2 = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(long *)(param_1 + 0x28) = lVar4;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(ulong *)(param_1 + 0x10) = uVar8;
        *(ulong *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return uVar2;
}


