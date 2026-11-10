/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01224a00; name: FUN_01224a00
 */


void FUN_01224a00(long param_1,long param_2)

{
  long *plVar1;
  long local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  
  if (param_2 != 0) {
    plVar1 = (long *)(param_1 + 0x30);
    if ((((*plVar1 != param_2) && (plVar1 = (long *)(param_1 + 0x60), *plVar1 != param_2)) &&
        (plVar1 = (long *)(param_1 + 0x90), *plVar1 != param_2)) &&
       ((plVar1 = (long *)(param_1 + 0xc0), *plVar1 != param_2 &&
        (plVar1 = (long *)(param_1 + 0xf0), *plVar1 != param_2)))) {
      if (*(long *)(param_1 + 0x120) == param_2) {
        plVar1 = (long *)(param_1 + 0x120);
      }
      else if (*(long *)(param_1 + 0x150) == param_2) {
        plVar1 = (long *)(param_1 + 0x150);
      }
      else {
        if (*(long *)(param_1 + 0x180) != param_2) {
          return;
        }
        plVar1 = (long *)(param_1 + 0x180);
      }
    }
    FUN_0121ad80(&local_70);
    *plVar1 = 0;
    plVar1[1] = local_70;
    plVar1[4] = local_58;
    plVar1[5] = lStack_50;
    plVar1[2] = local_68;
    plVar1[3] = lStack_60;
  }
  return;
}


