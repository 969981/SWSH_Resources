/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fc5c0; name: FUN_006fc5c0
 */


void FUN_006fc5c0(long param_1)

{
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x1e0) != '\0') {
    thunk_FUN_006f9fd0(&local_18,param_1 + 0x170);
    if (*(long *)(param_1 + 0x168) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x168) = 0;
    }
    *(undefined8 *)(param_1 + 0x168) = local_18;
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  return;
}


