/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040bda0; name: FUN_0040bda0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0040bda0(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[8];
  *param_1 = (long)(PTR_DAT_02712b60 + 0x10);
  puVar3 = PTR_DAT_02712a90;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6;
    do {
      while( true ) {
        if (plVar7 != plVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar8 = (long *)*plVar6;
        param_1[8] = (long)plVar8;
        if (plVar6 == (long *)0x0) break;
        uVar1 = *(undefined4 *)puVar3;
        lVar4 = plVar7[1];
        plVar7[1] = 0;
        if ((lVar4 != 0) && (FUN_00408b50(), plVar7[1] != 0)) {
          FUN_00408b50();
          plVar7[1] = 0;
        }
        FUN_00404870(uVar1,plVar6);
        plVar6 = plVar8;
        plVar7 = (long *)param_1[8];
        if ((long *)param_1[8] == (long *)0x0) goto LAB_0040be3c;
      }
      plVar6 = plVar8;
      plVar7 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB_0040be3c:
  FUN_004b5a50(*(undefined8 *)PTR_DAT_02712b68,param_1);
  puVar5 = (undefined8 *)param_1[6];
  param_1[8] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar5 + 10);
    *(int *)(puVar5 + 10) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      uVar1 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar5)(puVar5);
      FUN_00404870(uVar1,puVar5);
    }
    param_1[6] = 0;
  }
  FUN_004e1630(param_1 + 0xb);
  if (param_1[3] == 0) {
    return;
  }
  FUN_00431200();
  return;
}


