/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c5a30; name: FUN_003c5a30
 */


void FUN_003c5a30(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  lVar6 = *(long *)(param_1 + 0x80);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    local_60 = 0;
    local_58 = 0x3f80000000000000;
    local_50 = 0;
    local_48 = 0;
  }
  else {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    local_60 = *puVar4;
    local_58 = puVar4[1];
    local_50 = puVar4[2];
    local_48 = *(undefined4 *)(puVar4 + 3);
  }
  if (lVar3 == 0) {
    local_80 = 0;
    local_78 = 0x3f80000000000000;
    local_70 = 0;
    local_68 = 0;
  }
  else {
    puVar4 = *(undefined8 **)(lVar3 + 0x28);
    local_80 = *puVar4;
    local_78 = puVar4[1];
    local_70 = puVar4[2];
    local_68 = *(undefined4 *)(puVar4 + 3);
  }
  (**(code **)(param_1 + 0x18))
            (*(undefined8 *)(param_1 + 0x20),&local_60,&local_80,lVar6 == param_2);
  if (lVar6 == param_2) {
    FUN_003c5c00(lVar3,&local_80);
    puVar5 = *(undefined4 **)(lVar3 + 0x28);
    *puVar5 = (undefined4)local_80;
    puVar5[1] = local_80._4_4_;
    puVar5[2] = (undefined4)local_78;
    puVar5[3] = local_78._4_4_;
    puVar5[4] = (undefined4)local_70;
    puVar5[5] = local_70._4_4_;
    puVar5[6] = local_68;
    local_88 = *(undefined8 *)(param_1 + 0x80);
  }
  else {
    FUN_003c5c00(lVar2,&local_60);
    puVar5 = *(undefined4 **)(lVar2 + 0x28);
    *puVar5 = (undefined4)local_60;
    puVar5[1] = local_60._4_4_;
    puVar5[2] = (undefined4)local_58;
    puVar5[3] = local_58._4_4_;
    puVar5[4] = (undefined4)local_50;
    puVar5[5] = local_50._4_4_;
    puVar5[6] = local_48;
    local_88 = *(undefined8 *)(param_1 + 0x78);
  }
  uVar1 = *(uint *)(param_3 + 1);
  if (uVar1 < (*(uint *)((long)param_3 + 0xc) & 0x7fffffff)) {
    *(undefined8 *)(*param_3 + (ulong)uVar1 * 8) = local_88;
    *(uint *)(param_3 + 1) = uVar1 + 1;
  }
  else {
    FUN_003bcf10(param_3,&local_88);
  }
  return;
}


