/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01479c70; name: FUN_01479c70
 */


void FUN_01479c70(long param_1)

{
  short sVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    lVar3 = FUN_0146e370();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar6 = puVar6 + -10;
        goto LAB_01479ccc;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_01479ccc:
  plVar2 = *(long **)(puVar6[0xc] + 8);
  (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(puVar6[0xc] + 0x10));
  sVar1 = FUN_008787f0();
  if (sVar1 == 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0x300000000;
    local_68 = DAT_0216eec0;
    local_60 = DAT_0216eec8;
    local_78 = DAT_0216eeb0;
    local_70 = DAT_0216eeb8;
    local_48 = DAT_0216eee0;
    local_58 = DAT_0216eed0;
    local_50 = DAT_0216eed8;
    *(undefined1 *)(puVar6 + 0x16) = 1;
    FUN_0077eb10(puVar6[0x1e],&local_78,puVar6[0x17]);
    puVar6[0xf] = puVar6[0x17];
    FUN_0077eb10(puVar6[0x1e],&local_70,puVar6[0x18]);
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x10] = puVar6[0x18];
    puVar6[0x11] = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0xa0) = 0x100000000;
    *(undefined8 *)(param_1 + 0xa8) = 0x300000002;
    local_78 = DAT_0216eee8;
    local_70 = DAT_0216eef0;
    local_68 = DAT_0216eef8;
    local_50 = DAT_0216ef10;
    local_48 = DAT_0216ef18;
    local_60 = DAT_0216ef00;
    local_58 = DAT_0216ef08;
    *(undefined1 *)(puVar6 + 0x16) = 1;
    FUN_0077eb10(puVar6[0x1e],&local_78,puVar6[0x17]);
    puVar6[0xf] = puVar6[0x17];
    FUN_0077eb10(puVar6[0x1e],&local_70,puVar6[0x18]);
    puVar6[0x10] = puVar6[0x18];
    FUN_0077eb10(puVar6[0x1e],&local_68,puVar6[0x19]);
    puVar6[0x11] = puVar6[0x19];
    FUN_0077eb10(puVar6[0x1e],&local_60,puVar6[0x1a]);
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x12] = puVar6[0x1a];
    puVar6[0x13] = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88);
  FUN_006cf0a0(&local_98,&DAT_026a3680);
  lVar3 = local_80;
  lVar5 = *(long *)(lVar5 + 0x5e0);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  *(undefined1 *)(lVar5 + 0x479) = 0;
  *(undefined8 *)(lVar5 + 0x2d8) = local_98;
  *(undefined8 *)(lVar5 + 0x2e0) = uStack_90;
  *(undefined8 *)(lVar5 + 0x2e8) = local_88;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar5 + 0x2f0);
  *(long *)(lVar5 + 0x2f0) = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  return;
}


