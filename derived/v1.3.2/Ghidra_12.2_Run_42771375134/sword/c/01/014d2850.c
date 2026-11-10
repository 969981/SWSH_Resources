/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d2850; name: FUN_014d2850
 */


void FUN_014d2850(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 local_74;
  long *local_70;
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_DAT_02710860;
  local_70 = *(long **)(param_1 + 8);
  uVar5 = 0;
  local_74 = 100;
  plVar6 = (long *)(param_1 + 0x5e8);
  while( true ) {
    plVar2 = local_70;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) break;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2);
    }
    FUN_0077d050(lVar4,0x25);
    *(long **)(lVar4 + 8) = plVar2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (plVar6[-1] != 0) {
      (**(code **)(*(long *)(plVar6[-1] + 0x48) + 0x18))();
      plVar6[-1] = 0;
    }
    plVar2 = local_70;
    plVar6[-1] = lVar4;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) break;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2);
    }
    FUN_0077d050(lVar4,199);
    *(long **)(lVar4 + 8) = plVar2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*plVar6 != 0) {
      (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
      *plVar6 = 0;
    }
    *plVar6 = lVar4;
    uVar5 = uVar5 + 1;
    plVar6 = plVar6 + 6;
    if (99 < uVar5) {
      lVar3 = FUN_014d52b0(auStack_68,local_70,&local_74,&local_70);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x18a0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x18a0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x18a0) = 0;
      }
      *(long *)(param_1 + 0x18a0) = lVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


