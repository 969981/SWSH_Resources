/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003addb0; name: FUN_003addb0
 */


void FUN_003addb0(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_02712748 + 0x10);
                    /* try { // try from 003addd4 to 003ade3b has its CatchHandler @ 003ade54 */
  FUN_003aa6a0(param_1[2],param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x28))();
    param_1[10] = 0;
  }
  *(undefined2 *)((long)param_1 + 0x4a) = 0;
  memcpy((void *)0x0,(void *)param_1[8],0);
  plVar1 = (long *)param_1[8];
  if ((plVar1 != (long *)0x0) && (plVar1 != param_1 + 4)) {
    FUN_003ddee0(*(undefined8 *)(param_1[2] + 0x48),plVar1,(short)param_1[9]);
  }
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[8] = 0;
  FUN_003c6930(param_1);
  return;
}


