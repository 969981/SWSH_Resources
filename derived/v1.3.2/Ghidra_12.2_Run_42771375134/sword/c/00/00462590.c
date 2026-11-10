/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00462590; name: FUN_00462590
 */


void FUN_00462590(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_2[0xc];
  param_2[0xc] = 0;
  (**(code **)(*param_1 + 0x28))();
  param_1[1] = param_2[1];
  plVar1 = (long *)param_2[2];
  param_1[2] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    if (plVar1[0xe] == 0) {
      plVar1[0xe] = (long)param_1;
      param_1[0xb] = 0;
    }
    else {
      param_1[0xb] = plVar1[0xe];
      plVar1[0xe] = (long)param_1;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  param_2[1] = 0;
  (**(code **)(*param_2 + 0x28))(param_2);
  param_1[0xc] = lVar2;
  return;
}


