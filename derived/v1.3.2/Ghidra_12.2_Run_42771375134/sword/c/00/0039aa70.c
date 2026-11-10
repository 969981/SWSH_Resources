/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039aa70; name: FUN_0039aa70
 */


void FUN_0039aa70(long *param_1,int param_2)

{
  long *plVar1;
  
  if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0x12) = 1;
    return;
  }
  FUN_0039ab70(param_1);
  plVar1 = (long *)*param_1;
  if (param_2 == 0) {
    if ((int)param_1[5] == 1) {
      (**(code **)(*plVar1 + 0x90))(plVar1,1);
      plVar1 = (long *)*param_1;
    }
    (**(code **)(*plVar1 + 0x20))();
    plVar1 = (long *)param_1[6];
    if ((int)param_1[0xb] == 1) {
      (**(code **)(*plVar1 + 0x90))(plVar1,1);
      plVar1 = (long *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x20))();
  }
  else {
    if ((plVar1 != (long *)0x0) && ((int)param_1[5] == 1)) {
      (**(code **)(*plVar1 + 0x90))(plVar1,1);
    }
    plVar1 = (long *)param_1[6];
    if ((plVar1 != (long *)0x0) && ((int)param_1[0xb] == 1)) {
      (**(code **)(*plVar1 + 0x90))(plVar1,1);
    }
  }
  *(bool *)(param_1 + 0x12) = param_2 != 0;
  return;
}


