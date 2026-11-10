/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00455740; name: FUN_00455740
 */


void FUN_00455740(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x100);
  do {
    if (plVar1 == (long *)0x0) {
      plVar1 = *(long **)(param_1 + 0x128);
joined_r0x00455824:
      while( true ) {
        if (plVar1 == (long *)0x0) {
          return;
        }
        if (*(int *)(plVar1 + 1) == param_2) break;
        plVar1 = (long *)*plVar1;
      }
      *(undefined1 *)((long)plVar1 + 0x2c) = 0;
      if (plVar1[4] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00455848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)plVar1[2])(*(undefined4 *)(plVar1 + 5),plVar1 + 2,5,1);
        return;
      }
      FUN_004be340(*(undefined8 *)PTR_DAT_02712b18,plVar1[4],5,0,4,1);
      return;
    }
    if (*(int *)(plVar1 + 1) == param_2) {
      *(undefined1 *)((long)plVar1 + 0x2c) = 0;
      if (plVar1[4] == 0) {
        (**(code **)plVar1[2])(*(undefined4 *)(plVar1 + 5),plVar1 + 2,0,1);
        plVar1 = *(long **)(param_1 + 0x128);
      }
      else {
        FUN_004be340(*(undefined8 *)PTR_DAT_02712b18,plVar1[4],0,0,4,1);
        plVar1 = *(long **)(param_1 + 0x128);
      }
      goto joined_r0x00455824;
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}


