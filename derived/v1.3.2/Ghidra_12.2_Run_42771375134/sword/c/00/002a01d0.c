/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a01d0; name: FUN_002a01d0
 */


void FUN_002a01d0(long param_1,long *param_2)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x1c) * 0xc);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = ~(uint)*(byte *)(param_1 + 0x5c) & 2;
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x30),
               *(int *)(param_1 + 0x20) * ((uVar1 | (uVar1 >> 1) << 2) + 6));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x60),*(int *)(param_1 + 0x20) << 1);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x68),*(int *)(param_1 + 0x20) << 2);
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  (**(code **)(*param_2 + 0x18))(param_2,0x10);
                    /* WARNING: Could not recover jumptable at 0x002a035c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,*(undefined8 *)(param_1 + 0x70),*(int *)(param_1 + 0x20) * 0xc);
  return;
}


