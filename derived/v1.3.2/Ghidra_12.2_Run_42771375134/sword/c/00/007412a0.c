/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007412a0; name: FUN_007412a0
 */


void FUN_007412a0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *plStack_38;
  
  lVar3 = param_1[1] - *param_1;
  if ((ulong)((lVar3 >> 5) * -0x71c71c71c71c71c7) <
      (ulong)((param_1[2] - *param_1 >> 5) * -0x71c71c71c71c71c7)) {
    plVar1 = param_1 + 3;
    local_40 = (long *)0x0;
    plStack_38 = plVar1;
    if (lVar3 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3,0x10);
      if (local_58 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xb8))();
      }
    }
    local_50 = (long *)(local_58 + (lVar3 >> 5) * 0x20);
    local_48 = local_50;
    local_40 = local_50;
    FUN_007417a0(param_1,&local_58);
    plVar1 = local_50;
    if (local_48 != local_50) {
      puVar2 = PTR_DAT_02710800 + 0x10;
      plVar5 = local_48;
      do {
        local_48 = plVar5 + -0x24;
        *local_48 = (long)puVar2;
        plVar6 = plVar5 + -0x23;
        if (*plVar6 == 0) {
          *plVar6 = 0;
          pcVar4 = (code *)plVar5[-0x11];
        }
        else {
          FUN_006e2100();
          lVar3 = *plVar6;
          *plVar6 = 0;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          }
          pcVar4 = (code *)plVar5[-0x11];
        }
        if (pcVar4 != (code *)0x0) {
          plVar5[-0x10] = 0;
          plVar5[-0xf] = 0;
          plVar5[-0x12] = 0;
          plVar5[-0x11] = 0;
          (*pcVar4)(plVar5 + -0xe);
        }
        pcVar4 = (code *)plVar5[-0x21];
        if (pcVar4 != (code *)0x0) {
          plVar5[-0x20] = 0;
          plVar5[-0x1f] = 0;
          plVar5[-0x21] = 0;
          plVar5[-0x22] = 0;
          (*pcVar4)(plVar5 + -0x1e);
        }
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          *plVar6 = 0;
        }
        plVar5 = local_48;
      } while (local_48 != plVar1);
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)*plStack_38 + 0x18))
                ((long *)*plStack_38,local_58,(long)local_40 - local_58,0x10);
    }
  }
  return;
}


