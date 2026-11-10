/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4550; name: FUN_004a4550
 */


void FUN_004a4550(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 local_18;
  
  *param_1 = (long)(PTR_DAT_027133d8 + 0x10);
  local_18 = 0xffffffffffffffff;
  if (param_1[8] != 0) {
    FUN_00486c70(param_1[8],param_1,&local_18,1);
    param_1[8] = 0;
  }
  plVar2 = (long *)0x0;
  if (DAT_02739028 != (long *)0x0) {
    plVar3 = DAT_02739028;
    if (DAT_02739028 != param_1) {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)plVar2[1];
      } while (plVar3 != (long *)0x0 && plVar3 != param_1);
    }
    if (plVar3 != (long *)0x0) {
      plVar1 = (long *)&DAT_02739028;
      if (plVar3 != DAT_02739028) {
        plVar1 = plVar2 + 1;
      }
      *plVar1 = plVar3[1];
    }
  }
  return;
}


