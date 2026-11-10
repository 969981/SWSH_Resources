/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011421e0; name: FUN_011421e0
 */


long FUN_011421e0(long param_1,long *param_2)

{
  long local_28;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_01143070(param_1,&local_28,(char)param_2[1],*(undefined1 *)((long)param_2 + 9),
               *(undefined2 *)((long)param_2 + 10),(long)param_2 + 0xc);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  *(char *)(param_1 + 0x28) = (char)param_2[5];
  local_28 = param_2[6];
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_01143070(param_1 + 0x30,&local_28,(char)param_2[7],*(undefined1 *)((long)param_2 + 0x39),
               *(undefined2 *)((long)param_2 + 0x3a),(long)param_2 + 0x3c);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  *(char *)(param_1 + 0x58) = (char)param_2[0xb];
  local_28 = param_2[0xc];
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_01143070(param_1 + 0x60,&local_28,(char)param_2[0xd],*(undefined1 *)((long)param_2 + 0x69),
               *(undefined2 *)((long)param_2 + 0x6a),(long)param_2 + 0x6c);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  *(char *)(param_1 + 0x88) = (char)param_2[0x11];
  local_28 = param_2[0x12];
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_01143070(param_1 + 0x90,&local_28,(char)param_2[0x13],*(undefined1 *)((long)param_2 + 0x99),
               *(undefined2 *)((long)param_2 + 0x9a),(long)param_2 + 0x9c);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  *(char *)(param_1 + 0xb8) = (char)param_2[0x17];
  *(int *)(param_1 + 0xc0) = (int)param_2[0x18];
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((long)param_2 + 0xc4);
  *(char *)(param_1 + 200) = (char)param_2[0x19];
  return param_1;
}


