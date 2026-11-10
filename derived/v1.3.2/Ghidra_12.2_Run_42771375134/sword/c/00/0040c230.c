/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040c230; name: FUN_0040c230
 */


void FUN_0040c230(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong local_70;
  uint local_68;
  
  puVar3 = PTR_DAT_02712a90;
  plVar6 = (long *)(param_1 + 0x40);
  if ((long *)*plVar6 != (long *)0x0) {
    plVar9 = (long *)*plVar6;
    plVar8 = (long *)0x0;
    do {
      while( true ) {
        plVar7 = plVar9;
        plVar10 = plVar7 + 1;
        lVar4 = plVar7[3];
        if (*plVar10 == 0) break;
        lVar5 = lVar4 - *(int *)((long)plVar7 + 0x24);
        if (lVar5 < (long)(param_2 + (ulong)param_3)) {
          if (param_2 <= lVar5) {
            local_68 = 0;
            local_70 = local_70 & 0xffffffff00000000;
            FUN_004091c0(plVar7[1],&local_70);
            lVar4 = plVar7[3];
          }
          lVar4 = lVar4 + (int)plVar7[5];
          if (param_2 <= lVar4 && lVar4 < (long)(param_2 + (ulong)param_3)) {
            local_70 = 0x400000000;
            local_68 = local_68 & 0xffffff00;
            FUN_00409300(*plVar10,&local_70,(int)lVar4 - (int)param_2);
          }
          if (((*(byte *)(*plVar10 + 0x5a) >> 4 & 1) == 0) &&
             ((*(byte *)(*plVar10 + 0x5a) & 3) != 0)) {
            local_70 = plVar7[3] + 1;
            local_68 = CONCAT31(local_68._1_3_,1);
            (**(code **)(*(long *)plVar7[1] + 0x88))((long *)plVar7[1],param_2,param_3,&local_70);
            lVar4 = plVar7[1];
            if (((*(byte *)(lVar4 + 0x5a) & 0xe) != 0) && (*plVar10 = 0, lVar4 != 0)) {
              FUN_00408b50();
            }
          }
        }
        plVar9 = (long *)*plVar7;
        plVar8 = plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          return;
        }
      }
      plVar9 = (long *)*plVar7;
      if ((long)(lVar4 + (ulong)*(uint *)(plVar7 + 4)) < param_2) {
        plVar1 = plVar6;
        if ((long *)*plVar6 != plVar7) {
          plVar1 = plVar8;
        }
        *plVar1 = (long)plVar9;
        uVar2 = *(undefined4 *)puVar3;
        lVar4 = plVar7[1];
        plVar7[1] = 0;
        if ((lVar4 != 0) && (FUN_00408b50(), *plVar10 != 0)) {
          FUN_00408b50();
          *plVar10 = 0;
        }
        FUN_00404870(uVar2,plVar7);
        plVar7 = plVar8;
      }
      plVar8 = plVar7;
    } while (plVar9 != (long *)0x0);
  }
  return;
}


