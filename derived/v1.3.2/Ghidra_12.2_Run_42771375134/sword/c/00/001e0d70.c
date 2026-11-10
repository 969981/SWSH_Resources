/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e0d70; name: FUN_001e0d70
 */


void FUN_001e0d70(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  plVar7 = (long *)(**(code **)(*param_2 + 8))(param_2);
  lVar9 = param_1[1];
  if (lVar9 != 0) {
    uVar3 = *(uint *)(lVar9 + 0x50);
    uVar11 = (ulong)uVar3;
    if (uVar3 == 0) {
      bVar4 = false;
    }
    else {
      uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(*(long *)(lVar9 + 0x48) + 8));
      uVar5 = ~uVar5 & 1;
      if (uVar3 != 1) {
        lVar10 = uVar11 - 1;
        lVar9 = 0x18;
        do {
          uVar6 = (**(code **)(*plVar7 + 0x10))
                            (plVar7,*(undefined8 *)(*(long *)(param_1[1] + 0x48) + lVar9));
          uVar5 = uVar5 + (~uVar6 & 1);
          lVar10 = lVar10 + -1;
          lVar9 = lVar9 + 0x10;
        } while (lVar10 != 0);
      }
      bVar4 = uVar5 != 0;
      if (uVar5 == 0) {
        lVar9 = param_1[1];
        bVar4 = false;
      }
      else {
        lVar9 = FUN_001b9960(*(undefined8 *)PTR_DAT_02711048);
        if (uVar5 < uVar3) {
          if ((*(uint *)(lVar9 + 0x54) & 0x7fffffff) < uVar3 - uVar5) {
            FUN_001e1ee0(lVar9);
          }
          lVar10 = 0;
          do {
            while( true ) {
              puVar1 = (undefined1 *)(*(long *)(param_1[1] + 0x48) + lVar10);
              uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(puVar1 + 8));
              if ((uVar8 & 1) != 0) break;
LAB_001e0eb4:
              lVar10 = lVar10 + 0x10;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) goto LAB_001e0ef8;
            }
            uVar3 = *(uint *)(lVar9 + 0x50);
            if (uVar3 < (*(uint *)(lVar9 + 0x54) & 0x7fffffff)) {
              puVar2 = (undefined1 *)(*(long *)(lVar9 + 0x48) + (ulong)uVar3 * 0x10);
              *puVar2 = *puVar1;
              *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
              *(uint *)(lVar9 + 0x50) = uVar3 + 1;
              goto LAB_001e0eb4;
            }
            FUN_001e2070(lVar9,puVar1);
            lVar10 = lVar10 + 0x10;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        else {
          bVar4 = true;
        }
      }
    }
LAB_001e0ef8:
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,lVar9,0x58);
    if (((*(char *)(lVar9 + 0x40) == '\0') && (*(long *)(lVar9 + 0x48) != 0)) &&
       ((*(uint *)(lVar9 + 0x54) & 0x7fffffff) != 0 || *(int *)(lVar9 + 0x50) != 0)) {
      (**(code **)(*param_2 + 0x10))(param_2,*(long *)(lVar9 + 0x48),*(uint *)(lVar9 + 0x54) << 4);
    }
    if (bVar4) {
      FUN_001b9ad0(*(undefined8 *)PTR_DAT_02711048,lVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001e0f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,*param_1);
  return;
}


