/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144ced0; name: FUN_0144ced0
 */


bool FUN_0144ced0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_02710798;
  lVar6 = *(long *)PTR_DAT_02710798;
  lVar7 = *(long *)(lVar6 + 0x220);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar6 = *(long *)puVar2;
  }
  lVar6 = *(long *)(lVar6 + 0x268);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  uVar3 = FUN_01507a30(lVar7,param_3);
  lVar4 = FUN_0152d900(lVar6,param_2);
  pbVar5 = (byte *)FUN_0152d910(lVar6,*(undefined1 *)(lVar4 + 2));
  bVar1 = *pbVar5;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return bVar1 <= uVar3;
}


