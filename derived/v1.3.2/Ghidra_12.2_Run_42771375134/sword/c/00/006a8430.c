/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a8430; name: FUN_006a8430
 */


undefined1  [16] FUN_006a8430(long param_1)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [3] [16];
  
  if (*(short *)(param_1 + 10) < 0) {
    local_70 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
  }
  else {
    local_50 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),
                        (float)*(undefined8 *)(param_1 + 0x10) -
                        (float)*(undefined8 *)(param_1 + 0x40));
    uStack_48 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20),
                         (float)*(undefined8 *)(param_1 + 0x18) -
                         (float)*(undefined8 *)(param_1 + 0x48));
    local_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20),
                        (float)*(undefined8 *)(param_1 + 0x20) -
                        (float)*(undefined8 *)(param_1 + 0x50));
    uStack_58 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20),
                         (float)*(undefined8 *)(param_1 + 0x28) -
                         (float)*(undefined8 *)(param_1 + 0x58));
    local_70 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20),
                        (float)*(undefined8 *)(param_1 + 0x30) -
                        (float)*(undefined8 *)(param_1 + 0x60));
    uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20),
                         (float)*(undefined8 *)(param_1 + 0x38) -
                         (float)*(undefined8 *)(param_1 + 0x68));
  }
  FUN_0075e2c0(local_40,&local_50,&local_60,&local_70);
  return local_40[0];
}


