/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00100d50; name: nninitStartup
 */


void nninitStartup(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long local_78;
  long local_70;
  ulong local_38;
  
  nn::os::QueryMemoryInfo((MemoryInfo *)&local_78);
  uVar6 = local_78 - local_70 & 0xffffffffffe00000;
  iVar5 = nn::os::SetMemoryHeapSize(uVar6);
  if (iVar5 != 0) {
    nn::diag::detail::OnAssertionFailure(2,&DAT_01d38550,&DAT_01d38550,&DAT_01d38550,0);
  }
  uVar7 = 0xc2900000U - local_70 & 0xffffffffffe00000;
  uVar3 = uVar6 - uVar7;
  if (uVar6 < uVar7 || uVar3 == 0) {
    nn::diag::detail::OnAssertionFailure(2,&DAT_01d38550,&DAT_01d38550,&DAT_01d38550,0);
  }
  iVar5 = nn::os::AllocateMemoryBlock(&local_38,uVar7);
  if (iVar5 != 0) {
    nn::diag::detail::OnAssertionFailure(2,&DAT_01d38550,&DAT_01d38550,&DAT_01d38550,0);
  }
  puVar4 = PTR_DAT_02710510;
  FUN_00760770(PTR_DAT_02710510,local_38,uVar7,0);
  puVar2 = PTR_DAT_02710518;
  puVar4[0xb8] = 0;
  puVar1 = puVar2 + 0x10;
  puVar2 = puVar2 + 0xe8;
  *(undefined **)puVar4 = puVar1;
  *(undefined **)(puVar4 + 8) = puVar2;
  FUN_0075ec30(puVar4);
  iVar5 = nn::os::AllocateMemoryBlock(&local_38,uVar3);
  if (iVar5 != 0) {
    nn::diag::detail::OnAssertionFailure(2,&DAT_01d38550,&DAT_01d38550,&DAT_01d38550,0);
  }
  puVar4 = PTR_DAT_02710520;
  FUN_00760770(PTR_DAT_02710520,local_38,uVar3,0);
  *(undefined **)puVar4 = puVar1;
  *(undefined **)(puVar4 + 8) = puVar2;
  puVar4[0xb8] = 0;
  FUN_0075ec80(puVar4);
  return;
}


