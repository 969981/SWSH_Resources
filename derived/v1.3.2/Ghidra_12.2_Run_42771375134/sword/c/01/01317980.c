/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01317980; name: FUN_01317980
 */


void FUN_01317980(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,long param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long local_60;
  long local_58;
  ulong local_50;
  undefined1 auStack_48 [8];
  
  if (param_6 == 0) {
LAB_01317a84:
    if (*param_2 != 0) {
      plVar5 = (long *)(*param_2 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    return;
  }
  lVar1 = *param_2;
  lVar2 = *(long *)(lVar1 + 0x68);
  *(long *)(lVar1 + 0x68) = lVar2 + 1;
  *(long *)(lVar1 + lVar2 * 8 + 0x70) = param_6;
  local_58 = *param_2;
  local_50 = 0xffffffffffffffff;
  uVar3 = *(ulong *)(local_58 + 0x68);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      if (*(long *)(local_58 + uVar4 * 8 + 0x70) == param_6) {
        local_50 = uVar4;
        if (uVar4 < uVar3) {
          local_60 = FUN_01317f20(auStack_48,*(undefined8 *)(local_58 + 8),&local_58,&local_50);
          if (local_60 != 0) {
            (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
          }
          FUN_012e8950(param_6,&local_60,param_3,param_4,param_5 & 1);
          if (local_60 != 0) {
            (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
            local_60 = 0;
          }
          goto LAB_01317a84;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


