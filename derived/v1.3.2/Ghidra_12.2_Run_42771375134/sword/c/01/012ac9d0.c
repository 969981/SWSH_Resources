/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ac9d0; name: FUN_012ac9d0
 */


void FUN_012ac9d0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_02727380 + 0x10);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  param_1[2] = *(long *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = *(long *)(param_2 + 0x28);
  param_1[6] = (long)(PTR_DAT_027167e8 + 0x10);
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = (long)(param_1 + 7);
  param_1[10] = 0x10;
  FUN_017d05f0(param_1 + 6,*(undefined8 *)(param_2 + 0x48),0xffffffffffffffff);
  lVar2 = *(long *)(param_2 + 0x58);
  plVar1 = (long *)(param_2 + 0x68);
  plVar5 = param_1 + 0xd;
  *plVar5 = 0;
  param_1[0xe] = 0;
  param_1[0xb] = lVar2;
  param_1[0xc] = (long)plVar5;
  if (*(long **)(param_2 + 0x60) != plVar1) {
    plVar6 = *(long **)(param_2 + 0x60);
    do {
      while( true ) {
        FUN_012acbe0(param_1 + 0xc,plVar5,plVar6 + 4,plVar6 + 4);
        plVar3 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) break;
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
LAB_012acac8:
        if (plVar6 == plVar1) {
          return;
        }
      }
      plVar3 = plVar6 + 2;
      plVar4 = (long *)*plVar3;
      if ((long *)*plVar4 != plVar6) {
        do {
          lVar2 = *plVar3;
          plVar3 = (long *)(lVar2 + 0x10);
          plVar6 = (long *)*plVar3;
        } while (*plVar6 != lVar2);
        goto LAB_012acac8;
      }
      plVar6 = plVar4;
    } while (plVar4 != plVar1);
  }
  return;
}


