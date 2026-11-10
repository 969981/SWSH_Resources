/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d81b0; name: FUN_014d81b0
 */


void FUN_014d81b0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_68;
  undefined4 local_54;
  
  plVar8 = *(long **)(param_1 + 8);
  puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x30,8);
  puVar4 = PTR_DAT_02710860;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar6 + 0x80) < 0x10) {
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    puVar5[4] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5[2] = 0;
    puVar5[3] = plVar8;
    plVar1 = (long *)(param_1 + 0x41b88);
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar11 = (long *)*plVar1;
    *plVar1 = (long)puVar5;
    if (plVar11 != (long *)0x0) {
      lVar6 = *plVar11;
      if (lVar6 != 0) {
        plVar11[1] = lVar6;
        (**(code **)(*(long *)plVar11[3] + 0x18))((long *)plVar11[3],lVar6,plVar11[2] - lVar6,4);
      }
      (**(code **)(**(long **)(param_1 + 0x41b90) + 0x18))
                (*(long **)(param_1 + 0x41b90),plVar11,*(undefined8 *)(param_1 + 0x41b98),
                 *(undefined8 *)(param_1 + 0x41ba0));
    }
    *(long **)(param_1 + 0x41b90) = plVar8;
    *(undefined8 *)(param_1 + 0x41b98) = 0x30;
    *(undefined8 *)(param_1 + 0x41ba0) = 8;
    puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x30,8);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar6 + 0x80) < 0x10) {
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      puVar5[4] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      puVar5[2] = 0;
      puVar5[3] = plVar8;
      plVar11 = (long *)(param_1 + 0x836b0);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      plVar10 = (long *)*plVar11;
      *plVar11 = (long)puVar5;
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        if (lVar6 != 0) {
          plVar10[1] = lVar6;
          (**(code **)(*(long *)plVar10[3] + 0x18))((long *)plVar10[3],lVar6,plVar10[2] - lVar6,4);
        }
        (**(code **)(**(long **)(param_1 + 0x836b8) + 0x18))
                  (*(long **)(param_1 + 0x836b8),plVar10,*(undefined8 *)(param_1 + 0x836c0),
                   *(undefined8 *)(param_1 + 0x836c8));
      }
      *(long **)(param_1 + 0x836b8) = plVar8;
      *(undefined8 *)(param_1 + 0x836c0) = 0x30;
      *(undefined8 *)(param_1 + 0x836c8) = 8;
      param_2 = (undefined8 *)*param_2;
      if (param_2 != (undefined8 *)0x0) {
        puVar3 = (undefined4 *)param_2[1];
        for (puVar9 = (undefined4 *)*param_2; puVar9 != puVar3; puVar9 = puVar9 + 1) {
          while( true ) {
            local_54 = *puVar9;
            lVar6 = *plVar1;
            puVar2 = *(undefined4 **)(lVar6 + 8);
            if (puVar2 == *(undefined4 **)(lVar6 + 0x10)) {
              FUN_007cd650(lVar6,&local_54);
            }
            else {
              uVar12 = *(undefined8 *)(lVar6 + 0x18);
              lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
              if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_014d84d8;
              *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
              *puVar2 = local_54;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
              *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 4;
            }
            lVar6 = *plVar11;
            local_68 = 0xffffffff00000000;
            puVar5 = *(undefined8 **)(lVar6 + 8);
            if (*(undefined8 **)(lVar6 + 0x10) <= puVar5) break;
            uVar12 = *(undefined8 *)(lVar6 + 0x18);
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_014d84d8;
            *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            *puVar5 = local_68;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 8;
            puVar9 = puVar9 + 1;
            if (puVar3 == puVar9) {
              return;
            }
          }
          FUN_014d8b20(lVar6,&local_68);
        }
      }
      return;
    }
  }
LAB_014d84d8:
                    /* WARNING: Subroutine does not return */
  abort();
}


