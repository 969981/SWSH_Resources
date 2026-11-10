/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150e890; name: FUN_0150e890
 */


void FUN_0150e890(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  *(undefined4 *)(param_1 + 0x150) = 0;
  iVar1 = FUN_00884820(*param_2);
  if (iVar1 != 0) {
    uVar6 = 0;
    do {
      uVar3 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,uVar6);
      uVar4 = FUN_0087d610(uVar3,2);
      if ((uVar4 & 1) == 0) {
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_50 = 0xffffffff;
        local_4c = FUN_00878a80(uVar3);
        uStack_48 = 0;
        FUN_014ad910(&local_68,uVar3);
        lVar5 = param_1 + (long)*(int *)(param_1 + 0x150) * 0x28;
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
        *(undefined4 *)(lVar5 + 0x60) = local_68;
        *(undefined2 *)(lVar5 + 100) = local_64;
        *(undefined2 *)(lVar5 + 0x66) = 0;
        *(undefined4 *)(lVar5 + 0x68) = local_60;
        *(undefined1 *)(lVar5 + 0x6c) = (undefined1)local_5c;
        *(undefined1 *)(lVar5 + 0x6f) = 0;
        *(undefined2 *)(lVar5 + 0x6d) = 0;
        *(undefined4 *)(lVar5 + 0x70) = (undefined4)local_58;
        *(undefined4 *)(lVar5 + 0x74) = local_50;
        *(undefined8 *)(lVar5 + 0x78) = 0;
        *(undefined8 *)(lVar5 + 0x80) = 0;
      }
      uVar6 = uVar6 + 1;
      uVar2 = FUN_00884820(*param_2);
    } while (uVar6 < uVar2);
  }
  return;
}


