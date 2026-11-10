/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fafd50; name: FUN_00fafd50
 */


void FUN_00fafd50(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long local_98 [2];
  undefined1 *local_88;
  long local_80;
  long local_78;
  long local_68;
  
  puVar1 = PTR_DAT_02710788;
  lVar4 = 0;
  plVar5 = (long *)(param_1 + 0xe0);
  do {
    if ((param_3 & 1) == 0) {
      FUN_014bb440(local_98,&DAT_026652f0 + lVar4);
      FUN_00a8ba70(&local_68,*(undefined8 *)puVar1,0,local_98,0,param_2,0);
      if (plVar5[-0x11] != 0) {
        (**(code **)(*(long *)(plVar5[-0x11] + 0x48) + 0x18))();
        plVar5[-0x11] = 0;
      }
      lVar2 = local_68;
      plVar5[-0x11] = local_68;
      if (local_68 != 0) {
        plVar3 = (long *)(local_68 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        if ((plVar5[-0x10] != 0) || (*plVar5 != 0)) {
          FUN_006e1e70(lVar2,plVar5 + -0x12,1);
        }
        FUN_006e1be0(lVar2);
        goto LAB_00fafeb8;
      }
    }
    else {
      FUN_014bb440(local_98,&DAT_026652f0 + lVar4);
      FUN_00a8ba70(&local_68,*(undefined8 *)puVar1,1,local_98,0,param_2,0);
      if (plVar5[-0x11] != 0) {
        (**(code **)(*(long *)(plVar5[-0x11] + 0x48) + 0x18))();
        plVar5[-0x11] = 0;
      }
      lVar2 = local_68;
      plVar5[-0x11] = local_68;
      if (local_68 != 0) {
        plVar3 = (long *)(local_68 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        if ((plVar5[-0x10] != 0) || (*plVar5 != 0)) {
          FUN_006e1e70(lVar2,plVar5 + -0x12,1);
        }
LAB_00fafeb8:
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    lVar4 = lVar4 + 0x18;
    plVar5 = plVar5 + 0x22;
    if (lVar4 == 0x108) {
      return;
    }
  } while( true );
}


