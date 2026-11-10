/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a8b8d0; name: FUN_00a8b8d0
 */


void FUN_00a8b8d0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  long local_58;
  long local_50;
  undefined1 auStack_40 [8];
  long local_38;
  long local_28;
  
  lVar3 = *param_1;
  FUN_006e2db0(auStack_40,*(long *)(lVar3 + 0x938),*(undefined8 *)(*(long *)(lVar3 + 0x938) + 400));
  FUN_00a75450(&local_70,"bin/battle/waza/particle/ee090/ee090_finder00_cam.ptcl");
  FUN_00a8ba70(&local_28,*(undefined8 *)PTR_DAT_02710788,0,&local_70,0,param_1[1],auStack_40);
  if (*(long *)(lVar3 + 0xa48) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar3 + 0xa48) + 0x48) + 0x18))();
    *(undefined8 *)(lVar3 + 0xa48) = 0;
  }
  *(long *)(lVar3 + 0xa48) = local_28;
  if (local_28 != 0) {
    plVar2 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(lVar3 + 0xa50) != 0) || (*(long *)(lVar3 + 0xad0) != 0)) {
      FUN_006e1e70(local_28,lVar3 + 0xa40,1);
    }
    FUN_006e1be0(local_28);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if ((local_58 != 0) && (local_70 != 0)) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  local_70 = 0;
  uStack_68 = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (*(long *)(lVar3 + 0x938) == 0) {
    *(undefined8 *)(lVar3 + 0x938) = 0;
  }
  else {
    FUN_006e2100(*(long *)(lVar3 + 0x938),lVar3 + 0x930);
    lVar1 = *(long *)(lVar3 + 0x938);
    *(undefined8 *)(lVar3 + 0x938) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


