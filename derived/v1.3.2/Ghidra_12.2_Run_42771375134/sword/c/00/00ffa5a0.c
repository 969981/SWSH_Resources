/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffa5a0; name: FUN_00ffa5a0
 */


void FUN_00ffa5a0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long local_40;
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x5a0);
  if (param_2 != (long *)0x0) {
    FUN_00ffa900(param_2[0xb4]);
    (**(code **)(*param_2 + 0x10))(&local_40,param_2);
    local_38 = local_40;
    local_40 = 0;
    plVar3 = *(long **)(lVar1 + 0x20);
    if (plVar3 < *(long **)(lVar1 + 0x28)) {
      uVar5 = *(undefined8 *)(lVar1 + 0x30);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar6 = local_38;
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      local_38 = 0;
      *plVar3 = lVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 8;
    }
    else {
      FUN_00ffaff0(lVar1 + 0x18,&local_38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    lVar6 = param_2[0xb4];
    lVar1 = *(long *)(lVar1 + 8);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))((long *)(lVar1 + 0x48));
      puVar4 = *(undefined8 **)(lVar1 + 0x60);
      if (puVar4 != (undefined8 *)0x0) {
        plVar3 = (long *)(**(code **)*puVar4)(puVar4);
        lVar2 = FUN_00ffb220();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar2) {
            (**(code **)(puVar4[-10] + 0x10))(&local_38,puVar4 + -10);
            if (*(long *)(lVar6 + 0x10) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar6 + 0x10) + 0x48) + 0x18))();
              *(undefined8 *)(lVar6 + 0x10) = 0;
            }
            *(long *)(lVar6 + 0x10) = local_38;
            if (lVar1 == 0) {
              return;
            }
            goto LAB_00ffa710;
          }
        }
      }
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar6 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = 0;
    }
    *(undefined8 *)(lVar6 + 0x10) = 0;
    if (lVar1 != 0) {
LAB_00ffa710:
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
  }
  return;
}


