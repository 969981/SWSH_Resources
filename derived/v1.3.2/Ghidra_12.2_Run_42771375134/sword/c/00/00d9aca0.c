/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9aca0; name: FUN_00d9aca0
 */


void FUN_00d9aca0(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_68 [2];
  undefined1 *local_58;
  long local_50;
  long local_48;
  undefined *local_38;
  long local_28;
  
  *(undefined8 *)(param_1 + 0x148) = param_3;
  lVar3 = *param_4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x150);
  *(long *)(param_1 + 0x150) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  local_38 = (&PTR_s_bin_appli_fade_bin_fade_logo_g_0_0264e860)[param_2];
  *(int *)(param_1 + 0x158) = param_2;
  FUN_008d4da0(local_68,&local_38);
  FUN_00d96d30(&local_28,*(undefined8 *)PTR_DAT_02710788,1,local_68,0,
               *(undefined8 *)(param_1 + 0x148),0);
  if (*(long *)(param_1 + 0x248) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x248) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  *(long *)(param_1 + 0x248) = local_28;
  if (local_28 != 0) {
    plVar2 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(param_1 + 0x250) != 0) || (*(long *)(param_1 + 0x2d0) != 0)) {
      FUN_006e1e70(local_28,param_1 + 0x240,1);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if ((local_50 != 0) && (local_68[0] != 0)) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
  }
  local_68[0] = 0;
  local_68[1] = 0xcbf29ce484222645;
  local_58 = &DAT_01d38550;
  local_50 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


