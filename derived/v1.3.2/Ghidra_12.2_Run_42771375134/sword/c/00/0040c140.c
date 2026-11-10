/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040c140; name: FUN_0040c140
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0040c140(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_02712a90;
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4;
    do {
      while( true ) {
        if (plVar5 != plVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar6 = (long *)*plVar4;
        *(long **)(param_1 + 0x40) = plVar6;
        if (plVar4 == (long *)0x0) break;
        uVar1 = *(undefined4 *)puVar2;
        lVar3 = plVar5[1];
        plVar5[1] = 0;
        if ((lVar3 != 0) && (FUN_00408b50(), plVar5[1] != 0)) {
          FUN_00408b50();
          plVar5[1] = 0;
        }
        FUN_00404870(uVar1,plVar4);
        plVar4 = plVar6;
        plVar5 = *(long **)(param_1 + 0x40);
        if (*(long **)(param_1 + 0x40) == (long *)0x0) {
          return;
        }
      }
      plVar4 = plVar6;
      plVar5 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


