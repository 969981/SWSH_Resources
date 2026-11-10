/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5230; name: FUN_004c5230
 */


void FUN_004c5230(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined1 local_38;
  
  for (plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x40); plVar2 != (long *)0x0;
      plVar2 = (long *)*plVar2) {
    lVar1 = plVar2[2];
    *(undefined4 *)(lVar1 + 0x2b8) = 0xffffffff;
    local_38 = 0;
    local_40 = 0x400000000;
    FUN_0048c100(lVar1,&local_40,1);
  }
  return;
}


