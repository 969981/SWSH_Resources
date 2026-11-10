/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eca640; name: FUN_00eca640
 */


void FUN_00eca640(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long local_50;
  long local_48;
  
  puVar4 = PTR_DAT_02719530;
  puVar3 = PTR_DAT_02719528;
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    plVar7 = (long *)(*(code *)**(undefined8 **)(*plVar1 + 0x50))();
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar6 = FUN_015b5410();
      *(undefined8 *)puVar4 = uVar6;
      __cxa_guard_release(puVar3);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar4) {
        uVar8 = (**(code **)(*(long *)*plVar1 + 0x88))();
        if ((uVar8 & 1) == 0) {
          (**(code **)(*param_2 + 0x10))(&local_50,param_2);
          local_48 = local_50;
          lVar9 = FUN_00dc4400(param_2);
          if (lVar9 != 0x84222645) {
            FUN_016b06c0(*(undefined8 *)(param_3 + 0x630),&local_48);
            local_50 = local_48;
          }
          if (local_50 == 0) {
            return;
          }
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))((long *)(local_50 + 0x48));
          return;
        }
        break;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


