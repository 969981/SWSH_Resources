/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e49c0; name: FUN_006e49c0
 */


bool FUN_006e49c0(long param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  char acStack_40 [16];
  
  uVar7 = *(ulong *)(param_1 + 0xd0);
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    uVar5 = (ulong)(int)param_2;
    if ((uVar8 & uVar7) == 0) {
      uVar6 = uVar8 & uVar5;
      plVar9 = *(long **)(*(long *)(param_1 + 200) + uVar6 * 8);
    }
    else {
      uVar6 = uVar5;
      if (uVar7 <= uVar5) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar5 / uVar7;
        }
        uVar6 = uVar5 - uVar6 * uVar7;
      }
      plVar9 = *(long **)(*(long *)(param_1 + 200) + uVar6 * 8);
    }
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if ((uVar8 & uVar7) == 0) {
        do {
          uVar7 = plVar9[1];
          if (uVar7 != uVar5 && (uVar7 & uVar8) != uVar6) {
            return false;
          }
          if ((uVar7 == uVar5) && (*(uint *)(plVar9 + 2) == param_2)) goto LAB_006e4aa8;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar9[1];
          if (uVar8 == uVar5) {
            if (*(uint *)(plVar9 + 2) == param_2) {
LAB_006e4aa8:
              snprintf(acStack_40,0x10,"aoc%x",param_2);
              iVar2 = nn::fs::QueryMountAddOnContentCacheSize((ulong *)(plVar9 + 3),param_2);
              if (iVar2 != 0) {
                return false;
              }
              plVar10 = *(long **)(param_1 + 8);
              lVar11 = plVar9[3];
              pvVar3 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,lVar11,8);
              lVar4 = plVar9[4];
              plVar9[4] = (long)pvVar3;
              if (lVar4 != 0) {
                (**(code **)(*(long *)plVar9[5] + 0x18))
                          ((long *)plVar9[5],lVar4,plVar9[6],plVar9[7]);
                pvVar3 = (void *)plVar9[4];
              }
              plVar9[5] = (long)plVar10;
              plVar9[6] = lVar11;
              plVar9[7] = 8;
              iVar2 = nn::fs::MountAddOnContent(acStack_40,param_2,pvVar3,plVar9[3]);
              return iVar2 == 0;
            }
          }
          else {
            if (uVar7 <= uVar8) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar1 * uVar7;
            }
            if (uVar8 != uVar6) {
              return false;
            }
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return false;
}


