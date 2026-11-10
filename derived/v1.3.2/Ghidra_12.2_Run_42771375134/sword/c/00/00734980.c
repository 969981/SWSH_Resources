/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00734980; name: FUN_00734980
 */


void FUN_00734980(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0)) {
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_0199bf30(&local_70);
    puVar4 = PTR_DAT_027155e8;
    local_70 = CONCAT44((int)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8)) >> 5),
                        (int)local_70) & 0xfffffffeffffff00;
    uVar9 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
    uVar5 = FUN_0199e360(PTR_DAT_027155e8,&local_70);
    uVar6 = FUN_0199e450(puVar4,&local_70);
    FUN_006f1b70(&local_90,uVar9,1,uVar5,uVar6);
    *(long *)(param_1 + 0x98) = local_90;
    if (*(long *)(param_1 + 0xa0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    *(long *)(param_1 + 0xa0) = local_88;
    *(undefined8 *)(param_1 + 0xa8) = local_80;
    *(undefined8 *)(param_1 + 0xb0) = local_78;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0xffffffffffffffff;
    local_78 = 0;
    FUN_006f6820(&local_90);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    lVar1 = param_1 + 0x58;
    uVar5 = FUN_006f6880(param_1 + 0x98);
    FUN_0199e530(lVar1,PTR_DAT_027155e8,&local_70,uVar5,*(undefined8 *)(param_1 + 0xa8),
                 *(undefined8 *)(param_1 + 0xb0));
    FUN_0199e6b0(lVar1);
    puVar3 = *(undefined8 **)(param_1 + 0xc0);
    for (puVar2 = *(undefined8 **)(param_1 + 0xb8); puVar2 != puVar3; puVar2 = puVar2 + 2) {
      uVar10 = (ulong)*(int *)(puVar2 + 1);
      if (*(int *)(puVar2 + 1) < *(int *)((long)puVar2 + 0xc)) {
        do {
          lVar11 = *(long *)(param_1 + 0xe8) + uVar10 * 0x40;
          lVar12 = *(long *)(lVar11 + 8);
          lVar11 = *(long *)(lVar11 + 0x20);
          if (lVar11 != 0) {
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
          }
          lVar7 = (long)*(int *)(puVar2 + 1);
          if (lVar7 < (long)uVar10) {
            plVar8 = (long *)(*(long *)(param_1 + 0xe8) + lVar7 * 0x40 + 8);
            do {
              if (*plVar8 == lVar12) {
                lVar12 = plVar8[-1];
                if (lVar12 != 0) {
                  (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
                  goto LAB_00734b80;
                }
                break;
              }
              lVar7 = lVar7 + 1;
              plVar8 = plVar8 + 8;
            } while (lVar7 < (long)uVar10);
          }
          (**(code **)(*param_2 + 0x10))
                    (&local_90,param_2,*(long *)(param_1 + 0xe8) + uVar10 * 0x40,*puVar2);
          lVar12 = local_90;
LAB_00734b80:
          local_98 = lVar12;
          FUN_00723ae0(*(long *)(param_1 + 0xe8) + uVar10 * 0x40,&local_98,lVar1,uVar10 & 0xffffffff
                      );
          if (local_98 != 0) {
            (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
            local_98 = 0;
          }
          if (lVar11 != 0) {
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
          }
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)*(int *)((long)puVar2 + 0xc));
      }
    }
    FUN_0199e6c0(lVar1);
  }
  return;
}


