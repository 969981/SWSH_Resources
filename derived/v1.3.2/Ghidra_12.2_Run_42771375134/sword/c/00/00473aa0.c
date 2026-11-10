/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00473aa0; name: FUN_00473aa0
 */


void FUN_00473aa0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  undefined1 local_38;
  
  *(undefined4 *)(param_1 + 0x68) = 3;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = FUN_0046b740();
    puVar2 = PTR_DAT_02712de0;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(param_1 + 0x6c) == 1) {
        if (*(int *)(param_1 + 0x28) != 0) {
          lVar5 = *(long *)(param_1 + 0x38);
          if (lVar5 == 0) {
            puVar7 = *(undefined8 **)(param_1 + 0x20);
            do {
              uVar6 = *puVar7;
              if (*(long *)puVar2 != 0) {
                FUN_004399e0(*(long *)puVar2,uVar6,*(undefined8 *)(param_1 + 0x30),
                             *(undefined4 *)(param_1 + 0x48));
              }
              FUN_00482b70(uVar6,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x48),0,4
                          );
              puVar7 = puVar7 + 1;
            } while (puVar7 != (undefined8 *)
                               (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 8));
          }
          else {
            plVar4 = *(long **)(lVar5 + 0x40);
            if (plVar4 != (long *)0x0) {
              do {
                if ((*(long *)(plVar4[2] + 0x68) != 0) &&
                   (uVar3 = FUN_004797e0(*(long *)(plVar4[2] + 0x68),param_1), (uVar3 & 1) != 0)) {
                  local_38 = 0;
                  local_40 = 0x400000000;
                  FUN_0048c100(plVar4[2],&local_40,1);
                }
                plVar4 = (long *)*plVar4;
              } while (plVar4 != (long *)0x0);
              lVar5 = *(long *)(param_1 + 0x38);
            }
            puVar2 = PTR_DAT_02712de0;
            for (plVar4 = *(long **)(lVar5 + 0x68); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4)
            {
              if (*(int *)(param_1 + 0x28) != 0) {
                puVar7 = *(undefined8 **)(param_1 + 0x20);
                do {
                  uVar3 = FUN_00441d40(plVar4[2],param_1);
                  if ((uVar3 & 1) != 0) {
                    FUN_0043ad30(*(undefined8 *)puVar2,plVar4[2],*puVar7,3);
                  }
                  puVar7 = puVar7 + 1;
                } while (puVar7 != (undefined8 *)
                                   (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 8
                                   ));
              }
            }
          }
        }
      }
      else if ((*(int *)(param_1 + 0x6c) == 0) && (*(long *)(param_1 + 0x18) != 0)) {
        local_38 = 0;
        local_40 = 0x400000000;
        FUN_0048c100(*(long *)(param_1 + 0x18),&local_40,1);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0xffff;
  while (uVar1 != 0) {
    plVar4 = *(long **)(lVar5 + (ulong)uVar1 * 8 + -8);
    *(uint *)(param_1 + 0x28) = uVar1 - 1;
    (**(code **)(*plVar4 + 0x18))();
    lVar5 = *(long *)(param_1 + 0x20);
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_004c4860();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}


