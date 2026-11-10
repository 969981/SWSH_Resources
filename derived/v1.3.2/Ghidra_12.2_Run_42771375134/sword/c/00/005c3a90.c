/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c3a90; name: FUN_005c3a90
 */


/* WARNING: Control flow encountered bad instruction data */

void * FUN_005c3a90(long param_1,size_t param_2,long param_3,int param_4,long param_5,int param_6)

{
  size_t __size;
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_60 [16];
  
  FUN_005c8860(auStack_60,param_1 + 8,1);
  if (*PTR_DAT_02713e98 == '\0' || *PTR_DAT_02713eb0 != '\0') {
    pvVar2 = malloc(param_2);
  }
  else {
    pvVar2 = (void *)0x0;
    if (param_2 != 0) {
      __size = param_2 + (long)param_4 + 0x4c;
      if (1 < param_4) {
        __size = __size + (long)(param_4 + -1) & (long)-param_4;
      }
      plVar3 = malloc(__size);
      if (plVar3 == (long *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        lVar5 = *(long *)(&LAB_00280050 + param_1);
        uVar4 = (long)plVar3 + 0x4c;
        plVar3[6] = param_5;
        *plVar3 = 0;
        plVar3[1] = 0;
        if (0 < param_4) {
          uVar4 = uVar4 + (long)(param_4 + -1) & (long)-param_4;
        }
        plVar3[2] = uVar4;
        plVar3[3] = lVar5;
        plVar3[7] = (long)param_6;
        plVar3[4] = param_2;
        plVar3[5] = param_3;
        *(int *)(uVar4 - 0xc) = (int)uVar4 - (int)plVar3;
        *(undefined8 *)(plVar3[2] + -8) = 0;
        *(long *)(&LAB_00280050 + param_1) = *(long *)(&LAB_00280050 + param_1) + 1;
        if ((*(long *)(&LAB_00280078 + param_1) != 0) &&
           (plVar3[3] == *(long *)(&LAB_00280078 + param_1))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((*(long *)(&LAB_00280080 + param_1) != 0) &&
           (plVar3[2] == *(long *)(&LAB_00280080 + param_1))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((-1 < *(long *)(&LAB_00280088 + param_1)) &&
           (plVar3[4] == *(long *)(&LAB_00280088 + param_1))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar4 = (ulong)*(ushort *)(plVar3 + 2);
        plVar6 = (long *)(param_1 + uVar4 * 0x28 + 0x48);
        if (*plVar6 == 0) {
          *plVar6 = (long)plVar3;
          plVar6 = (long *)(param_1 + uVar4 * 0x28 + 0x50);
        }
        else {
          plVar6 = (long *)(param_1 + uVar4 * 0x28 + 0x50);
          *(long **)(*plVar6 + 8) = plVar3;
          *plVar3 = *plVar6;
        }
        *plVar6 = (long)plVar3;
        lVar5 = param_1 + uVar4 * 0x28;
        *(long *)(lVar5 + 0x58) = *(long *)(lVar5 + 0x58) + 1;
        uVar4 = *(long *)(&LAB_00280038 + param_1) + param_2;
        *(ulong *)(&LAB_00280038 + param_1) = uVar4;
        uVar1 = *(long *)(&LAB_00280060 + param_1) + __size;
        *(ulong *)(&LAB_00280060 + param_1) = uVar1;
        if (*(ulong *)(&LAB_00280040 + param_1) < uVar4) {
          *(ulong *)(&LAB_00280040 + param_1) = uVar4;
        }
        if (*(ulong *)(&LAB_00280068 + param_1) < uVar1) {
          *(ulong *)(&LAB_00280068 + param_1) = uVar1;
        }
        pvVar2 = (void *)plVar3[2];
        uVar4 = *(ulong *)(&LAB_00280070 + param_1);
        if (*(ulong *)(&LAB_00280070 + param_1) <= (ulong)((long)pvVar2 + plVar3[4])) {
          uVar4 = (long)pvVar2 + plVar3[4];
        }
        *(ulong *)(&LAB_00280070 + param_1) = uVar4;
        uVar4 = *(long *)(&LAB_00280048 + param_1) + 1;
        *(ulong *)(&LAB_00280048 + param_1) = uVar4;
        if (*(ulong *)(&LAB_00280058 + param_1) < uVar4) {
          *(ulong *)(&LAB_00280058 + param_1) = uVar4;
        }
      }
    }
  }
  FUN_005c88a0(auStack_60);
  return pvVar2;
}


