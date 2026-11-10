/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7a9c0; name: FUN_00a7a9c0
 */


undefined8 FUN_00a7a9c0(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x580) + 400))();
  if (((((((uVar1 & 1) == 0) ||
         (uVar1 = FUN_00ad4c10(*(undefined8 *)(param_1 + 0x580)), (uVar1 & 1) != 0)) &&
        ((uVar1 = (**(code **)(**(long **)(param_1 + 0x588) + 400))(), (uVar1 & 1) == 0 ||
         (uVar1 = FUN_00ad4c10(*(undefined8 *)(param_1 + 0x588)), (uVar1 & 1) != 0)))) &&
       ((uVar1 = (**(code **)(**(long **)(param_1 + 0x590) + 400))(), (uVar1 & 1) == 0 ||
        (uVar1 = FUN_00ad4c10(*(undefined8 *)(param_1 + 0x590)), (uVar1 & 1) != 0)))) &&
      ((uVar1 = (**(code **)(**(long **)(param_1 + 0x598) + 400))(), (uVar1 & 1) == 0 ||
       (uVar1 = FUN_00ad4c10(*(undefined8 *)(param_1 + 0x598)), (uVar1 & 1) != 0)))) &&
     ((((uVar1 = (**(code **)(**(long **)(param_1 + 0x5a0) + 400))(), (uVar1 & 1) == 0 ||
        (uVar1 = FUN_00ad4c10(*(undefined8 *)(param_1 + 0x5a0)), (uVar1 & 1) != 0)) &&
       ((uVar1 = (**(code **)(**(long **)(param_1 + 0x5a8) + 400))(), (uVar1 & 1) == 0 ||
        (uVar1 = FUN_00ad4c10(*(undefined8 *)(param_1 + 0x5a8)), (uVar1 & 1) != 0)))) &&
      ((uVar1 = (**(code **)(**(long **)(param_1 + 0x5b0) + 400))(), (uVar1 & 1) == 0 ||
       (uVar1 = FUN_00ad4c10(*(undefined8 *)(param_1 + 0x5b0)), (uVar1 & 1) != 0)))))) {
    return 1;
  }
  return 0;
}


