/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01043e80; name: FUN_01043e80
 */


void FUN_01043e80(long param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  byte *__s;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong local_50;
  byte *pbStack_48;
  size_t local_40;
  long local_38;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar3 = (long *)(**(code **)*puVar6)(puVar6);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0))
  {
    uVar7 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar3 != (long *)PTR_DAT_02717530; plVar3 = (long *)*plVar3) {
  }
  __s = (byte *)*param_2;
  uVar7 = puVar6[0x9f];
  local_40 = strlen((char *)__s);
  bVar1 = *__s;
  pbVar5 = __s;
  local_50 = 0xcbf29ce484222645;
  while (bVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    local_50 = (local_50 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar5;
  }
  local_38 = 0;
  pbStack_48 = __s;
  lVar4 = FUN_0109aec0(uVar7,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  *(long *)(param_1 + 0x218) = lVar4;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


