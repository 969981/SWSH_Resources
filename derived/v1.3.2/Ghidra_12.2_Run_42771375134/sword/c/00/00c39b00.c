/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c39b00; name: FUN_00c39b00
 */


uint FUN_00c39b00(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    uVar6 = 0;
    if (puVar7 == (undefined8 *)0x0) goto LAB_00c39cac;
    plVar2 = (long *)(**(code **)*puVar7)(puVar7);
    lVar3 = FUN_00be66c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        FUN_00c1cce0(&local_28,puVar7 + -10);
        lVar3 = FUN_00be53f0(&local_28);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
          local_28 = 0;
        }
        if (lVar3 != 0) {
          (**(code **)(**(long **)(lVar3 + 0x90) + 0x10))(&local_28);
          local_30 = local_28;
          uVar4 = FUN_00be5600(&local_30);
          if (local_30 != 0) {
            (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
            local_30 = 0;
          }
          if (uVar4 != 0) {
            FUN_00bdd1d0(&local_28,lVar3);
            FUN_011ffb60(&local_30,*(undefined8 *)PTR_DAT_02718f20);
            if (local_30 == 0) {
              bVar1 = true;
joined_r0x00c39c80:
              uVar6 = (uint)uVar4;
            }
            else {
              local_38 = *(long *)(local_30 + 0x10);
              if (local_38 != 0) {
                (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
              }
              local_40 = local_28;
              if (local_28 != 0) {
                (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
              }
              uVar5 = FUN_00bdfe00(uVar4,&local_38,&local_40,0);
              uVar4 = uVar5 & 0xffffffff;
              uVar6 = (uint)uVar5;
              if (local_40 != 0) {
                (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
                local_40 = 0;
              }
              if (local_38 != 0) {
                (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
                bVar1 = false;
                local_38 = 0;
                goto joined_r0x00c39c80;
              }
              bVar1 = false;
              local_38 = 0;
            }
            if (local_28 != 0) {
              (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
            }
            if (!bVar1) goto LAB_00c39cac;
          }
        }
        break;
      }
    }
  }
  uVar6 = 0;
LAB_00c39cac:
  return uVar6 & 1;
}


