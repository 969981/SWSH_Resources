/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c94410; name: FUN_00c94410
 */


undefined4 FUN_00c94410(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  byte bVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  bool bVar13;
  undefined4 local_7c;
  long local_78;
  long local_70;
  long *local_68;
  
  puVar3 = PTR_DAT_0271c490;
  puVar2 = PTR_DAT_0271c488;
  puVar1 = PTR_DAT_0271c1f0;
  local_7c = 1;
  uVar12 = 0;
  do {
    uVar6 = FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + uVar12 * 0xc + 0x2e3));
    FUN_00c825a0(&local_68);
    plVar10 = local_68;
    if ((*(uint *)((long)param_1 + uVar12 * 4 + 0x5b0) | 1) == 3) {
      plVar7 = (long *)(**(code **)local_68[10])(local_68 + 10);
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
        uVar5 = FUN_00c95940();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(puVar3);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar2) {
          (**(code **)(plVar10[9] + 0x10))(plVar10 + 9);
          bVar13 = false;
          goto LAB_00c94560;
        }
      }
      plVar10 = (long *)0x0;
      bVar13 = true;
LAB_00c94560:
      (**(code **)(*param_1 + 0xd8))(&local_70,param_1);
      if (local_70 == 0) {
LAB_00c945b8:
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = *(undefined8 **)(local_70 + 0x60);
        if (puVar11 != (undefined8 *)0x0) {
          plVar7 = (long *)(**(code **)*puVar11)(puVar11);
          if (((*PTR_DAT_0271c1e8 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_0271c1e8), iVar4 != 0)) {
            uVar5 = FUN_00706e40();
            *(undefined8 *)puVar1 = uVar5;
            __cxa_guard_release(PTR_DAT_0271c1e8);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)puVar1) {
              puVar11 = puVar11 + -10;
              goto LAB_00c945bc;
            }
          }
          goto LAB_00c945b8;
        }
      }
LAB_00c945bc:
      (**(code **)(*plVar10 + 0x98))(&local_78,plVar10);
      FUN_01061270(puVar11,&local_78);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      if (!bVar13) {
        (**(code **)(plVar10[9] + 0x18))(plVar10 + 9);
      }
      if ((local_68 == (long *)0x0) || (uVar8 = (**(code **)(*local_68 + 0x88))(), (uVar8 & 1) != 0)
         ) {
        FUN_00c82700(uVar6);
        (**(code **)(*local_68 + 0x68))();
        goto LAB_00c94650;
      }
      bVar9 = 0;
      local_7c = 0;
    }
    else {
LAB_00c94650:
      bVar9 = 1;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(local_68[9] + 0x18))();
      local_68 = (long *)0x0;
    }
    uVar12 = uVar12 + 1;
    if (!(bool)(bVar9 & uVar12 < 0x10)) {
      return local_7c;
    }
  } while( true );
}


