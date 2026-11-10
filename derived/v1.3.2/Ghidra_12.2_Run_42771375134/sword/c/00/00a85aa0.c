/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a85aa0; name: FUN_00a85aa0
 */


void FUN_00a85aa0(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0xb98) != '\0') {
    plVar1 = *(long **)(param_1 + 0xba0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x198))(plVar1,1);
      FUN_00aae3d0(*(undefined8 *)(param_1 + 0xba0));
    }
    plVar1 = *(long **)(param_1 + 0xba8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x198))(plVar1,1);
      FUN_00aae3d0(*(undefined8 *)(param_1 + 0xba8));
    }
    plVar1 = *(long **)(param_1 + 0xbb0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x198))(plVar1,1);
      FUN_00aae3d0(*(undefined8 *)(param_1 + 0xbb0));
    }
    plVar1 = *(long **)(param_1 + 3000);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x198))(plVar1,1);
      FUN_00aae3d0(*(undefined8 *)(param_1 + 3000));
    }
    plVar1 = *(long **)(param_1 + 0xbc0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x198))(plVar1,1);
    }
    if (*(char *)(param_1 + 0xb98) != '\0') {
      FUN_00a855e0(param_1,0,2);
      return;
    }
  }
  return;
}


