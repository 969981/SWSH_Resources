/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00762e30; name: FUN_00762e30
 */


ulong FUN_00762e30(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  Extractor *pEVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int local_44;
  
  local_44 = 0;
  uVar1 = FUN_00764be0(param_1,param_2,&local_44);
  if ((int)uVar1 == 0) {
    if (local_44 == 0) {
      uVar1 = 0x4000;
    }
    else {
      plVar5 = (long *)*param_1;
      pEVar2 = (Extractor *)(**(code **)(*plVar5 + 0x10))(plVar5,0x10,8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      movie::Extractor::Extractor(pEVar2,local_44);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar6 = (undefined8 *)param_1[0x12];
      param_1[0x12] = pEVar2;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        (**(code **)(*(long *)param_1[0x13] + 0x18))
                  ((long *)param_1[0x13],puVar6,param_1[0x14],param_1[0x15]);
        pEVar2 = (Extractor *)param_1[0x12];
      }
      param_1[0x13] = plVar5;
      param_1[0x14] = 0x10;
      uVar4 = 0x1002;
      if (pEVar2 != (Extractor *)0x0) {
        uVar4 = 0;
      }
      uVar1 = (ulong)uVar4;
      param_1[0x15] = 8;
    }
  }
  return uVar1;
}


