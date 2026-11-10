/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006966f0; name: FUN_006966f0
 */


void FUN_006966f0(undefined8 *param_1,long *param_2,uint param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((param_3 & 1) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}


