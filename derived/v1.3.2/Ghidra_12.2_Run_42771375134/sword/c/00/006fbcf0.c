/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fbcf0; name: FUN_006fbcf0
 */


void FUN_006fbcf0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long local_38;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  lVar5 = param_3[3];
  param_1[3] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_1[4] = 0xcbf29ce484222645;
  param_1[5] = &DAT_01d38550;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = PTR_DAT_02710808 + 0x10;
  lVar5 = *(long *)(param_2 + 8);
  param_1[9] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0xe);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    param_1[0xc] = *(undefined8 *)(param_2 + 0x20);
    param_1[0xd] = uVar3;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
  }
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x1e);
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    param_1[0x1c] = *(undefined8 *)(param_2 + 0xa0);
    param_1[0x1d] = uVar3;
    param_1[0x1a] = uVar1;
    param_1[0x1b] = uVar2;
  }
  puVar4 = PTR_DAT_02710818;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[8] = puVar4 + 0x10;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0xffffffff00000006;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  lVar5 = FUN_006fcfd0(param_1[9],param_3[1]);
  thunk_FUN_006fd800(&local_38,*(undefined8 *)(lVar5 + 0x88));
  if (param_1[0x2a] != 0) {
    (**(code **)(*(long *)(param_1[0x2a] + 0x48) + 0x18))();
    param_1[0x2a] = 0;
  }
  param_1[0x2a] = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  lVar5 = param_1[0x2b];
  param_1[0x2b] = local_38;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar5 = param_1[0x2a];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = param_1[0x2c];
  param_1[0x2c] = lVar5;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  FUN_0199bfe0(param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  lVar5 = FUN_006fcfd0(param_1[9],param_1[1]);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(lVar5 + 0x24);
  *(undefined4 *)((long)param_1 + 0x194) = *(undefined4 *)(lVar5 + 0x28);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(lVar5 + 0x2c);
  *(undefined4 *)((long)param_1 + 0x19c) = *(undefined4 *)(lVar5 + 0x30);
  *(uint *)(param_1 + 0x34) = (uint)*(ushort *)(lVar5 + 0x16);
  *(undefined4 *)((long)param_1 + 0x1a4) = *(undefined4 *)(lVar5 + 0x1c);
  param_1[0x36] = param_1[0x33];
  param_1[0x37] = param_1[0x34];
  param_1[0x35] = param_1[0x32];
  param_1[0x39] = param_1[0x33];
  param_1[0x3a] = param_1[0x34];
  param_1[0x38] = param_1[0x32];
  return;
}


