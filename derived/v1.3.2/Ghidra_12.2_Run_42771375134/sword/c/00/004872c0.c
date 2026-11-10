/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004872c0; name: FUN_004872c0
 */


undefined4 FUN_004872c0(long param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_004b3780(param_1 + 0x18);
  do {
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if ((param_4 & 1) == 0) {
      if (*(long *)(param_1 + 0x80) != 0) {
        uVar1 = FUN_004567d0(*(long *)(param_1 + 0x80),param_2,param_3);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
        param_1 = *(long *)(param_1 + 0x78);
        goto joined_r0x004872f8;
      }
      param_4 = 0;
      param_1 = *(long *)(param_1 + 0x78);
    }
    else {
      param_1 = *(long *)(param_1 + 0x78);
joined_r0x004872f8:
      param_4 = 1;
    }
    if (param_1 == 0) {
      return 0;
    }
    uVar1 = FUN_004b3780(param_1 + 0x18,param_2,param_3);
  } while( true );
}


