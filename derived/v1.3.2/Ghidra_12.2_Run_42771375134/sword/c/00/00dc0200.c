/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0200; name: FUN_00dc0200
 */


void FUN_00dc0200(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_2 + 0x458);
  if (plVar4 != *(long **)(param_2 + 0x460)) {
    do {
      if (*plVar4 == *param_3) {
        *param_1 = (long)(PTR_DAT_027164e0 + 0x10);
        lVar3 = plVar4[3];
        param_1[1] = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        param_1[2] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[3] = 0;
        if ((code *)plVar4[6] != (code *)0x0) {
          (*(code *)plVar4[6])(plVar4 + 8,param_1 + 6);
          lVar3 = plVar4[4];
          lVar1 = plVar4[5];
          lVar2 = plVar4[7];
          param_1[4] = plVar4[6];
          param_1[5] = lVar2;
          param_1[2] = lVar3;
          param_1[3] = lVar1;
        }
        param_1[0x12] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x13] = 0;
        if ((code *)plVar4[0x16] != (code *)0x0) {
          (*(code *)plVar4[0x16])(plVar4 + 0x18,param_1 + 0x16);
          lVar3 = plVar4[0x14];
          lVar1 = plVar4[0x15];
          lVar2 = plVar4[0x17];
          param_1[0x14] = plVar4[0x16];
          param_1[0x15] = lVar2;
          param_1[0x12] = lVar3;
          param_1[0x13] = lVar1;
        }
        *param_1 = (long)(PTR_DAT_027164d8 + 0x10);
        return;
      }
      plVar4 = plVar4 + 0x30;
    } while (*(long **)(param_2 + 0x460) != plVar4);
  }
                    /* WARNING: Subroutine does not return */
  memset(param_1,0,0x110);
}


