/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9f490; name: FUN_00e9f490
 */


void FUN_00e9f490(long *param_1)

{
  int iVar1;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  if ((char)param_1[0x102] != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x188))(param_1,PTR_DAT_0271e8a0,0);
    if (iVar1 == 2) {
      local_40 = 0x4d1e146afda47076;
      local_38 = "ra_wait01_loop";
      local_30 = 0xe;
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      local_40 = 0x248cb78e45b7cfed;
      local_38 = "rl_wait";
      local_30 = 7;
    }
    local_28 = 0;
    (**(code **)(*param_1 + 0x1e8))(DAT_01d4bfc8,0x40a00000,param_1,&local_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


