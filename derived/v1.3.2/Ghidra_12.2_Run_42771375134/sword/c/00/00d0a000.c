/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0a000; name: FUN_00d0a000
 */


void FUN_00d0a000(long param_1,undefined8 param_2,int param_3,undefined8 *param_4,uint param_5,
                 uint param_6,uint param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  byte bVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_58;
  
  local_5e = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0x101;
  local_58 = param_2;
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 == (undefined8 *)0x0)) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    plVar4 = (long *)(**(code **)*puVar9)(puVar9);
    plVar5 = (long *)FUN_00cf3e00();
    puVar10 = (undefined8 *)0x0;
    if (plVar4 != (long *)0x0) {
      do {
        if (plVar4 == plVar5) {
          puVar10 = puVar9 + -10;
          goto LAB_00d0a08c;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      puVar10 = (undefined8 *)0x0;
    }
  }
LAB_00d0a08c:
  uVar1 = puVar10[0xc];
  FUN_0077eb10(puVar10[0x13],&local_58,puVar10[0xd]);
  FUN_014c62d0(puVar10[0x14],uVar1,puVar10[0xd]);
  if ((param_6 & 1) == 0) {
    if (param_3 == 1) {
      bVar7 = 1;
    }
    else if (param_3 == 2) {
      bVar7 = 0;
    }
    else {
      bVar7 = *(byte *)((long)puVar10 + 0xb1) ^ 1;
    }
    local_70 = puVar10[0xc];
    local_60._0_1_ = 1;
  }
  else {
    if (param_3 == 1) {
      bVar7 = 1;
    }
    else if (param_3 == 2) {
      bVar7 = 0;
    }
    else {
      bVar7 = *(byte *)((long)puVar10 + 0xb1) ^ 1;
    }
    local_70 = puVar10[0xc];
    local_60._0_1_ = 0;
  }
  uStack_68 = 0;
  local_60 = CONCAT11(bVar7,(undefined1)local_60);
  local_5e = 0;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar9)(puVar9);
  lVar6 = FUN_00cf3e00();
  for (; plVar4 != (long *)lVar6; plVar4 = (long *)*plVar4) {
  }
  *(undefined1 *)((long)puVar9 + 0x61) = 1;
  plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x5d0) + 0x60);
  (**(code **)(*plVar4 + 8))(plVar4,param_7 & 1);
  FUN_01038170(*(undefined8 *)(param_1 + 0x80),&local_70);
  pcVar8 = *(code **)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x78) = 1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar8)(param_1 + 0xb0);
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0xb0);
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[3];
    *(undefined8 *)(param_1 + 0xa0) = param_4[2];
    *(undefined8 *)(param_1 + 0xa8) = uVar3;
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    *(undefined8 *)(param_1 + 0x98) = uVar2;
  }
  if ((param_5 & 1) != 0) {
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
  }
  return;
}


