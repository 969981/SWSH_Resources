/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcd5c0; name: FUN_00dcd5c0
 */


void FUN_00dcd5c0(char *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  char *local_70;
  long local_68 [2];
  undefined1 *local_58;
  long local_50;
  long local_48;
  long local_38;
  
  if (*param_1 != '\0') {
    local_70 = param_1;
    if (param_3 == 0) {
      FUN_00d43180(local_68,&local_70);
      FUN_00dc8750(&local_38,*(undefined8 *)PTR_DAT_02710788,1,local_68,0,param_2,0);
      lVar1 = *(long *)(param_1 + 0x88);
    }
    else {
      FUN_00d43180(local_68,&local_70);
      FUN_00dc8750(&local_38,*(undefined8 *)PTR_DAT_02710788,1,local_68,0,param_2,param_3);
      lVar1 = *(long *)(param_1 + 0x88);
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      param_1[0x88] = '\0';
      param_1[0x89] = '\0';
      param_1[0x8a] = '\0';
      param_1[0x8b] = '\0';
      param_1[0x8c] = '\0';
      param_1[0x8d] = '\0';
      param_1[0x8e] = '\0';
      param_1[0x8f] = '\0';
    }
    *(long *)(param_1 + 0x88) = local_38;
    if (local_38 != 0) {
      plVar2 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if ((*(long *)(param_1 + 0x90) != 0) || (*(long *)(param_1 + 0x110) != 0)) {
        FUN_006e1e70(local_38,param_1 + 0x80,1);
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
  }
  return;
}


