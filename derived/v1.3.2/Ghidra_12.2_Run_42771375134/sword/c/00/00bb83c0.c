/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb83c0; name: FUN_00bb83c0
 */


void FUN_00bb83c0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char acStack_80 [64];
  long local_38;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x100;
    snprintf(acStack_80,0x40,"anime_L_marker_set_00_L_%02d",0);
    iVar3 = FUN_00878830(param_2,0);
    FUN_00bb8ff0(&local_38,acStack_80,&PTR_s__default_02637ab8 + iVar3);
    puVar2 = (undefined8 *)PTR_PTR_02710928;
    puVar1 = (undefined8 *)PTR_PTR_02710928;
    if (local_38 != 0) {
      puVar1 = (undefined8 *)(local_38 + 0x60);
    }
    FUN_00ffcf80(param_1,*puVar1);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    snprintf(acStack_80,0x40,"anime_L_marker_set_00_L_%02d",1);
    iVar3 = FUN_00878830(param_2,1);
    FUN_00bb8ff0(&local_38,acStack_80,&PTR_s__default_02637ab8 + iVar3);
    puVar1 = puVar2;
    if (local_38 != 0) {
      puVar1 = (undefined8 *)(local_38 + 0x60);
    }
    FUN_00ffcf80(param_1,*puVar1);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    snprintf(acStack_80,0x40,"anime_L_marker_set_00_L_%02d",2);
    iVar3 = FUN_00878830(param_2,2);
    FUN_00bb8ff0(&local_38,acStack_80,&PTR_s__default_02637ab8 + iVar3);
    puVar1 = puVar2;
    if (local_38 != 0) {
      puVar1 = (undefined8 *)(local_38 + 0x60);
    }
    FUN_00ffcf80(param_1,*puVar1);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    snprintf(acStack_80,0x40,"anime_L_marker_set_00_L_%02d",3);
    iVar3 = FUN_00878830(param_2,3);
    FUN_00bb8ff0(&local_38,acStack_80,&PTR_s__default_02637ab8 + iVar3);
    puVar1 = puVar2;
    if (local_38 != 0) {
      puVar1 = (undefined8 *)(local_38 + 0x60);
    }
    FUN_00ffcf80(param_1,*puVar1);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    snprintf(acStack_80,0x40,"anime_L_marker_set_00_L_%02d",4);
    iVar3 = FUN_00878830(param_2,4);
    FUN_00bb8ff0(&local_38,acStack_80,&PTR_s__default_02637ab8 + iVar3);
    puVar1 = puVar2;
    if (local_38 != 0) {
      puVar1 = (undefined8 *)(local_38 + 0x60);
    }
    FUN_00ffcf80(param_1,*puVar1);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    snprintf(acStack_80,0x40,"anime_L_marker_set_00_L_%02d",5);
    iVar3 = FUN_00878830(param_2,5);
    FUN_00bb8ff0(&local_38,acStack_80,&PTR_s__default_02637ab8 + iVar3);
    if (local_38 != 0) {
      puVar2 = (undefined8 *)(local_38 + 0x60);
    }
    FUN_00ffcf80(param_1,*puVar2);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


