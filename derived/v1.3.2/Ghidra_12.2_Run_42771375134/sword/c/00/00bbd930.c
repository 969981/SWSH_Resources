/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbd930; name: FUN_00bbd930
 */


void FUN_00bbd930(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  long local_48;
  
  puVar4 = (undefined4 *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
  uVar1 = *puVar4;
  uVar3 = puVar4[1];
  uVar5 = *(undefined8 *)(param_1 + 0x5e8);
  uVar2 = FUN_00bcfb20(uVar1,uVar3 >> 8 & 0x3f,uVar3 >> 0xe & 0x3f);
  uVar3 = FUN_00bcec10(uVar5,uVar1,uVar3 & 0xff,uVar2,(uint)puVar4[1] >> 0x14 & 0x3f,
                       (uint)puVar4[1] >> 0x1a,param_2,*(undefined2 *)(param_1 + 0x622));
  if (uVar3 == 1) {
    uVar5 = 2;
  }
  else {
    if (uVar3 == 0) {
      uVar1 = *puVar4;
      uVar3 = puVar4[1];
      uVar5 = *(undefined8 *)(param_1 + 0x5e8);
      uVar2 = FUN_00bcfb20(uVar1,uVar3 >> 8 & 0x3f,uVar3 >> 0xe & 0x3f);
      FUN_00bceee0(uVar5,uVar1,uVar3 & 0xff,uVar2,param_2,(uint)puVar4[1] >> 0x14 & 0x3f,
                   (uint)puVar4[1] >> 0x1a);
      *(undefined4 *)(param_1 + 0x608) = 0xb;
      return;
    }
    if ((uVar3 | 1) == 5) {
      FUN_006cf0a0(auStack_60,&DAT_02637c48);
      FUN_016d3620(auStack_60);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if (*(long *)(param_1 + 0x4c0) == 0) {
        return;
      }
      FUN_016d2080();
      return;
    }
    if (uVar3 != 6) {
      if (*(long *)(param_1 + 0x4c0) == 0) {
        return;
      }
      FUN_016d2080();
      return;
    }
    uVar5 = 4;
  }
  FUN_00bc46a0(param_1,uVar5,0);
  FUN_006cf0a0(auStack_60,&DAT_02637c48);
  FUN_016d3620(auStack_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x608) = 8;
  return;
}


