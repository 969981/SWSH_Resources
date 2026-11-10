/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103cab0; name: FUN_0103cab0
 */


undefined8 FUN_0103cab0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 local_4a0;
  char *local_498;
  undefined8 local_490;
  undefined8 local_470;
  undefined1 *puStack_468;
  undefined8 local_460;
  long local_458;
  undefined1 auStack_70 [16];
  long local_60 [3];
  long local_48;
  
  uVar1 = FUN_012b4090(param_1 + 0x68);
  if ((uVar1 & 1) != 0) {
    local_4a0 = 0xb46a878f6aed717e;
    local_498 = "picfilename";
    local_490 = 0xb;
    FUN_012b4250(auStack_70,param_1 + 0x68,&local_4a0);
    local_470 = 0xcbf29ce484222645;
    puStack_468 = &DAT_01d38550;
    local_460 = 0;
    local_458 = 0;
    FUN_012b4820(local_60,auStack_70,&local_470);
    if (local_458 != 0) {
      (**(code **)(*(long *)(local_458 + 0x48) + 0x18))();
      local_458 = 0;
    }
    if (local_48 == 0) {
      if (local_60[0] != -0x5098ffb379f8bd48) {
LAB_0103cbd0:
                    /* WARNING: Subroutine does not return */
        memset(&local_470,0,0x400);
      }
    }
    else {
      plVar2 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      if (local_60[0] != -0x5098ffb379f8bd48) goto LAB_0103cbd0;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
    }
  }
  return 0;
}


