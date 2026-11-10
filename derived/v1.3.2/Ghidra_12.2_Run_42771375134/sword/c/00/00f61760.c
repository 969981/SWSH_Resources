/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f61760; name: FUN_00f61760
 */


long FUN_00f61760(ulong param_1,void *param_2)

{
  ulong uVar1;
  size_t sVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  void *pvVar7;
  
  lVar5 = FUN_00f54af0();
  bVar3 = *(byte *)(lVar5 + 0x18);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(lVar5 + 0x20);
  }
  sVar2 = uVar1;
  if (param_1 <= uVar1) {
    sVar2 = param_1;
  }
  if (sVar2 == 0) {
    uVar4 = 0;
  }
  else {
    pvVar7 = *(void **)(lVar5 + 0x28);
    if ((bVar3 & 1) == 0) {
      pvVar7 = (void *)(lVar5 + 0x19);
    }
    uVar4 = memcmp(pvVar7,param_2,sVar2);
  }
  uVar6 = uVar4;
  if (uVar4 == 0) {
    uVar6 = 0xffffffff;
  }
  if (uVar4 == 0 && param_1 <= uVar1) {
    uVar6 = (uint)(param_1 < uVar1);
  }
  if (uVar6 == 0) {
    return 1;
  }
  lVar5 = FUN_00f54af0();
  bVar3 = *(byte *)(lVar5 + 0x30);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(lVar5 + 0x38);
  }
  sVar2 = uVar1;
  if (param_1 <= uVar1) {
    sVar2 = param_1;
  }
  if (sVar2 == 0) {
    uVar4 = 0;
  }
  else {
    pvVar7 = *(void **)(lVar5 + 0x40);
    if ((bVar3 & 1) == 0) {
      pvVar7 = (void *)(lVar5 + 0x31);
    }
    uVar4 = memcmp(pvVar7,param_2,sVar2);
  }
  uVar6 = uVar4;
  if (uVar4 == 0) {
    uVar6 = 0xffffffff;
  }
  if (uVar4 == 0 && param_1 <= uVar1) {
    uVar6 = (uint)(param_1 < uVar1);
  }
  return (ulong)(uVar6 == 0) << 1;
}


