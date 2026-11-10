/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffac20; name: FUN_00ffac20
 */


bool FUN_00ffac20(long *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *local_138 [4];
  undefined8 *local_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 *local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  
  if (param_2 == (undefined **)0x0) {
    bVar3 = false;
  }
  else {
    FUN_010201f0(local_138);
    plVar4 = (long *)(**(code **)(*(long *)param_1[0xb4] + 0x10))();
    plVar2 = (long *)plVar4[1];
    for (plVar4 = (long *)*plVar4; plVar4 != plVar2; plVar4 = plVar4 + 1) {
      if ((*plVar4 != 0) && (puVar8 = *(undefined8 **)(*plVar4 + 0x60), puVar8 != (undefined8 *)0x0)
         ) {
        plVar5 = (long *)(**(code **)*puVar8)(puVar8);
        lVar6 = FUN_00ffb220();
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)lVar6) {
            puVar8 = puVar8 + -10;
            goto LAB_00ffacbc;
          }
        }
      }
      puVar8 = (undefined8 *)0x0;
LAB_00ffacbc:
      uVar7 = FUN_00ffac20(puVar8,param_2);
      ppuVar1 = local_138;
      if ((uVar7 & 1) == 0) {
        ppuVar1 = param_2;
      }
      param_2 = ppuVar1;
    }
    *(undefined1 *)((long)param_1 + 0x5ca) = 0;
    FUN_00ffcde0(param_1 + 0x20,param_2);
    if (*(char *)((long)param_1 + 0x5ca) != '\0') {
      param_2 = local_138;
    }
    (**(code **)(*param_1 + 0x80))(param_1,param_2);
    puVar8 = local_d8;
    bVar3 = *(char *)((long)param_1 + 0x5ca) != '\0';
    local_138[0] = PTR_DAT_02710a38 + 0x10;
    local_d8 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8);
      (**(code **)(*local_d0 + 0x18))(local_d0,puVar8,uStack_c8,local_c0);
    }
    puVar8 = local_f8;
    local_f8 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8);
      (**(code **)(*local_f0 + 0x18))(local_f0,puVar8,uStack_e8,local_e0);
    }
    puVar8 = local_118;
    local_118 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8);
      (**(code **)(*local_110 + 0x18))(local_110,puVar8,uStack_108,local_100);
    }
  }
  return bVar3;
}


