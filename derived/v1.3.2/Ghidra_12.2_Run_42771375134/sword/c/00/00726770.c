/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00726770; name: FUN_00726770
 */


void FUN_00726770(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = *(long **)(param_1 + 0x368);
  plVar3 = *(long **)(param_1 + 0x370);
  do {
    if (plVar2 == plVar3) {
      *(ulong *)(param_1 + 0x4e0) = *(ulong *)(param_1 + 0x4e0) | 2;
      return;
    }
    plVar4 = (long *)*plVar2;
    plVar1 = (long *)plVar2[1];
    if (plVar4 != plVar1) {
      uVar5 = (long)plVar1 + (-8 - (long)plVar4);
      if (((uint)uVar5 >> 3 & 1) == 0) {
        if (*(int *)(*plVar4 + 0x1dc) != param_2) {
          *(int *)(*plVar4 + 0x1dc) = param_2;
          *(undefined1 *)(*plVar4 + 0x1d8) = 1;
        }
        plVar4 = plVar4 + 1;
      }
      if (7 < uVar5) {
        do {
          while (*(int *)(*plVar4 + 0x1dc) != param_2) {
            *(int *)(*plVar4 + 0x1dc) = param_2;
            *(undefined1 *)(*plVar4 + 0x1d8) = 1;
            lVar6 = plVar4[1];
            if (*(int *)(lVar6 + 0x1dc) != param_2) goto LAB_00726810;
LAB_007267e4:
            plVar4 = plVar4 + 2;
            if (plVar1 == plVar4) goto LAB_00726828;
          }
          lVar6 = plVar4[1];
          if (*(int *)(lVar6 + 0x1dc) == param_2) goto LAB_007267e4;
LAB_00726810:
          *(int *)(lVar6 + 0x1dc) = param_2;
          *(undefined1 *)(plVar4[1] + 0x1d8) = 1;
          plVar4 = plVar4 + 2;
        } while (plVar1 != plVar4);
      }
    }
LAB_00726828:
    plVar2 = plVar2 + 9;
  } while( true );
}


