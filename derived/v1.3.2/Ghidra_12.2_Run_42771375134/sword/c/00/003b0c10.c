/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b0c10; name: FUN_003b0c10
 */


void FUN_003b0c10(long param_1,void *param_2,void *param_3)

{
  code *pcVar1;
  void *local_68;
  int local_60;
  long local_58;
  code *local_40;
  ulong uStack_38;
  
  if (param_2 != (void *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x40))(&local_68);
    if (local_68 != param_2) {
                    /* try { // try from 003b0c60 to 003b0c67 has its CatchHandler @ 003b0d14 */
      memcpy(local_68,param_2,(ulong)(uint)(local_60 - (int)local_68) & 0xfffffff0);
    }
    pcVar1 = local_40;
    if ((uStack_38 & 1) != 0) {
      pcVar1 = *(code **)(local_40 + *(long *)(local_58 + ((long)uStack_38 >> 1)));
    }
                    /* try { // try from 003b0c80 to 003b0c83 has its CatchHandler @ 003b0d44 */
    (*pcVar1)();
  }
  if (param_3 != (void *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x50))(&local_68);
    if (local_68 != param_3) {
                    /* try { // try from 003b0cb4 to 003b0cbb has its CatchHandler @ 003b0cec */
      memcpy(local_68,param_3,(ulong)(uint)(local_60 - (int)local_68) & 0xfffffff0);
    }
    if ((uStack_38 & 1) != 0) {
      local_40 = *(code **)(local_40 + *(long *)(local_58 + ((long)uStack_38 >> 1)));
    }
                    /* try { // try from 003b0cd4 to 003b0cd7 has its CatchHandler @ 003b0d40 */
    (*local_40)();
  }
  return;
}


