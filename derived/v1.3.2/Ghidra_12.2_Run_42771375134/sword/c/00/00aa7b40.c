/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa7b40; name: FUN_00aa7b40
 */


void FUN_00aa7b40(long param_1,int param_2)

{
  long lVar1;
  long local_48;
  undefined1 auStack_40 [24];
  long local_28;
  
  if (*(int *)(param_1 + 0x10) == param_2) {
    lVar1 = *(long *)PTR_DAT_027107a8;
    FUN_0010d170(&local_48,"Set_State_Tension_normal");
    FUN_006cf0c0(auStack_40,&local_48);
    FUN_008962c0(lVar1 + 0x108,auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return;
}


