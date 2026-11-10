/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1880; name: FUN_003b1880
 */


void FUN_003b1880(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  code *local_38;
  ulong uStack_30;
  byte local_28 [8];
  
  (**(code **)*param_2)(local_28,param_2);
  if ((local_28[0] >> 2 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x60))(&local_60);
    param_2[1] = local_60;
    param_2[2] = local_58;
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  (**(code **)(**(long **)(param_1 + 0x20) + 0x48))(&local_60);
  param_2[1] = local_60;
  pcVar1 = local_38;
  if ((uStack_30 & 1) != 0) {
    pcVar1 = *(code **)(local_38 + *(long *)(local_50 + ((long)uStack_30 >> 1)));
  }
                    /* try { // try from 003b18f8 to 003b18fb has its CatchHandler @ 003b197c */
  (*pcVar1)();
  (**(code **)(**(long **)(param_1 + 0x20) + 0x58))(&local_60);
  param_2[2] = local_60;
  if ((uStack_30 & 1) != 0) {
    local_38 = *(code **)(local_38 + *(long *)(local_50 + ((long)uStack_30 >> 1)));
  }
                    /* try { // try from 003b1930 to 003b1933 has its CatchHandler @ 003b1978 */
  (*local_38)();
  return;
}


