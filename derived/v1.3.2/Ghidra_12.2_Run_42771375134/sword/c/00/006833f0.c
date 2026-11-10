/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006833f0; name: FUN_006833f0
 */


undefined8 FUN_006833f0(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char local_14;
  char local_13;
  char local_12;
  
  (**(code **)(*param_1 + 0xa8))(param_1,&local_14,4,0);
  if (local_14 == -1) {
    if (local_13 != -2) {
      return 0;
    }
    pcVar2 = *(code **)(*param_1 + 0x98);
    uVar1 = 2;
  }
  else {
    if (local_14 != -0x11) {
      return 0;
    }
    if (local_13 != -0x45) {
      return 0;
    }
    if (local_12 != -0x41) {
      return 0;
    }
    pcVar2 = *(code **)(*param_1 + 0x98);
    uVar1 = 3;
  }
  (*pcVar2)(param_1,uVar1);
  return 1;
}


