/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d88170; name: FUN_00d88170
 */


void FUN_00d88170(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_330;
  undefined4 local_328 [186];
  
  puVar6 = &local_330;
  memcpy(&local_330,&DAT_0215ff80,0x2f0);
  lVar5 = *(long *)(param_2 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  puVar2 = PTR_DAT_02710798;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar5 = *(long *)(*(long *)puVar2 + 0x1f8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  do {
    uVar1 = *(undefined4 *)(puVar6 + 1);
    uVar3 = FUN_01510f00(lVar4,*puVar6);
    if ((uVar3 & 1) != 0) {
      FUN_01534e90(lVar5,uVar1);
    }
    puVar6 = puVar6 + 2;
  } while (puVar6 != (undefined8 *)(local_328 + 0xba));
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


