/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf6da0; name: FUN_00cf6da0
 */


void FUN_00cf6da0(long param_1,short *param_2)

{
  FUN_014ca220(*(undefined8 *)(param_1 + 0x5d0),0,(long)*param_2,4,2,1);
  FUN_014ca220(*(undefined8 *)(param_1 + 0x5d0),1,(long)(char)param_2[1],2,2,1);
  FUN_014ca220(*(undefined8 *)(param_1 + 0x5d0),2,(long)*(char *)((long)param_2 + 3),2,2,1);
  return;
}


