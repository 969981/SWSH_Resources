/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ce280; name: FUN_007ce280
 */


void FUN_007ce280(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined1 *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  long local_100;
  undefined8 local_f8;
  long *local_a0;
  undefined8 *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 auStack_70 [16];
  
  puVar10 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar10 != puVar1) {
    puVar9 = (undefined4 *)PTR_DAT_02710860;
    do {
      local_f8 = *puVar10;
      local_120 = &LAB_007cfdf0;
      local_118 = FUN_007cff00;
      local_110 = &LAB_007d0110;
      local_108 = &LAB_007d0120;
      local_100 = param_1;
      if (*(long *)(param_1 + 0x18) != 0) {
        plVar11 = *(long **)(param_1 + 8);
        puVar4 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x18,8);
        lVar5 = nn::os::GetTlsValue(*puVar9);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_007ce59c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar11;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        FUN_007d1360(puVar4);
        uVar3 = local_f8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        lVar12 = *(long *)(param_1 + 0x18);
        plVar13 = *(long **)(lVar12 + 8);
        local_a0 = plVar13;
        puVar6 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x28,8);
        lVar5 = nn::os::GetTlsValue(*puVar9);
        if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_007ce59c;
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar13;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        FUN_007d1cb0(puVar6);
        local_88 = 0x28;
        local_80 = 8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        local_98 = puVar6;
        local_90 = plVar13;
        local_78 = puVar6;
        FUN_0075efb0(auStack_70,local_a0,0,1);
        puVar6 = local_78;
        if (*(int *)((long)local_78 + 0x24) == 3) {
          pvVar8 = (void *)local_78[3];
        }
        else {
          FUN_007d1fa0(local_78);
          *(undefined4 *)((long)puVar6 + 0x24) = 3;
          pvVar8 = operator_new(0x18);
          FUN_007d1360();
          puVar6[3] = pvVar8;
        }
        FUN_007d1750(pvVar8,puVar4);
        FUN_0075f0a0(auStack_70);
        uVar7 = FUN_007cf900(lVar12,&local_a0,uVar3);
        FUN_0075efb0(&local_78,local_a0,0,1);
        puVar6 = local_98;
        local_98 = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6);
          (**(code **)(*local_90 + 0x18))(local_90,puVar6,local_88,local_80);
        }
        FUN_0075f0a0(&local_78);
        puVar6 = local_98;
        puVar9 = (undefined4 *)PTR_DAT_02710860;
        local_98 = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6);
          (**(code **)(*local_90 + 0x18))(local_90,puVar6,local_88,local_80);
        }
        FUN_0075efb0(&local_a0,plVar11,0,1);
        (**(code **)*puVar4)(puVar4);
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar4,0x18,8);
        FUN_0075f0a0(&local_a0);
        if ((uVar7 & 1) == 0) {
          FUN_007d0130(param_1 + 0xd0,&local_120);
        }
      }
      pcVar2 = local_118;
      if (local_118 != (code *)0x0) {
        local_110 = (undefined1 *)0x0;
        local_108 = (undefined1 *)0x0;
        local_120 = (undefined1 *)0x0;
        local_118 = (code *)0x0;
        (*pcVar2)(&local_100);
      }
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
  }
  return;
}


