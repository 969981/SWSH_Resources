/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153d540; name: FUN_0153d540
 */


void FUN_0153d540(long param_1,int *param_2)

{
  long lVar1;
  
  lVar1 = 0xf8;
  if (*param_2 != 0) {
    lVar1 = 0x118;
  }
  FUN_0155b3d0(*(undefined8 *)(param_1 + lVar1));
  lVar1 = 0xf8;
  if (*param_2 != 0) {
    lVar1 = 0x118;
  }
  FUN_0155b180(*(undefined8 *)(param_1 + lVar1));
  return;
}


