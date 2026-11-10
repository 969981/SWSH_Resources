/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c2b30; name: FUN_004c2b30
 */


void FUN_004c2b30(long param_1,undefined8 *param_2,byte *param_3,undefined4 param_4,uint param_5,
                 uint param_6,int param_7)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((((*param_3 & 0xf0) != 0xf0 && (*param_3 & 0x80) != 0) && (*(char *)(param_1 + 0x50) == '\0'))
     && (plVar1 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20), plVar1 != (long *)0x0)
     ) {
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)param_3;
    *(undefined4 *)((long)plVar1 + 0xc) = param_4;
    *(uint *)(plVar1 + 2) = param_5 & 0x3fffffff | (param_6 & 1) << 0x1e | param_7 << 0x1f;
    plVar1[3] = 0;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    plVar2 = param_2 + 1;
    if (*plVar2 == 0) {
      plVar1[3] = 0;
      *plVar2 = (long)plVar1;
    }
    else {
      lVar4 = *plVar2;
      lVar5 = 0;
      do {
        lVar3 = lVar4;
        lVar4 = lVar3;
        if ((*(uint *)((long)plVar1 + 0xc) < *(uint *)(lVar3 + 0xc)) ||
           ((*(uint *)(lVar3 + 0xc) == *(uint *)((long)plVar1 + 0xc) &&
            ((((*(uint *)(lVar3 + 0x10) >> 0x1e & 1) != 0 &&
              ((*(byte *)((long)plVar1 + 0x13) >> 6 & 1) == 0)) ||
             ((-1 < (int)*(uint *)(lVar3 + 0x10) && ((int)plVar1[2] < 0)))))))) goto LAB_004c2c38;
        lVar4 = *(long *)(lVar3 + 0x18);
        lVar5 = lVar3;
      } while (lVar4 != 0);
      lVar3 = 0;
LAB_004c2c38:
      plVar1[3] = lVar4;
      if (lVar5 != 0) {
        plVar2 = (long *)(lVar5 + 0x18);
      }
      *plVar2 = (long)plVar1;
      if (lVar3 != 0) {
        return;
      }
    }
    *param_2 = plVar1;
  }
  return;
}


