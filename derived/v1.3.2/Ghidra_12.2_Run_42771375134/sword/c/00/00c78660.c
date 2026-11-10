/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c78660; name: FUN_00c78660
 */


void FUN_00c78660(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar3 = (**(code **)(*param_1 + 0x80))();
  if ((uVar3 & 1) != 0) {
    local_40 = param_1[0x14];
    lVar1 = param_1[0x15];
    local_38 = param_1[0x13];
    if (local_38 == 0) {
      FUN_008d4da0(local_80,&local_40);
    }
    else {
      FUN_00c79360(&local_50,&local_38,&DAT_01cdd9ff);
      FUN_00c792c0(&local_48,&local_50,&local_40);
      FUN_00a83620(local_80,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
    }
    FUN_00a8a490(&local_38,*(undefined8 *)PTR_DAT_02710788,1,local_80,(int)param_1[0x19],
                 param_1[0x11],0);
    if (*(long *)(lVar1 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    lVar2 = local_38;
    *(long *)(lVar1 + 8) = local_38;
    if (local_38 != 0) {
      plVar4 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if ((*(long *)(lVar1 + 0x10) != 0) || (*(long *)(lVar1 + 0x90) != 0)) {
        FUN_006e1e70(lVar2,lVar1,1);
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if ((local_68 != 0) && (local_80[0] != 0)) {
      (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    }
    local_80[0] = 0;
    local_80[1] = 0xcbf29ce484222645;
    local_70 = &DAT_01d38550;
    local_68 = 0;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0xf) = 3;
  }
  return;
}


