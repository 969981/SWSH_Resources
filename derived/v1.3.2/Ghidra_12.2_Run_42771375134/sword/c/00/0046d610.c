/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046d610; name: FUN_0046d610
 */


void FUN_0046d610(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  *param_1 = (long)(PTR_DAT_02713188 + 0x10);
  puVar2 = PTR_DAT_02712b50;
  uVar3 = (ulong)*(uint *)(param_1 + 6);
  if (*(uint *)(param_1 + 6) != 0) {
    uVar4 = 0;
    do {
      uVar7 = 1L << (uVar4 & 0x3f);
      if ((uVar7 & uVar3) != 0) {
        FUN_0049b7f0(*(undefined8 *)puVar2,param_1,uVar4);
        uVar1 = *(uint *)(param_1 + 6) & ((uint)uVar7 ^ 0xffffffff);
        uVar3 = (ulong)uVar1;
        *(uint *)(param_1 + 6) = uVar1;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while ((int)uVar3 != 0);
  }
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  FUN_0046e350(param_1 + 7,PTR_LAB_02713168,&local_70,&local_70,0);
  FUN_00478b60(*(undefined8 *)PTR_DAT_02712dc0);
  puVar5 = (undefined8 *)param_1[10];
  if (*(uint *)(param_1 + 0xb) != 0) {
    lVar6 = (ulong)*(uint *)(param_1 + 0xb) * 0x30;
    do {
      FUN_0046e730(puVar5);
      puVar5 = puVar5 + 6;
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != 0);
    puVar5 = (undefined8 *)param_1[10];
  }
  if (puVar5 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0xb) != 0) {
      lVar6 = (ulong)*(uint *)(param_1 + 0xb) * 0x30;
      do {
        (**(code **)*puVar5)(puVar5);
        lVar6 = lVar6 + -0x30;
        puVar5 = puVar5 + 6;
      } while (lVar6 != 0);
      puVar5 = (undefined8 *)param_1[10];
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar5);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  param_1[7] = (long)(PTR_DAT_02713150 + 0x10);
  if (param_1[5] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  param_1[4] = 0;
  FUN_004635e0(param_1);
  return;
}


