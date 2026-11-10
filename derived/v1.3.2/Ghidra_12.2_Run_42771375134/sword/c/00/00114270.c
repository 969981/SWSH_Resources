/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00114270; name: FUN_00114270
 */


void FUN_00114270(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x5e0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x600) = 1;
  *(long **)(param_1 + 0x5f8) = param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x20))(param_2);
    *(undefined8 *)(param_1 + 0x5f0) = *(undefined8 *)(*(long *)(param_1 + 0x5f8) + 0x10);
  }
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(long *)(param_1 + 0x588) = lVar1;
  (**(code **)(*(long *)(param_1 + 0x5e0) + 0x20))(lVar1);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(*(long *)(param_1 + 0x588) + 0x10);
  *(undefined4 *)(param_1 + 0x5c8) = 1;
  *(long *)(param_1 + 0x5c0) = lVar1;
  (**(code **)(*(long *)(param_1 + 0x5e0) + 0x20))(lVar1);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x10);
  (**(code **)(**(long **)(param_1 + 0x580) + 0xa0))(*(long **)(param_1 + 0x580),param_1 + 0x570);
  (**(code **)(**(long **)(param_1 + 0x5b8) + 0xa0))(*(long **)(param_1 + 0x5b8),param_1 + 0x5a8);
                    /* WARNING: Could not recover jumptable at 0x00114360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x5f0) + 0xa0))(*(long **)(param_1 + 0x5f0),lVar1);
  return;
}


