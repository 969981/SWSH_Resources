/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5290; name: FUN_004c5290
 */


void FUN_004c5290(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_40;
  undefined1 local_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  plVar3 = *(long **)(lVar2 + 0x40);
  if (plVar3 != (long *)0x0) {
    do {
      local_38 = 0;
      local_40 = 0x400000000;
      FUN_0048c250(plVar3[2],&local_40);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  puVar1 = PTR_DAT_02712de0;
  for (plVar3 = *(long **)(lVar2 + 0x68); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    FUN_0043a950(*(undefined8 *)puVar1,plVar3[2]);
  }
  return;
}


