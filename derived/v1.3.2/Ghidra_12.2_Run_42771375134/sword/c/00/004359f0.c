/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004359f0; name: FUN_004359f0
 */


undefined8 FUN_004359f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  puVar2 = PTR_DAT_02712a90;
  uVar6 = *(uint *)(PTR_DAT_02712b90 + 0x14);
  uVar3 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar6);
  param_1[2] = uVar3;
  *param_1 = param_1[2];
  param_1[1] = param_1[2];
  param_1[3] = param_1[2] + (ulong)uVar6;
  *(uint *)(param_1 + 4) = uVar6;
  if (param_1[2] == 0) {
    uVar3 = 2;
  }
  else {
    puVar4 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar2,0x300);
    param_1[8] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      uVar6 = 0;
      param_1[7] = puVar4;
      *(undefined4 *)(param_1 + 9) = 0x20;
      do {
        puVar1 = puVar4;
        *puVar1 = puVar1 + 3;
        uVar6 = uVar6 + 1;
        puVar4 = puVar1 + 3;
      } while (uVar6 < *(uint *)(param_1 + 9));
      *puVar1 = 0;
      puVar4 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar2,0x300);
      param_1[0xd] = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        uVar6 = 0;
        param_1[0xc] = puVar4;
        *(undefined4 *)(param_1 + 0xe) = 0x20;
        do {
          puVar1 = puVar4;
          *puVar1 = puVar1 + 3;
          uVar6 = uVar6 + 1;
          puVar4 = puVar1 + 3;
        } while (uVar6 < *(uint *)(param_1 + 0xe));
        uVar3 = 1;
        *puVar1 = 0;
        goto LAB_00435aec;
      }
    }
    uVar3 = 0x34;
  }
LAB_00435aec:
  uVar5 = nn::os::GetSystemTick();
  param_1[0x11] = uVar5;
  return uVar3;
}


