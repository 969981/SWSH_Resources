/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006832f0; name: FUN_006832f0
 */


undefined8 FUN_006832f0(long *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 400))(param_1,*param_2,1);
  (**(code **)(*param_1 + 400))(param_1,param_2[1],1);
  (**(code **)(*param_1 + 400))(param_1,param_2[2],1);
  (**(code **)(*param_1 + 400))(param_1,param_2[3],1);
  return 1;
}


