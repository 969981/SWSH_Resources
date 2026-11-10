/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bceee0; name: FUN_00bceee0
 */


void FUN_00bceee0(long param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  int local_78;
  int local_74;
  long local_70;
  undefined8 local_68;
  
  if (param_2 == 0) {
    local_68 = 0;
    FUN_00bcfb40(0,param_4,(long)&local_68 + 4,&local_68);
    if (param_7 != 0) {
      iVar5 = 0;
      do {
        if (param_6 != 0) {
          iVar6 = 0;
          do {
            uVar3 = *(undefined8 *)(param_1 + 0x68);
            local_70 = *(long *)(param_1 + 0x78);
            iVar1 = iVar6 + local_68._4_4_ + (iVar5 + (int)local_68) * 6;
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
            }
            FUN_01505e60(uVar3,&local_70,param_3,iVar1);
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
              local_70 = 0;
            }
            uVar4 = FUN_008787d0(*(undefined8 *)(param_1 + 0x78));
            if ((uVar4 & 1) == 0) {
              local_78 = 0;
              uVar3 = *(undefined8 *)(param_1 + 0x68);
              local_80 = *(long *)(param_1 + 0x78);
              local_74 = param_5;
              if (local_80 != 0) {
                (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
              }
              uVar2 = FUN_01507b70(uVar3,&local_74,&local_78,&local_80);
              if (local_80 != 0) {
                (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                local_80 = 0;
              }
              if ((local_74 == param_5 && ((uVar2 ^ 0xffffffff) & 1) == 0) &&
                 ((param_5 != param_3 || (iVar1 != local_78)))) {
                uVar3 = *(undefined8 *)(param_1 + 0x68);
                local_88 = *(long *)(param_1 + 0x78);
                if (local_88 != 0) {
                  (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
                }
                FUN_01505e60(uVar3,&local_88,param_3,iVar1);
                if (local_88 != 0) {
                  (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
                  local_88 = 0;
                }
                uVar4 = FUN_008787d0(*(undefined8 *)(param_1 + 0x78));
                if ((uVar4 & 1) == 0) {
                  uVar3 = *(undefined8 *)(param_1 + 0x68);
                  local_90 = *(long *)(param_1 + 0x78);
                  if (local_90 != 0) {
                    (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
                  }
                  FUN_01506ad0(uVar3,&local_90,*(undefined8 *)(param_1 + 0x58),local_74,local_78);
                  if (local_90 != 0) {
                    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
                    local_90 = 0;
                  }
                  uVar3 = *(undefined8 *)(param_1 + 0x68);
                  local_98 = *(long *)(param_1 + 0x78);
                  if (local_98 != 0) {
                    (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
                  }
                  FUN_01507190(uVar3,param_3,iVar1,&local_98);
                  if (local_98 != 0) {
                    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
                    local_98 = 0;
                  }
                  FUN_0150a0e0(*(undefined8 *)(param_1 + 0x70),param_3,iVar1,local_74,local_78);
                }
              }
            }
            iVar6 = iVar6 + 1;
          } while (param_6 != iVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != param_7);
    }
  }
  else {
    for (; param_7 != 0; param_7 = param_7 + -1) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x60) + 0x58))(*(long **)(param_1 + 0x60),param_4);
      FUN_00866390(*(undefined8 *)(param_1 + 0x78),uVar3);
      local_68 = local_68 & 0xffffffff;
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      local_a0 = *(long *)(param_1 + 0x78);
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x10))();
      }
      uVar4 = FUN_01506920(uVar3,&local_a0,*(undefined8 *)(param_1 + 0x58),param_5,
                           (long)&local_68 + 4);
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      if ((uVar4 & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x60) + 0x38))(*(long **)(param_1 + 0x60),param_4);
      }
    }
  }
  return;
}


