/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d1300; name: FUN_006d1300
 */


void FUN_006d1300(long param_1,long *param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x120) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  lVar1 = *param_2;
  *param_2 = 0;
  *(long *)(param_1 + 0x120) = lVar1;
  *(ulong *)(lVar1 + 0x130) = *(ulong *)(lVar1 + 0x130) & 0xfffffffffffffff7;
  FUN_006d1360(param_1,*(undefined8 *)(param_1 + 0x120));
  return;
}


