/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8c520; name: FUN_00b8c520
 */


void FUN_00b8c520(long param_1,uint param_2)

{
  undefined4 uVar1;
  long local_18;
  
  if ((*(long *)(param_1 + 0x38) != 0) && (FUN_00b8c580(&local_18), local_18 != 0)) {
    uVar1 = 1;
    if ((param_2 & 1) != 0) {
      uVar1 = 2;
    }
    *(undefined4 *)(local_18 + 0xe0) = uVar1;
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


