/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01028290; name: FUN_01028290
 */


undefined * FUN_01028290(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  
  if (((*PTR_DAT_02715558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02715558), iVar5 != 0))
  {
    if (((*PTR_DAT_02710b58 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_02710b58), puVar4 = PTR_DAT_02710b60, iVar5 != 0)) {
      puVar1 = PTR_DAT_02710a18 + 0x10;
      *(undefined8 *)(PTR_DAT_02710b60 + 0x38) = 0;
      *(undefined4 *)(puVar4 + 0x30) = 0;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      *(undefined8 *)(puVar4 + 0x28) = 0;
      *(undefined **)puVar4 = puVar1;
      *(undefined4 *)(puVar4 + 0x40) = 0;
      uVar2 = *(undefined4 *)PTR_DAT_02710860;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      lVar6 = nn::os::GetTlsValue(uVar2);
      puVar1 = PTR_DAT_02710b68;
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
      }
      *(undefined4 *)(puVar4 + 0x50) = 0;
      *(undefined8 *)(puVar4 + 0x68) = 0;
      uVar7 = 0xcbf29ce484222645;
      *(undefined **)puVar4 = puVar1 + 0x10;
      *(undefined8 *)(puVar4 + 8) = uVar8;
      *(undefined **)(puVar4 + 0x48) = puVar1 + 0x48;
      pbVar9 = *(byte **)PTR_PTR_02710b70;
      *(undefined8 *)(puVar4 + 0x58) = 0xcbf29ce484222645;
      *(byte **)(puVar4 + 0x60) = pbVar9;
      bVar3 = *pbVar9;
      while (bVar3 != 0) {
        pbVar9 = pbVar9 + 1;
        uVar7 = (uVar7 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
      }
      *(ulong *)(puVar4 + 0x58) = uVar7;
      *(undefined8 *)(puVar4 + 0x68) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined **)(puVar4 + 0x10) = puVar4;
      __cxa_guard_release(PTR_DAT_02710b58);
    }
    puVar1 = PTR_DAT_02715560;
    puVar4 = PTR_DAT_02710b60;
    *(undefined **)PTR_DAT_02715560 = PTR_DAT_02710b60;
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x10))();
    FUN_001001c0(PTR_LAB_02715568,puVar1,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715558);
  }
  return PTR_DAT_02715560;
}


