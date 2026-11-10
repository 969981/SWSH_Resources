/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01108340; name: FUN_01108340
 */


void FUN_01108340(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long local_38;
  long local_30 [2];
  
  local_30[0] = *param_2;
  if (local_30[0] != 0) {
    (**(code **)(*(long *)(local_30[0] + 0x48) + 0x10))();
  }
  local_38 = *param_3;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_011068e0(param_1,local_30,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_30[0] != 0) {
    (**(code **)(*(long *)(local_30[0] + 0x48) + 0x18))();
    local_30[0] = 0;
  }
  puVar1 = PTR_DAT_02724960;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x54] = (long)(puVar1 + 0x128);
  param_1[9] = (long)(puVar1 + 0xc0);
  param_1[10] = (long)(puVar1 + 0x100);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x56,0,0x110);
}


