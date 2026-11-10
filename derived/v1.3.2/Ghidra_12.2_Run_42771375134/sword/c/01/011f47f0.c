/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f47f0; name: FUN_011f47f0
 */


undefined8 FUN_011f47f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_38 [2];
  long local_28;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_017cd170(local_38);
  *(undefined8 *)(param_1 + 0x70) = local_38[0];
  FUN_017cd170(local_38);
  *(undefined8 *)(param_1 + 0x78) = local_38[0];
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar1 = 0;
  if (*(long *)PTR_DAT_02718f20 != 0) {
    FUN_011ffb60(&local_28);
    if (local_28 == 0) {
      return 0;
    }
    lVar2 = *(long *)(local_28 + 0x28);
    if (lVar2 == 0) {
      return 0;
    }
    thunk_FUN_0195dab0(local_38,500);
    uVar1 = 1;
    *(long *)(param_1 + 0x80) = lVar2;
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  return uVar1;
}


