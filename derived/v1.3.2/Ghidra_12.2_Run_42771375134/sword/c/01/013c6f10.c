/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c6f10; name: FUN_013c6f10
 */


void FUN_013c6f10(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_a8 [2];
  undefined1 *local_98;
  long local_90;
  long local_88;
  long local_78;
  long local_70;
  long local_68;
  
  puVar1 = PTR_DAT_02710788;
  lVar4 = 0;
LAB_013c6f60:
  do {
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 8), lVar2 == 0)) {
      FUN_014bb440(local_a8,param_2);
      FUN_00a8a490(&local_78,*(undefined8 *)puVar1,1,local_a8,0,*param_1,0);
      lVar2 = *(long *)((long)param_1 + lVar4 + 0x18);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        *(undefined8 *)((long)param_1 + lVar4 + 0x18) = 0;
      }
      lVar2 = local_78;
      *(long *)((long)param_1 + lVar4 + 0x18) = local_78;
      if (local_78 != 0) {
        plVar3 = (long *)(local_78 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        if ((*(long *)((long)param_1 + lVar4 + 0x20) != 0) ||
           (*(long *)((long)param_1 + lVar4 + 0xa0) != 0)) {
          FUN_006e1e70(lVar2,(long)param_1 + lVar4 + 0x10,1);
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      if ((local_90 != 0) && (local_a8[0] != 0)) {
        (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x18))();
      }
      local_a8[0] = 0;
      local_a8[1] = 0xcbf29ce484222645;
      local_98 = &DAT_01d38550;
      local_90 = 0;
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
    }
    else {
      FUN_006e2db0(&local_78,lVar2,*(undefined8 *)(lVar2 + 400));
      FUN_014bb440(local_a8,param_2);
      FUN_00a8a490(&local_68,*(undefined8 *)puVar1,1,local_a8,0,*param_1,&local_78);
      lVar2 = *(long *)((long)param_1 + lVar4 + 0x18);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        *(undefined8 *)((long)param_1 + lVar4 + 0x18) = 0;
      }
      lVar2 = local_68;
      *(long *)((long)param_1 + lVar4 + 0x18) = local_68;
      if (local_68 != 0) {
        plVar3 = (long *)(local_68 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        if ((*(long *)((long)param_1 + lVar4 + 0x20) != 0) ||
           (*(long *)((long)param_1 + lVar4 + 0xa0) != 0)) {
          FUN_006e1e70(lVar2,(long)param_1 + lVar4 + 0x10,1);
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      if ((local_90 != 0) && (local_a8[0] != 0)) {
        (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x18))();
      }
      local_a8[0] = 0;
      local_a8[1] = 0xcbf29ce484222645;
      local_98 = &DAT_01d38550;
      local_90 = 0;
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
        lVar4 = lVar4 + 0x110;
        param_2 = param_2 + 0x18;
        if (lVar4 == 0x990) {
          return;
        }
        goto LAB_013c6f60;
      }
    }
    lVar4 = lVar4 + 0x110;
    param_2 = param_2 + 0x18;
    if (lVar4 == 0x990) {
      return;
    }
  } while( true );
}


