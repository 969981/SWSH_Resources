/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01419800; name: FUN_01419800
 */


long FUN_01419800(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_60 [3];
  long local_48;
  
  plVar2 = *(long **)(param_1 + 0x78);
  plVar4 = *(long **)(param_1 + 0x80);
  lVar5 = *param_2;
  lVar3 = param_2[3];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  do {
    if (plVar4 == plVar2) {
LAB_0141988c:
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      if ((*(long **)(param_1 + 0x80) != plVar4) && (lVar3 = *plVar4, lVar3 != 0)) {
        plVar2 = (long *)(*(code *)**(undefined8 **)(lVar3 + 0x50))((undefined8 *)(lVar3 + 0x50));
        lVar5 = FUN_01419910();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar5) {
            return lVar3;
          }
        }
      }
      return 0;
    }
    FUN_006cf0c0(local_60,*plVar2 + 0x5c0);
    lVar1 = local_60[0];
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar1 == lVar5) {
      plVar4 = plVar2;
      goto LAB_0141988c;
    }
    plVar2 = plVar2 + 1;
  } while( true );
}


