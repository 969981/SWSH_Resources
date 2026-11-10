/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00407e70; name: FUN_00407e70
 */


undefined8 FUN_00407e70(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long local_48;
  
  puVar3 = PTR_DAT_02712a90;
  uVar5 = (ulong)*(uint *)(param_1 + 0x120);
  local_48 = param_2;
  if (*(uint *)(param_1 + 0x120) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x118);
    puVar8 = puVar6;
    do {
      puVar7 = (undefined8 *)*puVar8;
      if (puVar7 != (undefined8 *)0x0) {
        uVar1 = *(undefined4 *)puVar3;
        (**(code **)*puVar7)(puVar7);
        FUN_00404870(uVar1,puVar7);
        puVar6 = *(undefined8 **)(param_1 + 0x118);
        uVar5 = (ulong)*(uint *)(param_1 + 0x120);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar6 + uVar5);
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  FUN_00416360(param_1 + 0xf8);
  local_48 = param_2 + 0x20;
  *(undefined2 *)(param_1 + 0x13c) = *(undefined2 *)(param_2 + 0x1c);
  uVar2 = *(undefined2 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x139) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_2 + 8) == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = FUN_004082a0(param_1,param_1 + 0xf8,&local_48);
  }
  return uVar4;
}


