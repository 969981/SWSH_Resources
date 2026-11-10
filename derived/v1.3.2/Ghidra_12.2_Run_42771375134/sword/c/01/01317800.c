/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01317800; name: FUN_01317800
 */


void FUN_01317800(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long local_78;
  long local_70;
  long local_68;
  ulong local_60;
  undefined1 auStack_58 [8];
  
  if (param_6 == 0) {
LAB_01317910:
    local_78 = *param_2;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
    }
    FUN_01317980(param_1,&local_78,param_3,param_4,0,param_7);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    return;
  }
  lVar1 = *param_2;
  lVar2 = *(long *)(lVar1 + 0x68);
  *(long *)(lVar1 + 0x68) = lVar2 + 1;
  *(long *)(lVar1 + lVar2 * 8 + 0x70) = param_6;
  local_68 = *param_2;
  local_60 = 0xffffffffffffffff;
  uVar3 = *(ulong *)(local_68 + 0x68);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      if (*(long *)(local_68 + uVar4 * 8 + 0x70) == param_6) {
        local_60 = uVar4;
        if (uVar4 < uVar3) {
          local_70 = FUN_01317f20(auStack_58,*(undefined8 *)(local_68 + 8),&local_68,&local_60);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
          }
          FUN_012e8950(param_6,&local_70,param_3,param_4,param_5 & 1);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          goto LAB_01317910;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


