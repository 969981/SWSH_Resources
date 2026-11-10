/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4470; name: FUN_004a4470
 */


void FUN_004a4470(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_28;
  
  plVar2 = DAT_02739028;
  do {
    if (plVar2 == (long *)0x0) {
      return;
    }
    while( true ) {
      lVar3 = plVar2[8];
      local_28 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
      if ((lVar3 != 0) && (FUN_004865e0(lVar3,plVar2,&local_28,uVar1 & 1), plVar2[8] == 0)) break;
      plVar2 = (long *)plVar2[1];
      if (plVar2 == (long *)0x0) {
        return;
      }
    }
    plVar2[8] = lVar3;
    plVar2 = (long *)plVar2[1];
  } while( true );
}


