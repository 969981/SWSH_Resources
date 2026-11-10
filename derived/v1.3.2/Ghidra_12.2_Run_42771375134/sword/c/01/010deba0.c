/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010deba0; name: FUN_010deba0
 */


void FUN_010deba0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  long local_30;
  undefined4 local_24;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    local_24 = 0;
    FUN_010dffd0(&local_30,param_1,0,&local_24);
    FUN_010d3a20(lVar1,&local_30,local_24);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    FUN_010dffd0(&local_38,param_1,1,&local_24);
    FUN_010d3b30(uVar2,&local_38,local_24);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


