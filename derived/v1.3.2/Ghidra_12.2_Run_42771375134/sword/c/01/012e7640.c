/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e7640; name: FUN_012e7640
 */


bool FUN_012e7640(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  long local_28;
  
  if (*(long *)(param_1 + 0x4f8) == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = FUN_0130e360();
    bVar1 = false;
    if ((((uVar2 & 1) != 0) && (*(uint *)(param_1 + 0x500) < 5)) &&
       ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) != 0)) {
      if ((*(long *)(param_1 + 0x4f8) == 0) || (uVar2 = FUN_0130e360(), (uVar2 & 1) == 0)) {
        bVar1 = *param_2 == 0;
      }
      else {
        FUN_0130e3b0(&local_28,*(undefined8 *)(param_1 + 0x4f8));
        bVar1 = *param_2 == local_28;
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        }
      }
    }
  }
  return bVar1;
}


