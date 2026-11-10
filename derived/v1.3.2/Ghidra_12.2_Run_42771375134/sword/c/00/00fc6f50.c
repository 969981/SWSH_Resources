/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc6f50; name: FUN_00fc6f50
 */


void FUN_00fc6f50(undefined4 param_1,uint *param_2,uint *param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_48;
  
  *param_2 = 0;
  puVar1 = PTR_DAT_02710848;
  *param_3 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar4 + 2000);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x80);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  uVar3 = FUN_00fa7950(lVar6);
  if ((uVar3 & 1) != 0) {
    FUN_00fa7e40(&local_48,lVar6,param_1);
    if (local_48 != 0) {
      uVar2 = FUN_00fa70e0();
      *param_2 = uVar2 & 0xff;
      uVar2 = FUN_00fa7160(local_48);
      *param_3 = uVar2 & 0xff;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


